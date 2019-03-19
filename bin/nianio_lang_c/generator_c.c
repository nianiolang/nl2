
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
ImmT  generator_c_priv0get_im_from_reg(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1);
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
ImmT  generator_c_priv0create_sim_to_memory(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(363));
#line 33
c_rt_lib0move(&___nl__im__2,___get_global_string_const(364));
#line 33
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 33
c_rt_lib0clear(&___nl__im__1);
#line 33
c_rt_lib0clear(&___nl__im__2);
#line 34
c_rt_lib0move(&___nl__im__3,___get_global_string_const(365));
#line 34
c_rt_lib0move(&___nl__im__4,___get_global_string_const(366));
#line 34
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 34
c_rt_lib0clear(&___nl__im__3);
#line 34
c_rt_lib0clear(&___nl__im__4);
#line 35
c_rt_lib0move(&___nl__im__5,___get_global_string_const(367));
#line 35
c_rt_lib0move(&___nl__im__6,___get_global_string_const(368));
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(369));
#line 41
c_rt_lib0move(&___nl__im__2,___get_global_string_const(369));
#line 41
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 41
c_rt_lib0clear(&___nl__im__1);
#line 41
c_rt_lib0clear(&___nl__im__2);
#line 42
c_rt_lib0move(&___nl__im__3,___get_global_string_const(370));
#line 42
c_rt_lib0move(&___nl__im__4,___get_global_string_const(370));
#line 42
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 42
c_rt_lib0clear(&___nl__im__3);
#line 42
c_rt_lib0clear(&___nl__im__4);
#line 43
c_rt_lib0move(&___nl__im__5,___get_global_string_const(367));
#line 43
c_rt_lib0move(&___nl__im__6,___get_global_string_const(371));
#line 43
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 43
c_rt_lib0clear(&___nl__im__5);
#line 43
c_rt_lib0clear(&___nl__im__6);
#line 44
c_rt_lib0move(&___nl__im__7,___get_global_string_const(365));
#line 44
c_rt_lib0move(&___nl__im__8,___get_global_string_const(372));
#line 44
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 44
c_rt_lib0clear(&___nl__im__7);
#line 44
c_rt_lib0clear(&___nl__im__8);
#line 45
c_rt_lib0move(&___nl__im__9,___get_global_string_const(373));
#line 45
c_rt_lib0move(&___nl__im__10,___get_global_string_const(374));
#line 45
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 45
c_rt_lib0clear(&___nl__im__9);
#line 45
c_rt_lib0clear(&___nl__im__10);
#line 46
c_rt_lib0move(&___nl__im__11,___get_global_string_const(106));
#line 46
c_rt_lib0move(&___nl__im__12,___get_global_string_const(375));
#line 46
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 46
c_rt_lib0clear(&___nl__im__11);
#line 46
c_rt_lib0clear(&___nl__im__12);
#line 47
c_rt_lib0move(&___nl__im__13,___get_global_string_const(376));
#line 47
c_rt_lib0move(&___nl__im__14,___get_global_string_const(266));
#line 47
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__13, ___nl__im__14));
#line 47
c_rt_lib0clear(&___nl__im__13);
#line 47
c_rt_lib0clear(&___nl__im__14);
#line 48
c_rt_lib0move(&___nl__im__15,___get_global_string_const(377));
#line 48
c_rt_lib0move(&___nl__im__16,___get_global_string_const(378));
#line 48
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__15, ___nl__im__16));
#line 48
c_rt_lib0clear(&___nl__im__15);
#line 48
c_rt_lib0clear(&___nl__im__16);
#line 49
c_rt_lib0move(&___nl__im__17,___get_global_string_const(379));
#line 49
c_rt_lib0move(&___nl__im__18,___get_global_string_const(380));
#line 49
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__17, ___nl__im__18));
#line 49
c_rt_lib0clear(&___nl__im__17);
#line 49
c_rt_lib0clear(&___nl__im__18);
#line 50
c_rt_lib0move(&___nl__im__19,___get_global_string_const(381));
#line 50
c_rt_lib0move(&___nl__im__20,___get_global_string_const(382));
#line 50
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__19, ___nl__im__20));
#line 50
c_rt_lib0clear(&___nl__im__19);
#line 50
c_rt_lib0clear(&___nl__im__20);
#line 51
c_rt_lib0move(&___nl__im__21,___get_global_string_const(383));
#line 51
c_rt_lib0move(&___nl__im__22,___get_global_string_const(384));
#line 51
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__21, ___nl__im__22));
#line 51
c_rt_lib0clear(&___nl__im__21);
#line 51
c_rt_lib0clear(&___nl__im__22);
#line 52
c_rt_lib0move(&___nl__im__23,___get_global_string_const(385));
#line 52
c_rt_lib0move(&___nl__im__24,___get_global_string_const(386));
#line 52
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__23, ___nl__im__24));
#line 52
c_rt_lib0clear(&___nl__im__23);
#line 52
c_rt_lib0clear(&___nl__im__24);
#line 53
c_rt_lib0move(&___nl__im__25,___get_global_string_const(387));
#line 53
c_rt_lib0move(&___nl__im__26,___get_global_string_const(388));
#line 53
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__25, ___nl__im__26));
#line 53
c_rt_lib0clear(&___nl__im__25);
#line 53
c_rt_lib0clear(&___nl__im__26);
#line 54
c_rt_lib0move(&___nl__im__27,___get_global_string_const(111));
#line 54
c_rt_lib0move(&___nl__im__28,___get_global_string_const(389));
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
c_rt_lib0move(&___nl__im__1,___get_global_string_const(367));
#line 60
c_rt_lib0move(&___nl__im__2,___get_global_string_const(390));
#line 60
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 60
c_rt_lib0clear(&___nl__im__1);
#line 60
c_rt_lib0clear(&___nl__im__2);
#line 61
c_rt_lib0move(&___nl__im__3,___get_global_string_const(365));
#line 61
c_rt_lib0move(&___nl__im__4,___get_global_string_const(391));
#line 61
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 61
c_rt_lib0clear(&___nl__im__3);
#line 61
c_rt_lib0clear(&___nl__im__4);
#line 62
c_rt_lib0move(&___nl__im__5,___get_global_string_const(373));
#line 62
c_rt_lib0move(&___nl__im__6,___get_global_string_const(392));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 62
c_rt_lib0clear(&___nl__im__5);
#line 62
c_rt_lib0clear(&___nl__im__6);
#line 63
c_rt_lib0move(&___nl__im__7,___get_global_string_const(106));
#line 63
c_rt_lib0move(&___nl__im__8,___get_global_string_const(393));
#line 63
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 63
c_rt_lib0clear(&___nl__im__7);
#line 63
c_rt_lib0clear(&___nl__im__8);
#line 64
c_rt_lib0move(&___nl__im__9,___get_global_string_const(376));
#line 64
c_rt_lib0move(&___nl__im__10,___get_global_string_const(394));
#line 64
c_rt_lib0delete(hash0set_value(&___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 64
c_rt_lib0clear(&___nl__im__9);
#line 64
c_rt_lib0clear(&___nl__im__10);
#line 65
c_rt_lib0move(&___nl__im__11,___get_global_string_const(111));
#line 65
c_rt_lib0move(&___nl__im__12,___get_global_string_const(395));
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
return generator_c0const_dict();
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(128), ___nl__im__2, ___get_global_string_const(129), ___nl__im__4));
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
return generator_c0fun_args_t();
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0func_new(nlasm0arg_type_t0ptr, ___get_global_string_const(334), ___get_global_string_const(396)));
#line 74
c_rt_lib0move(&___nl__im__1, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__1));
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
return generator_c0const_t();
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(128), ___nl__im__2, ___get_global_string_const(129), ___nl__im__4));
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
return generator_c0global_const_t();
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_mk(2, ___get_global_string_const(219), ___nl__im__5, ___get_global_string_const(397), ___nl__im__6));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(128), ___nl__im__2, ___get_global_string_const(129), ___nl__im__7, ___get_global_string_const(130), ___nl__im__9, ___get_global_string_const(131), ___nl__im__11));
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
return generator_c0state_t();
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_string_const(398), ___get_global_string_const(399)));
#line 92
c_rt_lib0move(&___nl__im__2, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__2));
#line 93
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_string_const(398), ___get_global_string_const(399)));
#line 93
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
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
c_rt_lib0move(&___nl__im__9, c_rt_lib0func_new(generator_c0fun_args_t0ptr, ___get_global_string_const(398), ___get_global_string_const(400)));
#line 98
c_rt_lib0move(&___nl__im__9, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__9));
#line 99
c_rt_lib0move(&___nl__im__10, c_rt_lib0func_new(nlasm0reg_type0ptr, ___get_global_string_const(334), ___get_global_string_const(401)));
#line 99
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__10));
#line 101
c_rt_lib0move(&___nl__im__13, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(398), ___get_global_string_const(402)));
#line 101
c_rt_lib0move(&___nl__im__13, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__13));
#line 102
c_rt_lib0move(&___nl__im__14, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(398), ___get_global_string_const(402)));
#line 102
c_rt_lib0move(&___nl__im__14, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__14));
#line 103
c_rt_lib0move(&___nl__im__15, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_string_const(398), ___get_global_string_const(402)));
#line 103
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__15));
#line 104
c_rt_lib0move(&___nl__im__16, ptd0int());
#line 104
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_mk(4, ___get_global_string_const(403), ___nl__im__13, ___get_global_string_const(404), ___nl__im__14, ___get_global_string_const(405), ___nl__im__15, ___get_global_string_const(406), ___nl__im__16));
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
c_rt_lib0move(&___nl__im__18, c_rt_lib0func_new(tct0meta_type0ptr, ___get_global_string_const(407), ___get_global_string_const(303)));
#line 106
c_rt_lib0move(&___nl__im__18, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__18));
#line 106
c_rt_lib0move(&___nl__im__17, ptd0hash(___nl__im__18));
#line 106
c_rt_lib0clear(&___nl__im__18);
#line 106
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(408), ___nl__im__2, ___get_global_string_const(409), ___nl__im__3, ___get_global_string_const(410), ___nl__im__4, ___get_global_string_const(411), ___nl__im__5, ___get_global_string_const(412), ___nl__im__6, ___get_global_string_const(413), ___nl__im__8, ___get_global_string_const(414), ___nl__im__9, ___get_global_string_const(415), ___nl__im__10, ___get_global_string_const(222), ___nl__im__11, ___get_global_string_const(416), ___nl__im__17));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(417));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(418));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(419));
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
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(351)));
#line 140
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(219));
#line 140
if(___nl__bool__3){ goto label_8;}
#line 142
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(420));
#line 142
if(___nl__bool__3){ goto label_16;}
#line 142
c_rt_lib0move(&___nl__im__4,___get_global_string_const(16));
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(421));
#line 143
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 143
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 143
c_rt_lib0clear(&___nl__im__8);
#line 143
c_rt_lib0clear(&___nl__im__9);
#line 143
c_rt_lib0move(&___nl__im__10,___get_global_string_const(320));
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
INT  ___nl__int__9 = 0;
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
#line 148
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 148
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 148
___nl__im_ptr__3 = NULL;
#line 149
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(218)));
#line 149
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 149
c_rt_lib0clear(&___nl__im__5);
#line 150
___nl__int__8 = c_rt_lib0array_len(___nl__im__2);
#line 150
___nl__int__9 = ___nl__int__8 > ___nl__int__4;
#line 150
___nl__bool__6 = ___nl__int__9;
#line 150
//clear ___nl__int__8;
#line 150
//clear ___nl__int__9;
#line 150
___nl__bool__7 = !___nl__bool__6;
#line 150
if(___nl__bool__7){ goto label_18;}
#line 150
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 150
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(353)));
#line 150
c_rt_lib0clear(&___nl__im__11);
#line 150
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(40));
#line 150
c_rt_lib0clear(&___nl__im__10);
#line 150
label_18:
;
#line 150
//clear ___nl__bool__7;
#line 150
___nl__bool__6 = !___nl__bool__6;
#line 150
if(___nl__bool__6){ goto label_37;}
#line 151
c_rt_lib0move(&___nl__im__14,___get_global_string_const(422));
#line 151
c_rt_lib0move(&___nl__im__15, generator_c_priv0reg_suffix(___nl__im__1));
#line 151
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 151
c_rt_lib0clear(&___nl__im__14);
#line 151
c_rt_lib0clear(&___nl__im__15);
#line 151
c_rt_lib0move(&___nl__im__16,___get_global_string_const(320));
#line 151
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 151
c_rt_lib0clear(&___nl__im__13);
#line 151
c_rt_lib0clear(&___nl__im__16);
#line 151
c_rt_lib0clear(&___nl__im__1);
#line 151
c_rt_lib0clear(&___nl__im__2);
#line 151
//clear ___nl__int__4;
#line 151
//clear ___nl__bool__6;
#line 151
return ___nl__im__12;
#line 152
goto label_50;
#line 152
label_37:
;
#line 153
c_rt_lib0move(&___nl__im__18,___get_global_string_const(423));
#line 153
c_rt_lib0move(&___nl__im__19, generator_c_priv0reg_suffix(___nl__im__1));
#line 153
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 153
c_rt_lib0clear(&___nl__im__18);
#line 153
c_rt_lib0clear(&___nl__im__19);
#line 153
c_rt_lib0clear(&___nl__im__1);
#line 153
c_rt_lib0clear(&___nl__im__2);
#line 153
//clear ___nl__int__4;
#line 153
//clear ___nl__bool__6;
#line 153
c_rt_lib0clear(&___nl__im__12);
#line 153
return ___nl__im__17;
#line 154
goto label_50;
#line 154
label_50:
;
#line 154
//clear ___nl__bool__6;
#line 154
c_rt_lib0clear(&___nl__im__12);
#line 154
c_rt_lib0clear(&___nl__im__17);
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
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
bool  ___nl__bool__22 = false;
INT  ___nl__int__23 = 0;
INT  ___nl__int__24 = 0;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
#line 158
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 158
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 158
___nl__im_ptr__3 = NULL;
#line 159
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(218)));
#line 159
___nl__int__4 = getIntFromImm(___nl__im__5);
#line 159
c_rt_lib0clear(&___nl__im__5);
#line 160
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(351)));
#line 160
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(219));
#line 160
if(___nl__bool__7){ goto label_14;}
#line 166
___nl__bool__7 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(420));
#line 166
if(___nl__bool__7){ goto label_66;}
#line 166
c_rt_lib0move(&___nl__im__8,___get_global_string_const(16));
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
___nl__int__12 = ___nl__int__11 > ___nl__int__4;
#line 161
___nl__bool__9 = ___nl__int__12;
#line 161
//clear ___nl__int__11;
#line 161
//clear ___nl__int__12;
#line 161
___nl__bool__10 = !___nl__bool__9;
#line 161
if(___nl__bool__10){ goto label_27;}
#line 161
c_rt_lib0move(&___nl__im__14, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 161
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__14, ___get_global_string_const(353)));
#line 161
c_rt_lib0clear(&___nl__im__14);
#line 161
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(40));
#line 161
c_rt_lib0clear(&___nl__im__13);
#line 161
label_27:
;
#line 161
//clear ___nl__bool__10;
#line 161
___nl__bool__9 = !___nl__bool__9;
#line 161
if(___nl__bool__9){ goto label_45;}
#line 162
c_rt_lib0move(&___nl__im__16,___get_global_string_const(424));
#line 162
c_rt_lib0move(&___nl__im__17, generator_c_priv0reg_suffix(___nl__im__1));
#line 162
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__17));
#line 162
c_rt_lib0clear(&___nl__im__16);
#line 162
c_rt_lib0clear(&___nl__im__17);
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
return ___nl__im__15;
#line 163
goto label_61;
#line 163
label_45:
;
#line 164
c_rt_lib0move(&___nl__im__19,___get_global_string_const(425));
#line 164
c_rt_lib0move(&___nl__im__20, generator_c_priv0reg_suffix(___nl__im__1));
#line 164
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 164
c_rt_lib0clear(&___nl__im__19);
#line 164
c_rt_lib0clear(&___nl__im__20);
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
c_rt_lib0clear(&___nl__im__15);
#line 164
return ___nl__im__18;
#line 165
goto label_61;
#line 165
label_61:
;
#line 165
//clear ___nl__bool__9;
#line 165
c_rt_lib0clear(&___nl__im__15);
#line 165
c_rt_lib0clear(&___nl__im__18);
#line 166
goto label_118;
#line 166
label_66:
;
#line 167
___nl__int__23 = c_rt_lib0array_len(___nl__im__2);
#line 167
___nl__int__24 = ___nl__int__23 > ___nl__int__4;
#line 167
___nl__bool__21 = ___nl__int__24;
#line 167
//clear ___nl__int__23;
#line 167
//clear ___nl__int__24;
#line 167
___nl__bool__22 = !___nl__bool__21;
#line 167
if(___nl__bool__22){ goto label_79;}
#line 167
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_get(___nl__im__2, ___nl__int__4));
#line 167
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__26, ___get_global_string_const(353)));
#line 167
c_rt_lib0clear(&___nl__im__26);
#line 167
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__25, ___get_global_string_const(40));
#line 167
c_rt_lib0clear(&___nl__im__25);
#line 167
label_79:
;
#line 167
//clear ___nl__bool__22;
#line 167
___nl__bool__21 = !___nl__bool__21;
#line 167
if(___nl__bool__21){ goto label_97;}
#line 168
c_rt_lib0move(&___nl__im__28,___get_global_string_const(426));
#line 168
c_rt_lib0move(&___nl__im__29, generator_c_priv0reg_suffix(___nl__im__1));
#line 168
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 168
c_rt_lib0clear(&___nl__im__28);
#line 168
c_rt_lib0clear(&___nl__im__29);
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
//clear ___nl__bool__21;
#line 168
return ___nl__im__27;
#line 169
goto label_113;
#line 169
label_97:
;
#line 170
c_rt_lib0move(&___nl__im__31,___get_global_string_const(423));
#line 170
c_rt_lib0move(&___nl__im__32, generator_c_priv0reg_suffix(___nl__im__1));
#line 170
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__32));
#line 170
c_rt_lib0clear(&___nl__im__31);
#line 170
c_rt_lib0clear(&___nl__im__32);
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
//clear ___nl__bool__21;
#line 170
c_rt_lib0clear(&___nl__im__27);
#line 170
return ___nl__im__30;
#line 171
goto label_113;
#line 171
label_113:
;
#line 171
//clear ___nl__bool__21;
#line 171
c_rt_lib0clear(&___nl__im__27);
#line 171
c_rt_lib0clear(&___nl__im__30);
#line 172
goto label_118;
#line 172
label_118:
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(279));
#line 176
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 176
c_rt_lib0clear(&___nl__im__3);
#line 176
c_rt_lib0move(&___nl__im__4,___get_global_string_const(279));
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
return generator_c0module_out_t();
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(66), ___nl__im__2, ___get_global_string_const(71), ___nl__im__3));
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
return generator_c0out_t();
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_string_const(398), ___get_global_string_const(427)));
#line 184
c_rt_lib0move(&___nl__im__3, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__3));
#line 184
c_rt_lib0move(&___nl__im__2, ptd0hash(___nl__im__3));
#line 184
c_rt_lib0clear(&___nl__im__3);
#line 184
c_rt_lib0move(&___nl__im__4, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_string_const(398), ___get_global_string_const(427)));
#line 184
c_rt_lib0move(&___nl__im__4, c_rt_lib0ov_mk_arg(___get_global_string_const(40), ___nl__im__4));
#line 184
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(182), ___nl__im__2, ___get_global_string_const(184), ___nl__im__4));
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
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT * ___nl__im_ptr__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__string__20 = NULL;
ImmT * ___nl__im_ptr__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__string__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT * ___nl__im_ptr__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT * ___nl__im_ptr__28 = NULL;
ImmT  ___nl__im__29 = NULL;
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
ImmT  ___nl__im__44 = NULL;
ImmT * ___nl__im_ptr__45 = NULL;
ImmT  ___nl__im__46 = NULL;
ImmT  ___nl__im__47 = NULL;
ImmT * ___nl__im_ptr__48 = NULL;
ImmT  ___nl__im__49 = NULL;
ImmT * ___nl__im_ptr__50 = NULL;
ImmT  ___nl__im__51 = NULL;
ImmT  ___nl__im__52 = NULL;
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
___nl__int__14 = ___nl__int__10 >= ___nl__int__12;
#line 195
___nl__bool__13 = ___nl__int__14;
#line 195
if(___nl__bool__13){ goto label_122;}
#line 195
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_get(___nl__im__3, ___nl__int__10));
#line 195
c_rt_lib0copy(&___nl__im__9, ___nl__im__15);
#line 196
c_rt_lib0move(&___nl__im__16, hash0get_value(___nl__im__0, ___nl__im__9));
#line 197
c_rt_lib0delete(generator_c0clear_module_from_state(___ref___rec__1, ___nl__im__9));
#line 198
___nl__im_ptr__17 = &((*___ref___rec__1).global_int_const0field);
#line 198
c_rt_lib0move(&___nl__im__18,___get_global_string_const(131));
#line 198
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___nl__im_ptr__17), ___nl__im__18));
#line 198
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_mk(0));
#line 198
c_rt_lib0delete(hash0set_value(&___nl__im__18, ___nl__im__9, ___nl__im__19));
#line 198
c_rt_lib0move(&___nl__string__20,___get_global_string_const(131));
#line 198
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__17, ___nl__string__20, ___nl__im__18));
#line 198
___nl__im_ptr__17 = NULL;
#line 198
c_rt_lib0clear(&___nl__im__18);
#line 198
c_rt_lib0clear(&___nl__im__19);
#line 198
c_rt_lib0clear(&___nl__string__20);
#line 199
___nl__im_ptr__21 = &((*___ref___rec__1).global_string_const0field);
#line 199
c_rt_lib0move(&___nl__im__22,___get_global_string_const(131));
#line 199
c_rt_lib0move(&___nl__im__22, c_rt_lib0get_ref_hash((*___nl__im_ptr__21), ___nl__im__22));
#line 199
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_mk(0));
#line 199
c_rt_lib0delete(hash0set_value(&___nl__im__22, ___nl__im__9, ___nl__im__23));
#line 199
c_rt_lib0move(&___nl__string__24,___get_global_string_const(131));
#line 199
c_rt_lib0delete(c_rt_lib0set_ref_hash(___nl__im_ptr__21, ___nl__string__24, ___nl__im__22));
#line 199
___nl__im_ptr__21 = NULL;
#line 199
c_rt_lib0clear(&___nl__im__22);
#line 199
c_rt_lib0clear(&___nl__im__23);
#line 199
c_rt_lib0clear(&___nl__string__24);
#line 200
c_rt_lib0move(&___nl__im__25,___get_global_string_const(37));
#line 200
___nl__im_ptr__26 = &((*___ref___rec__1).ret0field);
#line 200
c_rt_lib0copy(___nl__im_ptr__26, ___nl__im__25);
#line 200
___nl__im_ptr__26 = NULL;
#line 200
c_rt_lib0clear(&___nl__im__25);
#line 201
c_rt_lib0move(&___nl__im__27,___get_global_string_const(37));
#line 201
___nl__im_ptr__28 = &((*___ref___rec__1).header0field);
#line 201
c_rt_lib0copy(___nl__im_ptr__28, ___nl__im__27);
#line 201
___nl__im_ptr__28 = NULL;
#line 201
c_rt_lib0clear(&___nl__im__27);
#line 202
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 202
___nl__im_ptr__30 = &((*___ref___rec__1).fun_args0field);
#line 202
c_rt_lib0copy(___nl__im_ptr__30, ___nl__im__29);
#line 202
___nl__im_ptr__30 = NULL;
#line 202
c_rt_lib0clear(&___nl__im__29);
#line 203
___nl__rec_ptr__31 = &((*___ref___rec__1).const0field);
#line 203
;
#line 203
___nl__int_ptr__32 = &(___nl__rec_ptr__31->dynamic_nr0field);
#line 204
(*___nl__int_ptr__32) = 0;
#line 204
___nl__int_ptr__32 = NULL;
#line 204
___nl__rec_ptr__33 = &(___nl__rec_ptr__31->int0field);
#line 205
;
#line 205
___nl__arr_ptr__34 = &(___nl__rec_ptr__33->arr0field);
#line 205
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__34));
(*___nl__arr_ptr__34).size = 0;
(*___nl__arr_ptr__34).capacity = 0;
(*___nl__arr_ptr__34).value = NULL;
#line 205
___nl__arr_ptr__34 = NULL;
#line 205
___nl__im_ptr__35 = &(___nl__rec_ptr__33->hash0field);
#line 205
c_rt_lib0move(___nl__im_ptr__35, c_rt_lib0hash_mk(0));
#line 205
___nl__im_ptr__35 = NULL;
#line 205
___nl__rec_ptr__33 = NULL;
#line 205
___nl__rec_ptr__36 = &(___nl__rec_ptr__31->string0field);
#line 206
;
#line 206
___nl__arr_ptr__37 = &(___nl__rec_ptr__36->arr0field);
#line 206
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__37));
(*___nl__arr_ptr__37).size = 0;
(*___nl__arr_ptr__37).capacity = 0;
(*___nl__arr_ptr__37).value = NULL;
#line 206
___nl__arr_ptr__37 = NULL;
#line 206
___nl__im_ptr__38 = &(___nl__rec_ptr__36->hash0field);
#line 206
c_rt_lib0move(___nl__im_ptr__38, c_rt_lib0hash_mk(0));
#line 206
___nl__im_ptr__38 = NULL;
#line 206
___nl__rec_ptr__36 = NULL;
#line 206
___nl__rec_ptr__39 = &(___nl__rec_ptr__31->singleton0field);
#line 207
;
#line 207
___nl__arr_ptr__40 = &(___nl__rec_ptr__39->arr0field);
#line 207
generator_c0anon_type00ownarranon_type00im0clean((*___nl__arr_ptr__40));
(*___nl__arr_ptr__40).size = 0;
(*___nl__arr_ptr__40).capacity = 0;
(*___nl__arr_ptr__40).value = NULL;
#line 207
___nl__arr_ptr__40 = NULL;
#line 207
___nl__im_ptr__41 = &(___nl__rec_ptr__39->hash0field);
#line 207
c_rt_lib0move(___nl__im_ptr__41, c_rt_lib0hash_mk(0));
#line 207
___nl__im_ptr__41 = NULL;
#line 207
___nl__rec_ptr__39 = NULL;
#line 207
___nl__rec_ptr__31 = NULL;
#line 209
___nl__im_ptr__42 = &((*___ref___rec__1).mod_name0field);
#line 209
c_rt_lib0copy(___nl__im_ptr__42, ___nl__im__9);
#line 209
___nl__im_ptr__42 = NULL;
#line 210
___nl__hash_ptr__43 = &((*___ref___rec__1).additional_imports0field);
#line 210
generator_c0anon_type00ownhashanon_type00bool0clean((*___nl__hash_ptr__43));
(*___nl__hash_ptr__43).size = 0;
(*___nl__hash_ptr__43).capacity = 0;
(*___nl__hash_ptr__43).keys = NULL;
(*___nl__hash_ptr__43).values = NULL;
#line 210
___nl__hash_ptr__43 = NULL;
#line 211
___nl__im_ptr__45 = &((*___ref___rec__1).defined_types0field);
#line 211
c_rt_lib0copy(&___nl__im__44, (*___nl__im_ptr__45));
#line 211
___nl__im_ptr__45 = NULL;
#line 211
c_rt_lib0delete(generator_c_priv0print_mod(___ref___rec__1, ___nl__im__16, ___nl__im__44));
#line 211
c_rt_lib0clear(&___nl__im__44);
#line 212
___nl__im_ptr__48 = &((*___ref___rec__1).ret0field);
#line 212
c_rt_lib0copy(&___nl__im__47, (*___nl__im_ptr__48));
#line 212
___nl__im_ptr__48 = NULL;
#line 212
___nl__im_ptr__50 = &((*___ref___rec__1).header0field);
#line 212
c_rt_lib0copy(&___nl__im__49, (*___nl__im_ptr__50));
#line 212
___nl__im_ptr__50 = NULL;
#line 212
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_mk(2, ___get_global_string_const(66), ___nl__im__47, ___get_global_string_const(71), ___nl__im__49));
#line 212
c_rt_lib0clear(&___nl__im__47);
#line 212
c_rt_lib0clear(&___nl__im__49);
#line 212
c_rt_lib0delete(hash0set_value(&___nl__im__2, ___nl__im__9, ___nl__im__46));
#line 212
c_rt_lib0clear(&___nl__im__46);
#line 212
c_rt_lib0clear(&___nl__im__9);
#line 213
___nl__int__10 = ___nl__int__10 + ___nl__int__11;
#line 213
goto label_19;
#line 213
label_122:
;
#line 214
c_rt_lib0move(&___nl__im__52, generator_c_priv0generate_global_const_files(___ref___rec__1));
#line 214
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_mk(2, ___get_global_string_const(182), ___nl__im__2, ___get_global_string_const(184), ___nl__im__52));
#line 214
c_rt_lib0clear(&___nl__im__52);
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
//clear ___nl__int__14;
#line 214
c_rt_lib0clear(&___nl__im__15);
#line 214
c_rt_lib0clear(&___nl__im__16);
#line 214
return ___nl__im__51;
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
INT  ___nl__int__12 = 0;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
bool  ___nl__bool__15 = false;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
#line 218
c_rt_lib0move(&___nl__im__5, c_rt_lib0init_iter(___nl__im__0));
#line 218
label_1:
;
#line 218
___nl__bool__3 = c_rt_lib0is_end_hash(___nl__im__5);
#line 218
if(___nl__bool__3){ goto label_61;}
#line 218
c_rt_lib0move(&___nl__im__2, c_rt_lib0get_key_iter(___nl__im__5));
#line 218
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value(___nl__im__0, ___nl__im__2));
#line 219
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(208)));
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
___nl__int__12 = ___nl__int__8 >= ___nl__int__10;
#line 219
___nl__bool__11 = ___nl__int__12;
#line 219
if(___nl__bool__11){ goto label_45;}
#line 219
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_get(___nl__im__6, ___nl__int__8));
#line 219
c_rt_lib0copy(&___nl__im__7, ___nl__im__13);
#line 220
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(166)));
#line 220
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(77));
#line 220
if(___nl__bool__15){ goto label_24;}
#line 221
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(76));
#line 221
if(___nl__bool__15){ goto label_26;}
#line 221
c_rt_lib0move(&___nl__im__16,___get_global_string_const(16));
#line 221
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 221
nl_die_arg(___nl__im__16);
#line 220
label_24:
;
#line 221
goto label_41;
#line 221
label_26:
;
#line 221
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(76)));
#line 221
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 222
c_rt_lib0move(&___nl__im__22,___get_global_string_const(35));
#line 222
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__2, ___nl__im__22));
#line 222
c_rt_lib0clear(&___nl__im__22);
#line 222
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__7, ___get_global_string_const(167)));
#line 222
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 222
c_rt_lib0clear(&___nl__im__21);
#line 222
c_rt_lib0clear(&___nl__im__23);
#line 222
c_rt_lib0copy(&___nl__im__19, ___nl__im__17);
#line 222
c_rt_lib0delete(c_rt_lib0hash_set_value(___ref___im__1, ___nl__im__20, ___nl__im__19));
#line 222
c_rt_lib0clear(&___nl__im__19);
#line 222
c_rt_lib0clear(&___nl__im__20);
#line 223
goto label_41;
#line 223
label_41:
;
#line 223
c_rt_lib0clear(&___nl__im__7);
#line 224
___nl__int__8 = ___nl__int__8 + ___nl__int__9;
#line 224
goto label_10;
#line 224
label_45:
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
//clear ___nl__int__12;
#line 224
c_rt_lib0clear(&___nl__im__13);
#line 224
c_rt_lib0clear(&___nl__im__14);
#line 224
//clear ___nl__bool__15;
#line 224
c_rt_lib0clear(&___nl__im__16);
#line 224
c_rt_lib0clear(&___nl__im__17);
#line 224
c_rt_lib0clear(&___nl__im__18);
#line 225
c_rt_lib0move(&___nl__im__5, c_rt_lib0next_iter(___nl__im__5));
#line 225
goto label_1;
#line 225
label_61:
;
#line 226
c_rt_lib0copy(&___nl__im__24, (*___ref___im__1));
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
//clear ___nl__int__12;
#line 226
c_rt_lib0clear(&___nl__im__13);
#line 226
c_rt_lib0clear(&___nl__im__14);
#line 226
//clear ___nl__bool__15;
#line 226
c_rt_lib0clear(&___nl__im__16);
#line 226
c_rt_lib0clear(&___nl__im__17);
#line 226
c_rt_lib0clear(&___nl__im__18);
#line 226
return ___nl__im__24;
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
//clear ___nl__int__12;
#line 226
c_rt_lib0clear(&___nl__im__13);
#line 226
c_rt_lib0clear(&___nl__im__14);
#line 226
//clear ___nl__bool__15;
#line 226
c_rt_lib0clear(&___nl__im__16);
#line 226
c_rt_lib0clear(&___nl__im__17);
#line 226
c_rt_lib0clear(&___nl__im__18);
#line 226
c_rt_lib0clear(&___nl__im__24);
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
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
INT  ___nl__int__62 = 0;
INT  ___nl__int__63 = 0;
bool  ___nl__bool__64 = false;
INT  ___nl__int__65 = 0;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
INT  ___nl__int__75 = 0;
INT  ___nl__int__76 = 0;
bool  ___nl__bool__77 = false;
INT  ___nl__int__78 = 0;
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
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
ImmT  ___nl__im__160 = NULL;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT * ___nl__im_ptr__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT * ___nl__im_ptr__167 = NULL;
#line 230
c_rt_lib0move(&___nl__im__1,___get_global_string_const(37));
#line 230
___nl__im_ptr__2 = &((*___ref___rec__0).ret0field);
#line 230
c_rt_lib0copy(___nl__im_ptr__2, ___nl__im__1);
#line 230
___nl__im_ptr__2 = NULL;
#line 230
c_rt_lib0clear(&___nl__im__1);
#line 231
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
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
c_rt_lib0move(&___nl__im__18,___get_global_string_const(37));
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
c_rt_lib0move(&___nl__im__21,___get_global_string_const(428));
#line 241
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__21));
#line 241
c_rt_lib0clear(&___nl__im__21);
#line 242
c_rt_lib0move(&___nl__im__23,___get_global_string_const(269));
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
c_rt_lib0move(&___nl__im__26,___get_global_string_const(429));
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
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(128)));
#line 245
c_rt_lib0clear(&___nl__im__28);
#line 246
___nl__im_ptr__32 = &((*___ref___rec__0).global_string_const0field);
#line 246
c_rt_lib0copy(&___nl__im__31, (*___nl__im_ptr__32));
#line 246
___nl__im_ptr__32 = NULL;
#line 246
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(128)));
#line 246
c_rt_lib0clear(&___nl__im__31);
#line 247
___nl__int__33 = c_rt_lib0array_len(___nl__im__27);
#line 248
___nl__int__34 = c_rt_lib0array_len(___nl__im__30);
#line 249
c_rt_lib0move(&___nl__im__35,___get_global_string_const(430));
#line 249
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___rec__0, ___nl__im__35));
#line 249
c_rt_lib0clear(&___nl__im__35);
#line 250
c_rt_lib0move(&___nl__im__37, generator_c_priv0im_t());
#line 250
c_rt_lib0move(&___nl__im__38,___get_global_string_const(431));
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
c_rt_lib0move(&___nl__im__41,___get_global_string_const(432));
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
c_rt_lib0move(&___nl__im__46,___get_global_string_const(433));
#line 253
c_rt_lib0move(&___nl__im__47, generator_c_priv0im_t());
#line 253
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__47));
#line 253
c_rt_lib0clear(&___nl__im__46);
#line 253
c_rt_lib0clear(&___nl__im__47);
#line 253
c_rt_lib0move(&___nl__im__48,___get_global_string_const(434));
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
c_rt_lib0move(&___nl__im__50,___get_global_string_const(435));
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
c_rt_lib0move(&___nl__im__55,___get_global_string_const(436));
#line 261
c_rt_lib0move(&___nl__im__57, c_rt_lib0int_new(___nl__int__33));
#line 261
c_rt_lib0move(&___nl__im__56, ptd0int_to_string(___nl__im__57));
#line 261
c_rt_lib0clear(&___nl__im__57);
#line 261
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__56));
#line 261
c_rt_lib0clear(&___nl__im__55);
#line 261
c_rt_lib0clear(&___nl__im__56);
#line 261
c_rt_lib0move(&___nl__im__58,___get_global_string_const(437));
#line 261
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__58));
#line 261
c_rt_lib0clear(&___nl__im__54);
#line 261
c_rt_lib0clear(&___nl__im__58);
#line 262
c_rt_lib0move(&___nl__im__60, c_rt_lib0int_new(___nl__int__34));
#line 262
c_rt_lib0move(&___nl__im__59, ptd0int_to_string(___nl__im__60));
#line 262
c_rt_lib0clear(&___nl__im__60);
#line 262
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__59));
#line 262
c_rt_lib0clear(&___nl__im__53);
#line 262
c_rt_lib0clear(&___nl__im__59);
#line 262
c_rt_lib0move(&___nl__im__61,___get_global_string_const(438));
#line 262
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__61));
#line 262
c_rt_lib0clear(&___nl__im__52);
#line 262
c_rt_lib0clear(&___nl__im__61);
#line 262
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__51));
#line 262
c_rt_lib0clear(&___nl__im__51);
#line 264
___nl__int__62 = 0;
#line 264
___nl__int__63 = 1;
#line 264
label_145:
;
#line 264
___nl__int__65 = ___nl__int__62 >= ___nl__int__33;
#line 264
___nl__bool__64 = ___nl__int__65;
#line 264
if(___nl__bool__64){ goto label_170;}
#line 265
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_get(___nl__im__27, ___nl__int__62));
#line 265
c_rt_lib0move(&___nl__im__68, c_rt_lib0hash_get_value_dec(___nl__im__69, ___get_global_string_const(219)));
#line 265
c_rt_lib0clear(&___nl__im__69);
#line 266
c_rt_lib0move(&___nl__im__71,___get_global_string_const(439));
#line 266
c_rt_lib0move(&___nl__im__73, c_rt_lib0int_new(___nl__int__62));
#line 266
c_rt_lib0move(&___nl__im__72, ptd0int_to_string(___nl__im__73));
#line 266
c_rt_lib0clear(&___nl__im__73);
#line 266
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__72));
#line 266
c_rt_lib0clear(&___nl__im__71);
#line 266
c_rt_lib0clear(&___nl__im__72);
#line 266
c_rt_lib0move(&___nl__im__67, generator_c_priv0create_sim_to_memory(___nl__im__68, ___nl__im__70));
#line 266
c_rt_lib0clear(&___nl__im__68);
#line 266
c_rt_lib0clear(&___nl__im__70);
#line 266
c_rt_lib0move(&___nl__im__74,___get_global_string_const(440));
#line 266
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__74));
#line 266
c_rt_lib0clear(&___nl__im__67);
#line 266
c_rt_lib0clear(&___nl__im__74);
#line 266
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__66));
#line 266
c_rt_lib0clear(&___nl__im__66);
#line 267
___nl__int__62 = ___nl__int__62 + ___nl__int__63;
#line 267
goto label_145;
#line 267
label_170:
;
#line 268
___nl__int__75 = 0;
#line 268
___nl__int__76 = 1;
#line 268
label_173:
;
#line 268
___nl__int__78 = ___nl__int__75 >= ___nl__int__34;
#line 268
___nl__bool__77 = ___nl__int__78;
#line 268
if(___nl__bool__77){ goto label_198;}
#line 269
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_get(___nl__im__30, ___nl__int__75));
#line 269
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(219)));
#line 269
c_rt_lib0clear(&___nl__im__82);
#line 270
c_rt_lib0move(&___nl__im__84,___get_global_string_const(441));
#line 270
c_rt_lib0move(&___nl__im__86, c_rt_lib0int_new(___nl__int__75));
#line 270
c_rt_lib0move(&___nl__im__85, ptd0int_to_string(___nl__im__86));
#line 270
c_rt_lib0clear(&___nl__im__86);
#line 270
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__85));
#line 270
c_rt_lib0clear(&___nl__im__84);
#line 270
c_rt_lib0clear(&___nl__im__85);
#line 270
c_rt_lib0move(&___nl__im__80, generator_c_priv0create_sim_to_memory(___nl__im__81, ___nl__im__83));
#line 270
c_rt_lib0clear(&___nl__im__81);
#line 270
c_rt_lib0clear(&___nl__im__83);
#line 270
c_rt_lib0move(&___nl__im__87,___get_global_string_const(440));
#line 270
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__87));
#line 270
c_rt_lib0clear(&___nl__im__80);
#line 270
c_rt_lib0clear(&___nl__im__87);
#line 270
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__79));
#line 270
c_rt_lib0clear(&___nl__im__79);
#line 271
___nl__int__75 = ___nl__int__75 + ___nl__int__76;
#line 271
goto label_173;
#line 271
label_198:
;
#line 272
c_rt_lib0move(&___nl__im__104,___get_global_string_const(442));
#line 273
c_rt_lib0move(&___nl__im__106,___get_global_string_const(443));
#line 273
c_rt_lib0move(&___nl__im__105, generator_c_priv0get_lib_fun(___nl__im__106));
#line 273
c_rt_lib0clear(&___nl__im__106);
#line 273
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__105));
#line 273
c_rt_lib0clear(&___nl__im__104);
#line 273
c_rt_lib0clear(&___nl__im__105);
#line 273
c_rt_lib0move(&___nl__im__107,___get_global_string_const(444));
#line 273
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__107));
#line 273
c_rt_lib0clear(&___nl__im__103);
#line 273
c_rt_lib0clear(&___nl__im__107);
#line 273
c_rt_lib0move(&___nl__im__108, generator_c_priv0im_t());
#line 273
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__108));
#line 273
c_rt_lib0clear(&___nl__im__102);
#line 273
c_rt_lib0clear(&___nl__im__108);
#line 273
c_rt_lib0move(&___nl__im__109,___get_global_string_const(445));
#line 273
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__109));
#line 273
c_rt_lib0clear(&___nl__im__101);
#line 273
c_rt_lib0clear(&___nl__im__109);
#line 273
c_rt_lib0move(&___nl__im__110, generator_c_priv0im_t());
#line 273
c_rt_lib0move(&___nl__im__99, c_rt_lib0concat_new(___nl__im__100, ___nl__im__110));
#line 273
c_rt_lib0clear(&___nl__im__100);
#line 273
c_rt_lib0clear(&___nl__im__110);
#line 274
c_rt_lib0move(&___nl__im__111,___get_global_string_const(446));
#line 274
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__111));
#line 274
c_rt_lib0clear(&___nl__im__99);
#line 274
c_rt_lib0clear(&___nl__im__111);
#line 274
c_rt_lib0move(&___nl__im__113, c_rt_lib0int_new(___nl__int__33));
#line 274
c_rt_lib0move(&___nl__im__112, ptd0int_to_string(___nl__im__113));
#line 274
c_rt_lib0clear(&___nl__im__113);
#line 274
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__112));
#line 274
c_rt_lib0clear(&___nl__im__98);
#line 274
c_rt_lib0clear(&___nl__im__112);
#line 274
c_rt_lib0move(&___nl__im__114,___get_global_string_const(438));
#line 274
c_rt_lib0move(&___nl__im__96, c_rt_lib0concat_new(___nl__im__97, ___nl__im__114));
#line 274
c_rt_lib0clear(&___nl__im__97);
#line 274
c_rt_lib0clear(&___nl__im__114);
#line 275
c_rt_lib0move(&___nl__im__116,___get_global_string_const(447));
#line 275
c_rt_lib0move(&___nl__im__115, generator_c_priv0get_lib_fun(___nl__im__116));
#line 275
c_rt_lib0clear(&___nl__im__116);
#line 275
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__115));
#line 275
c_rt_lib0clear(&___nl__im__96);
#line 275
c_rt_lib0clear(&___nl__im__115);
#line 275
c_rt_lib0move(&___nl__im__117,___get_global_string_const(444));
#line 275
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__117));
#line 275
c_rt_lib0clear(&___nl__im__95);
#line 275
c_rt_lib0clear(&___nl__im__117);
#line 275
c_rt_lib0move(&___nl__im__118, generator_c_priv0im_t());
#line 275
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__118));
#line 275
c_rt_lib0clear(&___nl__im__94);
#line 275
c_rt_lib0clear(&___nl__im__118);
#line 275
c_rt_lib0move(&___nl__im__119,___get_global_string_const(448));
#line 275
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__119));
#line 275
c_rt_lib0clear(&___nl__im__93);
#line 275
c_rt_lib0clear(&___nl__im__119);
#line 275
c_rt_lib0move(&___nl__im__120, generator_c_priv0im_t());
#line 275
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__120));
#line 275
c_rt_lib0clear(&___nl__im__92);
#line 275
c_rt_lib0clear(&___nl__im__120);
#line 276
c_rt_lib0move(&___nl__im__121,___get_global_string_const(449));
#line 276
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__121));
#line 276
c_rt_lib0clear(&___nl__im__91);
#line 276
c_rt_lib0clear(&___nl__im__121);
#line 276
c_rt_lib0move(&___nl__im__123, c_rt_lib0int_new(___nl__int__34));
#line 276
c_rt_lib0move(&___nl__im__122, ptd0int_to_string(___nl__im__123));
#line 276
c_rt_lib0clear(&___nl__im__123);
#line 276
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__122));
#line 276
c_rt_lib0clear(&___nl__im__90);
#line 276
c_rt_lib0clear(&___nl__im__122);
#line 276
c_rt_lib0move(&___nl__im__124,___get_global_string_const(450));
#line 276
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__124));
#line 276
c_rt_lib0clear(&___nl__im__89);
#line 276
c_rt_lib0clear(&___nl__im__124);
#line 276
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__88));
#line 276
c_rt_lib0clear(&___nl__im__88);
#line 279
c_rt_lib0move(&___nl__im__130, generator_c_priv0im_t());
#line 279
c_rt_lib0move(&___nl__im__131,___get_global_string_const(451));
#line 279
c_rt_lib0move(&___nl__im__129, c_rt_lib0concat_new(___nl__im__130, ___nl__im__131));
#line 279
c_rt_lib0clear(&___nl__im__130);
#line 279
c_rt_lib0clear(&___nl__im__131);
#line 280
c_rt_lib0move(&___nl__im__132, generator_c_priv0im_t());
#line 280
c_rt_lib0move(&___nl__im__128, c_rt_lib0concat_new(___nl__im__129, ___nl__im__132));
#line 280
c_rt_lib0clear(&___nl__im__129);
#line 280
c_rt_lib0clear(&___nl__im__132);
#line 280
c_rt_lib0move(&___nl__im__133,___get_global_string_const(452));
#line 280
c_rt_lib0move(&___nl__im__127, c_rt_lib0concat_new(___nl__im__128, ___nl__im__133));
#line 280
c_rt_lib0clear(&___nl__im__128);
#line 280
c_rt_lib0clear(&___nl__im__133);
#line 281
c_rt_lib0move(&___nl__im__135,___get_global_string_const(453));
#line 281
c_rt_lib0move(&___nl__im__137,___get_global_string_const(454));
#line 281
c_rt_lib0move(&___nl__im__140,___get_global_string_const(455));
#line 281
c_rt_lib0move(&___nl__im__141, generator_c_priv0im_t());
#line 281
c_rt_lib0move(&___nl__im__139, c_rt_lib0concat_new(___nl__im__140, ___nl__im__141));
#line 281
c_rt_lib0clear(&___nl__im__140);
#line 281
c_rt_lib0clear(&___nl__im__141);
#line 281
c_rt_lib0move(&___nl__im__142,___get_global_string_const(456));
#line 281
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__142));
#line 281
c_rt_lib0clear(&___nl__im__139);
#line 281
c_rt_lib0clear(&___nl__im__142);
#line 281
c_rt_lib0move(&___nl__im__136, c_rt_lib0array_mk(2, ___nl__im__137, ___nl__im__138));
#line 281
c_rt_lib0clear(&___nl__im__137);
#line 281
c_rt_lib0clear(&___nl__im__138);
#line 281
c_rt_lib0move(&___nl__im__134, generator_c_priv0get_fun_lib(___nl__im__135, ___nl__im__136));
#line 281
c_rt_lib0clear(&___nl__im__135);
#line 281
c_rt_lib0clear(&___nl__im__136);
#line 281
c_rt_lib0move(&___nl__im__126, c_rt_lib0concat_new(___nl__im__127, ___nl__im__134));
#line 281
c_rt_lib0clear(&___nl__im__127);
#line 281
c_rt_lib0clear(&___nl__im__134);
#line 281
c_rt_lib0move(&___nl__im__143,___get_global_string_const(457));
#line 281
c_rt_lib0move(&___nl__im__125, c_rt_lib0concat_new(___nl__im__126, ___nl__im__143));
#line 281
c_rt_lib0clear(&___nl__im__126);
#line 281
c_rt_lib0clear(&___nl__im__143);
#line 281
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__125));
#line 281
c_rt_lib0clear(&___nl__im__125);
#line 284
c_rt_lib0move(&___nl__im__149, generator_c_priv0im_t());
#line 284
c_rt_lib0move(&___nl__im__150,___get_global_string_const(458));
#line 284
c_rt_lib0move(&___nl__im__148, c_rt_lib0concat_new(___nl__im__149, ___nl__im__150));
#line 284
c_rt_lib0clear(&___nl__im__149);
#line 284
c_rt_lib0clear(&___nl__im__150);
#line 285
c_rt_lib0move(&___nl__im__151, generator_c_priv0im_t());
#line 285
c_rt_lib0move(&___nl__im__147, c_rt_lib0concat_new(___nl__im__148, ___nl__im__151));
#line 285
c_rt_lib0clear(&___nl__im__148);
#line 285
c_rt_lib0clear(&___nl__im__151);
#line 285
c_rt_lib0move(&___nl__im__152,___get_global_string_const(452));
#line 285
c_rt_lib0move(&___nl__im__146, c_rt_lib0concat_new(___nl__im__147, ___nl__im__152));
#line 285
c_rt_lib0clear(&___nl__im__147);
#line 285
c_rt_lib0clear(&___nl__im__152);
#line 286
c_rt_lib0move(&___nl__im__154,___get_global_string_const(453));
#line 286
c_rt_lib0move(&___nl__im__156,___get_global_string_const(454));
#line 286
c_rt_lib0move(&___nl__im__159,___get_global_string_const(455));
#line 286
c_rt_lib0move(&___nl__im__160, generator_c_priv0im_t());
#line 286
c_rt_lib0move(&___nl__im__158, c_rt_lib0concat_new(___nl__im__159, ___nl__im__160));
#line 286
c_rt_lib0clear(&___nl__im__159);
#line 286
c_rt_lib0clear(&___nl__im__160);
#line 286
c_rt_lib0move(&___nl__im__161,___get_global_string_const(459));
#line 286
c_rt_lib0move(&___nl__im__157, c_rt_lib0concat_new(___nl__im__158, ___nl__im__161));
#line 286
c_rt_lib0clear(&___nl__im__158);
#line 286
c_rt_lib0clear(&___nl__im__161);
#line 286
c_rt_lib0move(&___nl__im__155, c_rt_lib0array_mk(2, ___nl__im__156, ___nl__im__157));
#line 286
c_rt_lib0clear(&___nl__im__156);
#line 286
c_rt_lib0clear(&___nl__im__157);
#line 286
c_rt_lib0move(&___nl__im__153, generator_c_priv0get_fun_lib(___nl__im__154, ___nl__im__155));
#line 286
c_rt_lib0clear(&___nl__im__154);
#line 286
c_rt_lib0clear(&___nl__im__155);
#line 286
c_rt_lib0move(&___nl__im__145, c_rt_lib0concat_new(___nl__im__146, ___nl__im__153));
#line 286
c_rt_lib0clear(&___nl__im__146);
#line 286
c_rt_lib0clear(&___nl__im__153);
#line 286
c_rt_lib0move(&___nl__im__162,___get_global_string_const(457));
#line 286
c_rt_lib0move(&___nl__im__144, c_rt_lib0concat_new(___nl__im__145, ___nl__im__162));
#line 286
c_rt_lib0clear(&___nl__im__145);
#line 286
c_rt_lib0clear(&___nl__im__162);
#line 286
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__144));
#line 286
c_rt_lib0clear(&___nl__im__144);
#line 289
___nl__im_ptr__165 = &((*___ref___rec__0).ret0field);
#line 289
c_rt_lib0copy(&___nl__im__164, (*___nl__im_ptr__165));
#line 289
___nl__im_ptr__165 = NULL;
#line 289
___nl__im_ptr__167 = &((*___ref___rec__0).header0field);
#line 289
c_rt_lib0copy(&___nl__im__166, (*___nl__im_ptr__167));
#line 289
___nl__im_ptr__167 = NULL;
#line 289
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_mk(2, ___get_global_string_const(66), ___nl__im__164, ___get_global_string_const(71), ___nl__im__166));
#line 289
c_rt_lib0clear(&___nl__im__164);
#line 289
c_rt_lib0clear(&___nl__im__166);
#line 289
c_rt_lib0clear(&___nl__im__27);
#line 289
c_rt_lib0clear(&___nl__im__30);
#line 289
//clear ___nl__int__33;
#line 289
//clear ___nl__int__34;
#line 289
//clear ___nl__int__62;
#line 289
//clear ___nl__int__63;
#line 289
//clear ___nl__bool__64;
#line 289
//clear ___nl__int__65;
#line 289
//clear ___nl__int__75;
#line 289
//clear ___nl__int__76;
#line 289
//clear ___nl__bool__77;
#line 289
//clear ___nl__int__78;
#line 289
return ___nl__im__163;
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(460));
#line 293
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 293
c_rt_lib0clear(&___nl__im__3);
#line 293
c_rt_lib0move(&___nl__im__4,___get_global_string_const(461));
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
c_rt_lib0move(&___nl__im__3,___get_global_string_const(462));
#line 297
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 297
c_rt_lib0clear(&___nl__im__3);
#line 297
c_rt_lib0move(&___nl__im__4,___get_global_string_const(463));
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
c_rt_lib0move(&___nl__im__0,___get_global_string_const(464));
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
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(209)));
#line 310
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(210));
#line 310
if(___nl__bool__4){ goto label_8;}
#line 312
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(465));
#line 312
if(___nl__bool__4){ goto label_11;}
#line 312
c_rt_lib0move(&___nl__im__5,___get_global_string_const(16));
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
c_rt_lib0move(&___nl__im__2,___get_global_string_const(37));
#line 314
goto label_14;
#line 314
label_14:
;
#line 315
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(167)));
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
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
INT  ___nl__int__21 = 0;
INT  ___nl__int__22 = 0;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
bool  ___nl__bool__25 = false;
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
#line 319
c_rt_lib0move(&___nl__im__2,___get_global_string_const(37));
#line 320
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 321
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(466)));
#line 321
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_type_name(___nl__im__8));
#line 321
c_rt_lib0clear(&___nl__im__8);
#line 321
c_rt_lib0move(&___nl__im__9,___get_global_string_const(467));
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
c_rt_lib0move(&___nl__im__10,___get_global_string_const(455));
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
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
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
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 323
___nl__bool__17 = ___nl__int__18;
#line 323
if(___nl__bool__17){ goto label_91;}
#line 323
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 323
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 324
___nl__int__21 = 0;
#line 324
___nl__int__22 = ___nl__int__21 == ___nl__int__11;
#line 324
___nl__bool__20 = ___nl__int__22;
#line 324
//clear ___nl__int__21;
#line 324
//clear ___nl__int__22;
#line 324
___nl__bool__20 = !___nl__bool__20;
#line 324
___nl__bool__20 = !___nl__bool__20;
#line 324
if(___nl__bool__20){ goto label_40;}
#line 324
c_rt_lib0move(&___nl__im__23,___get_global_string_const(312));
#line 324
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__23));
#line 324
c_rt_lib0clear(&___nl__im__23);
#line 324
goto label_40;
#line 324
label_40:
;
#line 324
//clear ___nl__bool__20;
#line 325
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(353)));
#line 325
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(224));
#line 325
if(___nl__bool__25){ goto label_50;}
#line 327
___nl__bool__25 = c_rt_lib0priv_is(___nl__im__24, ___get_global_string_const(40));
#line 327
if(___nl__bool__25){ goto label_67;}
#line 327
c_rt_lib0move(&___nl__im__26,___get_global_string_const(16));
#line 327
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(2, ___nl__im__26, ___nl__im__24));
#line 327
nl_die_arg(___nl__im__26);
#line 325
label_50:
;
#line 326
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(205)));
#line 326
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_type_name(___nl__im__30));
#line 326
c_rt_lib0clear(&___nl__im__30);
#line 326
c_rt_lib0move(&___nl__im__31,___get_global_string_const(468));
#line 326
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__31));
#line 326
c_rt_lib0clear(&___nl__im__29);
#line 326
c_rt_lib0clear(&___nl__im__31);
#line 326
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(469)));
#line 326
c_rt_lib0move(&___nl__im__32, generator_c_priv0reg_suffix(___nl__im__33));
#line 326
c_rt_lib0clear(&___nl__im__33);
#line 326
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__32));
#line 326
c_rt_lib0clear(&___nl__im__28);
#line 326
c_rt_lib0clear(&___nl__im__32);
#line 326
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__27));
#line 326
c_rt_lib0clear(&___nl__im__27);
#line 327
goto label_84;
#line 327
label_67:
;
#line 328
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(205)));
#line 328
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_type_name(___nl__im__37));
#line 328
c_rt_lib0clear(&___nl__im__37);
#line 328
c_rt_lib0move(&___nl__im__38,___get_global_string_const(470));
#line 328
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__38));
#line 328
c_rt_lib0clear(&___nl__im__36);
#line 328
c_rt_lib0clear(&___nl__im__38);
#line 328
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(469)));
#line 328
c_rt_lib0move(&___nl__im__39, generator_c_priv0reg_suffix(___nl__im__40));
#line 328
c_rt_lib0clear(&___nl__im__40);
#line 328
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__39));
#line 328
c_rt_lib0clear(&___nl__im__35);
#line 328
c_rt_lib0clear(&___nl__im__39);
#line 328
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__34));
#line 328
c_rt_lib0clear(&___nl__im__34);
#line 329
goto label_84;
#line 329
label_84:
;
#line 330
___nl__int__41 = 1;
#line 330
___nl__int__11 = ___nl__int__11 + ___nl__int__41;
#line 330
//clear ___nl__int__41;
#line 330
c_rt_lib0clear(&___nl__im__13);
#line 331
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 331
goto label_22;
#line 331
label_91:
;
#line 332
c_rt_lib0move(&___nl__im__42,___get_global_string_const(320));
#line 332
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__42));
#line 332
c_rt_lib0clear(&___nl__im__42);
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
//clear ___nl__int__18;
#line 333
c_rt_lib0clear(&___nl__im__19);
#line 333
c_rt_lib0clear(&___nl__im__24);
#line 333
//clear ___nl__bool__25;
#line 333
c_rt_lib0clear(&___nl__im__26);
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
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(131)));
#line 349
c_rt_lib0move(&___nl__im__3, hash0get_value(___nl__im__4, ___nl__im__2));
#line 349
c_rt_lib0clear(&___nl__im__4);
#line 350
c_rt_lib0move(&___nl__im__5,___get_global_string_const(37));
#line 350
c_rt_lib0delete(hash0set_value(&___nl__im__3, ___nl__im__1, ___nl__im__5));
#line 350
c_rt_lib0clear(&___nl__im__5);
#line 351
c_rt_lib0move(&___nl__im__6,___get_global_string_const(131));
#line 351
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__6));
#line 351
c_rt_lib0delete(hash0set_value(&___nl__im__6, ___nl__im__2, ___nl__im__3));
#line 351
c_rt_lib0move(&___nl__string__7,___get_global_string_const(131));
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
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
INT  ___nl__int__13 = 0;
INT  ___nl__int__14 = 0;
ImmT  ___nl__im__15 = NULL;
INT  ___nl__int__16 = 0;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__string__19 = NULL;
ImmT  ___nl__im__20 = NULL;
INT  ___nl__int__21 = 0;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__string__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
INT  ___nl__int__29 = 0;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__string__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__string__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
bool  ___nl__bool__39 = false;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
INT  ___nl__int__45 = 0;
ImmT  ___nl__string__46 = NULL;
#line 356
___nl__int__4 = 1;
#line 356
___nl__int__4 = -___nl__int__4;
#line 357
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(129)));
#line 357
___nl__bool__5 = hash0has_key(___nl__im__6, ___nl__im__1);
#line 357
c_rt_lib0clear(&___nl__im__6);
#line 357
___nl__bool__5 = !___nl__bool__5;
#line 357
___nl__bool__5 = !___nl__bool__5;
#line 357
if(___nl__bool__5){ goto label_86;}
#line 358
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(130)));
#line 358
___nl__int__8 = c_rt_lib0array_len(___nl__im__9);
#line 358
c_rt_lib0clear(&___nl__im__9);
#line 358
___nl__int__10 = 0;
#line 358
___nl__int__11 = ___nl__int__8 > ___nl__int__10;
#line 358
___nl__bool__7 = ___nl__int__11;
#line 358
//clear ___nl__int__8;
#line 358
//clear ___nl__int__10;
#line 358
//clear ___nl__int__11;
#line 358
___nl__bool__7 = !___nl__bool__7;
#line 358
if(___nl__bool__7){ goto label_55;}
#line 359
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(130)));
#line 359
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(130)));
#line 359
___nl__int__14 = c_rt_lib0array_len(___nl__im__15);
#line 359
c_rt_lib0clear(&___nl__im__15);
#line 359
___nl__int__16 = 1;
#line 359
___nl__int__13 = ___nl__int__14 - ___nl__int__16;
#line 359
//clear ___nl__int__14;
#line 359
//clear ___nl__int__16;
#line 359
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__12, ___nl__int__13));
#line 359
___nl__int__4 = getIntFromImm(___nl__im__17);
#line 359
c_rt_lib0clear(&___nl__im__12);
#line 359
//clear ___nl__int__13;
#line 359
c_rt_lib0clear(&___nl__im__17);
#line 360
c_rt_lib0move(&___nl__im__18,___get_global_string_const(130));
#line 360
c_rt_lib0move(&___nl__im__18, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__18));
#line 360
c_rt_lib0delete(array0pop(&___nl__im__18));
#line 360
c_rt_lib0move(&___nl__string__19,___get_global_string_const(130));
#line 360
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__19, ___nl__im__18));
#line 360
c_rt_lib0clear(&___nl__im__18);
#line 360
c_rt_lib0clear(&___nl__string__19);
#line 361
___nl__int__21 = 1;
#line 361
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__21));
#line 361
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_mk(2, ___get_global_string_const(219), ___nl__im__2, ___get_global_string_const(397), ___nl__im__22));
#line 361
//clear ___nl__int__21;
#line 361
c_rt_lib0clear(&___nl__im__22);
#line 361
c_rt_lib0move(&___nl__im__23,___get_global_string_const(128));
#line 361
c_rt_lib0move(&___nl__im__23, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__23));
#line 361
c_rt_lib0copy(&___nl__im__24, ___nl__im__20);
#line 361
c_rt_lib0array_set(&___nl__im__23, ___nl__int__4, ___nl__im__24);
#line 361
c_rt_lib0move(&___nl__string__25,___get_global_string_const(128));
#line 361
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__25, ___nl__im__23));
#line 361
c_rt_lib0clear(&___nl__im__20);
#line 361
c_rt_lib0clear(&___nl__im__23);
#line 361
c_rt_lib0clear(&___nl__im__24);
#line 361
c_rt_lib0clear(&___nl__string__25);
#line 362
goto label_73;
#line 362
label_55:
;
#line 363
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(128)));
#line 363
___nl__int__4 = c_rt_lib0array_len(___nl__im__26);
#line 363
c_rt_lib0clear(&___nl__im__26);
#line 364
c_rt_lib0move(&___nl__im__27,___get_global_string_const(128));
#line 364
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__27));
#line 364
___nl__int__29 = 1;
#line 364
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__29));
#line 364
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_mk(2, ___get_global_string_const(219), ___nl__im__2, ___get_global_string_const(397), ___nl__im__30));
#line 364
//clear ___nl__int__29;
#line 364
c_rt_lib0clear(&___nl__im__30);
#line 364
c_rt_lib0delete(array0push(&___nl__im__27, ___nl__im__28));
#line 364
c_rt_lib0move(&___nl__string__31,___get_global_string_const(128));
#line 364
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__31, ___nl__im__27));
#line 364
c_rt_lib0clear(&___nl__im__27);
#line 364
c_rt_lib0clear(&___nl__im__28);
#line 364
c_rt_lib0clear(&___nl__string__31);
#line 365
goto label_73;
#line 365
label_73:
;
#line 365
//clear ___nl__bool__7;
#line 366
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 367
c_rt_lib0move(&___nl__im__32,___get_global_string_const(129));
#line 367
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__32));
#line 367
c_rt_lib0move(&___nl__im__33, c_rt_lib0int_new(___nl__int__4));
#line 367
c_rt_lib0delete(hash0set_value(&___nl__im__32, ___nl__im__1, ___nl__im__33));
#line 367
c_rt_lib0move(&___nl__string__34,___get_global_string_const(129));
#line 367
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__34, ___nl__im__32));
#line 367
c_rt_lib0clear(&___nl__im__32);
#line 367
c_rt_lib0clear(&___nl__im__33);
#line 367
c_rt_lib0clear(&___nl__string__34);
#line 368
goto label_125;
#line 368
label_86:
;
#line 369
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(129)));
#line 369
c_rt_lib0move(&___nl__im__36, hash0get_value(___nl__im__35, ___nl__im__1));
#line 369
___nl__int__4 = getIntFromImm(___nl__im__36);
#line 369
c_rt_lib0clear(&___nl__im__35);
#line 369
c_rt_lib0clear(&___nl__im__36);
#line 370
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(131)));
#line 370
c_rt_lib0move(&___nl__im__37, hash0get_value(___nl__im__38, ___nl__im__3));
#line 370
c_rt_lib0clear(&___nl__im__38);
#line 371
___nl__bool__39 = hash0has_key(___nl__im__37, ___nl__im__1);
#line 371
___nl__bool__39 = !___nl__bool__39;
#line 371
___nl__bool__39 = !___nl__bool__39;
#line 371
if(___nl__bool__39){ goto label_122;}
#line 372
c_rt_lib0move(&___nl__im__40,___get_global_string_const(128));
#line 372
c_rt_lib0move(&___nl__im__40, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__40));
#line 372
c_rt_lib0move(&___nl__im__41, c_rt_lib0get_ref_arr(___nl__im__40, ___nl__int__4));
#line 372
c_rt_lib0move(&___nl__im__42,___get_global_string_const(397));
#line 372
c_rt_lib0move(&___nl__im__42, c_rt_lib0get_ref_hash(___nl__im__41, ___nl__im__42));
#line 372
___nl__int__43 = 1;
#line 372
___nl__int__44 = getIntFromImm(___nl__im__42);
#line 372
___nl__int__45 = ___nl__int__44 + ___nl__int__43;
#line 372
c_rt_lib0move(&___nl__im__42, c_rt_lib0int_new(___nl__int__45));
#line 372
c_rt_lib0move(&___nl__string__46,___get_global_string_const(397));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__41, ___nl__string__46, ___nl__im__42));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__40, ___nl__int__4, ___nl__im__41));
#line 372
c_rt_lib0move(&___nl__string__46,___get_global_string_const(128));
#line 372
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__46, ___nl__im__40));
#line 372
c_rt_lib0clear(&___nl__im__40);
#line 372
c_rt_lib0clear(&___nl__im__41);
#line 372
c_rt_lib0clear(&___nl__im__42);
#line 372
//clear ___nl__int__43;
#line 372
//clear ___nl__int__44;
#line 372
//clear ___nl__int__45;
#line 372
c_rt_lib0clear(&___nl__string__46);
#line 373
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___im__0, ___nl__im__1, ___nl__im__3));
#line 374
goto label_122;
#line 374
label_122:
;
#line 374
//clear ___nl__bool__39;
#line 375
goto label_125;
#line 375
label_125:
;
#line 375
//clear ___nl__bool__5;
#line 375
c_rt_lib0clear(&___nl__im__37);
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
INT  ___nl__int__26 = 0;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__string__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__string__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__string__33 = NULL;
#line 385
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(131)));
#line 385
___nl__bool__2 = hash0has_key(___nl__im__3, ___nl__im__1);
#line 385
c_rt_lib0clear(&___nl__im__3);
#line 385
___nl__bool__2 = !___nl__bool__2;
#line 385
if(___nl__bool__2){ goto label_86;}
#line 386
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(131)));
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
if(___nl__bool__7){ goto label_77;}
#line 387
c_rt_lib0move(&___nl__im__6, c_rt_lib0get_key_iter(___nl__im__9));
#line 387
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__6));
#line 388
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(129)));
#line 388
c_rt_lib0move(&___nl__im__12, hash0get_value(___nl__im__11, ___nl__im__6));
#line 388
___nl__int__10 = getIntFromImm(___nl__im__12);
#line 388
c_rt_lib0clear(&___nl__im__11);
#line 388
c_rt_lib0clear(&___nl__im__12);
#line 389
c_rt_lib0move(&___nl__im__13,___get_global_string_const(128));
#line 389
c_rt_lib0move(&___nl__im__13, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__13));
#line 389
c_rt_lib0move(&___nl__im__14, c_rt_lib0get_ref_arr(___nl__im__13, ___nl__int__10));
#line 389
c_rt_lib0move(&___nl__im__15,___get_global_string_const(397));
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
c_rt_lib0move(&___nl__string__19,___get_global_string_const(397));
#line 389
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__im__14, ___nl__string__19, ___nl__im__15));
#line 389
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__im__13, ___nl__int__10, ___nl__im__14));
#line 389
c_rt_lib0move(&___nl__string__19,___get_global_string_const(128));
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
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec((*___ref___im__0), ___get_global_string_const(128)));
#line 390
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_get(___nl__im__23, ___nl__int__10));
#line 390
c_rt_lib0clear(&___nl__im__23);
#line 390
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(397)));
#line 390
___nl__int__21 = getIntFromImm(___nl__im__24);
#line 390
c_rt_lib0clear(&___nl__im__22);
#line 390
c_rt_lib0clear(&___nl__im__24);
#line 390
___nl__int__25 = 0;
#line 390
___nl__int__26 = ___nl__int__21 == ___nl__int__25;
#line 390
___nl__bool__20 = ___nl__int__26;
#line 390
//clear ___nl__int__21;
#line 390
//clear ___nl__int__25;
#line 390
//clear ___nl__int__26;
#line 390
___nl__bool__20 = !___nl__bool__20;
#line 390
if(___nl__bool__20){ goto label_72;}
#line 391
c_rt_lib0move(&___nl__im__27,___get_global_string_const(129));
#line 391
c_rt_lib0move(&___nl__im__27, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__27));
#line 391
c_rt_lib0delete(hash0delete(&___nl__im__27, ___nl__im__6));
#line 391
c_rt_lib0move(&___nl__string__28,___get_global_string_const(129));
#line 391
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__28, ___nl__im__27));
#line 391
c_rt_lib0clear(&___nl__im__27);
#line 391
c_rt_lib0clear(&___nl__string__28);
#line 392
c_rt_lib0move(&___nl__im__29,___get_global_string_const(130));
#line 392
c_rt_lib0move(&___nl__im__29, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__29));
#line 392
c_rt_lib0move(&___nl__im__30, c_rt_lib0int_new(___nl__int__10));
#line 392
c_rt_lib0delete(array0push(&___nl__im__29, ___nl__im__30));
#line 392
c_rt_lib0move(&___nl__string__31,___get_global_string_const(130));
#line 392
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__31, ___nl__im__29));
#line 392
c_rt_lib0clear(&___nl__im__29);
#line 392
c_rt_lib0clear(&___nl__im__30);
#line 392
c_rt_lib0clear(&___nl__string__31);
#line 393
goto label_72;
#line 393
label_72:
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
label_77:
;
#line 395
c_rt_lib0move(&___nl__im__32,___get_global_string_const(131));
#line 395
c_rt_lib0move(&___nl__im__32, c_rt_lib0get_ref_hash((*___ref___im__0), ___nl__im__32));
#line 395
c_rt_lib0delete(hash0delete(&___nl__im__32, ___nl__im__1));
#line 395
c_rt_lib0move(&___nl__string__33,___get_global_string_const(131));
#line 395
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___im__0, ___nl__string__33, ___nl__im__32));
#line 395
c_rt_lib0clear(&___nl__im__32);
#line 395
c_rt_lib0clear(&___nl__string__33);
#line 396
goto label_86;
#line 396
label_86:
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
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
ImmT  ___nl__im__14 = NULL;
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
c_rt_lib0move(&___nl__im__11,___get_global_string_const(471));
#line 401
c_rt_lib0move(&___nl__im__13, c_rt_lib0int_new(___nl__int__2));
#line 401
c_rt_lib0move(&___nl__im__12, ptd0int_to_string(___nl__im__13));
#line 401
c_rt_lib0clear(&___nl__im__13);
#line 401
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__12));
#line 401
c_rt_lib0clear(&___nl__im__11);
#line 401
c_rt_lib0clear(&___nl__im__12);
#line 401
c_rt_lib0move(&___nl__im__14,___get_global_string_const(320));
#line 401
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__14));
#line 401
c_rt_lib0clear(&___nl__im__10);
#line 401
c_rt_lib0clear(&___nl__im__14);
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
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
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
c_rt_lib0move(&___nl__im__8,___get_global_string_const(472));
#line 406
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__2));
#line 406
c_rt_lib0move(&___nl__im__9, ptd0int_to_string(___nl__im__10));
#line 406
c_rt_lib0clear(&___nl__im__10);
#line 406
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 406
c_rt_lib0clear(&___nl__im__8);
#line 406
c_rt_lib0clear(&___nl__im__9);
#line 406
c_rt_lib0move(&___nl__im__11,___get_global_string_const(320));
#line 406
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__11));
#line 406
c_rt_lib0clear(&___nl__im__7);
#line 406
c_rt_lib0clear(&___nl__im__11);
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
ImmT  ___nl__im__14 = NULL;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
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
c_rt_lib0move(&___nl__im__9,___get_global_string_const(37));
#line 411
c_rt_lib0move(&___nl__im__10,___get_global_string_const(473));
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
c_rt_lib0move(&___nl__im__13,___get_global_string_const(455));
#line 411
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 411
c_rt_lib0clear(&___nl__im__8);
#line 411
c_rt_lib0clear(&___nl__im__13);
#line 411
c_rt_lib0move(&___nl__im__15, c_rt_lib0int_new(___nl__int__2));
#line 411
c_rt_lib0move(&___nl__im__14, ptd0int_to_string(___nl__im__15));
#line 411
c_rt_lib0clear(&___nl__im__15);
#line 411
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__14));
#line 411
c_rt_lib0clear(&___nl__im__7);
#line 411
c_rt_lib0clear(&___nl__im__14);
#line 411
c_rt_lib0move(&___nl__im__16,___get_global_string_const(320));
#line 411
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__16));
#line 411
c_rt_lib0clear(&___nl__im__6);
#line 411
c_rt_lib0clear(&___nl__im__16);
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
ImmT  ___nl__im__9 = NULL;
#line 415
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(466)));
#line 415
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_type_name(___nl__im__6));
#line 415
c_rt_lib0clear(&___nl__im__6);
#line 415
c_rt_lib0move(&___nl__im__7,___get_global_string_const(467));
#line 415
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 415
c_rt_lib0clear(&___nl__im__5);
#line 415
c_rt_lib0clear(&___nl__im__7);
#line 415
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_function_name(___nl__im__0, ___nl__im__1));
#line 415
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__8));
#line 415
c_rt_lib0clear(&___nl__im__4);
#line 415
c_rt_lib0clear(&___nl__im__8);
#line 415
c_rt_lib0move(&___nl__im__9,___get_global_string_const(474));
#line 415
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__9));
#line 415
c_rt_lib0clear(&___nl__im__3);
#line 415
c_rt_lib0clear(&___nl__im__9);
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
INT  ___nl__int__31 = 0;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT * ___nl__im_ptr__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT * ___nl__im_ptr__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
ImmT  ___nl__im__43 = NULL;
ImmT  ___nl__im__44 = NULL;
ImmT  ___nl__im__45 = NULL;
ImmT * ___nl__im_ptr__46 = NULL;
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
ImmT * ___nl__im_ptr__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
ImmT  ___nl__im__68 = NULL;
ImmT  ___nl__im__69 = NULL;
ImmT * ___nl__im_ptr__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
ImmT  ___nl__im__76 = NULL;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT * ___nl__im_ptr__80 = NULL;
ImmT  ___nl__im__81 = NULL;
ImmT  ___nl__im__82 = NULL;
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT * ___nl__im_ptr__86 = NULL;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
ImmT  ___nl__im__89 = NULL;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
INT  ___nl__int__92 = 0;
bool  ___nl__bool__93 = false;
INT  ___nl__int__94 = 0;
ImmT  ___nl__im__95 = NULL;
ImmT  ___nl__im__96 = NULL;
bool  ___nl__bool__97 = false;
ImmT  ___nl__im__98 = NULL;
ImmT  ___nl__im__99 = NULL;
bool  ___nl__bool__100 = false;
ImmT  ___nl__im__101 = NULL;
ImmT  ___nl__im__102 = NULL;
ImmT  ___nl__im__103 = NULL;
ImmT  ___nl__im__104 = NULL;
ImmT  ___nl__im__105 = NULL;
bool  ___nl__bool__106 = false;
ImmT  ___nl__im__107 = NULL;
ImmT  ___nl__im__108 = NULL;
ImmT  ___nl__im__109 = NULL;
ImmT  ___nl__im__110 = NULL;
INT  ___nl__int__111 = 0;
INT  ___nl__int__112 = 0;
INT  ___nl__int__113 = 0;
bool  ___nl__bool__114 = false;
INT  ___nl__int__115 = 0;
ImmT  ___nl__im__116 = NULL;
bool  ___nl__bool__117 = false;
ImmT  ___nl__im__118 = NULL;
ImmT  ___nl__im__119 = NULL;
bool  ___nl__bool__120 = false;
ImmT  ___nl__im__121 = NULL;
ImmT  ___nl__im__122 = NULL;
ImmT  ___nl__im__123 = NULL;
ImmT  ___nl__im__124 = NULL;
ImmT * ___nl__im_ptr__125 = NULL;
ImmT  ___nl__im__126 = NULL;
ImmT  ___nl__im__127 = NULL;
ImmT  ___nl__im__128 = NULL;
ImmT * ___nl__im_ptr__129 = NULL;
ImmT  ___nl__im__130 = NULL;
ImmT  ___nl__im__131 = NULL;
ImmT  ___nl__im__132 = NULL;
ImmT * ___nl__im_ptr__133 = NULL;
ImmT  ___nl__im__134 = NULL;
ImmT  ___nl__im__135 = NULL;
ImmT  ___nl__im__136 = NULL;
ImmT * ___nl__im_ptr__137 = NULL;
ImmT  ___nl__im__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
ImmT  ___nl__im__141 = NULL;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
INT  ___nl__int__144 = 0;
INT  ___nl__int__145 = 0;
INT  ___nl__int__146 = 0;
bool  ___nl__bool__147 = false;
INT  ___nl__int__148 = 0;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT * ___nl__im_ptr__152 = NULL;
ImmT  ___nl__im__153 = NULL;
bool  ___nl__bool__154 = false;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
bool  ___nl__bool__160 = false;
ImmT  ___nl__im__161 = NULL;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
ImmT * ___nl__im_ptr__165 = NULL;
ImmT  ___nl__im__166 = NULL;
ImmT  ___nl__im__167 = NULL;
ImmT  ___nl__im__168 = NULL;
ImmT  ___nl__im__169 = NULL;
ImmT  ___nl__im__170 = NULL;
ImmT  ___nl__im__171 = NULL;
ImmT  ___nl__im__172 = NULL;
INT  ___nl__int__173 = 0;
INT  ___nl__int__174 = 0;
INT  ___nl__int__175 = 0;
bool  ___nl__bool__176 = false;
INT  ___nl__int__177 = 0;
ImmT  ___nl__im__178 = NULL;
bool  ___nl__bool__179 = false;
bool  ___nl__bool__180 = false;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT * ___nl__im_ptr__184 = NULL;
ImmT  ___nl__im__185 = NULL;
ImmT  ___nl__im__186 = NULL;
ImmT  ___nl__im__187 = NULL;
ImmT * ___nl__im_ptr__188 = NULL;
ImmT  ___nl__im__189 = NULL;
INT  ___nl__int__190 = 0;
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
INT  ___nl__int__201 = 0;
INT  ___nl__int__202 = 0;
bool  ___nl__bool__203 = false;
INT  ___nl__int__204 = 0;
ImmT  ___nl__im__205 = NULL;
ImmT  ___nl__im__206 = NULL;
ImmT  ___nl__im__207 = NULL;
ImmT  ___nl__im__208 = NULL;
ImmT  ___nl__im__209 = NULL;
ImmT  ___nl__im__210 = NULL;
ImmT  ___nl__im__211 = NULL;
ImmT  ___nl__im__212 = NULL;
ImmT  ___nl__im__213 = NULL;
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
ImmT  ___nl__im__229 = NULL;
ImmT  ___nl__im__230 = NULL;
ImmT  ___nl__im__231 = NULL;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
INT  ___nl__int__237 = 0;
INT  ___nl__int__238 = 0;
bool  ___nl__bool__239 = false;
INT  ___nl__int__240 = 0;
bool  ___nl__bool__241 = false;
INT  ___nl__int__242 = 0;
INT  ___nl__int__243 = 0;
ImmT  ___nl__im__244 = NULL;
ImmT  ___nl__im__245 = NULL;
ImmT  ___nl__im__246 = NULL;
ImmT  ___nl__im__247 = NULL;
ImmT  ___nl__im__248 = NULL;
bool  ___nl__bool__249 = false;
ImmT  ___nl__im__250 = NULL;
ImmT  ___nl__im__251 = NULL;
ImmT  ___nl__im__252 = NULL;
ImmT  ___nl__im__253 = NULL;
ImmT  ___nl__im__254 = NULL;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__im__257 = NULL;
bool  ___nl__bool__258 = false;
ImmT  ___nl__im__259 = NULL;
ImmT  ___nl__im__260 = NULL;
ImmT * ___nl__im_ptr__261 = NULL;
ImmT  ___nl__im__262 = NULL;
ImmT  ___nl__im__263 = NULL;
ImmT  ___nl__im__264 = NULL;
ImmT  ___nl__im__265 = NULL;
ImmT  ___nl__im__266 = NULL;
ImmT  ___nl__im__267 = NULL;
ImmT  ___nl__im__268 = NULL;
ImmT  ___nl__im__269 = NULL;
ImmT  ___nl__im__270 = NULL;
ImmT * ___nl__im_ptr__271 = NULL;
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
ImmT * ___nl__im_ptr__288 = NULL;
anon_type00ownhashanon_type00bool* ___nl__hash_ptr__289 = NULL;
ImmT  ___nl__im__290 = NULL;
bool  ___nl__bool__291 = false;
bool * ___nl__bool_ptr__292 = NULL;
INT  ___nl__int__293 = 0;
ImmT  ___nl__im__294 = NULL;
ImmT  ___nl__im__295 = NULL;
ImmT  ___nl__im__296 = NULL;
ImmT  ___nl__im__297 = NULL;
ImmT  ___nl__im__298 = NULL;
ImmT * ___nl__im_ptr__299 = NULL;
ImmT * ___nl__im_ptr__300 = NULL;
#line 419
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_cr());
#line 419
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__3));
#line 419
c_rt_lib0clear(&___nl__im__3);
#line 420
c_rt_lib0move(&___nl__im__5,___get_global_string_const(428));
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
c_rt_lib0move(&___nl__im__9,___get_global_string_const(269));
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
c_rt_lib0move(&___nl__im__13,___get_global_string_const(475));
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
c_rt_lib0move(&___nl__im__17,___get_global_string_const(269));
#line 424
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_include(___nl__im__17));
#line 424
c_rt_lib0clear(&___nl__im__17);
#line 424
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__16));
#line 424
c_rt_lib0clear(&___nl__im__16);
#line 425
c_rt_lib0move(&___nl__im__19,___get_global_string_const(429));
#line 425
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_include(___nl__im__19));
#line 425
c_rt_lib0clear(&___nl__im__19);
#line 425
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__18));
#line 425
c_rt_lib0clear(&___nl__im__18);
#line 426
c_rt_lib0move(&___nl__im__21,___get_global_string_const(476));
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
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(477)));
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
___nl__int__31 = ___nl__int__27 >= ___nl__int__29;
#line 428
___nl__bool__30 = ___nl__int__31;
#line 428
if(___nl__bool__30){ goto label_76;}
#line 428
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_get(___nl__im__25, ___nl__int__27));
#line 428
c_rt_lib0copy(&___nl__im__26, ___nl__im__32);
#line 429
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_include(___nl__im__26));
#line 429
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__33));
#line 429
c_rt_lib0clear(&___nl__im__33);
#line 430
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_include(___nl__im__26));
#line 430
c_rt_lib0move(&___nl__im__36, string0lf());
#line 430
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 430
c_rt_lib0clear(&___nl__im__35);
#line 430
c_rt_lib0clear(&___nl__im__36);
#line 430
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__34));
#line 430
c_rt_lib0clear(&___nl__im__34);
#line 430
c_rt_lib0clear(&___nl__im__26);
#line 431
___nl__int__27 = ___nl__int__27 + ___nl__int__28;
#line 431
goto label_57;
#line 431
label_76:
;
#line 432
___nl__im_ptr__38 = &((*___ref___rec__0).ret0field);
#line 432
c_rt_lib0copy(&___nl__im__37, (*___nl__im_ptr__38));
#line 432
___nl__im_ptr__38 = NULL;
#line 433
c_rt_lib0move(&___nl__im__39,___get_global_string_const(37));
#line 433
___nl__im_ptr__40 = &((*___ref___rec__0).ret0field);
#line 433
c_rt_lib0copy(___nl__im_ptr__40, ___nl__im__39);
#line 433
___nl__im_ptr__40 = NULL;
#line 433
c_rt_lib0clear(&___nl__im__39);
#line 434
c_rt_lib0move(&___nl__im__44,___get_global_string_const(478));
#line 434
___nl__im_ptr__46 = &((*___ref___rec__0).mod_name0field);
#line 434
c_rt_lib0copy(&___nl__im__45, (*___nl__im_ptr__46));
#line 434
___nl__im_ptr__46 = NULL;
#line 434
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__45));
#line 434
c_rt_lib0clear(&___nl__im__44);
#line 434
c_rt_lib0clear(&___nl__im__45);
#line 434
c_rt_lib0move(&___nl__im__47,___get_global_string_const(479));
#line 434
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__47));
#line 434
c_rt_lib0clear(&___nl__im__43);
#line 434
c_rt_lib0clear(&___nl__im__47);
#line 434
c_rt_lib0move(&___nl__im__48, string0lf());
#line 434
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__48));
#line 434
c_rt_lib0clear(&___nl__im__42);
#line 434
c_rt_lib0clear(&___nl__im__48);
#line 434
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__41));
#line 434
c_rt_lib0clear(&___nl__im__41);
#line 435
c_rt_lib0move(&___nl__im__51,___get_global_string_const(480));
#line 435
c_rt_lib0move(&___nl__im__52, generator_c_priv0im_t());
#line 435
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 435
c_rt_lib0clear(&___nl__im__51);
#line 435
c_rt_lib0clear(&___nl__im__52);
#line 435
c_rt_lib0move(&___nl__im__53,___get_global_string_const(481));
#line 435
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 435
c_rt_lib0clear(&___nl__im__50);
#line 435
c_rt_lib0clear(&___nl__im__53);
#line 435
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__49));
#line 435
c_rt_lib0clear(&___nl__im__49);
#line 436
c_rt_lib0move(&___nl__im__56,___get_global_string_const(482));
#line 436
c_rt_lib0move(&___nl__im__58,___get_global_string_const(37));
#line 436
c_rt_lib0move(&___nl__im__59,___get_global_string_const(483));
#line 436
___nl__im_ptr__61 = &((*___ref___rec__0).mod_name0field);
#line 436
c_rt_lib0copy(&___nl__im__60, (*___nl__im_ptr__61));
#line 436
___nl__im_ptr__61 = NULL;
#line 436
c_rt_lib0move(&___nl__im__57, generator_c_priv0get_fun_name(___nl__im__58, ___nl__im__59, ___nl__im__60));
#line 436
c_rt_lib0clear(&___nl__im__58);
#line 436
c_rt_lib0clear(&___nl__im__59);
#line 436
c_rt_lib0clear(&___nl__im__60);
#line 436
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__57));
#line 436
c_rt_lib0clear(&___nl__im__56);
#line 436
c_rt_lib0clear(&___nl__im__57);
#line 436
c_rt_lib0move(&___nl__im__62,___get_global_string_const(484));
#line 436
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__62));
#line 436
c_rt_lib0clear(&___nl__im__55);
#line 436
c_rt_lib0clear(&___nl__im__62);
#line 436
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__54));
#line 436
c_rt_lib0clear(&___nl__im__54);
#line 437
c_rt_lib0move(&___nl__im__65, generator_c_priv0im_t());
#line 437
c_rt_lib0move(&___nl__im__67,___get_global_string_const(37));
#line 437
c_rt_lib0move(&___nl__im__68,___get_global_string_const(485));
#line 437
___nl__im_ptr__70 = &((*___ref___rec__0).mod_name0field);
#line 437
c_rt_lib0copy(&___nl__im__69, (*___nl__im_ptr__70));
#line 437
___nl__im_ptr__70 = NULL;
#line 437
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_fun_name(___nl__im__67, ___nl__im__68, ___nl__im__69));
#line 437
c_rt_lib0clear(&___nl__im__67);
#line 437
c_rt_lib0clear(&___nl__im__68);
#line 437
c_rt_lib0clear(&___nl__im__69);
#line 437
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__66));
#line 437
c_rt_lib0clear(&___nl__im__65);
#line 437
c_rt_lib0clear(&___nl__im__66);
#line 437
c_rt_lib0move(&___nl__im__71,___get_global_string_const(486));
#line 437
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__64, ___nl__im__71));
#line 437
c_rt_lib0clear(&___nl__im__64);
#line 437
c_rt_lib0clear(&___nl__im__71);
#line 437
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__63));
#line 437
c_rt_lib0clear(&___nl__im__63);
#line 438
c_rt_lib0move(&___nl__im__75, generator_c_priv0im_t());
#line 438
c_rt_lib0move(&___nl__im__77,___get_global_string_const(37));
#line 438
c_rt_lib0move(&___nl__im__78,___get_global_string_const(473));
#line 438
___nl__im_ptr__80 = &((*___ref___rec__0).mod_name0field);
#line 438
c_rt_lib0copy(&___nl__im__79, (*___nl__im_ptr__80));
#line 438
___nl__im_ptr__80 = NULL;
#line 438
c_rt_lib0move(&___nl__im__76, generator_c_priv0get_fun_name(___nl__im__77, ___nl__im__78, ___nl__im__79));
#line 438
c_rt_lib0clear(&___nl__im__77);
#line 438
c_rt_lib0clear(&___nl__im__78);
#line 438
c_rt_lib0clear(&___nl__im__79);
#line 438
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__76));
#line 438
c_rt_lib0clear(&___nl__im__75);
#line 438
c_rt_lib0clear(&___nl__im__76);
#line 438
c_rt_lib0move(&___nl__im__81,___get_global_string_const(486));
#line 438
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__81));
#line 438
c_rt_lib0clear(&___nl__im__74);
#line 438
c_rt_lib0clear(&___nl__im__81);
#line 438
c_rt_lib0move(&___nl__im__82, string0lf());
#line 438
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__82));
#line 438
c_rt_lib0clear(&___nl__im__73);
#line 438
c_rt_lib0clear(&___nl__im__82);
#line 438
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__72));
#line 438
c_rt_lib0clear(&___nl__im__72);
#line 439
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(208)));
#line 439
___nl__im_ptr__86 = &((*___ref___rec__0).mod_name0field);
#line 439
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 439
___nl__im_ptr__86 = NULL;
#line 439
c_rt_lib0move(&___nl__im__83, generator_c_struct_dependence_sort0sort(___nl__im__84, ___nl__im__85));
#line 439
c_rt_lib0clear(&___nl__im__84);
#line 439
c_rt_lib0clear(&___nl__im__85);
#line 440
c_rt_lib0move(&___nl__im__87, c_rt_lib0hash_mk(0));
#line 441
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(208)));
#line 441
___nl__int__90 = 0;
#line 441
___nl__int__91 = 1;
#line 441
___nl__int__92 = c_rt_lib0array_len(___nl__im__88);
#line 441
label_186:
;
#line 441
___nl__int__94 = ___nl__int__90 >= ___nl__int__92;
#line 441
___nl__bool__93 = ___nl__int__94;
#line 441
if(___nl__bool__93){ goto label_228;}
#line 441
c_rt_lib0move(&___nl__im__95, c_rt_lib0array_get(___nl__im__88, ___nl__int__90));
#line 441
c_rt_lib0copy(&___nl__im__89, ___nl__im__95);
#line 442
c_rt_lib0move(&___nl__im__96, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_string_const(209)));
#line 442
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__96, ___get_global_string_const(210));
#line 442
if(___nl__bool__97){ goto label_200;}
#line 447
___nl__bool__97 = c_rt_lib0priv_is(___nl__im__96, ___get_global_string_const(465));
#line 447
if(___nl__bool__97){ goto label_222;}
#line 447
c_rt_lib0move(&___nl__im__98,___get_global_string_const(16));
#line 447
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(2, ___nl__im__98, ___nl__im__96));
#line 447
nl_die_arg(___nl__im__98);
#line 442
label_200:
;
#line 443
c_rt_lib0move(&___nl__im__99, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_string_const(166)));
#line 443
___nl__bool__100 = c_rt_lib0priv_is(___nl__im__99, ___get_global_string_const(76));
#line 443
if(___nl__bool__100){ goto label_209;}
#line 445
___nl__bool__100 = c_rt_lib0priv_is(___nl__im__99, ___get_global_string_const(77));
#line 445
if(___nl__bool__100){ goto label_218;}
#line 445
c_rt_lib0move(&___nl__im__101,___get_global_string_const(16));
#line 445
c_rt_lib0move(&___nl__im__101, c_rt_lib0array_mk(2, ___nl__im__101, ___nl__im__99));
#line 445
nl_die_arg(___nl__im__101);
#line 443
label_209:
;
#line 443
c_rt_lib0move(&___nl__im__103, c_rt_lib0priv_as(___nl__im__99, ___get_global_string_const(76)));
#line 443
c_rt_lib0copy(&___nl__im__102, ___nl__im__103);
#line 444
c_rt_lib0move(&___nl__im__104, c_rt_lib0hash_get_value_dec(___nl__im__89, ___get_global_string_const(167)));
#line 444
c_rt_lib0move(&___nl__im__105,___get_global_string_const(37));
#line 444
c_rt_lib0delete(hash0set_value(&___nl__im__87, ___nl__im__104, ___nl__im__105));
#line 444
c_rt_lib0clear(&___nl__im__104);
#line 444
c_rt_lib0clear(&___nl__im__105);
#line 445
goto label_220;
#line 445
label_218:
;
#line 446
goto label_220;
#line 446
label_220:
;
#line 447
goto label_224;
#line 447
label_222:
;
#line 448
goto label_224;
#line 448
label_224:
;
#line 448
c_rt_lib0clear(&___nl__im__89);
#line 449
___nl__int__90 = ___nl__int__90 + ___nl__int__91;
#line 449
goto label_186;
#line 449
label_228:
;
#line 450
___nl__bool__106 = c_rt_lib0priv_is(___nl__im__83, ___get_global_string_const(487));
#line 450
if(___nl__bool__106){ goto label_236;}
#line 462
___nl__bool__106 = c_rt_lib0priv_is(___nl__im__83, ___get_global_string_const(488));
#line 462
if(___nl__bool__106){ goto label_310;}
#line 462
c_rt_lib0move(&___nl__im__107,___get_global_string_const(16));
#line 462
c_rt_lib0move(&___nl__im__107, c_rt_lib0array_mk(2, ___nl__im__107, ___nl__im__83));
#line 462
nl_die_arg(___nl__im__107);
#line 450
label_236:
;
#line 450
c_rt_lib0move(&___nl__im__109, c_rt_lib0priv_as(___nl__im__83, ___get_global_string_const(487)));
#line 450
c_rt_lib0copy(&___nl__im__108, ___nl__im__109);
#line 451
___nl__int__111 = 0;
#line 451
___nl__int__112 = 1;
#line 451
___nl__int__113 = c_rt_lib0array_len(___nl__im__108);
#line 451
label_242:
;
#line 451
___nl__int__115 = ___nl__int__111 >= ___nl__int__113;
#line 451
___nl__bool__114 = ___nl__int__115;
#line 451
if(___nl__bool__114){ goto label_308;}
#line 451
c_rt_lib0move(&___nl__im__116, c_rt_lib0array_get(___nl__im__108, ___nl__int__111));
#line 451
c_rt_lib0copy(&___nl__im__110, ___nl__im__116);
#line 452
c_rt_lib0move(&___nl__im__118, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(167)));
#line 452
___nl__bool__117 = hash0has_key(___nl__im__87, ___nl__im__118);
#line 452
c_rt_lib0clear(&___nl__im__118);
#line 452
___nl__bool__117 = !___nl__bool__117;
#line 453
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(489)));
#line 453
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__119, ___get_global_string_const(490));
#line 453
if(___nl__bool__120){ goto label_262;}
#line 455
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__119, ___get_global_string_const(491));
#line 455
if(___nl__bool__120){ goto label_273;}
#line 457
___nl__bool__120 = c_rt_lib0priv_is(___nl__im__119, ___get_global_string_const(492));
#line 457
if(___nl__bool__120){ goto label_284;}
#line 457
c_rt_lib0move(&___nl__im__121,___get_global_string_const(16));
#line 457
c_rt_lib0move(&___nl__im__121, c_rt_lib0array_mk(2, ___nl__im__121, ___nl__im__119));
#line 457
nl_die_arg(___nl__im__121);
#line 453
label_262:
;
#line 454
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(167)));
#line 454
c_rt_lib0move(&___nl__im__123, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(493)));
#line 454
___nl__im_ptr__125 = &((*___ref___rec__0).mod_name0field);
#line 454
c_rt_lib0copy(&___nl__im__124, (*___nl__im_ptr__125));
#line 454
___nl__im_ptr__125 = NULL;
#line 454
c_rt_lib0delete(generator_c_priv0print_func_type_struct_def(___ref___rec__0, ___nl__im__122, ___nl__im__123, ___nl__im__124, ___nl__bool__117));
#line 454
c_rt_lib0clear(&___nl__im__122);
#line 454
c_rt_lib0clear(&___nl__im__123);
#line 454
c_rt_lib0clear(&___nl__im__124);
#line 455
goto label_304;
#line 455
label_273:
;
#line 456
c_rt_lib0move(&___nl__im__126, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(167)));
#line 456
c_rt_lib0move(&___nl__im__127, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(493)));
#line 456
___nl__im_ptr__129 = &((*___ref___rec__0).mod_name0field);
#line 456
c_rt_lib0copy(&___nl__im__128, (*___nl__im_ptr__129));
#line 456
___nl__im_ptr__129 = NULL;
#line 456
c_rt_lib0delete(generator_c_priv0print_func_type_struct_decl(___ref___rec__0, ___nl__im__126, ___nl__im__127, ___nl__im__128, ___nl__bool__117, ___nl__im__2));
#line 456
c_rt_lib0clear(&___nl__im__126);
#line 456
c_rt_lib0clear(&___nl__im__127);
#line 456
c_rt_lib0clear(&___nl__im__128);
#line 457
goto label_304;
#line 457
label_284:
;
#line 458
c_rt_lib0move(&___nl__im__130, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(167)));
#line 458
c_rt_lib0move(&___nl__im__131, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(493)));
#line 458
___nl__im_ptr__133 = &((*___ref___rec__0).mod_name0field);
#line 458
c_rt_lib0copy(&___nl__im__132, (*___nl__im_ptr__133));
#line 458
___nl__im_ptr__133 = NULL;
#line 458
c_rt_lib0delete(generator_c_priv0print_func_type_struct_def(___ref___rec__0, ___nl__im__130, ___nl__im__131, ___nl__im__132, ___nl__bool__117));
#line 458
c_rt_lib0clear(&___nl__im__130);
#line 458
c_rt_lib0clear(&___nl__im__131);
#line 458
c_rt_lib0clear(&___nl__im__132);
#line 459
c_rt_lib0move(&___nl__im__134, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(167)));
#line 459
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__110, ___get_global_string_const(493)));
#line 459
___nl__im_ptr__137 = &((*___ref___rec__0).mod_name0field);
#line 459
c_rt_lib0copy(&___nl__im__136, (*___nl__im_ptr__137));
#line 459
___nl__im_ptr__137 = NULL;
#line 459
c_rt_lib0delete(generator_c_priv0print_func_type_struct_decl(___ref___rec__0, ___nl__im__134, ___nl__im__135, ___nl__im__136, ___nl__bool__117, ___nl__im__2));
#line 459
c_rt_lib0clear(&___nl__im__134);
#line 459
c_rt_lib0clear(&___nl__im__135);
#line 459
c_rt_lib0clear(&___nl__im__136);
#line 460
goto label_304;
#line 460
label_304:
;
#line 460
c_rt_lib0clear(&___nl__im__110);
#line 461
___nl__int__111 = ___nl__int__111 + ___nl__int__112;
#line 461
goto label_242;
#line 461
label_308:
;
#line 462
goto label_321;
#line 462
label_310:
;
#line 463
c_rt_lib0move(&___nl__im__139,___get_global_string_const(494));
#line 463
c_rt_lib0move(&___nl__im__140, string0lf());
#line 463
c_rt_lib0move(&___nl__im__138, c_rt_lib0concat_new(___nl__im__139, ___nl__im__140));
#line 463
c_rt_lib0clear(&___nl__im__139);
#line 463
c_rt_lib0clear(&___nl__im__140);
#line 463
c_rt_lib0delete(nl0print(___nl__im__138));
#line 463
c_rt_lib0clear(&___nl__im__138);
#line 464
c_rt_lib0move(&___nl__im__141, c_rt_lib0array_mk(0));
#line 464
nl_die_arg(___nl__im__141);
#line 465
goto label_321;
#line 465
label_321:
;
#line 466
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(208)));
#line 466
___nl__int__144 = 0;
#line 466
___nl__int__145 = 1;
#line 466
___nl__int__146 = c_rt_lib0array_len(___nl__im__142);
#line 466
label_326:
;
#line 466
___nl__int__148 = ___nl__int__144 >= ___nl__int__146;
#line 466
___nl__bool__147 = ___nl__int__148;
#line 466
if(___nl__bool__147){ goto label_389;}
#line 466
c_rt_lib0move(&___nl__im__149, c_rt_lib0array_get(___nl__im__142, ___nl__int__144));
#line 466
c_rt_lib0copy(&___nl__im__143, ___nl__im__149);
#line 467
___nl__im_ptr__152 = &((*___ref___rec__0).mod_name0field);
#line 467
c_rt_lib0copy(&___nl__im__151, (*___nl__im_ptr__152));
#line 467
___nl__im_ptr__152 = NULL;
#line 467
c_rt_lib0move(&___nl__im__150, generator_c_priv0get_function_header(___nl__im__143, ___nl__im__151));
#line 467
c_rt_lib0clear(&___nl__im__151);
#line 468
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__143, ___get_global_string_const(209)));
#line 468
___nl__bool__154 = c_rt_lib0priv_is(___nl__im__153, ___get_global_string_const(210));
#line 468
if(___nl__bool__154){ goto label_345;}
#line 473
___nl__bool__154 = c_rt_lib0priv_is(___nl__im__153, ___get_global_string_const(465));
#line 473
if(___nl__bool__154){ goto label_378;}
#line 473
c_rt_lib0move(&___nl__im__155,___get_global_string_const(16));
#line 473
c_rt_lib0move(&___nl__im__155, c_rt_lib0array_mk(2, ___nl__im__155, ___nl__im__153));
#line 473
nl_die_arg(___nl__im__155);
#line 468
label_345:
;
#line 469
c_rt_lib0move(&___nl__im__158,___get_global_string_const(440));
#line 469
c_rt_lib0move(&___nl__im__157, c_rt_lib0concat_new(___nl__im__150, ___nl__im__158));
#line 469
c_rt_lib0clear(&___nl__im__158);
#line 469
c_rt_lib0move(&___nl__im__159, string0lf());
#line 469
c_rt_lib0move(&___nl__im__156, c_rt_lib0concat_new(___nl__im__157, ___nl__im__159));
#line 469
c_rt_lib0clear(&___nl__im__157);
#line 469
c_rt_lib0clear(&___nl__im__159);
#line 469
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__156));
#line 469
c_rt_lib0clear(&___nl__im__156);
#line 470
___nl__bool__160 = generator_c_priv0takes_own_arg(___nl__im__143);
#line 470
___nl__bool__160 = !___nl__bool__160;
#line 470
___nl__bool__160 = !___nl__bool__160;
#line 470
if(___nl__bool__160){ goto label_375;}
#line 471
___nl__im_ptr__165 = &((*___ref___rec__0).mod_name0field);
#line 471
c_rt_lib0copy(&___nl__im__164, (*___nl__im_ptr__165));
#line 471
___nl__im_ptr__165 = NULL;
#line 471
c_rt_lib0move(&___nl__im__163, generator_c_priv0get_func_ptr_header(___nl__im__143, ___nl__im__164));
#line 471
c_rt_lib0clear(&___nl__im__164);
#line 471
c_rt_lib0move(&___nl__im__166,___get_global_string_const(440));
#line 471
c_rt_lib0move(&___nl__im__162, c_rt_lib0concat_new(___nl__im__163, ___nl__im__166));
#line 471
c_rt_lib0clear(&___nl__im__163);
#line 471
c_rt_lib0clear(&___nl__im__166);
#line 471
c_rt_lib0move(&___nl__im__167, string0lf());
#line 471
c_rt_lib0move(&___nl__im__161, c_rt_lib0concat_new(___nl__im__162, ___nl__im__167));
#line 471
c_rt_lib0clear(&___nl__im__162);
#line 471
c_rt_lib0clear(&___nl__im__167);
#line 471
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__161));
#line 471
c_rt_lib0clear(&___nl__im__161);
#line 472
goto label_375;
#line 472
label_375:
;
#line 472
//clear ___nl__bool__160;
#line 473
goto label_385;
#line 473
label_378:
;
#line 474
c_rt_lib0move(&___nl__im__169,___get_global_string_const(440));
#line 474
c_rt_lib0move(&___nl__im__168, c_rt_lib0concat_new(___nl__im__150, ___nl__im__169));
#line 474
c_rt_lib0clear(&___nl__im__169);
#line 474
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__168));
#line 474
c_rt_lib0clear(&___nl__im__168);
#line 475
goto label_385;
#line 475
label_385:
;
#line 475
c_rt_lib0clear(&___nl__im__143);
#line 476
___nl__int__144 = ___nl__int__144 + ___nl__int__145;
#line 476
goto label_326;
#line 476
label_389:
;
#line 478
c_rt_lib0move(&___nl__im__170, string0lf());
#line 478
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__170));
#line 478
c_rt_lib0clear(&___nl__im__170);
#line 479
c_rt_lib0move(&___nl__im__171, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(208)));
#line 479
___nl__int__173 = 0;
#line 479
___nl__int__174 = 1;
#line 479
___nl__int__175 = c_rt_lib0array_len(___nl__im__171);
#line 479
label_397:
;
#line 479
___nl__int__177 = ___nl__int__173 >= ___nl__int__175;
#line 479
___nl__bool__176 = ___nl__int__177;
#line 479
if(___nl__bool__176){ goto label_685;}
#line 479
c_rt_lib0move(&___nl__im__178, c_rt_lib0array_get(___nl__im__171, ___nl__int__173));
#line 479
c_rt_lib0copy(&___nl__im__172, ___nl__im__178);
#line 480
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__172, ___get_global_string_const(209)));
#line 480
___nl__bool__179 = c_rt_lib0priv_is(___nl__im__181, ___get_global_string_const(210));
#line 480
c_rt_lib0clear(&___nl__im__181);
#line 480
___nl__bool__180 = !___nl__bool__179;
#line 480
if(___nl__bool__180){ goto label_410;}
#line 480
___nl__bool__179 = generator_c_priv0takes_own_arg(___nl__im__172);
#line 480
___nl__bool__179 = !___nl__bool__179;
#line 480
label_410:
;
#line 480
//clear ___nl__bool__180;
#line 480
___nl__bool__179 = !___nl__bool__179;
#line 480
if(___nl__bool__179){ goto label_590;}
#line 481
___nl__im_ptr__184 = &((*___ref___rec__0).mod_name0field);
#line 481
c_rt_lib0copy(&___nl__im__183, (*___nl__im_ptr__184));
#line 481
___nl__im_ptr__184 = NULL;
#line 481
c_rt_lib0move(&___nl__im__182, generator_c_priv0get_function_name(___nl__im__172, ___nl__im__183));
#line 481
c_rt_lib0clear(&___nl__im__183);
#line 482
___nl__im_ptr__188 = &((*___ref___rec__0).mod_name0field);
#line 482
c_rt_lib0copy(&___nl__im__187, (*___nl__im_ptr__188));
#line 482
___nl__im_ptr__188 = NULL;
#line 482
c_rt_lib0move(&___nl__im__186, generator_c_priv0get_func_ptr_header(___nl__im__172, ___nl__im__187));
#line 482
c_rt_lib0clear(&___nl__im__187);
#line 482
c_rt_lib0move(&___nl__im__189,___get_global_string_const(304));
#line 482
c_rt_lib0move(&___nl__im__185, c_rt_lib0concat_new(___nl__im__186, ___nl__im__189));
#line 482
c_rt_lib0clear(&___nl__im__186);
#line 482
c_rt_lib0clear(&___nl__im__189);
#line 482
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__185));
#line 482
c_rt_lib0clear(&___nl__im__185);
#line 483
c_rt_lib0move(&___nl__im__191, c_rt_lib0hash_get_value_dec(___nl__im__172, ___get_global_string_const(214)));
#line 483
___nl__int__190 = c_rt_lib0array_len(___nl__im__191);
#line 483
c_rt_lib0clear(&___nl__im__191);
#line 484
c_rt_lib0move(&___nl__im__194,___get_global_string_const(495));
#line 484
c_rt_lib0move(&___nl__im__196,___get_global_string_const(496));
#line 484
c_rt_lib0move(&___nl__im__198, c_rt_lib0int_new(___nl__int__190));
#line 484
c_rt_lib0move(&___nl__im__197, ptd0int_to_string(___nl__im__198));
#line 484
c_rt_lib0clear(&___nl__im__198);
#line 484
c_rt_lib0move(&___nl__im__199, generator_c_priv0get_string(___nl__im__182));
#line 484
c_rt_lib0move(&___nl__im__195, c_rt_lib0array_mk(3, ___nl__im__196, ___nl__im__197, ___nl__im__199));
#line 484
c_rt_lib0clear(&___nl__im__196);
#line 484
c_rt_lib0clear(&___nl__im__197);
#line 484
c_rt_lib0clear(&___nl__im__199);
#line 484
c_rt_lib0move(&___nl__im__193, generator_c_priv0get_fun_lib(___nl__im__194, ___nl__im__195));
#line 484
c_rt_lib0clear(&___nl__im__194);
#line 484
c_rt_lib0clear(&___nl__im__195);
#line 484
c_rt_lib0move(&___nl__im__200,___get_global_string_const(440));
#line 484
c_rt_lib0move(&___nl__im__192, c_rt_lib0concat_new(___nl__im__193, ___nl__im__200));
#line 484
c_rt_lib0clear(&___nl__im__193);
#line 484
c_rt_lib0clear(&___nl__im__200);
#line 484
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__192));
#line 484
c_rt_lib0clear(&___nl__im__192);
#line 485
___nl__int__201 = 0;
#line 485
___nl__int__202 = 1;
#line 485
label_454:
;
#line 485
___nl__int__204 = ___nl__int__201 >= ___nl__int__190;
#line 485
___nl__bool__203 = ___nl__int__204;
#line 485
if(___nl__bool__203){ goto label_517;}
#line 486
c_rt_lib0move(&___nl__im__208, c_rt_lib0hash_get_value_dec(___nl__im__172, ___get_global_string_const(214)));
#line 486
c_rt_lib0move(&___nl__im__207, c_rt_lib0array_get(___nl__im__208, ___nl__int__201));
#line 486
c_rt_lib0clear(&___nl__im__208);
#line 486
c_rt_lib0move(&___nl__im__206, c_rt_lib0hash_get_value_dec(___nl__im__207, ___get_global_string_const(205)));
#line 486
c_rt_lib0clear(&___nl__im__207);
#line 486
c_rt_lib0move(&___nl__im__209,___get_global_string_const(37));
#line 486
c_rt_lib0move(&___nl__im__205, generator_c_priv0get_type_to_c(___nl__im__206, ___nl__im__209));
#line 486
c_rt_lib0clear(&___nl__im__206);
#line 486
c_rt_lib0clear(&___nl__im__209);
#line 487
c_rt_lib0move(&___nl__im__214, c_rt_lib0hash_get_value_dec(___nl__im__172, ___get_global_string_const(214)));
#line 487
c_rt_lib0move(&___nl__im__213, c_rt_lib0array_get(___nl__im__214, ___nl__int__201));
#line 487
c_rt_lib0clear(&___nl__im__214);
#line 487
c_rt_lib0move(&___nl__im__212, c_rt_lib0hash_get_value_dec(___nl__im__213, ___get_global_string_const(469)));
#line 487
c_rt_lib0clear(&___nl__im__213);
#line 487
c_rt_lib0move(&___nl__im__211, c_rt_lib0hash_get_value_dec(___nl__im__212, ___get_global_string_const(205)));
#line 487
c_rt_lib0clear(&___nl__im__212);
#line 487
c_rt_lib0move(&___nl__im__217,___get_global_string_const(497));
#line 487
c_rt_lib0move(&___nl__im__219, c_rt_lib0int_new(___nl__int__201));
#line 487
c_rt_lib0move(&___nl__im__218, ptd0int_to_string(___nl__im__219));
#line 487
c_rt_lib0clear(&___nl__im__219);
#line 487
c_rt_lib0move(&___nl__im__216, c_rt_lib0concat_new(___nl__im__217, ___nl__im__218));
#line 487
c_rt_lib0clear(&___nl__im__217);
#line 487
c_rt_lib0clear(&___nl__im__218);
#line 487
c_rt_lib0move(&___nl__im__220,___get_global_string_const(498));
#line 487
c_rt_lib0move(&___nl__im__215, c_rt_lib0concat_new(___nl__im__216, ___nl__im__220));
#line 487
c_rt_lib0clear(&___nl__im__216);
#line 487
c_rt_lib0clear(&___nl__im__220);
#line 487
c_rt_lib0move(&___nl__im__210, generator_c_priv0get_value_from_im(___nl__im__211, ___nl__im__215));
#line 487
c_rt_lib0clear(&___nl__im__211);
#line 487
c_rt_lib0clear(&___nl__im__215);
#line 488
c_rt_lib0move(&___nl__im__227,___get_global_string_const(499));
#line 488
c_rt_lib0move(&___nl__im__226, c_rt_lib0concat_new(___nl__im__205, ___nl__im__227));
#line 488
c_rt_lib0clear(&___nl__im__227);
#line 488
c_rt_lib0move(&___nl__im__229, c_rt_lib0int_new(___nl__int__201));
#line 488
c_rt_lib0move(&___nl__im__228, ptd0int_to_string(___nl__im__229));
#line 488
c_rt_lib0clear(&___nl__im__229);
#line 488
c_rt_lib0move(&___nl__im__225, c_rt_lib0concat_new(___nl__im__226, ___nl__im__228));
#line 488
c_rt_lib0clear(&___nl__im__226);
#line 488
c_rt_lib0clear(&___nl__im__228);
#line 488
c_rt_lib0move(&___nl__im__230,___get_global_string_const(500));
#line 488
c_rt_lib0move(&___nl__im__224, c_rt_lib0concat_new(___nl__im__225, ___nl__im__230));
#line 488
c_rt_lib0clear(&___nl__im__225);
#line 488
c_rt_lib0clear(&___nl__im__230);
#line 488
c_rt_lib0move(&___nl__im__223, c_rt_lib0concat_new(___nl__im__224, ___nl__im__210));
#line 488
c_rt_lib0clear(&___nl__im__224);
#line 488
c_rt_lib0move(&___nl__im__231,___get_global_string_const(440));
#line 488
c_rt_lib0move(&___nl__im__222, c_rt_lib0concat_new(___nl__im__223, ___nl__im__231));
#line 488
c_rt_lib0clear(&___nl__im__223);
#line 488
c_rt_lib0clear(&___nl__im__231);
#line 488
c_rt_lib0move(&___nl__im__232, string0lf());
#line 488
c_rt_lib0move(&___nl__im__221, c_rt_lib0concat_new(___nl__im__222, ___nl__im__232));
#line 488
c_rt_lib0clear(&___nl__im__222);
#line 488
c_rt_lib0clear(&___nl__im__232);
#line 488
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__221));
#line 488
c_rt_lib0clear(&___nl__im__221);
#line 488
c_rt_lib0clear(&___nl__im__205);
#line 488
c_rt_lib0clear(&___nl__im__210);
#line 489
___nl__int__201 = ___nl__int__201 + ___nl__int__202;
#line 489
goto label_454;
#line 489
label_517:
;
#line 490
c_rt_lib0move(&___nl__im__235,___get_global_string_const(501));
#line 490
c_rt_lib0move(&___nl__im__234, c_rt_lib0concat_new(___nl__im__235, ___nl__im__182));
#line 490
c_rt_lib0clear(&___nl__im__235);
#line 490
c_rt_lib0move(&___nl__im__236,___get_global_string_const(455));
#line 490
c_rt_lib0move(&___nl__im__233, c_rt_lib0concat_new(___nl__im__234, ___nl__im__236));
#line 490
c_rt_lib0clear(&___nl__im__234);
#line 490
c_rt_lib0clear(&___nl__im__236);
#line 490
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__233));
#line 490
c_rt_lib0clear(&___nl__im__233);
#line 491
___nl__int__237 = 0;
#line 491
___nl__int__238 = 1;
#line 491
label_529:
;
#line 491
___nl__int__240 = ___nl__int__237 >= ___nl__int__190;
#line 491
___nl__bool__239 = ___nl__int__240;
#line 491
if(___nl__bool__239){ goto label_582;}
#line 492
___nl__int__242 = 0;
#line 492
___nl__int__243 = ___nl__int__237 > ___nl__int__242;
#line 492
___nl__bool__241 = ___nl__int__243;
#line 492
//clear ___nl__int__242;
#line 492
//clear ___nl__int__243;
#line 492
___nl__bool__241 = !___nl__bool__241;
#line 492
if(___nl__bool__241){ goto label_544;}
#line 492
c_rt_lib0move(&___nl__im__244,___get_global_string_const(326));
#line 492
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__244));
#line 492
c_rt_lib0clear(&___nl__im__244);
#line 492
goto label_544;
#line 492
label_544:
;
#line 492
//clear ___nl__bool__241;
#line 494
c_rt_lib0move(&___nl__im__248, c_rt_lib0hash_get_value_dec(___nl__im__172, ___get_global_string_const(214)));
#line 494
c_rt_lib0move(&___nl__im__247, c_rt_lib0array_get(___nl__im__248, ___nl__int__237));
#line 494
c_rt_lib0clear(&___nl__im__248);
#line 494
c_rt_lib0move(&___nl__im__246, c_rt_lib0hash_get_value_dec(___nl__im__247, ___get_global_string_const(353)));
#line 494
c_rt_lib0clear(&___nl__im__247);
#line 494
___nl__bool__249 = c_rt_lib0priv_is(___nl__im__246, ___get_global_string_const(40));
#line 494
if(___nl__bool__249){ goto label_558;}
#line 496
___nl__bool__249 = c_rt_lib0priv_is(___nl__im__246, ___get_global_string_const(224));
#line 496
if(___nl__bool__249){ goto label_561;}
#line 496
c_rt_lib0move(&___nl__im__250,___get_global_string_const(16));
#line 496
c_rt_lib0move(&___nl__im__250, c_rt_lib0array_mk(2, ___nl__im__250, ___nl__im__246));
#line 496
nl_die_arg(___nl__im__250);
#line 494
label_558:
;
#line 495
c_rt_lib0move(&___nl__im__245,___get_global_string_const(37));
#line 496
goto label_564;
#line 496
label_561:
;
#line 497
c_rt_lib0move(&___nl__im__245,___get_global_string_const(373));
#line 498
goto label_564;
#line 498
label_564:
;
#line 499
c_rt_lib0move(&___nl__im__253,___get_global_string_const(502));
#line 499
c_rt_lib0move(&___nl__im__252, c_rt_lib0concat_new(___nl__im__245, ___nl__im__253));
#line 499
c_rt_lib0clear(&___nl__im__253);
#line 499
c_rt_lib0move(&___nl__im__255, c_rt_lib0int_new(___nl__int__237));
#line 499
c_rt_lib0move(&___nl__im__254, ptd0int_to_string(___nl__im__255));
#line 499
c_rt_lib0clear(&___nl__im__255);
#line 499
c_rt_lib0move(&___nl__im__251, c_rt_lib0concat_new(___nl__im__252, ___nl__im__254));
#line 499
c_rt_lib0clear(&___nl__im__252);
#line 499
c_rt_lib0clear(&___nl__im__254);
#line 499
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__251));
#line 499
c_rt_lib0clear(&___nl__im__251);
#line 499
c_rt_lib0clear(&___nl__im__245);
#line 499
c_rt_lib0clear(&___nl__im__246);
#line 499
//clear ___nl__bool__249;
#line 499
c_rt_lib0clear(&___nl__im__250);
#line 500
___nl__int__237 = ___nl__int__237 + ___nl__int__238;
#line 500
goto label_529;
#line 500
label_582:
;
#line 501
c_rt_lib0move(&___nl__im__256,___get_global_string_const(503));
#line 501
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__256));
#line 501
c_rt_lib0clear(&___nl__im__256);
#line 502
c_rt_lib0move(&___nl__im__257,___get_global_string_const(305));
#line 502
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__257));
#line 502
c_rt_lib0clear(&___nl__im__257);
#line 503
goto label_590;
#line 503
label_590:
;
#line 503
//clear ___nl__bool__179;
#line 503
c_rt_lib0clear(&___nl__im__182);
#line 503
//clear ___nl__int__190;
#line 503
//clear ___nl__int__201;
#line 503
//clear ___nl__int__202;
#line 503
//clear ___nl__bool__203;
#line 503
//clear ___nl__int__204;
#line 503
c_rt_lib0clear(&___nl__im__205);
#line 503
c_rt_lib0clear(&___nl__im__210);
#line 503
//clear ___nl__int__237;
#line 503
//clear ___nl__int__238;
#line 503
//clear ___nl__bool__239;
#line 503
//clear ___nl__int__240;
#line 503
c_rt_lib0clear(&___nl__im__245);
#line 503
c_rt_lib0clear(&___nl__im__246);
#line 503
//clear ___nl__bool__249;
#line 503
c_rt_lib0clear(&___nl__im__250);
#line 504
___nl__bool__258 = generator_c_priv0is_singleton_use_function(___nl__im__172);
#line 504
___nl__bool__258 = !___nl__bool__258;
#line 504
if(___nl__bool__258){ goto label_669;}
#line 505
___nl__im_ptr__261 = &((*___ref___rec__0).mod_name0field);
#line 505
c_rt_lib0copy(&___nl__im__260, (*___nl__im_ptr__261));
#line 505
___nl__im_ptr__261 = NULL;
#line 505
c_rt_lib0move(&___nl__im__259, generator_c_priv0get_function_name(___nl__im__172, ___nl__im__260));
#line 505
c_rt_lib0clear(&___nl__im__260);
#line 506
c_rt_lib0move(&___nl__im__264, generator_c_priv0im_t());
#line 506
c_rt_lib0move(&___nl__im__263, c_rt_lib0concat_new(___nl__im__264, ___nl__im__259));
#line 506
c_rt_lib0clear(&___nl__im__264);
#line 506
c_rt_lib0move(&___nl__im__265,___get_global_string_const(504));
#line 506
c_rt_lib0move(&___nl__im__262, c_rt_lib0concat_new(___nl__im__263, ___nl__im__265));
#line 506
c_rt_lib0clear(&___nl__im__263);
#line 506
c_rt_lib0clear(&___nl__im__265);
#line 506
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__262));
#line 506
c_rt_lib0clear(&___nl__im__262);
#line 507
c_rt_lib0move(&___nl__im__268,___get_global_string_const(37));
#line 507
c_rt_lib0move(&___nl__im__269,___get_global_string_const(483));
#line 507
___nl__im_ptr__271 = &((*___ref___rec__0).mod_name0field);
#line 507
c_rt_lib0copy(&___nl__im__270, (*___nl__im_ptr__271));
#line 507
___nl__im_ptr__271 = NULL;
#line 507
c_rt_lib0move(&___nl__im__267, generator_c_priv0get_fun_name(___nl__im__268, ___nl__im__269, ___nl__im__270));
#line 507
c_rt_lib0clear(&___nl__im__268);
#line 507
c_rt_lib0clear(&___nl__im__269);
#line 507
c_rt_lib0clear(&___nl__im__270);
#line 507
c_rt_lib0move(&___nl__im__272,___get_global_string_const(484));
#line 507
c_rt_lib0move(&___nl__im__266, c_rt_lib0concat_new(___nl__im__267, ___nl__im__272));
#line 507
c_rt_lib0clear(&___nl__im__267);
#line 507
c_rt_lib0clear(&___nl__im__272);
#line 507
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__266));
#line 507
c_rt_lib0clear(&___nl__im__266);
#line 508
c_rt_lib0move(&___nl__im__277,___get_global_string_const(501));
#line 508
c_rt_lib0move(&___nl__im__278, generator_c_priv0get_const_singleton(___ref___rec__0, ___nl__im__259));
#line 508
c_rt_lib0move(&___nl__im__276, c_rt_lib0concat_new(___nl__im__277, ___nl__im__278));
#line 508
c_rt_lib0clear(&___nl__im__277);
#line 508
c_rt_lib0clear(&___nl__im__278);
#line 508
c_rt_lib0move(&___nl__im__279,___get_global_string_const(440));
#line 508
c_rt_lib0move(&___nl__im__275, c_rt_lib0concat_new(___nl__im__276, ___nl__im__279));
#line 508
c_rt_lib0clear(&___nl__im__276);
#line 508
c_rt_lib0clear(&___nl__im__279);
#line 508
c_rt_lib0move(&___nl__im__280, string0lf());
#line 508
c_rt_lib0move(&___nl__im__274, c_rt_lib0concat_new(___nl__im__275, ___nl__im__280));
#line 508
c_rt_lib0clear(&___nl__im__275);
#line 508
c_rt_lib0clear(&___nl__im__280);
#line 508
c_rt_lib0move(&___nl__im__281,___get_global_string_const(305));
#line 508
c_rt_lib0move(&___nl__im__273, c_rt_lib0concat_new(___nl__im__274, ___nl__im__281));
#line 508
c_rt_lib0clear(&___nl__im__274);
#line 508
c_rt_lib0clear(&___nl__im__281);
#line 508
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__273));
#line 508
c_rt_lib0clear(&___nl__im__273);
#line 509
c_rt_lib0move(&___nl__im__284, generator_c_priv0im_t());
#line 509
c_rt_lib0move(&___nl__im__283, c_rt_lib0concat_new(___nl__im__284, ___nl__im__259));
#line 509
c_rt_lib0clear(&___nl__im__284);
#line 509
c_rt_lib0move(&___nl__im__285,___get_global_string_const(505));
#line 509
c_rt_lib0move(&___nl__im__282, c_rt_lib0concat_new(___nl__im__283, ___nl__im__285));
#line 509
c_rt_lib0clear(&___nl__im__283);
#line 509
c_rt_lib0clear(&___nl__im__285);
#line 509
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__282));
#line 509
c_rt_lib0clear(&___nl__im__282);
#line 510
goto label_678;
#line 510
label_669:
;
#line 511
___nl__im_ptr__288 = &((*___ref___rec__0).mod_name0field);
#line 511
c_rt_lib0copy(&___nl__im__287, (*___nl__im_ptr__288));
#line 511
___nl__im_ptr__288 = NULL;
#line 511
c_rt_lib0move(&___nl__im__286, generator_c_priv0get_function_header(___nl__im__172, ___nl__im__287));
#line 511
c_rt_lib0clear(&___nl__im__287);
#line 511
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__286));
#line 511
c_rt_lib0clear(&___nl__im__286);
#line 512
goto label_678;
#line 512
label_678:
;
#line 512
//clear ___nl__bool__258;
#line 512
c_rt_lib0clear(&___nl__im__259);
#line 513
c_rt_lib0delete(generator_c_priv0print_function_block(___ref___rec__0, ___nl__im__172, ___nl__im__2));
#line 513
c_rt_lib0clear(&___nl__im__172);
#line 514
___nl__int__173 = ___nl__int__173 + ___nl__int__174;
#line 514
goto label_397;
#line 514
label_685:
;
#line 515
c_rt_lib0delete(generator_c_priv0print_init_const(___ref___rec__0));
#line 516
___nl__hash_ptr__289 = &((*___ref___rec__0).additional_imports0field);
#line 516
___nl__int__293 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___nl__hash_ptr__289, -1);
#line 516
label_689:
;
#line 516
___nl__bool__291 = ___nl__int__293 == -1;
#line 516
if(___nl__bool__291){ goto label_704;}
#line 516
c_rt_lib0copy(&___nl__im__290, (*___nl__hash_ptr__289).keys[___nl__int__293]);
#line 516
___nl__bool_ptr__292 = generator_c0anon_type00ownhashanon_type00bool0get_ptr(___nl__hash_ptr__289, ___nl__im__290, false);
#line 517
c_rt_lib0move(&___nl__im__295, generator_c_priv0get_include(___nl__im__290));
#line 517
c_rt_lib0move(&___nl__im__296, string0lf());
#line 517
c_rt_lib0move(&___nl__im__294, c_rt_lib0concat_new(___nl__im__295, ___nl__im__296));
#line 517
c_rt_lib0clear(&___nl__im__295);
#line 517
c_rt_lib0clear(&___nl__im__296);
#line 517
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_add(___nl__im__37, ___nl__im__294));
#line 517
c_rt_lib0clear(&___nl__im__294);
#line 517
___nl__bool_ptr__292 = NULL;
#line 518
___nl__int__293 = generator_c0anon_type00ownhashanon_type00bool0next_iter(___nl__hash_ptr__289, ___nl__int__293);
#line 518
goto label_689;
#line 518
label_704:
;
#line 518
___nl__hash_ptr__289 = NULL;
#line 519
___nl__im_ptr__299 = &((*___ref___rec__0).ret0field);
#line 519
c_rt_lib0copy(&___nl__im__298, (*___nl__im_ptr__299));
#line 519
___nl__im_ptr__299 = NULL;
#line 519
c_rt_lib0move(&___nl__im__297, c_rt_lib0concat_new(___nl__im__37, ___nl__im__298));
#line 519
c_rt_lib0clear(&___nl__im__298);
#line 519
___nl__im_ptr__300 = &((*___ref___rec__0).ret0field);
#line 519
c_rt_lib0copy(___nl__im_ptr__300, ___nl__im__297);
#line 519
___nl__im_ptr__300 = NULL;
#line 519
c_rt_lib0clear(&___nl__im__297);
#line 519
c_rt_lib0clear(&___nl__im__1);
#line 519
c_rt_lib0clear(&___nl__im__2);
#line 519
c_rt_lib0clear(&___nl__im__25);
#line 519
c_rt_lib0clear(&___nl__im__26);
#line 519
//clear ___nl__int__27;
#line 519
//clear ___nl__int__28;
#line 519
//clear ___nl__int__29;
#line 519
//clear ___nl__bool__30;
#line 519
//clear ___nl__int__31;
#line 519
c_rt_lib0clear(&___nl__im__32);
#line 519
c_rt_lib0clear(&___nl__im__37);
#line 519
c_rt_lib0clear(&___nl__im__83);
#line 519
c_rt_lib0clear(&___nl__im__87);
#line 519
c_rt_lib0clear(&___nl__im__88);
#line 519
c_rt_lib0clear(&___nl__im__89);
#line 519
//clear ___nl__int__90;
#line 519
//clear ___nl__int__91;
#line 519
//clear ___nl__int__92;
#line 519
//clear ___nl__bool__93;
#line 519
//clear ___nl__int__94;
#line 519
c_rt_lib0clear(&___nl__im__95);
#line 519
c_rt_lib0clear(&___nl__im__96);
#line 519
//clear ___nl__bool__97;
#line 519
c_rt_lib0clear(&___nl__im__98);
#line 519
c_rt_lib0clear(&___nl__im__99);
#line 519
//clear ___nl__bool__100;
#line 519
c_rt_lib0clear(&___nl__im__101);
#line 519
c_rt_lib0clear(&___nl__im__102);
#line 519
c_rt_lib0clear(&___nl__im__103);
#line 519
//clear ___nl__bool__106;
#line 519
c_rt_lib0clear(&___nl__im__107);
#line 519
c_rt_lib0clear(&___nl__im__108);
#line 519
c_rt_lib0clear(&___nl__im__109);
#line 519
c_rt_lib0clear(&___nl__im__110);
#line 519
//clear ___nl__int__111;
#line 519
//clear ___nl__int__112;
#line 519
//clear ___nl__int__113;
#line 519
//clear ___nl__bool__114;
#line 519
//clear ___nl__int__115;
#line 519
c_rt_lib0clear(&___nl__im__116);
#line 519
//clear ___nl__bool__117;
#line 519
c_rt_lib0clear(&___nl__im__119);
#line 519
//clear ___nl__bool__120;
#line 519
c_rt_lib0clear(&___nl__im__121);
#line 519
c_rt_lib0clear(&___nl__im__141);
#line 519
c_rt_lib0clear(&___nl__im__142);
#line 519
c_rt_lib0clear(&___nl__im__143);
#line 519
//clear ___nl__int__144;
#line 519
//clear ___nl__int__145;
#line 519
//clear ___nl__int__146;
#line 519
//clear ___nl__bool__147;
#line 519
//clear ___nl__int__148;
#line 519
c_rt_lib0clear(&___nl__im__149);
#line 519
c_rt_lib0clear(&___nl__im__150);
#line 519
c_rt_lib0clear(&___nl__im__153);
#line 519
//clear ___nl__bool__154;
#line 519
c_rt_lib0clear(&___nl__im__155);
#line 519
c_rt_lib0clear(&___nl__im__171);
#line 519
c_rt_lib0clear(&___nl__im__172);
#line 519
//clear ___nl__int__173;
#line 519
//clear ___nl__int__174;
#line 519
//clear ___nl__int__175;
#line 519
//clear ___nl__bool__176;
#line 519
//clear ___nl__int__177;
#line 519
c_rt_lib0clear(&___nl__im__178);
#line 519
c_rt_lib0clear(&___nl__im__290);
#line 519
//clear ___nl__bool__291;
#line 519
//clear ___nl__int__293;
#line 519
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
ImmT  ___nl__im__26 = NULL;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
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
ImmT * ___nl__im_ptr__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
INT  ___nl__int__43 = 0;
INT  ___nl__int__44 = 0;
ImmT  ___nl__im__45 = NULL;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
bool  ___nl__bool__49 = false;
INT  ___nl__int__50 = 0;
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
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__61 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__62 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__63 = NULL;
ImmT * ___nl__im_ptr__64 = NULL;
ImmT  ___nl__im__65 = NULL;
INT  ___nl__int__66 = 0;
INT  ___nl__int__67 = 0;
bool  ___nl__bool__68 = false;
INT  ___nl__int__69 = 0;
ImmT  ___nl__im__70 = NULL;
ImmT  ___nl__im__71 = NULL;
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
ImmT  ___nl__im__74 = NULL;
ImmT  ___nl__im__75 = NULL;
INT  ___nl__int__76 = 0;
ImmT  ___nl__im__77 = NULL;
ImmT  ___nl__im__78 = NULL;
ImmT  ___nl__im__79 = NULL;
ImmT  ___nl__im__80 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__81 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__82 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__83 = NULL;
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
ImmT * ___nl__im_ptr__119 = NULL;
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
ImmT * ___nl__im_ptr__138 = NULL;
ImmT  ___nl__im__139 = NULL;
ImmT  ___nl__im__140 = NULL;
INT  ___nl__int__141 = 0;
ImmT  ___nl__im__142 = NULL;
ImmT  ___nl__im__143 = NULL;
INT  ___nl__int__144 = 0;
INT  ___nl__int__145 = 0;
bool  ___nl__bool__146 = false;
INT  ___nl__int__147 = 0;
ImmT  ___nl__im__148 = NULL;
ImmT  ___nl__im__149 = NULL;
ImmT  ___nl__im__150 = NULL;
ImmT  ___nl__im__151 = NULL;
ImmT  ___nl__im__152 = NULL;
ImmT  ___nl__im__153 = NULL;
ImmT  ___nl__im__154 = NULL;
ImmT  ___nl__im__155 = NULL;
ImmT  ___nl__im__156 = NULL;
ImmT  ___nl__im__157 = NULL;
ImmT  ___nl__im__158 = NULL;
ImmT  ___nl__im__159 = NULL;
INT  ___nl__int__160 = 0;
INT  ___nl__int__161 = 0;
ImmT  ___nl__im__162 = NULL;
ImmT  ___nl__im__163 = NULL;
ImmT  ___nl__im__164 = NULL;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__165 = NULL;
generator_c0const_t0type* ___nl__rec_ptr__166 = NULL;
anon_type00ownarranon_type00im* ___nl__arr_ptr__167 = NULL;
ImmT * ___nl__im_ptr__168 = NULL;
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
ImmT  ___nl__im__179 = NULL;
ImmT  ___nl__im__180 = NULL;
ImmT  ___nl__im__181 = NULL;
ImmT  ___nl__im__182 = NULL;
ImmT  ___nl__im__183 = NULL;
ImmT  ___nl__im__184 = NULL;
ImmT  ___nl__im__185 = NULL;
INT  ___nl__int__186 = 0;
ImmT  ___nl__im__187 = NULL;
ImmT  ___nl__im__188 = NULL;
ImmT  ___nl__im__189 = NULL;
#line 523
___nl__rec_ptr__2 = &((*___ref___rec__0).const0field);
#line 523
___nl__rec_ptr__3 = &(___nl__rec_ptr__2->int0field);
#line 523
___nl__arr_ptr__4 = &(___nl__rec_ptr__3->arr0field);
#line 523
___nl__int__1 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__4);
#line 523
___nl__arr_ptr__4 = NULL;
#line 523
___nl__rec_ptr__3 = NULL;
#line 523
___nl__rec_ptr__2 = NULL;
#line 524
___nl__rec_ptr__6 = &((*___ref___rec__0).const0field);
#line 524
___nl__rec_ptr__7 = &(___nl__rec_ptr__6->string0field);
#line 524
___nl__arr_ptr__8 = &(___nl__rec_ptr__7->arr0field);
#line 524
___nl__int__5 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__8);
#line 524
___nl__arr_ptr__8 = NULL;
#line 524
___nl__rec_ptr__7 = NULL;
#line 524
___nl__rec_ptr__6 = NULL;
#line 525
___nl__rec_ptr__10 = &((*___ref___rec__0).const0field);
#line 525
___nl__rec_ptr__11 = &(___nl__rec_ptr__10->singleton0field);
#line 525
___nl__arr_ptr__12 = &(___nl__rec_ptr__11->arr0field);
#line 525
___nl__int__9 = generator_c0anon_type00ownarranon_type00im0len(___nl__arr_ptr__12);
#line 525
___nl__arr_ptr__12 = NULL;
#line 525
___nl__rec_ptr__11 = NULL;
#line 525
___nl__rec_ptr__10 = NULL;
#line 526
___nl__rec_ptr__14 = &((*___ref___rec__0).const0field);
#line 526
___nl__int_ptr__15 = &(___nl__rec_ptr__14->dynamic_nr0field);
#line 526
___nl__int__13 = (*___nl__int_ptr__15);
#line 526
___nl__int_ptr__15 = NULL;
#line 526
___nl__rec_ptr__14 = NULL;
#line 527
___nl__int__18 = ___nl__int__1 + ___nl__int__5;
#line 527
___nl__int__17 = ___nl__int__18 + ___nl__int__9;
#line 527
//clear ___nl__int__18;
#line 527
___nl__int__16 = ___nl__int__17 + ___nl__int__13;
#line 527
//clear ___nl__int__17;
#line 528
c_rt_lib0move(&___nl__im__23,___get_global_string_const(433));
#line 529
c_rt_lib0move(&___nl__im__24, generator_c_priv0im_t());
#line 529
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 529
c_rt_lib0clear(&___nl__im__23);
#line 529
c_rt_lib0clear(&___nl__im__24);
#line 529
c_rt_lib0move(&___nl__im__25,___get_global_string_const(506));
#line 529
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__25));
#line 529
c_rt_lib0clear(&___nl__im__22);
#line 529
c_rt_lib0clear(&___nl__im__25);
#line 529
___nl__int__28 = 1;
#line 529
___nl__int__27 = ___nl__int__28 + ___nl__int__16;
#line 529
//clear ___nl__int__28;
#line 529
c_rt_lib0move(&___nl__im__29, c_rt_lib0int_new(___nl__int__27));
#line 529
c_rt_lib0move(&___nl__im__26, ptd0int_to_string(___nl__im__29));
#line 529
//clear ___nl__int__27;
#line 529
c_rt_lib0clear(&___nl__im__29);
#line 529
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__26));
#line 529
c_rt_lib0clear(&___nl__im__21);
#line 529
c_rt_lib0clear(&___nl__im__26);
#line 529
c_rt_lib0move(&___nl__im__30,___get_global_string_const(507));
#line 529
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__30));
#line 529
c_rt_lib0clear(&___nl__im__20);
#line 529
c_rt_lib0clear(&___nl__im__30);
#line 529
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__19));
#line 529
c_rt_lib0clear(&___nl__im__19);
#line 531
c_rt_lib0move(&___nl__im__35,___get_global_string_const(482));
#line 531
c_rt_lib0move(&___nl__im__37,___get_global_string_const(37));
#line 531
c_rt_lib0move(&___nl__im__38,___get_global_string_const(483));
#line 531
___nl__im_ptr__40 = &((*___ref___rec__0).mod_name0field);
#line 531
c_rt_lib0copy(&___nl__im__39, (*___nl__im_ptr__40));
#line 531
___nl__im_ptr__40 = NULL;
#line 531
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_fun_name(___nl__im__37, ___nl__im__38, ___nl__im__39));
#line 531
c_rt_lib0clear(&___nl__im__37);
#line 531
c_rt_lib0clear(&___nl__im__38);
#line 531
c_rt_lib0clear(&___nl__im__39);
#line 531
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 531
c_rt_lib0clear(&___nl__im__35);
#line 531
c_rt_lib0clear(&___nl__im__36);
#line 531
c_rt_lib0move(&___nl__im__41,___get_global_string_const(508));
#line 531
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__41));
#line 531
c_rt_lib0clear(&___nl__im__34);
#line 531
c_rt_lib0clear(&___nl__im__41);
#line 534
___nl__int__44 = ___nl__int__1 + ___nl__int__5;
#line 534
___nl__int__43 = ___nl__int__44 + ___nl__int__9;
#line 534
//clear ___nl__int__44;
#line 534
c_rt_lib0move(&___nl__im__45, c_rt_lib0int_new(___nl__int__43));
#line 534
c_rt_lib0move(&___nl__im__42, ptd0int_to_string(___nl__im__45));
#line 534
//clear ___nl__int__43;
#line 534
c_rt_lib0clear(&___nl__im__45);
#line 534
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__42));
#line 534
c_rt_lib0clear(&___nl__im__33);
#line 534
c_rt_lib0clear(&___nl__im__42);
#line 534
c_rt_lib0move(&___nl__im__46,___get_global_string_const(509));
#line 534
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__46));
#line 534
c_rt_lib0clear(&___nl__im__32);
#line 534
c_rt_lib0clear(&___nl__im__46);
#line 534
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__31));
#line 534
c_rt_lib0clear(&___nl__im__31);
#line 536
___nl__int__47 = 0;
#line 536
___nl__int__48 = 1;
#line 536
label_91:
;
#line 536
___nl__int__50 = ___nl__int__47 >= ___nl__int__1;
#line 536
___nl__bool__49 = ___nl__int__50;
#line 536
if(___nl__bool__49){ goto label_128;}
#line 537
c_rt_lib0move(&___nl__im__55,___get_global_string_const(506));
#line 537
c_rt_lib0move(&___nl__im__57, c_rt_lib0int_new(___nl__int__47));
#line 537
c_rt_lib0move(&___nl__im__56, ptd0int_to_string(___nl__im__57));
#line 537
c_rt_lib0clear(&___nl__im__57);
#line 537
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__56));
#line 537
c_rt_lib0clear(&___nl__im__55);
#line 537
c_rt_lib0clear(&___nl__im__56);
#line 537
c_rt_lib0move(&___nl__im__58,___get_global_string_const(510));
#line 537
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__58));
#line 537
c_rt_lib0clear(&___nl__im__54);
#line 537
c_rt_lib0clear(&___nl__im__58);
#line 537
___nl__rec_ptr__61 = &((*___ref___rec__0).const0field);
#line 537
___nl__rec_ptr__62 = &(___nl__rec_ptr__61->int0field);
#line 537
___nl__arr_ptr__63 = &(___nl__rec_ptr__62->arr0field);
#line 537
___nl__im_ptr__64 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__63, ___nl__int__47);
#line 537
c_rt_lib0copy(&___nl__im__60, (*___nl__im_ptr__64));
#line 537
//release ___nl__im_ptr__64;
#line 537
___nl__arr_ptr__63 = NULL;
#line 537
___nl__rec_ptr__62 = NULL;
#line 537
___nl__rec_ptr__61 = NULL;
#line 537
c_rt_lib0move(&___nl__im__59, generator_c_priv0create_int(___nl__im__60));
#line 537
c_rt_lib0clear(&___nl__im__60);
#line 537
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__59));
#line 537
c_rt_lib0clear(&___nl__im__53);
#line 537
c_rt_lib0clear(&___nl__im__59);
#line 537
c_rt_lib0move(&___nl__im__65,___get_global_string_const(440));
#line 537
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__65));
#line 537
c_rt_lib0clear(&___nl__im__52);
#line 537
c_rt_lib0clear(&___nl__im__65);
#line 537
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__51));
#line 537
c_rt_lib0clear(&___nl__im__51);
#line 538
___nl__int__47 = ___nl__int__47 + ___nl__int__48;
#line 538
goto label_91;
#line 538
label_128:
;
#line 539
___nl__int__66 = 0;
#line 539
___nl__int__67 = 1;
#line 539
label_131:
;
#line 539
___nl__int__69 = ___nl__int__66 >= ___nl__int__5;
#line 539
___nl__bool__68 = ___nl__int__69;
#line 539
if(___nl__bool__68){ goto label_170;}
#line 540
c_rt_lib0move(&___nl__im__74,___get_global_string_const(506));
#line 540
___nl__int__76 = ___nl__int__66 + ___nl__int__1;
#line 540
c_rt_lib0move(&___nl__im__77, c_rt_lib0int_new(___nl__int__76));
#line 540
c_rt_lib0move(&___nl__im__75, ptd0int_to_string(___nl__im__77));
#line 540
//clear ___nl__int__76;
#line 540
c_rt_lib0clear(&___nl__im__77);
#line 540
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__75));
#line 540
c_rt_lib0clear(&___nl__im__74);
#line 540
c_rt_lib0clear(&___nl__im__75);
#line 540
c_rt_lib0move(&___nl__im__78,___get_global_string_const(510));
#line 540
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__78));
#line 540
c_rt_lib0clear(&___nl__im__73);
#line 540
c_rt_lib0clear(&___nl__im__78);
#line 541
___nl__rec_ptr__81 = &((*___ref___rec__0).const0field);
#line 541
___nl__rec_ptr__82 = &(___nl__rec_ptr__81->string0field);
#line 541
___nl__arr_ptr__83 = &(___nl__rec_ptr__82->arr0field);
#line 541
___nl__im_ptr__84 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__83, ___nl__int__66);
#line 541
c_rt_lib0copy(&___nl__im__80, (*___nl__im_ptr__84));
#line 541
//release ___nl__im_ptr__84;
#line 541
___nl__arr_ptr__83 = NULL;
#line 541
___nl__rec_ptr__82 = NULL;
#line 541
___nl__rec_ptr__81 = NULL;
#line 541
c_rt_lib0move(&___nl__im__79, generator_c_priv0create_string(___nl__im__80));
#line 541
c_rt_lib0clear(&___nl__im__80);
#line 541
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__79));
#line 541
c_rt_lib0clear(&___nl__im__72);
#line 541
c_rt_lib0clear(&___nl__im__79);
#line 541
c_rt_lib0move(&___nl__im__85,___get_global_string_const(440));
#line 541
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__85));
#line 541
c_rt_lib0clear(&___nl__im__71);
#line 541
c_rt_lib0clear(&___nl__im__85);
#line 541
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__70));
#line 541
c_rt_lib0clear(&___nl__im__70);
#line 542
___nl__int__66 = ___nl__int__66 + ___nl__int__67;
#line 542
goto label_131;
#line 542
label_170:
;
#line 543
c_rt_lib0move(&___nl__im__94,___get_global_string_const(511));
#line 544
___nl__int__96 = ___nl__int__1 + ___nl__int__5;
#line 544
c_rt_lib0move(&___nl__im__97, c_rt_lib0int_new(___nl__int__96));
#line 544
c_rt_lib0move(&___nl__im__95, ptd0int_to_string(___nl__im__97));
#line 544
//clear ___nl__int__96;
#line 544
c_rt_lib0clear(&___nl__im__97);
#line 544
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__95));
#line 544
c_rt_lib0clear(&___nl__im__94);
#line 544
c_rt_lib0clear(&___nl__im__95);
#line 544
c_rt_lib0move(&___nl__im__98,___get_global_string_const(512));
#line 544
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__98));
#line 544
c_rt_lib0clear(&___nl__im__93);
#line 544
c_rt_lib0clear(&___nl__im__98);
#line 544
c_rt_lib0move(&___nl__im__100, c_rt_lib0int_new(___nl__int__16));
#line 544
c_rt_lib0move(&___nl__im__99, ptd0int_to_string(___nl__im__100));
#line 544
c_rt_lib0clear(&___nl__im__100);
#line 544
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__99));
#line 544
c_rt_lib0clear(&___nl__im__92);
#line 544
c_rt_lib0clear(&___nl__im__99);
#line 544
c_rt_lib0move(&___nl__im__101,___get_global_string_const(513));
#line 544
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__101));
#line 544
c_rt_lib0clear(&___nl__im__91);
#line 544
c_rt_lib0clear(&___nl__im__101);
#line 545
c_rt_lib0move(&___nl__im__103,___get_global_string_const(514));
#line 545
c_rt_lib0move(&___nl__im__102, generator_c_priv0get_lib_fun(___nl__im__103));
#line 545
c_rt_lib0clear(&___nl__im__103);
#line 545
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__102));
#line 545
c_rt_lib0clear(&___nl__im__90);
#line 545
c_rt_lib0clear(&___nl__im__102);
#line 545
c_rt_lib0move(&___nl__im__104,___get_global_string_const(515));
#line 545
c_rt_lib0move(&___nl__im__88, c_rt_lib0concat_new(___nl__im__89, ___nl__im__104));
#line 545
c_rt_lib0clear(&___nl__im__89);
#line 545
c_rt_lib0clear(&___nl__im__104);
#line 545
c_rt_lib0move(&___nl__im__106, c_rt_lib0int_new(___nl__int__16));
#line 545
c_rt_lib0move(&___nl__im__105, ptd0int_to_string(___nl__im__106));
#line 545
c_rt_lib0clear(&___nl__im__106);
#line 545
c_rt_lib0move(&___nl__im__87, c_rt_lib0concat_new(___nl__im__88, ___nl__im__105));
#line 545
c_rt_lib0clear(&___nl__im__88);
#line 545
c_rt_lib0clear(&___nl__im__105);
#line 545
c_rt_lib0move(&___nl__im__107,___get_global_string_const(516));
#line 545
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__107));
#line 545
c_rt_lib0clear(&___nl__im__87);
#line 545
c_rt_lib0clear(&___nl__im__107);
#line 545
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__86));
#line 545
c_rt_lib0clear(&___nl__im__86);
#line 547
c_rt_lib0move(&___nl__im__114, generator_c_priv0im_t());
#line 547
c_rt_lib0move(&___nl__im__116,___get_global_string_const(37));
#line 547
c_rt_lib0move(&___nl__im__117,___get_global_string_const(485));
#line 547
___nl__im_ptr__119 = &((*___ref___rec__0).mod_name0field);
#line 547
c_rt_lib0copy(&___nl__im__118, (*___nl__im_ptr__119));
#line 547
___nl__im_ptr__119 = NULL;
#line 547
c_rt_lib0move(&___nl__im__115, generator_c_priv0get_fun_name(___nl__im__116, ___nl__im__117, ___nl__im__118));
#line 547
c_rt_lib0clear(&___nl__im__116);
#line 547
c_rt_lib0clear(&___nl__im__117);
#line 547
c_rt_lib0clear(&___nl__im__118);
#line 547
c_rt_lib0move(&___nl__im__113, c_rt_lib0concat_new(___nl__im__114, ___nl__im__115));
#line 547
c_rt_lib0clear(&___nl__im__114);
#line 547
c_rt_lib0clear(&___nl__im__115);
#line 547
c_rt_lib0move(&___nl__im__120,___get_global_string_const(517));
#line 547
c_rt_lib0move(&___nl__im__112, c_rt_lib0concat_new(___nl__im__113, ___nl__im__120));
#line 547
c_rt_lib0clear(&___nl__im__113);
#line 547
c_rt_lib0clear(&___nl__im__120);
#line 548
c_rt_lib0move(&___nl__im__121, generator_c_priv0im_t());
#line 548
c_rt_lib0move(&___nl__im__111, c_rt_lib0concat_new(___nl__im__112, ___nl__im__121));
#line 548
c_rt_lib0clear(&___nl__im__112);
#line 548
c_rt_lib0clear(&___nl__im__121);
#line 548
c_rt_lib0move(&___nl__im__122,___get_global_string_const(452));
#line 548
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__122));
#line 548
c_rt_lib0clear(&___nl__im__111);
#line 548
c_rt_lib0clear(&___nl__im__122);
#line 549
c_rt_lib0move(&___nl__im__124,___get_global_string_const(453));
#line 549
c_rt_lib0move(&___nl__im__126,___get_global_string_const(454));
#line 549
c_rt_lib0move(&___nl__im__127,___get_global_string_const(518));
#line 549
c_rt_lib0move(&___nl__im__125, c_rt_lib0array_mk(2, ___nl__im__126, ___nl__im__127));
#line 549
c_rt_lib0clear(&___nl__im__126);
#line 549
c_rt_lib0clear(&___nl__im__127);
#line 549
c_rt_lib0move(&___nl__im__123, generator_c_priv0get_fun_lib(___nl__im__124, ___nl__im__125));
#line 549
c_rt_lib0clear(&___nl__im__124);
#line 549
c_rt_lib0clear(&___nl__im__125);
#line 549
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__123));
#line 549
c_rt_lib0clear(&___nl__im__110);
#line 549
c_rt_lib0clear(&___nl__im__123);
#line 549
c_rt_lib0move(&___nl__im__128,___get_global_string_const(457));
#line 549
c_rt_lib0move(&___nl__im__108, c_rt_lib0concat_new(___nl__im__109, ___nl__im__128));
#line 549
c_rt_lib0clear(&___nl__im__109);
#line 549
c_rt_lib0clear(&___nl__im__128);
#line 549
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__108));
#line 549
c_rt_lib0clear(&___nl__im__108);
#line 552
c_rt_lib0move(&___nl__im__133, generator_c_priv0im_t());
#line 552
c_rt_lib0move(&___nl__im__135,___get_global_string_const(37));
#line 552
c_rt_lib0move(&___nl__im__136,___get_global_string_const(473));
#line 552
___nl__im_ptr__138 = &((*___ref___rec__0).mod_name0field);
#line 552
c_rt_lib0copy(&___nl__im__137, (*___nl__im_ptr__138));
#line 552
___nl__im_ptr__138 = NULL;
#line 552
c_rt_lib0move(&___nl__im__134, generator_c_priv0get_fun_name(___nl__im__135, ___nl__im__136, ___nl__im__137));
#line 552
c_rt_lib0clear(&___nl__im__135);
#line 552
c_rt_lib0clear(&___nl__im__136);
#line 552
c_rt_lib0clear(&___nl__im__137);
#line 552
c_rt_lib0move(&___nl__im__132, c_rt_lib0concat_new(___nl__im__133, ___nl__im__134));
#line 552
c_rt_lib0clear(&___nl__im__133);
#line 552
c_rt_lib0clear(&___nl__im__134);
#line 552
c_rt_lib0move(&___nl__im__139,___get_global_string_const(519));
#line 552
c_rt_lib0move(&___nl__im__131, c_rt_lib0concat_new(___nl__im__132, ___nl__im__139));
#line 552
c_rt_lib0clear(&___nl__im__132);
#line 552
c_rt_lib0clear(&___nl__im__139);
#line 553
___nl__int__141 = ___nl__int__1 + ___nl__int__5;
#line 553
c_rt_lib0move(&___nl__im__142, c_rt_lib0int_new(___nl__int__141));
#line 553
c_rt_lib0move(&___nl__im__140, ptd0int_to_string(___nl__im__142));
#line 553
//clear ___nl__int__141;
#line 553
c_rt_lib0clear(&___nl__im__142);
#line 553
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__131, ___nl__im__140));
#line 553
c_rt_lib0clear(&___nl__im__131);
#line 553
c_rt_lib0clear(&___nl__im__140);
#line 553
c_rt_lib0move(&___nl__im__143,___get_global_string_const(520));
#line 553
c_rt_lib0move(&___nl__im__129, c_rt_lib0concat_new(___nl__im__130, ___nl__im__143));
#line 553
c_rt_lib0clear(&___nl__im__130);
#line 553
c_rt_lib0clear(&___nl__im__143);
#line 553
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__129));
#line 553
c_rt_lib0clear(&___nl__im__129);
#line 555
___nl__int__144 = 0;
#line 555
___nl__int__145 = 1;
#line 555
label_292:
;
#line 555
___nl__int__147 = ___nl__int__144 >= ___nl__int__9;
#line 555
___nl__bool__146 = ___nl__int__147;
#line 555
if(___nl__bool__146){ goto label_347;}
#line 556
c_rt_lib0move(&___nl__im__150,___get_global_string_const(521));
#line 556
c_rt_lib0move(&___nl__im__152, c_rt_lib0int_new(___nl__int__144));
#line 556
c_rt_lib0move(&___nl__im__151, ptd0int_to_string(___nl__im__152));
#line 556
c_rt_lib0clear(&___nl__im__152);
#line 556
c_rt_lib0move(&___nl__im__149, c_rt_lib0concat_new(___nl__im__150, ___nl__im__151));
#line 556
c_rt_lib0clear(&___nl__im__150);
#line 556
c_rt_lib0clear(&___nl__im__151);
#line 556
c_rt_lib0move(&___nl__im__153,___get_global_string_const(522));
#line 556
c_rt_lib0move(&___nl__im__148, c_rt_lib0concat_new(___nl__im__149, ___nl__im__153));
#line 556
c_rt_lib0clear(&___nl__im__149);
#line 556
c_rt_lib0clear(&___nl__im__153);
#line 556
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__148));
#line 556
c_rt_lib0clear(&___nl__im__148);
#line 557
c_rt_lib0move(&___nl__im__158,___get_global_string_const(523));
#line 557
___nl__int__161 = ___nl__int__144 + ___nl__int__1;
#line 557
___nl__int__160 = ___nl__int__161 + ___nl__int__5;
#line 557
//clear ___nl__int__161;
#line 557
c_rt_lib0move(&___nl__im__162, c_rt_lib0int_new(___nl__int__160));
#line 557
c_rt_lib0move(&___nl__im__159, ptd0int_to_string(___nl__im__162));
#line 557
//clear ___nl__int__160;
#line 557
c_rt_lib0clear(&___nl__im__162);
#line 557
c_rt_lib0move(&___nl__im__157, c_rt_lib0concat_new(___nl__im__158, ___nl__im__159));
#line 557
c_rt_lib0clear(&___nl__im__158);
#line 557
c_rt_lib0clear(&___nl__im__159);
#line 557
c_rt_lib0move(&___nl__im__163,___get_global_string_const(510));
#line 557
c_rt_lib0move(&___nl__im__156, c_rt_lib0concat_new(___nl__im__157, ___nl__im__163));
#line 557
c_rt_lib0clear(&___nl__im__157);
#line 557
c_rt_lib0clear(&___nl__im__163);
#line 558
___nl__rec_ptr__165 = &((*___ref___rec__0).const0field);
#line 558
___nl__rec_ptr__166 = &(___nl__rec_ptr__165->singleton0field);
#line 558
___nl__arr_ptr__167 = &(___nl__rec_ptr__166->arr0field);
#line 558
___nl__im_ptr__168 = generator_c0anon_type00ownarranon_type00im0get_ptr(___nl__arr_ptr__167, ___nl__int__144);
#line 558
c_rt_lib0copy(&___nl__im__164, (*___nl__im_ptr__168));
#line 558
//release ___nl__im_ptr__168;
#line 558
___nl__arr_ptr__167 = NULL;
#line 558
___nl__rec_ptr__166 = NULL;
#line 558
___nl__rec_ptr__165 = NULL;
#line 558
c_rt_lib0move(&___nl__im__155, c_rt_lib0concat_new(___nl__im__156, ___nl__im__164));
#line 558
c_rt_lib0clear(&___nl__im__156);
#line 558
c_rt_lib0clear(&___nl__im__164);
#line 558
c_rt_lib0move(&___nl__im__169,___get_global_string_const(524));
#line 558
c_rt_lib0move(&___nl__im__154, c_rt_lib0concat_new(___nl__im__155, ___nl__im__169));
#line 558
c_rt_lib0clear(&___nl__im__155);
#line 558
c_rt_lib0clear(&___nl__im__169);
#line 558
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__154));
#line 558
c_rt_lib0clear(&___nl__im__154);
#line 559
c_rt_lib0move(&___nl__im__170,___get_global_string_const(525));
#line 559
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__170));
#line 559
c_rt_lib0clear(&___nl__im__170);
#line 560
___nl__int__144 = ___nl__int__144 + ___nl__int__145;
#line 560
goto label_292;
#line 560
label_347:
;
#line 561
c_rt_lib0move(&___nl__im__175,___get_global_string_const(526));
#line 564
c_rt_lib0move(&___nl__im__176, generator_c_priv0im_t());
#line 564
c_rt_lib0move(&___nl__im__174, c_rt_lib0concat_new(___nl__im__175, ___nl__im__176));
#line 564
c_rt_lib0clear(&___nl__im__175);
#line 564
c_rt_lib0clear(&___nl__im__176);
#line 564
c_rt_lib0move(&___nl__im__177,___get_global_string_const(452));
#line 564
c_rt_lib0move(&___nl__im__173, c_rt_lib0concat_new(___nl__im__174, ___nl__im__177));
#line 564
c_rt_lib0clear(&___nl__im__174);
#line 564
c_rt_lib0clear(&___nl__im__177);
#line 565
c_rt_lib0move(&___nl__im__179,___get_global_string_const(453));
#line 565
c_rt_lib0move(&___nl__im__181,___get_global_string_const(454));
#line 565
c_rt_lib0move(&___nl__im__184,___get_global_string_const(527));
#line 565
___nl__int__186 = ___nl__int__1 + ___nl__int__5;
#line 565
c_rt_lib0move(&___nl__im__187, c_rt_lib0int_new(___nl__int__186));
#line 565
c_rt_lib0move(&___nl__im__185, ptd0int_to_string(___nl__im__187));
#line 565
//clear ___nl__int__186;
#line 565
c_rt_lib0clear(&___nl__im__187);
#line 565
c_rt_lib0move(&___nl__im__183, c_rt_lib0concat_new(___nl__im__184, ___nl__im__185));
#line 565
c_rt_lib0clear(&___nl__im__184);
#line 565
c_rt_lib0clear(&___nl__im__185);
#line 565
c_rt_lib0move(&___nl__im__188,___get_global_string_const(315));
#line 565
c_rt_lib0move(&___nl__im__182, c_rt_lib0concat_new(___nl__im__183, ___nl__im__188));
#line 565
c_rt_lib0clear(&___nl__im__183);
#line 565
c_rt_lib0clear(&___nl__im__188);
#line 565
c_rt_lib0move(&___nl__im__180, c_rt_lib0array_mk(2, ___nl__im__181, ___nl__im__182));
#line 565
c_rt_lib0clear(&___nl__im__181);
#line 565
c_rt_lib0clear(&___nl__im__182);
#line 565
c_rt_lib0move(&___nl__im__178, generator_c_priv0get_fun_lib(___nl__im__179, ___nl__im__180));
#line 565
c_rt_lib0clear(&___nl__im__179);
#line 565
c_rt_lib0clear(&___nl__im__180);
#line 565
c_rt_lib0move(&___nl__im__172, c_rt_lib0concat_new(___nl__im__173, ___nl__im__178));
#line 565
c_rt_lib0clear(&___nl__im__173);
#line 565
c_rt_lib0clear(&___nl__im__178);
#line 565
c_rt_lib0move(&___nl__im__189,___get_global_string_const(457));
#line 565
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__189));
#line 565
c_rt_lib0clear(&___nl__im__172);
#line 565
c_rt_lib0clear(&___nl__im__189);
#line 565
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__171));
#line 565
c_rt_lib0clear(&___nl__im__171);
#line 565
//clear ___nl__int__1;
#line 565
//clear ___nl__int__5;
#line 565
//clear ___nl__int__9;
#line 565
//clear ___nl__int__13;
#line 565
//clear ___nl__int__16;
#line 565
//clear ___nl__int__47;
#line 565
//clear ___nl__int__48;
#line 565
//clear ___nl__bool__49;
#line 565
//clear ___nl__int__50;
#line 565
//clear ___nl__int__66;
#line 565
//clear ___nl__int__67;
#line 565
//clear ___nl__bool__68;
#line 565
//clear ___nl__int__69;
#line 565
//clear ___nl__int__144;
#line 565
//clear ___nl__int__145;
#line 565
//clear ___nl__bool__146;
#line 565
//clear ___nl__int__147;
#line 565
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
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
INT  ___nl__int__23 = 0;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
INT  ___nl__int__26 = 0;
INT  ___nl__int__27 = 0;
INT  ___nl__int__28 = 0;
bool  ___nl__bool__29 = false;
INT  ___nl__int__30 = 0;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
bool  ___nl__bool__33 = false;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
bool  ___nl__bool__37 = false;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
ImmT  ___nl__im__42 = NULL;
bool  ___nl__bool__43 = false;
INT  ___nl__int__44 = 0;
bool  ___nl__bool__45 = false;
ImmT  ___nl__im__46 = NULL;
INT  ___nl__int__47 = 0;
INT  ___nl__int__48 = 0;
INT  ___nl__int__49 = 0;
bool  ___nl__bool__50 = false;
INT  ___nl__int__51 = 0;
ImmT  ___nl__im__52 = NULL;
bool  ___nl__bool__53 = false;
ImmT  ___nl__im__54 = NULL;
bool  ___nl__bool__55 = false;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
INT  ___nl__int__58 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__59 = NULL;
INT * ___nl__int_ptr__60 = NULL;
ImmT  ___nl__im__61 = NULL;
ImmT  ___nl__im__62 = NULL;
ImmT  ___nl__im__63 = NULL;
ImmT  ___nl__im__64 = NULL;
ImmT  ___nl__im__65 = NULL;
ImmT  ___nl__im__66 = NULL;
ImmT  ___nl__im__67 = NULL;
INT  ___nl__int__68 = 0;
INT  ___nl__int__69 = 0;
INT  ___nl__int__70 = 0;
bool  ___nl__bool__71 = false;
INT  ___nl__int__72 = 0;
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
INT  ___nl__int__86 = 0;
ImmT  ___nl__im__87 = NULL;
ImmT  ___nl__im__88 = NULL;
INT  ___nl__int__89 = 0;
INT  ___nl__int__90 = 0;
INT  ___nl__int__91 = 0;
bool  ___nl__bool__92 = false;
INT  ___nl__int__93 = 0;
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
INT  ___nl__int__107 = 0;
anon_type00RBanon_type00refgenerator_c0const_t0type0int0anon_type00refgenerator_c0const_t0type0string0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE* ___nl__rec_ptr__108 = NULL;
INT * ___nl__int_ptr__109 = NULL;
ImmT  ___nl__im__110 = NULL;
ImmT  ___nl__im__111 = NULL;
ImmT * ___nl__im_ptr__112 = NULL;
bool  ___nl__bool__113 = false;
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
#line 571
c_rt_lib0move(&___nl__im__3,___get_global_string_const(528));
#line 571
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__3));
#line 571
c_rt_lib0clear(&___nl__im__3);
#line 572
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(214)));
#line 572
___nl__im_ptr__5 = &((*___ref___rec__0).fun_args0field);
#line 572
c_rt_lib0copy(___nl__im_ptr__5, ___nl__im__4);
#line 572
___nl__im_ptr__5 = NULL;
#line 572
c_rt_lib0clear(&___nl__im__4);
#line 573
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(415)));
#line 573
___nl__im_ptr__7 = &((*___ref___rec__0).ret_reg_type0field);
#line 573
c_rt_lib0copy(___nl__im_ptr__7, ___nl__im__6);
#line 573
___nl__im_ptr__7 = NULL;
#line 573
c_rt_lib0clear(&___nl__im__6);
#line 574
c_rt_lib0delete(generator_c_priv0move_args_to_register(___ref___rec__0));
#line 575
c_rt_lib0move(&___nl__im__10,___get_global_string_const(37));
#line 575
c_rt_lib0move(&___nl__im__11,___get_global_string_const(483));
#line 575
___nl__im_ptr__13 = &((*___ref___rec__0).mod_name0field);
#line 575
c_rt_lib0copy(&___nl__im__12, (*___nl__im_ptr__13));
#line 575
___nl__im_ptr__13 = NULL;
#line 575
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_name(___nl__im__10, ___nl__im__11, ___nl__im__12));
#line 575
c_rt_lib0clear(&___nl__im__10);
#line 575
c_rt_lib0clear(&___nl__im__11);
#line 575
c_rt_lib0clear(&___nl__im__12);
#line 575
c_rt_lib0move(&___nl__im__14,___get_global_string_const(484));
#line 575
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__14));
#line 575
c_rt_lib0clear(&___nl__im__9);
#line 575
c_rt_lib0clear(&___nl__im__14);
#line 575
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__8));
#line 575
c_rt_lib0clear(&___nl__im__8);
#line 577
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(214)));
#line 577
___nl__int__15 = c_rt_lib0array_len(___nl__im__16);
#line 577
c_rt_lib0clear(&___nl__im__16);
#line 577
label_32:
;
#line 577
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 577
___nl__int__18 = c_rt_lib0array_len(___nl__im__19);
#line 577
c_rt_lib0clear(&___nl__im__19);
#line 577
___nl__int__20 = ___nl__int__15 < ___nl__int__18;
#line 577
___nl__bool__17 = ___nl__int__20;
#line 577
//clear ___nl__int__18;
#line 577
//clear ___nl__int__20;
#line 577
___nl__bool__17 = !___nl__bool__17;
#line 577
if(___nl__bool__17){ goto label_51;}
#line 578
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(215)));
#line 578
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_get(___nl__im__22, ___nl__int__15));
#line 578
c_rt_lib0clear(&___nl__im__22);
#line 578
c_rt_lib0delete(generator_c_priv0print_declaration(___ref___rec__0, ___nl__im__21));
#line 578
c_rt_lib0clear(&___nl__im__21);
#line 577
___nl__int__23 = 1;
#line 577
___nl__int__15 = ___nl__int__15 + ___nl__int__23;
#line 577
//clear ___nl__int__23;
#line 579
goto label_32;
#line 579
label_51:
;
#line 580
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(213)));
#line 580
___nl__int__26 = 0;
#line 580
___nl__int__27 = 1;
#line 580
___nl__int__28 = c_rt_lib0array_len(___nl__im__24);
#line 580
label_56:
;
#line 580
___nl__int__30 = ___nl__int__26 >= ___nl__int__28;
#line 580
___nl__bool__29 = ___nl__int__30;
#line 580
if(___nl__bool__29){ goto label_297;}
#line 580
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_get(___nl__im__24, ___nl__int__26));
#line 580
c_rt_lib0copy(&___nl__im__25, ___nl__im__31);
#line 581
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(226)));
#line 581
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(72));
#line 581
if(___nl__bool__33){ goto label_70;}
#line 583
___nl__bool__33 = c_rt_lib0priv_is(___nl__im__32, ___get_global_string_const(222));
#line 583
if(___nl__bool__33){ goto label_73;}
#line 583
c_rt_lib0move(&___nl__im__34,___get_global_string_const(16));
#line 583
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(2, ___nl__im__34, ___nl__im__32));
#line 583
nl_die_arg(___nl__im__34);
#line 581
label_70:
;
#line 582
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__25, ___nl__im__2));
#line 583
goto label_292;
#line 583
label_73:
;
#line 583
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__32, ___get_global_string_const(222)));
#line 583
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 584
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(227)));
#line 584
___nl__bool__37 = c_rt_lib0priv_is(___nl__im__38, ___get_global_string_const(225));
#line 584
c_rt_lib0clear(&___nl__im__38);
#line 584
___nl__bool__37 = !___nl__bool__37;
#line 584
if(___nl__bool__37){ goto label_105;}
#line 585
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(227)));
#line 585
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(227)));
#line 585
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__42, ___get_global_string_const(225)));
#line 585
c_rt_lib0clear(&___nl__im__41);
#line 585
c_rt_lib0clear(&___nl__im__42);
#line 585
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(224)));
#line 585
c_rt_lib0clear(&___nl__im__40);
#line 586
___nl__bool__43 = nl0is_sim(___nl__im__39);
#line 586
___nl__bool__43 = !___nl__bool__43;
#line 586
if(___nl__bool__43){ goto label_102;}
#line 587
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__25, ___nl__im__2));
#line 588
c_rt_lib0clear(&___nl__im__32);
#line 588
//clear ___nl__bool__33;
#line 588
c_rt_lib0clear(&___nl__im__34);
#line 588
c_rt_lib0clear(&___nl__im__35);
#line 588
c_rt_lib0clear(&___nl__im__36);
#line 588
//clear ___nl__bool__37;
#line 588
c_rt_lib0clear(&___nl__im__39);
#line 588
//clear ___nl__bool__43;
#line 588
goto label_294;
#line 589
goto label_102;
#line 589
label_102:
;
#line 589
//clear ___nl__bool__43;
#line 590
goto label_105;
#line 590
label_105:
;
#line 590
//clear ___nl__bool__37;
#line 590
c_rt_lib0clear(&___nl__im__39);
#line 591
___nl__int__44 = c_rt_lib0array_len(___nl__im__35);
#line 592
___nl__bool__45 = true;
#line 593
___nl__int__47 = 0;
#line 593
___nl__int__48 = 1;
#line 593
___nl__int__49 = c_rt_lib0array_len(___nl__im__35);
#line 593
label_113:
;
#line 593
___nl__int__51 = ___nl__int__47 >= ___nl__int__49;
#line 593
___nl__bool__50 = ___nl__int__51;
#line 593
if(___nl__bool__50){ goto label_132;}
#line 593
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_get(___nl__im__35, ___nl__int__47));
#line 593
c_rt_lib0copy(&___nl__im__46, ___nl__im__52);
#line 594
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(205)));
#line 594
___nl__bool__53 = c_rt_lib0priv_is(___nl__im__54, ___get_global_string_const(132));
#line 594
c_rt_lib0clear(&___nl__im__54);
#line 594
___nl__bool__53 = !___nl__bool__53;
#line 594
___nl__bool__53 = !___nl__bool__53;
#line 594
if(___nl__bool__53){ goto label_127;}
#line 594
___nl__bool__45 = false;
#line 594
goto label_127;
#line 594
label_127:
;
#line 594
//clear ___nl__bool__53;
#line 594
c_rt_lib0clear(&___nl__im__46);
#line 595
___nl__int__47 = ___nl__int__47 + ___nl__int__48;
#line 595
goto label_113;
#line 595
label_132:
;
#line 596
___nl__int__56 = 0;
#line 596
___nl__int__57 = ___nl__int__44 == ___nl__int__56;
#line 596
___nl__bool__55 = ___nl__int__57;
#line 596
//clear ___nl__int__56;
#line 596
//clear ___nl__int__57;
#line 596
if(___nl__bool__55){ goto label_141;}
#line 596
___nl__bool__55 = ___nl__bool__45;
#line 596
___nl__bool__55 = !___nl__bool__55;
#line 596
label_141:
;
#line 596
___nl__bool__55 = !___nl__bool__55;
#line 596
if(___nl__bool__55){ goto label_162;}
#line 597
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__25, ___nl__im__2));
#line 598
c_rt_lib0clear(&___nl__im__32);
#line 598
//clear ___nl__bool__33;
#line 598
c_rt_lib0clear(&___nl__im__34);
#line 598
c_rt_lib0clear(&___nl__im__35);
#line 598
c_rt_lib0clear(&___nl__im__36);
#line 598
//clear ___nl__int__44;
#line 598
//clear ___nl__bool__45;
#line 598
c_rt_lib0clear(&___nl__im__46);
#line 598
//clear ___nl__int__47;
#line 598
//clear ___nl__int__48;
#line 598
//clear ___nl__int__49;
#line 598
//clear ___nl__bool__50;
#line 598
//clear ___nl__int__51;
#line 598
c_rt_lib0clear(&___nl__im__52);
#line 598
//clear ___nl__bool__55;
#line 598
goto label_294;
#line 599
goto label_274;
#line 599
label_162:
;
#line 600
___nl__rec_ptr__59 = &((*___ref___rec__0).const0field);
#line 600
___nl__int_ptr__60 = &(___nl__rec_ptr__59->dynamic_nr0field);
#line 600
___nl__int__58 = (*___nl__int_ptr__60);
#line 600
___nl__int_ptr__60 = NULL;
#line 600
___nl__rec_ptr__59 = NULL;
#line 601
c_rt_lib0move(&___nl__im__63,___get_global_string_const(529));
#line 601
c_rt_lib0move(&___nl__im__65, c_rt_lib0int_new(___nl__int__58));
#line 601
c_rt_lib0move(&___nl__im__64, ptd0int_to_string(___nl__im__65));
#line 601
c_rt_lib0clear(&___nl__im__65);
#line 601
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__64));
#line 601
c_rt_lib0clear(&___nl__im__63);
#line 601
c_rt_lib0clear(&___nl__im__64);
#line 601
c_rt_lib0move(&___nl__im__66,___get_global_string_const(530));
#line 601
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__66));
#line 601
c_rt_lib0clear(&___nl__im__62);
#line 601
c_rt_lib0clear(&___nl__im__66);
#line 601
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__61));
#line 601
c_rt_lib0clear(&___nl__im__61);
#line 602
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___rec__0, ___nl__im__25, ___nl__im__2));
#line 603
___nl__int__68 = 0;
#line 603
___nl__int__69 = 1;
#line 603
___nl__int__70 = c_rt_lib0array_len(___nl__im__35);
#line 603
label_185:
;
#line 603
___nl__int__72 = ___nl__int__68 >= ___nl__int__70;
#line 603
___nl__bool__71 = ___nl__int__72;
#line 603
if(___nl__bool__71){ goto label_222;}
#line 603
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_get(___nl__im__35, ___nl__int__68));
#line 603
c_rt_lib0copy(&___nl__im__67, ___nl__im__73);
#line 604
c_rt_lib0move(&___nl__im__76,___get_global_string_const(453));
#line 604
c_rt_lib0move(&___nl__im__80,___get_global_string_const(531));
#line 604
c_rt_lib0move(&___nl__im__82, c_rt_lib0int_new(___nl__int__58));
#line 604
c_rt_lib0move(&___nl__im__81, ptd0int_to_string(___nl__im__82));
#line 604
c_rt_lib0clear(&___nl__im__82);
#line 604
c_rt_lib0move(&___nl__im__79, c_rt_lib0concat_new(___nl__im__80, ___nl__im__81));
#line 604
c_rt_lib0clear(&___nl__im__80);
#line 604
c_rt_lib0clear(&___nl__im__81);
#line 604
c_rt_lib0move(&___nl__im__83,___get_global_string_const(315));
#line 604
c_rt_lib0move(&___nl__im__78, c_rt_lib0concat_new(___nl__im__79, ___nl__im__83));
#line 604
c_rt_lib0clear(&___nl__im__79);
#line 604
c_rt_lib0clear(&___nl__im__83);
#line 605
c_rt_lib0move(&___nl__im__84, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__67));
#line 605
c_rt_lib0move(&___nl__im__77, c_rt_lib0array_mk(2, ___nl__im__78, ___nl__im__84));
#line 605
c_rt_lib0clear(&___nl__im__78);
#line 605
c_rt_lib0clear(&___nl__im__84);
#line 605
c_rt_lib0move(&___nl__im__75, generator_c_priv0get_fun_lib(___nl__im__76, ___nl__im__77));
#line 605
c_rt_lib0clear(&___nl__im__76);
#line 605
c_rt_lib0clear(&___nl__im__77);
#line 605
c_rt_lib0move(&___nl__im__85,___get_global_string_const(440));
#line 605
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__85));
#line 605
c_rt_lib0clear(&___nl__im__75);
#line 605
c_rt_lib0clear(&___nl__im__85);
#line 605
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__74));
#line 605
c_rt_lib0clear(&___nl__im__74);
#line 606
___nl__int__86 = 1;
#line 606
___nl__int__58 = ___nl__int__58 + ___nl__int__86;
#line 606
//clear ___nl__int__86;
#line 606
c_rt_lib0clear(&___nl__im__67);
#line 607
___nl__int__68 = ___nl__int__68 + ___nl__int__69;
#line 607
goto label_185;
#line 607
label_222:
;
#line 608
c_rt_lib0move(&___nl__im__87,___get_global_string_const(305));
#line 608
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__87));
#line 608
c_rt_lib0clear(&___nl__im__87);
#line 609
___nl__int__58 = ___nl__int__58 - ___nl__int__44;
#line 610
___nl__int__89 = 0;
#line 610
___nl__int__90 = 1;
#line 610
___nl__int__91 = c_rt_lib0array_len(___nl__im__35);
#line 610
label_230:
;
#line 610
___nl__int__93 = ___nl__int__89 >= ___nl__int__91;
#line 610
___nl__bool__92 = ___nl__int__93;
#line 610
if(___nl__bool__92){ goto label_267;}
#line 610
c_rt_lib0move(&___nl__im__94, c_rt_lib0array_get(___nl__im__35, ___nl__int__89));
#line 610
c_rt_lib0copy(&___nl__im__88, ___nl__im__94);
#line 611
c_rt_lib0move(&___nl__im__97,___get_global_string_const(453));
#line 611
c_rt_lib0move(&___nl__im__99, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__88));
#line 612
c_rt_lib0move(&___nl__im__102,___get_global_string_const(532));
#line 612
c_rt_lib0move(&___nl__im__104, c_rt_lib0int_new(___nl__int__58));
#line 612
c_rt_lib0move(&___nl__im__103, ptd0int_to_string(___nl__im__104));
#line 612
c_rt_lib0clear(&___nl__im__104);
#line 612
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__103));
#line 612
c_rt_lib0clear(&___nl__im__102);
#line 612
c_rt_lib0clear(&___nl__im__103);
#line 612
c_rt_lib0move(&___nl__im__105,___get_global_string_const(315));
#line 612
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__105));
#line 612
c_rt_lib0clear(&___nl__im__101);
#line 612
c_rt_lib0clear(&___nl__im__105);
#line 612
c_rt_lib0move(&___nl__im__98, c_rt_lib0array_mk(2, ___nl__im__99, ___nl__im__100));
#line 612
c_rt_lib0clear(&___nl__im__99);
#line 612
c_rt_lib0clear(&___nl__im__100);
#line 612
c_rt_lib0move(&___nl__im__96, generator_c_priv0get_fun_lib(___nl__im__97, ___nl__im__98));
#line 612
c_rt_lib0clear(&___nl__im__97);
#line 612
c_rt_lib0clear(&___nl__im__98);
#line 612
c_rt_lib0move(&___nl__im__106,___get_global_string_const(440));
#line 612
c_rt_lib0move(&___nl__im__95, c_rt_lib0concat_new(___nl__im__96, ___nl__im__106));
#line 612
c_rt_lib0clear(&___nl__im__96);
#line 612
c_rt_lib0clear(&___nl__im__106);
#line 612
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__95));
#line 612
c_rt_lib0clear(&___nl__im__95);
#line 613
___nl__int__107 = 1;
#line 613
___nl__int__58 = ___nl__int__58 + ___nl__int__107;
#line 613
//clear ___nl__int__107;
#line 613
c_rt_lib0clear(&___nl__im__88);
#line 614
___nl__int__89 = ___nl__int__89 + ___nl__int__90;
#line 614
goto label_230;
#line 614
label_267:
;
#line 615
___nl__rec_ptr__108 = &((*___ref___rec__0).const0field);
#line 615
___nl__int_ptr__109 = &(___nl__rec_ptr__108->dynamic_nr0field);
#line 615
(*___nl__int_ptr__109) = ___nl__int__58;
#line 615
___nl__int_ptr__109 = NULL;
#line 615
___nl__rec_ptr__108 = NULL;
#line 616
goto label_274;
#line 616
label_274:
;
#line 616
//clear ___nl__bool__55;
#line 616
//clear ___nl__int__58;
#line 616
c_rt_lib0clear(&___nl__im__67);
#line 616
//clear ___nl__int__68;
#line 616
//clear ___nl__int__69;
#line 616
//clear ___nl__int__70;
#line 616
//clear ___nl__bool__71;
#line 616
//clear ___nl__int__72;
#line 616
c_rt_lib0clear(&___nl__im__73);
#line 616
c_rt_lib0clear(&___nl__im__88);
#line 616
//clear ___nl__int__89;
#line 616
//clear ___nl__int__90;
#line 616
//clear ___nl__int__91;
#line 616
//clear ___nl__bool__92;
#line 616
//clear ___nl__int__93;
#line 616
c_rt_lib0clear(&___nl__im__94);
#line 617
goto label_292;
#line 617
label_292:
;
#line 617
c_rt_lib0clear(&___nl__im__25);
#line 617
label_294:
;
#line 618
___nl__int__26 = ___nl__int__26 + ___nl__int__27;
#line 618
goto label_56;
#line 618
label_297:
;
#line 619
___nl__im_ptr__112 = &((*___ref___rec__0).ret_reg_type0field);
#line 619
c_rt_lib0copy(&___nl__im__111, (*___nl__im_ptr__112));
#line 619
___nl__im_ptr__112 = NULL;
#line 619
c_rt_lib0move(&___nl__im__110, generator_c_priv0get_empty_value(___nl__im__111));
#line 619
c_rt_lib0clear(&___nl__im__111);
#line 620
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(466)));
#line 620
___nl__bool__113 = c_rt_lib0priv_is(___nl__im__114, ___get_global_string_const(8));
#line 620
c_rt_lib0clear(&___nl__im__114);
#line 620
___nl__bool__113 = !___nl__bool__113;
#line 620
___nl__bool__113 = !___nl__bool__113;
#line 620
if(___nl__bool__113){ goto label_319;}
#line 620
c_rt_lib0move(&___nl__im__117,___get_global_string_const(501));
#line 620
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__110));
#line 620
c_rt_lib0clear(&___nl__im__117);
#line 620
c_rt_lib0move(&___nl__im__118,___get_global_string_const(440));
#line 620
c_rt_lib0move(&___nl__im__115, c_rt_lib0concat_new(___nl__im__116, ___nl__im__118));
#line 620
c_rt_lib0clear(&___nl__im__116);
#line 620
c_rt_lib0clear(&___nl__im__118);
#line 620
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__115));
#line 620
c_rt_lib0clear(&___nl__im__115);
#line 620
goto label_319;
#line 620
label_319:
;
#line 620
//clear ___nl__bool__113;
#line 621
c_rt_lib0move(&___nl__im__121, string0lf());
#line 621
c_rt_lib0move(&___nl__im__122,___get_global_string_const(305));
#line 621
c_rt_lib0move(&___nl__im__120, c_rt_lib0concat_new(___nl__im__121, ___nl__im__122));
#line 621
c_rt_lib0clear(&___nl__im__121);
#line 621
c_rt_lib0clear(&___nl__im__122);
#line 621
c_rt_lib0move(&___nl__im__123, string0lf());
#line 621
c_rt_lib0move(&___nl__im__119, c_rt_lib0concat_new(___nl__im__120, ___nl__im__123));
#line 621
c_rt_lib0clear(&___nl__im__120);
#line 621
c_rt_lib0clear(&___nl__im__123);
#line 621
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__119));
#line 621
c_rt_lib0clear(&___nl__im__119);
#line 621
c_rt_lib0clear(&___nl__im__1);
#line 621
c_rt_lib0clear(&___nl__im__2);
#line 621
//clear ___nl__int__15;
#line 621
//clear ___nl__bool__17;
#line 621
c_rt_lib0clear(&___nl__im__24);
#line 621
c_rt_lib0clear(&___nl__im__25);
#line 621
//clear ___nl__int__26;
#line 621
//clear ___nl__int__27;
#line 621
//clear ___nl__int__28;
#line 621
//clear ___nl__bool__29;
#line 621
//clear ___nl__int__30;
#line 621
c_rt_lib0clear(&___nl__im__31);
#line 621
c_rt_lib0clear(&___nl__im__32);
#line 621
//clear ___nl__bool__33;
#line 621
c_rt_lib0clear(&___nl__im__34);
#line 621
c_rt_lib0clear(&___nl__im__35);
#line 621
c_rt_lib0clear(&___nl__im__36);
#line 621
//clear ___nl__int__44;
#line 621
//clear ___nl__bool__45;
#line 621
c_rt_lib0clear(&___nl__im__46);
#line 621
//clear ___nl__int__47;
#line 621
//clear ___nl__int__48;
#line 621
//clear ___nl__int__49;
#line 621
//clear ___nl__bool__50;
#line 621
//clear ___nl__int__51;
#line 621
c_rt_lib0clear(&___nl__im__52);
#line 621
c_rt_lib0clear(&___nl__im__110);
#line 621
return NULL;

}

bool  generator_c_priv0is_singleton_use_function(nlasm0function_t0type ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
bool  ___nl__bool__1 = false;
INT  ___nl__int__2 = 0;
ImmT  ___nl__im__3 = NULL;
INT  ___nl__int__4 = 0;
INT  ___nl__int__5 = 0;
ImmT  ___nl__im__6 = NULL;
bool  ___nl__bool__7 = false;
bool  ___nl__bool__8 = false;
ImmT  ___nl__im__9 = NULL;
bool  ___nl__bool__10 = false;
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
INT  ___nl__int__16 = 0;
bool  ___nl__bool__17 = false;
INT  ___nl__int__18 = 0;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
bool  ___nl__bool__23 = false;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
bool  ___nl__bool__26 = false;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
bool  ___nl__bool__32 = false;
bool  ___nl__bool__33 = false;
bool  ___nl__bool__34 = false;
bool  ___nl__bool__35 = false;
bool  ___nl__bool__36 = false;
bool  ___nl__bool__37 = false;
bool  ___nl__bool__38 = false;
INT  ___nl__int__39 = 0;
ImmT  ___nl__im__40 = NULL;
ImmT  ___nl__im__41 = NULL;
INT  ___nl__int__42 = 0;
bool  ___nl__bool__43 = false;
bool  ___nl__bool__44 = false;
bool  ___nl__bool__45 = false;
#line 625
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 625
___nl__int__2 = c_rt_lib0array_len(___nl__im__3);
#line 625
c_rt_lib0clear(&___nl__im__3);
#line 625
___nl__int__4 = 0;
#line 625
___nl__int__5 = ___nl__int__2 > ___nl__int__4;
#line 625
___nl__bool__1 = ___nl__int__5;
#line 625
//clear ___nl__int__2;
#line 625
//clear ___nl__int__4;
#line 625
//clear ___nl__int__5;
#line 625
if(___nl__bool__1){ goto label_14;}
#line 625
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(415)));
#line 625
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(132));
#line 625
c_rt_lib0clear(&___nl__im__6);
#line 625
___nl__bool__1 = !___nl__bool__1;
#line 625
label_14:
;
#line 625
___nl__bool__1 = !___nl__bool__1;
#line 625
if(___nl__bool__1){ goto label_22;}
#line 625
___nl__bool__7 = false;
#line 625
c_rt_lib0clear(&___nl__im__0);
#line 625
//clear ___nl__bool__1;
#line 625
return ___nl__bool__7;
#line 625
goto label_22;
#line 625
label_22:
;
#line 625
//clear ___nl__bool__1;
#line 625
//clear ___nl__bool__7;
#line 626
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(226)));
#line 626
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__9, ___get_global_string_const(193));
#line 626
c_rt_lib0clear(&___nl__im__9);
#line 627
___nl__bool__10 = false;
#line 628
___nl__int__11 = 1;
#line 628
___nl__int__11 = -___nl__int__11;
#line 629
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(213)));
#line 629
___nl__int__14 = 0;
#line 629
___nl__int__15 = 1;
#line 629
___nl__int__16 = c_rt_lib0array_len(___nl__im__12);
#line 629
label_35:
;
#line 629
___nl__int__18 = ___nl__int__14 >= ___nl__int__16;
#line 629
___nl__bool__17 = ___nl__int__18;
#line 629
if(___nl__bool__17){ goto label_245;}
#line 629
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__12, ___nl__int__14));
#line 629
c_rt_lib0copy(&___nl__im__13, ___nl__im__19);
#line 630
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(227)));
#line 631
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(232));
#line 631
___nl__bool__21 = !___nl__bool__21;
#line 631
if(___nl__bool__21){ goto label_85;}
#line 632
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(232)));
#line 633
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(268)));
#line 633
c_rt_lib0move(&___nl__im__25,___get_global_string_const(533));
#line 633
___nl__bool__23 = c_rt_lib0eq(___nl__im__24, ___nl__im__25);
#line 633
c_rt_lib0clear(&___nl__im__24);
#line 633
c_rt_lib0clear(&___nl__im__25);
#line 633
___nl__bool__23 = !___nl__bool__23;
#line 633
___nl__bool__23 = !___nl__bool__23;
#line 633
if(___nl__bool__23){ goto label_60;}
#line 633
c_rt_lib0clear(&___nl__im__20);
#line 633
//clear ___nl__bool__21;
#line 633
c_rt_lib0clear(&___nl__im__22);
#line 633
//clear ___nl__bool__23;
#line 633
goto label_242;
#line 633
goto label_60;
#line 633
label_60:
;
#line 633
//clear ___nl__bool__23;
#line 634
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(266)));
#line 634
c_rt_lib0move(&___nl__im__28,___get_global_string_const(405));
#line 634
___nl__bool__26 = c_rt_lib0eq(___nl__im__27, ___nl__im__28);
#line 634
c_rt_lib0clear(&___nl__im__27);
#line 634
c_rt_lib0clear(&___nl__im__28);
#line 634
___nl__bool__26 = !___nl__bool__26;
#line 634
___nl__bool__26 = !___nl__bool__26;
#line 634
if(___nl__bool__26){ goto label_76;}
#line 634
c_rt_lib0clear(&___nl__im__20);
#line 634
//clear ___nl__bool__21;
#line 634
c_rt_lib0clear(&___nl__im__22);
#line 634
//clear ___nl__bool__26;
#line 634
goto label_242;
#line 634
goto label_76;
#line 634
label_76:
;
#line 634
//clear ___nl__bool__26;
#line 635
___nl__bool__10 = true;
#line 636
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(223)));
#line 636
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(218)));
#line 636
___nl__int__11 = getIntFromImm(___nl__im__30);
#line 636
c_rt_lib0clear(&___nl__im__29);
#line 636
c_rt_lib0clear(&___nl__im__30);
#line 637
goto label_236;
#line 637
label_85:
;
#line 637
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(246));
#line 637
___nl__bool__21 = !___nl__bool__21;
#line 637
if(___nl__bool__21){ goto label_197;}
#line 638
c_rt_lib0move(&___nl__im__31, c_rt_lib0priv_as(___nl__im__20, ___get_global_string_const(246)));
#line 639
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__31, ___get_global_string_const(224));
#line 639
___nl__bool__32 = !___nl__bool__32;
#line 639
___nl__bool__32 = !___nl__bool__32;
#line 639
if(___nl__bool__32){ goto label_114;}
#line 639
___nl__bool__33 = false;
#line 639
c_rt_lib0clear(&___nl__im__0);
#line 639
//clear ___nl__bool__8;
#line 639
//clear ___nl__bool__10;
#line 639
//clear ___nl__int__11;
#line 639
c_rt_lib0clear(&___nl__im__12);
#line 639
c_rt_lib0clear(&___nl__im__13);
#line 639
//clear ___nl__int__14;
#line 639
//clear ___nl__int__15;
#line 639
//clear ___nl__int__16;
#line 639
//clear ___nl__bool__17;
#line 639
//clear ___nl__int__18;
#line 639
c_rt_lib0clear(&___nl__im__19);
#line 639
c_rt_lib0clear(&___nl__im__20);
#line 639
//clear ___nl__bool__21;
#line 639
c_rt_lib0clear(&___nl__im__22);
#line 639
c_rt_lib0clear(&___nl__im__31);
#line 639
//clear ___nl__bool__32;
#line 639
return ___nl__bool__33;
#line 639
goto label_114;
#line 639
label_114:
;
#line 639
//clear ___nl__bool__32;
#line 639
//clear ___nl__bool__33;
#line 640
___nl__bool__34 = ___nl__bool__8;
#line 640
___nl__bool__34 = !___nl__bool__34;
#line 640
if(___nl__bool__34){ goto label_140;}
#line 640
___nl__bool__35 = true;
#line 640
c_rt_lib0clear(&___nl__im__0);
#line 640
//clear ___nl__bool__8;
#line 640
//clear ___nl__bool__10;
#line 640
//clear ___nl__int__11;
#line 640
c_rt_lib0clear(&___nl__im__12);
#line 640
c_rt_lib0clear(&___nl__im__13);
#line 640
//clear ___nl__int__14;
#line 640
//clear ___nl__int__15;
#line 640
//clear ___nl__int__16;
#line 640
//clear ___nl__bool__17;
#line 640
//clear ___nl__int__18;
#line 640
c_rt_lib0clear(&___nl__im__19);
#line 640
c_rt_lib0clear(&___nl__im__20);
#line 640
//clear ___nl__bool__21;
#line 640
c_rt_lib0clear(&___nl__im__22);
#line 640
c_rt_lib0clear(&___nl__im__31);
#line 640
//clear ___nl__bool__34;
#line 640
return ___nl__bool__35;
#line 640
goto label_140;
#line 640
label_140:
;
#line 640
//clear ___nl__bool__34;
#line 640
//clear ___nl__bool__35;
#line 641
___nl__bool__36 = ___nl__bool__10;
#line 641
___nl__bool__36 = !___nl__bool__36;
#line 641
___nl__bool__36 = !___nl__bool__36;
#line 641
if(___nl__bool__36){ goto label_167;}
#line 641
___nl__bool__37 = false;
#line 641
c_rt_lib0clear(&___nl__im__0);
#line 641
//clear ___nl__bool__8;
#line 641
//clear ___nl__bool__10;
#line 641
//clear ___nl__int__11;
#line 641
c_rt_lib0clear(&___nl__im__12);
#line 641
c_rt_lib0clear(&___nl__im__13);
#line 641
//clear ___nl__int__14;
#line 641
//clear ___nl__int__15;
#line 641
//clear ___nl__int__16;
#line 641
//clear ___nl__bool__17;
#line 641
//clear ___nl__int__18;
#line 641
c_rt_lib0clear(&___nl__im__19);
#line 641
c_rt_lib0clear(&___nl__im__20);
#line 641
//clear ___nl__bool__21;
#line 641
c_rt_lib0clear(&___nl__im__22);
#line 641
c_rt_lib0clear(&___nl__im__31);
#line 641
//clear ___nl__bool__36;
#line 641
return ___nl__bool__37;
#line 641
goto label_167;
#line 641
label_167:
;
#line 641
//clear ___nl__bool__36;
#line 641
//clear ___nl__bool__37;
#line 642
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__31, ___get_global_string_const(224)));
#line 642
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__40, ___get_global_string_const(218)));
#line 642
___nl__int__39 = getIntFromImm(___nl__im__41);
#line 642
c_rt_lib0clear(&___nl__im__40);
#line 642
c_rt_lib0clear(&___nl__im__41);
#line 642
___nl__int__42 = ___nl__int__39 == ___nl__int__11;
#line 642
___nl__bool__38 = ___nl__int__42;
#line 642
//clear ___nl__int__39;
#line 642
//clear ___nl__int__42;
#line 642
c_rt_lib0clear(&___nl__im__0);
#line 642
//clear ___nl__bool__8;
#line 642
//clear ___nl__bool__10;
#line 642
//clear ___nl__int__11;
#line 642
c_rt_lib0clear(&___nl__im__12);
#line 642
c_rt_lib0clear(&___nl__im__13);
#line 642
//clear ___nl__int__14;
#line 642
//clear ___nl__int__15;
#line 642
//clear ___nl__int__16;
#line 642
//clear ___nl__bool__17;
#line 642
//clear ___nl__int__18;
#line 642
c_rt_lib0clear(&___nl__im__19);
#line 642
c_rt_lib0clear(&___nl__im__20);
#line 642
//clear ___nl__bool__21;
#line 642
c_rt_lib0clear(&___nl__im__22);
#line 642
c_rt_lib0clear(&___nl__im__31);
#line 642
return ___nl__bool__38;
#line 643
goto label_236;
#line 643
label_197:
;
#line 643
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(248));
#line 643
___nl__bool__21 = !___nl__bool__21;
#line 643
if(___nl__bool__21){ goto label_202;}
#line 644
goto label_236;
#line 644
label_202:
;
#line 644
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(251));
#line 644
___nl__bool__21 = !___nl__bool__21;
#line 644
if(___nl__bool__21){ goto label_207;}
#line 645
goto label_236;
#line 645
label_207:
;
#line 646
___nl__bool__43 = ___nl__bool__10;
#line 646
___nl__bool__43 = !___nl__bool__43;
#line 646
if(___nl__bool__43){ goto label_232;}
#line 646
___nl__bool__44 = false;
#line 646
c_rt_lib0clear(&___nl__im__0);
#line 646
//clear ___nl__bool__8;
#line 646
//clear ___nl__bool__10;
#line 646
//clear ___nl__int__11;
#line 646
c_rt_lib0clear(&___nl__im__12);
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
//clear ___nl__int__18;
#line 646
c_rt_lib0clear(&___nl__im__19);
#line 646
c_rt_lib0clear(&___nl__im__20);
#line 646
//clear ___nl__bool__21;
#line 646
c_rt_lib0clear(&___nl__im__22);
#line 646
c_rt_lib0clear(&___nl__im__31);
#line 646
//clear ___nl__bool__38;
#line 646
//clear ___nl__bool__43;
#line 646
return ___nl__bool__44;
#line 646
goto label_232;
#line 646
label_232:
;
#line 646
//clear ___nl__bool__43;
#line 646
//clear ___nl__bool__44;
#line 647
goto label_236;
#line 647
label_236:
;
#line 647
//clear ___nl__bool__21;
#line 647
c_rt_lib0clear(&___nl__im__22);
#line 647
c_rt_lib0clear(&___nl__im__31);
#line 647
//clear ___nl__bool__38;
#line 647
c_rt_lib0clear(&___nl__im__13);
#line 647
label_242:
;
#line 648
___nl__int__14 = ___nl__int__14 + ___nl__int__15;
#line 648
goto label_35;
#line 648
label_245:
;
#line 649
___nl__bool__45 = false;
#line 649
c_rt_lib0clear(&___nl__im__0);
#line 649
//clear ___nl__bool__8;
#line 649
//clear ___nl__bool__10;
#line 649
//clear ___nl__int__11;
#line 649
c_rt_lib0clear(&___nl__im__12);
#line 649
c_rt_lib0clear(&___nl__im__13);
#line 649
//clear ___nl__int__14;
#line 649
//clear ___nl__int__15;
#line 649
//clear ___nl__int__16;
#line 649
//clear ___nl__bool__17;
#line 649
//clear ___nl__int__18;
#line 649
c_rt_lib0clear(&___nl__im__19);
#line 649
c_rt_lib0clear(&___nl__im__20);
#line 649
return ___nl__bool__45;
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT * ___nl__im_ptr__11 = NULL;
bool  ___nl__bool__12 = false;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
ImmT  ___nl__im__16 = NULL;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT * ___nl__im_ptr__19 = NULL;
ImmT  ___nl__im__20 = NULL;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT * ___nl__im_ptr__27 = NULL;
ImmT  ___nl__im__28 = NULL;
#line 653
___nl__im_ptr__3 = &((*___ref___rec__0).fun_args0field);
#line 653
c_rt_lib0copy(&___nl__im__2, (*___nl__im_ptr__3));
#line 653
___nl__im_ptr__3 = NULL;
#line 653
___nl__int__1 = c_rt_lib0array_len(___nl__im__2);
#line 653
c_rt_lib0clear(&___nl__im__2);
#line 653
___nl__int__4 = 0;
#line 653
___nl__int__5 = 1;
#line 653
label_7:
;
#line 653
___nl__int__7 = ___nl__int__4 >= ___nl__int__1;
#line 653
___nl__bool__6 = ___nl__int__7;
#line 653
if(___nl__bool__6){ goto label_71;}
#line 654
___nl__im_ptr__11 = &((*___ref___rec__0).fun_args0field);
#line 654
c_rt_lib0copy(&___nl__im__10, (*___nl__im_ptr__11));
#line 654
___nl__im_ptr__11 = NULL;
#line 654
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_get(___nl__im__10, ___nl__int__4));
#line 654
c_rt_lib0clear(&___nl__im__10);
#line 654
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(353)));
#line 654
c_rt_lib0clear(&___nl__im__9);
#line 654
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(224));
#line 654
if(___nl__bool__12){ goto label_25;}
#line 659
___nl__bool__12 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(40));
#line 659
if(___nl__bool__12){ goto label_63;}
#line 659
c_rt_lib0move(&___nl__im__13,___get_global_string_const(16));
#line 659
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(2, ___nl__im__13, ___nl__im__8));
#line 659
nl_die_arg(___nl__im__13);
#line 654
label_25:
;
#line 655
___nl__im_ptr__19 = &((*___ref___rec__0).fun_args0field);
#line 655
c_rt_lib0copy(&___nl__im__18, (*___nl__im_ptr__19));
#line 655
___nl__im_ptr__19 = NULL;
#line 655
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__18, ___nl__int__4));
#line 655
c_rt_lib0clear(&___nl__im__18);
#line 655
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(469)));
#line 655
c_rt_lib0clear(&___nl__im__17);
#line 655
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__16, ___get_global_string_const(205)));
#line 655
c_rt_lib0clear(&___nl__im__16);
#line 655
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(132));
#line 655
c_rt_lib0clear(&___nl__im__15);
#line 655
___nl__bool__14 = !___nl__bool__14;
#line 655
if(___nl__bool__14){ goto label_60;}
#line 656
c_rt_lib0move(&___nl__im__21,___get_global_string_const(534));
#line 656
___nl__im_ptr__27 = &((*___ref___rec__0).fun_args0field);
#line 656
c_rt_lib0copy(&___nl__im__26, (*___nl__im_ptr__27));
#line 656
___nl__im_ptr__27 = NULL;
#line 656
c_rt_lib0move(&___nl__im__25, c_rt_lib0array_get(___nl__im__26, ___nl__int__4));
#line 656
c_rt_lib0clear(&___nl__im__26);
#line 656
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(469)));
#line 656
c_rt_lib0clear(&___nl__im__25);
#line 656
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__24));
#line 656
c_rt_lib0clear(&___nl__im__24);
#line 656
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(1, ___nl__im__23));
#line 656
c_rt_lib0clear(&___nl__im__23);
#line 656
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_fun_lib(___nl__im__21, ___nl__im__22));
#line 656
c_rt_lib0clear(&___nl__im__21);
#line 656
c_rt_lib0clear(&___nl__im__22);
#line 656
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__20));
#line 656
c_rt_lib0clear(&___nl__im__20);
#line 657
c_rt_lib0move(&___nl__im__28,___get_global_string_const(440));
#line 657
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__28));
#line 657
c_rt_lib0clear(&___nl__im__28);
#line 658
goto label_60;
#line 658
label_60:
;
#line 658
//clear ___nl__bool__14;
#line 659
goto label_65;
#line 659
label_63:
;
#line 660
goto label_65;
#line 660
label_65:
;
#line 660
c_rt_lib0clear(&___nl__im__8);
#line 660
//clear ___nl__bool__12;
#line 660
c_rt_lib0clear(&___nl__im__13);
#line 661
___nl__int__4 = ___nl__int__4 + ___nl__int__5;
#line 661
goto label_7;
#line 661
label_71:
;
#line 661
//clear ___nl__int__1;
#line 661
//clear ___nl__int__4;
#line 661
//clear ___nl__int__5;
#line 661
//clear ___nl__bool__6;
#line 661
//clear ___nl__int__7;
#line 661
c_rt_lib0clear(&___nl__im__8);
#line 661
//clear ___nl__bool__12;
#line 661
c_rt_lib0clear(&___nl__im__13);
#line 661
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
INT  ___nl__int__11 = 0;
ImmT  ___nl__im__12 = NULL;
bool  ___nl__bool__13 = false;
INT  ___nl__int__14 = 0;
INT  ___nl__int__15 = 0;
ImmT  ___nl__im__16 = NULL;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
#line 665
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_lib_fun(___nl__im__0));
#line 665
c_rt_lib0move(&___nl__im__4,___get_global_string_const(455));
#line 665
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__4));
#line 665
c_rt_lib0clear(&___nl__im__3);
#line 665
c_rt_lib0clear(&___nl__im__4);
#line 666
___nl__int__5 = 0;
#line 667
___nl__int__7 = 0;
#line 667
___nl__int__8 = 1;
#line 667
___nl__int__9 = c_rt_lib0array_len(___nl__im__1);
#line 667
label_9:
;
#line 667
___nl__int__11 = ___nl__int__7 >= ___nl__int__9;
#line 667
___nl__bool__10 = ___nl__int__11;
#line 667
if(___nl__bool__10){ goto label_36;}
#line 667
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_get(___nl__im__1, ___nl__int__7));
#line 667
c_rt_lib0copy(&___nl__im__6, ___nl__im__12);
#line 668
___nl__int__14 = 0;
#line 668
___nl__int__15 = ___nl__int__14 == ___nl__int__5;
#line 668
___nl__bool__13 = ___nl__int__15;
#line 668
//clear ___nl__int__14;
#line 668
//clear ___nl__int__15;
#line 668
___nl__bool__13 = !___nl__bool__13;
#line 668
___nl__bool__13 = !___nl__bool__13;
#line 668
if(___nl__bool__13){ goto label_27;}
#line 668
c_rt_lib0move(&___nl__im__16,___get_global_string_const(326));
#line 668
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__16));
#line 668
c_rt_lib0clear(&___nl__im__16);
#line 668
goto label_27;
#line 668
label_27:
;
#line 668
//clear ___nl__bool__13;
#line 669
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__6));
#line 670
___nl__int__17 = 1;
#line 670
___nl__int__5 = ___nl__int__5 + ___nl__int__17;
#line 670
//clear ___nl__int__17;
#line 670
c_rt_lib0clear(&___nl__im__6);
#line 671
___nl__int__7 = ___nl__int__7 + ___nl__int__8;
#line 671
goto label_9;
#line 671
label_36:
;
#line 672
c_rt_lib0move(&___nl__im__19,___get_global_string_const(320));
#line 672
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__2, ___nl__im__19));
#line 672
c_rt_lib0clear(&___nl__im__19);
#line 672
c_rt_lib0clear(&___nl__im__0);
#line 672
c_rt_lib0clear(&___nl__im__1);
#line 672
c_rt_lib0clear(&___nl__im__2);
#line 672
//clear ___nl__int__5;
#line 672
c_rt_lib0clear(&___nl__im__6);
#line 672
//clear ___nl__int__7;
#line 672
//clear ___nl__int__8;
#line 672
//clear ___nl__int__9;
#line 672
//clear ___nl__bool__10;
#line 672
//clear ___nl__int__11;
#line 672
c_rt_lib0clear(&___nl__im__12);
#line 672
return ___nl__im__18;
return NULL;

}

ImmT  generator_c_priv0get_module_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 676
c_rt_lib0move(&___nl__im__2,___get_global_string_const(21));
#line 676
c_rt_lib0move(&___nl__im__3,___get_global_string_const(535));
#line 676
c_rt_lib0move(&___nl__im__1, string0replace(___nl__im__0, ___nl__im__2, ___nl__im__3));
#line 676
c_rt_lib0clear(&___nl__im__2);
#line 676
c_rt_lib0clear(&___nl__im__3);
#line 676
c_rt_lib0clear(&___nl__im__0);
#line 676
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
#line 680
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 680
___nl__bool__3 = c_rt_lib0eq(___nl__im__0, ___nl__im__4);
#line 680
c_rt_lib0clear(&___nl__im__4);
#line 680
___nl__bool__3 = !___nl__bool__3;
#line 680
if(___nl__bool__3){ goto label_9;}
#line 680
c_rt_lib0move(&___nl__im__5,___get_global_string_const(267));
#line 680
c_rt_lib0move(&___nl__im__0, c_rt_lib0concat_new(___nl__im__2, ___nl__im__5));
#line 680
c_rt_lib0clear(&___nl__im__5);
#line 680
goto label_9;
#line 680
label_9:
;
#line 680
//clear ___nl__bool__3;
#line 681
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_module_name(___nl__im__0));
#line 681
c_rt_lib0move(&___nl__im__9,___get_global_string_const(21));
#line 681
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 681
c_rt_lib0clear(&___nl__im__8);
#line 681
c_rt_lib0clear(&___nl__im__9);
#line 681
c_rt_lib0move(&___nl__im__11,___get_global_string_const(21));
#line 681
c_rt_lib0move(&___nl__im__12,___get_global_string_const(535));
#line 681
c_rt_lib0move(&___nl__im__10, string0replace(___nl__im__1, ___nl__im__11, ___nl__im__12));
#line 681
c_rt_lib0clear(&___nl__im__11);
#line 681
c_rt_lib0clear(&___nl__im__12);
#line 681
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 681
c_rt_lib0clear(&___nl__im__7);
#line 681
c_rt_lib0clear(&___nl__im__10);
#line 681
c_rt_lib0clear(&___nl__im__0);
#line 681
c_rt_lib0clear(&___nl__im__1);
#line 681
c_rt_lib0clear(&___nl__im__2);
#line 681
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_lib_fun(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
ImmT  ___nl__im__3 = NULL;
#line 685
c_rt_lib0move(&___nl__im__2,___get_global_string_const(269));
#line 685
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 685
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_fun_name(___nl__im__2, ___nl__im__0, ___nl__im__3));
#line 685
c_rt_lib0clear(&___nl__im__2);
#line 685
c_rt_lib0clear(&___nl__im__3);
#line 685
c_rt_lib0clear(&___nl__im__0);
#line 685
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
ImmT  ___nl__im__8 = NULL;
INT  ___nl__int__9 = 0;
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
INT  ___nl__int__25 = 0;
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
ImmT  ___nl__im__36 = NULL;
ImmT  ___nl__im__37 = NULL;
ImmT  ___nl__im__38 = NULL;
ImmT  ___nl__im__39 = NULL;
bool  ___nl__bool__40 = false;
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
bool  ___nl__bool__51 = false;
bool  ___nl__bool__52 = false;
bool  ___nl__bool__53 = false;
bool  ___nl__bool__54 = false;
INT  ___nl__int__55 = 0;
INT  ___nl__int__56 = 0;
INT  ___nl__int__57 = 0;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
bool  ___nl__bool__60 = false;
bool  ___nl__bool__61 = false;
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
INT  ___nl__int__85 = 0;
ImmT  ___nl__im__86 = NULL;
#line 689
___nl__bool__2 = nl0is_hash(___nl__im__1);
#line 689
___nl__bool__2 = !___nl__bool__2;
#line 689
if(___nl__bool__2){ goto label_43;}
#line 690
c_rt_lib0move(&___nl__im__6,___get_global_string_const(536));
#line 690
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_lib_fun(___nl__im__6));
#line 690
c_rt_lib0clear(&___nl__im__6);
#line 690
c_rt_lib0move(&___nl__im__7,___get_global_string_const(455));
#line 690
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 690
c_rt_lib0clear(&___nl__im__5);
#line 690
c_rt_lib0clear(&___nl__im__7);
#line 690
___nl__int__9 = hash0size(___nl__im__1);
#line 690
c_rt_lib0move(&___nl__im__10, c_rt_lib0int_new(___nl__int__9));
#line 690
c_rt_lib0move(&___nl__im__8, ptd0int_to_string(___nl__im__10));
#line 690
//clear ___nl__int__9;
#line 690
c_rt_lib0clear(&___nl__im__10);
#line 690
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__8));
#line 690
c_rt_lib0clear(&___nl__im__4);
#line 690
c_rt_lib0clear(&___nl__im__8);
#line 690
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__3));
#line 690
c_rt_lib0clear(&___nl__im__3);
#line 691
c_rt_lib0move(&___nl__im__14, c_rt_lib0init_iter(___nl__im__1));
#line 691
label_21:
;
#line 691
___nl__bool__12 = c_rt_lib0is_end_hash(___nl__im__14);
#line 691
if(___nl__bool__12){ goto label_38;}
#line 691
c_rt_lib0move(&___nl__im__11, c_rt_lib0get_key_iter(___nl__im__14));
#line 691
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__11));
#line 692
c_rt_lib0move(&___nl__im__15,___get_global_string_const(326));
#line 692
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__15));
#line 692
c_rt_lib0clear(&___nl__im__15);
#line 693
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__11));
#line 693
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__16));
#line 693
c_rt_lib0clear(&___nl__im__16);
#line 694
c_rt_lib0move(&___nl__im__17,___get_global_string_const(326));
#line 694
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__17));
#line 694
c_rt_lib0clear(&___nl__im__17);
#line 695
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__13));
#line 696
c_rt_lib0move(&___nl__im__14, c_rt_lib0next_iter(___nl__im__14));
#line 696
goto label_21;
#line 696
label_38:
;
#line 697
c_rt_lib0move(&___nl__im__18,___get_global_string_const(320));
#line 697
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__18));
#line 697
c_rt_lib0clear(&___nl__im__18);
#line 698
goto label_244;
#line 698
label_43:
;
#line 698
___nl__bool__2 = nl0is_array(___nl__im__1);
#line 698
___nl__bool__2 = !___nl__bool__2;
#line 698
if(___nl__bool__2){ goto label_85;}
#line 699
c_rt_lib0move(&___nl__im__22,___get_global_string_const(537));
#line 699
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_lib_fun(___nl__im__22));
#line 699
c_rt_lib0clear(&___nl__im__22);
#line 699
c_rt_lib0move(&___nl__im__23,___get_global_string_const(455));
#line 699
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__23));
#line 699
c_rt_lib0clear(&___nl__im__21);
#line 699
c_rt_lib0clear(&___nl__im__23);
#line 699
___nl__int__25 = c_rt_lib0array_len(___nl__im__1);
#line 699
c_rt_lib0move(&___nl__im__26, c_rt_lib0int_new(___nl__int__25));
#line 699
c_rt_lib0move(&___nl__im__24, ptd0int_to_string(___nl__im__26));
#line 699
//clear ___nl__int__25;
#line 699
c_rt_lib0clear(&___nl__im__26);
#line 699
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__24));
#line 699
c_rt_lib0clear(&___nl__im__20);
#line 699
c_rt_lib0clear(&___nl__im__24);
#line 699
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 699
c_rt_lib0clear(&___nl__im__19);
#line 700
___nl__int__28 = 0;
#line 700
___nl__int__29 = 1;
#line 700
___nl__int__30 = c_rt_lib0array_len(___nl__im__1);
#line 700
label_67:
;
#line 700
___nl__int__32 = ___nl__int__28 >= ___nl__int__30;
#line 700
___nl__bool__31 = ___nl__int__32;
#line 700
if(___nl__bool__31){ goto label_80;}
#line 700
c_rt_lib0move(&___nl__im__33, c_rt_lib0array_get(___nl__im__1, ___nl__int__28));
#line 700
c_rt_lib0copy(&___nl__im__27, ___nl__im__33);
#line 701
c_rt_lib0move(&___nl__im__34,___get_global_string_const(326));
#line 701
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__34));
#line 701
c_rt_lib0clear(&___nl__im__34);
#line 702
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__27));
#line 702
c_rt_lib0clear(&___nl__im__27);
#line 703
___nl__int__28 = ___nl__int__28 + ___nl__int__29;
#line 703
goto label_67;
#line 703
label_80:
;
#line 704
c_rt_lib0move(&___nl__im__35,___get_global_string_const(320));
#line 704
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__35));
#line 704
c_rt_lib0clear(&___nl__im__35);
#line 705
goto label_244;
#line 705
label_85:
;
#line 705
___nl__bool__2 = nl0is_variant(___nl__im__1);
#line 705
___nl__bool__2 = !___nl__bool__2;
#line 705
if(___nl__bool__2){ goto label_214;}
#line 707
c_rt_lib0move(&___nl__im__38, ptd0string());
#line 707
c_rt_lib0move(&___nl__im__39, ov0get_element(___nl__im__1));
#line 707
c_rt_lib0move(&___nl__im__37, ptd0ensure(___nl__im__38, ___nl__im__39));
#line 707
c_rt_lib0clear(&___nl__im__38);
#line 707
c_rt_lib0clear(&___nl__im__39);
#line 707
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__37));
#line 707
c_rt_lib0clear(&___nl__im__37);
#line 708
c_rt_lib0move(&___nl__im__41, ov0has_value(___nl__im__1));
#line 708
___nl__bool__40 = c_rt_lib0check_true_native(___nl__im__41);
#line 708
c_rt_lib0clear(&___nl__im__41);
#line 708
___nl__bool__40 = !___nl__bool__40;
#line 708
if(___nl__bool__40){ goto label_193;}
#line 709
c_rt_lib0move(&___nl__im__46,___get_global_string_const(538));
#line 709
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_lib_fun(___nl__im__46));
#line 709
c_rt_lib0clear(&___nl__im__46);
#line 709
c_rt_lib0move(&___nl__im__47,___get_global_string_const(455));
#line 709
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__47));
#line 709
c_rt_lib0clear(&___nl__im__45);
#line 709
c_rt_lib0clear(&___nl__im__47);
#line 709
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__36));
#line 709
c_rt_lib0clear(&___nl__im__44);
#line 709
c_rt_lib0move(&___nl__im__48,___get_global_string_const(326));
#line 709
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__48));
#line 709
c_rt_lib0clear(&___nl__im__43);
#line 709
c_rt_lib0clear(&___nl__im__48);
#line 709
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__42));
#line 709
c_rt_lib0clear(&___nl__im__42);
#line 711
c_rt_lib0move(&___nl__im__49, ov0get_value(___nl__im__1));
#line 712
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(40));
#line 712
___nl__bool__54 = !___nl__bool__50;
#line 712
if(___nl__bool__54){ goto label_121;}
#line 712
___nl__bool__50 = nl0is_hash(___nl__im__49);
#line 712
label_121:
;
#line 712
//clear ___nl__bool__54;
#line 712
___nl__bool__53 = !___nl__bool__50;
#line 712
if(___nl__bool__53){ goto label_132;}
#line 712
___nl__int__55 = hash0size(___nl__im__49);
#line 712
___nl__int__56 = 2;
#line 712
___nl__int__57 = ___nl__int__55 == ___nl__int__56;
#line 712
___nl__bool__50 = ___nl__int__57;
#line 712
//clear ___nl__int__55;
#line 712
//clear ___nl__int__56;
#line 712
//clear ___nl__int__57;
#line 712
label_132:
;
#line 712
//clear ___nl__bool__53;
#line 712
___nl__bool__52 = !___nl__bool__50;
#line 712
if(___nl__bool__52){ goto label_139;}
#line 712
c_rt_lib0move(&___nl__im__58,___get_global_string_const(167));
#line 712
___nl__bool__50 = hash0has_key(___nl__im__49, ___nl__im__58);
#line 712
c_rt_lib0clear(&___nl__im__58);
#line 712
label_139:
;
#line 712
//clear ___nl__bool__52;
#line 712
___nl__bool__51 = !___nl__bool__50;
#line 712
if(___nl__bool__51){ goto label_146;}
#line 712
c_rt_lib0move(&___nl__im__59,___get_global_string_const(151));
#line 712
___nl__bool__50 = hash0has_key(___nl__im__49, ___nl__im__59);
#line 712
c_rt_lib0clear(&___nl__im__59);
#line 712
label_146:
;
#line 712
//clear ___nl__bool__51;
#line 712
___nl__bool__50 = !___nl__bool__50;
#line 712
if(___nl__bool__50){ goto label_184;}
#line 713
c_rt_lib0move(&___nl__im__62, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(167)));
#line 713
___nl__bool__60 = nl0is_sim(___nl__im__62);
#line 713
c_rt_lib0clear(&___nl__im__62);
#line 713
___nl__bool__61 = !___nl__bool__60;
#line 713
if(___nl__bool__61){ goto label_158;}
#line 713
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(151)));
#line 713
___nl__bool__60 = nl0is_sim(___nl__im__63);
#line 713
c_rt_lib0clear(&___nl__im__63);
#line 713
label_158:
;
#line 713
//clear ___nl__bool__61;
#line 713
___nl__bool__60 = !___nl__bool__60;
#line 713
if(___nl__bool__60){ goto label_178;}
#line 714
c_rt_lib0move(&___nl__im__66, ptd0string());
#line 714
c_rt_lib0move(&___nl__im__67, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(151)));
#line 714
c_rt_lib0move(&___nl__im__65, ptd0ensure(___nl__im__66, ___nl__im__67));
#line 714
c_rt_lib0clear(&___nl__im__66);
#line 714
c_rt_lib0clear(&___nl__im__67);
#line 714
c_rt_lib0move(&___nl__im__69, ptd0string());
#line 714
c_rt_lib0move(&___nl__im__70, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(167)));
#line 714
c_rt_lib0move(&___nl__im__68, ptd0ensure(___nl__im__69, ___nl__im__70));
#line 714
c_rt_lib0clear(&___nl__im__69);
#line 714
c_rt_lib0clear(&___nl__im__70);
#line 714
c_rt_lib0move(&___nl__im__64, generator_c_priv0get_func_pointer(___ref___rec__0, ___nl__im__65, ___nl__im__68));
#line 714
c_rt_lib0clear(&___nl__im__65);
#line 714
c_rt_lib0clear(&___nl__im__68);
#line 714
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__64));
#line 714
c_rt_lib0clear(&___nl__im__64);
#line 715
goto label_181;
#line 715
label_178:
;
#line 716
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__49));
#line 717
goto label_181;
#line 717
label_181:
;
#line 717
//clear ___nl__bool__60;
#line 718
goto label_187;
#line 718
label_184:
;
#line 719
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__49));
#line 720
goto label_187;
#line 720
label_187:
;
#line 720
//clear ___nl__bool__50;
#line 722
c_rt_lib0move(&___nl__im__71,___get_global_string_const(320));
#line 722
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__71));
#line 722
c_rt_lib0clear(&___nl__im__71);
#line 723
goto label_210;
#line 723
label_193:
;
#line 724
c_rt_lib0move(&___nl__im__76,___get_global_string_const(539));
#line 724
c_rt_lib0move(&___nl__im__75, generator_c_priv0get_lib_fun(___nl__im__76));
#line 724
c_rt_lib0clear(&___nl__im__76);
#line 724
c_rt_lib0move(&___nl__im__77,___get_global_string_const(455));
#line 724
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__77));
#line 724
c_rt_lib0clear(&___nl__im__75);
#line 724
c_rt_lib0clear(&___nl__im__77);
#line 724
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__36));
#line 724
c_rt_lib0clear(&___nl__im__74);
#line 724
c_rt_lib0move(&___nl__im__78,___get_global_string_const(320));
#line 724
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__78));
#line 724
c_rt_lib0clear(&___nl__im__73);
#line 724
c_rt_lib0clear(&___nl__im__78);
#line 724
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__72));
#line 724
c_rt_lib0clear(&___nl__im__72);
#line 725
goto label_210;
#line 725
label_210:
;
#line 725
//clear ___nl__bool__40;
#line 725
c_rt_lib0clear(&___nl__im__49);
#line 726
goto label_244;
#line 726
label_214:
;
#line 726
___nl__bool__2 = nl0is_string(___nl__im__1);
#line 726
___nl__bool__2 = !___nl__bool__2;
#line 726
if(___nl__bool__2){ goto label_226;}
#line 727
c_rt_lib0move(&___nl__im__81, ptd0string());
#line 727
c_rt_lib0move(&___nl__im__80, ptd0ensure(___nl__im__81, ___nl__im__1));
#line 727
c_rt_lib0clear(&___nl__im__81);
#line 727
c_rt_lib0move(&___nl__im__79, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__80));
#line 727
c_rt_lib0clear(&___nl__im__80);
#line 727
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__79));
#line 727
c_rt_lib0clear(&___nl__im__79);
#line 728
goto label_244;
#line 728
label_226:
;
#line 728
___nl__bool__2 = nl0is_int(___nl__im__1);
#line 728
___nl__bool__2 = !___nl__bool__2;
#line 728
if(___nl__bool__2){ goto label_240;}
#line 729
c_rt_lib0move(&___nl__im__84, ptd0int());
#line 729
c_rt_lib0move(&___nl__im__83, ptd0ensure(___nl__im__84, ___nl__im__1));
#line 729
c_rt_lib0clear(&___nl__im__84);
#line 729
___nl__int__85 = getIntFromImm(___nl__im__83);
#line 729
c_rt_lib0move(&___nl__im__82, generator_c_priv0get_const_int(___ref___rec__0, ___nl__int__85));
#line 729
c_rt_lib0clear(&___nl__im__83);
#line 729
//clear ___nl__int__85;
#line 729
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__82));
#line 729
c_rt_lib0clear(&___nl__im__82);
#line 730
goto label_244;
#line 730
label_240:
;
#line 731
c_rt_lib0move(&___nl__im__86, c_rt_lib0array_mk(0));
#line 731
nl_die_arg(___nl__im__86);
#line 732
goto label_244;
#line 732
label_244:
;
#line 732
//clear ___nl__bool__2;
#line 732
c_rt_lib0clear(&___nl__im__11);
#line 732
//clear ___nl__bool__12;
#line 732
c_rt_lib0clear(&___nl__im__13);
#line 732
c_rt_lib0clear(&___nl__im__14);
#line 732
c_rt_lib0clear(&___nl__im__27);
#line 732
//clear ___nl__int__28;
#line 732
//clear ___nl__int__29;
#line 732
//clear ___nl__int__30;
#line 732
//clear ___nl__bool__31;
#line 732
//clear ___nl__int__32;
#line 732
c_rt_lib0clear(&___nl__im__33);
#line 732
c_rt_lib0clear(&___nl__im__36);
#line 732
c_rt_lib0clear(&___nl__im__86);
#line 732
c_rt_lib0clear(&___nl__im__1);
#line 732
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
#line 737
___nl__bool__3 = true;
#line 737
___nl__hash_ptr__4 = &((*___ref___rec__0).additional_imports0field);
#line 737
___nl__bool_ptr__5 = generator_c0anon_type00ownhashanon_type00bool0get_ptr(___nl__hash_ptr__4, ___nl__im__1, true);
#line 737
(*___nl__bool_ptr__5) = ___nl__bool__3;
#line 737
___nl__bool_ptr__5 = NULL;
#line 737
___nl__hash_ptr__4 = NULL;
#line 737
//clear ___nl__bool__3;
#line 738
c_rt_lib0move(&___nl__im__7,___get_global_string_const(540));
#line 739
___nl__im_ptr__12 = &((*___ref___rec__0).mod_name0field);
#line 739
c_rt_lib0copy(&___nl__im__11, (*___nl__im_ptr__12));
#line 739
___nl__im_ptr__12 = NULL;
#line 739
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_fun_name(___nl__im__1, ___nl__im__2, ___nl__im__11));
#line 739
c_rt_lib0clear(&___nl__im__11);
#line 739
c_rt_lib0move(&___nl__im__13,___get_global_string_const(541));
#line 739
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__13));
#line 739
c_rt_lib0clear(&___nl__im__10);
#line 739
c_rt_lib0clear(&___nl__im__13);
#line 740
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__1));
#line 741
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__2));
#line 741
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(3, ___nl__im__9, ___nl__im__14, ___nl__im__15));
#line 741
c_rt_lib0clear(&___nl__im__9);
#line 741
c_rt_lib0clear(&___nl__im__14);
#line 741
c_rt_lib0clear(&___nl__im__15);
#line 741
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__7, ___nl__im__8));
#line 741
c_rt_lib0clear(&___nl__im__7);
#line 741
c_rt_lib0clear(&___nl__im__8);
#line 741
c_rt_lib0clear(&___nl__im__1);
#line 741
c_rt_lib0clear(&___nl__im__2);
#line 741
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
ImmT  ___nl__im__6 = NULL;
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
ImmT  ___nl__im__9 = NULL;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
ImmT  ___nl__im__12 = NULL;
ImmT  ___nl__im__13 = NULL;
bool  ___nl__bool__14 = false;
ImmT  ___nl__im__15 = NULL;
bool  ___nl__bool__16 = false;
ImmT  ___nl__im__17 = NULL;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
bool  ___nl__bool__20 = false;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
INT  ___nl__int__25 = 0;
ImmT  ___nl__im__26 = NULL;
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
ImmT * ___nl__im_ptr__50 = NULL;
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
ImmT * ___nl__im_ptr__86 = NULL;
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
ImmT  ___nl__im__179 = NULL;
INT  ___nl__int__180 = 0;
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
ImmT  ___nl__im__214 = NULL;
bool  ___nl__bool__215 = false;
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
ImmT  ___nl__im__230 = NULL;
bool  ___nl__bool__231 = false;
ImmT  ___nl__im__232 = NULL;
ImmT  ___nl__im__233 = NULL;
ImmT  ___nl__im__234 = NULL;
ImmT  ___nl__im__235 = NULL;
ImmT  ___nl__im__236 = NULL;
ImmT  ___nl__im__237 = NULL;
ImmT  ___nl__im__238 = NULL;
ImmT  ___nl__im__239 = NULL;
ImmT * ___nl__im_ptr__240 = NULL;
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
ImmT  ___nl__im__253 = NULL;
bool  ___nl__bool__254 = false;
ImmT  ___nl__im__255 = NULL;
ImmT  ___nl__im__256 = NULL;
ImmT  ___nl__im__257 = NULL;
ImmT  ___nl__im__258 = NULL;
bool  ___nl__bool__259 = false;
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
bool  ___nl__bool__330 = false;
ImmT  ___nl__im__331 = NULL;
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
ImmT * ___nl__im_ptr__346 = NULL;
bool  ___nl__bool__347 = false;
ImmT  ___nl__im__348 = NULL;
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
bool  ___nl__bool__373 = false;
ImmT  ___nl__im__374 = NULL;
ImmT  ___nl__im__375 = NULL;
ImmT  ___nl__im__376 = NULL;
ImmT  ___nl__im__377 = NULL;
ImmT  ___nl__im__378 = NULL;
ImmT  ___nl__im__379 = NULL;
ImmT  ___nl__im__380 = NULL;
ImmT  ___nl__im__381 = NULL;
bool  ___nl__bool__382 = false;
ImmT  ___nl__im__383 = NULL;
ImmT  ___nl__im__384 = NULL;
ImmT  ___nl__im__385 = NULL;
ImmT  ___nl__im__386 = NULL;
ImmT  ___nl__im__387 = NULL;
ImmT  ___nl__im__388 = NULL;
ImmT  ___nl__im__389 = NULL;
ImmT  ___nl__im__390 = NULL;
ImmT  ___nl__im__391 = NULL;
ImmT * ___nl__im_ptr__392 = NULL;
ImmT  ___nl__im__393 = NULL;
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
bool  ___nl__bool__404 = false;
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
ImmT  ___nl__im__416 = NULL;
ImmT  ___nl__im__417 = NULL;
ImmT  ___nl__im__418 = NULL;
ImmT  ___nl__im__419 = NULL;
ImmT  ___nl__im__420 = NULL;
ImmT  ___nl__im__421 = NULL;
ImmT  ___nl__im__422 = NULL;
ImmT  ___nl__im__423 = NULL;
ImmT  ___nl__im__424 = NULL;
ImmT  ___nl__im__425 = NULL;
ImmT  ___nl__im__426 = NULL;
ImmT  ___nl__im__427 = NULL;
bool  ___nl__bool__428 = false;
ImmT  ___nl__im__429 = NULL;
ImmT  ___nl__im__430 = NULL;
ImmT  ___nl__im__431 = NULL;
ImmT  ___nl__im__432 = NULL;
ImmT  ___nl__im__433 = NULL;
ImmT  ___nl__im__434 = NULL;
ImmT  ___nl__im__435 = NULL;
bool  ___nl__bool__436 = false;
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
ImmT  ___nl__im__459 = NULL;
ImmT  ___nl__im__460 = NULL;
ImmT  ___nl__im__461 = NULL;
ImmT  ___nl__im__462 = NULL;
ImmT  ___nl__im__463 = NULL;
ImmT  ___nl__im__464 = NULL;
ImmT  ___nl__im__465 = NULL;
ImmT  ___nl__im__466 = NULL;
ImmT  ___nl__im__467 = NULL;
ImmT  ___nl__im__468 = NULL;
ImmT  ___nl__im__469 = NULL;
ImmT  ___nl__im__470 = NULL;
bool  ___nl__bool__471 = false;
bool  ___nl__bool__472 = false;
ImmT  ___nl__im__473 = NULL;
ImmT  ___nl__im__474 = NULL;
ImmT  ___nl__im__475 = NULL;
bool  ___nl__bool__476 = false;
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
ImmT  ___nl__im__487 = NULL;
ImmT  ___nl__im__488 = NULL;
ImmT  ___nl__im__489 = NULL;
ImmT  ___nl__im__490 = NULL;
bool  ___nl__bool__491 = false;
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
bool  ___nl__bool__510 = false;
ImmT  ___nl__im__511 = NULL;
ImmT  ___nl__im__512 = NULL;
ImmT  ___nl__im__513 = NULL;
ImmT  ___nl__im__514 = NULL;
bool  ___nl__bool__515 = false;
ImmT  ___nl__im__516 = NULL;
ImmT  ___nl__im__517 = NULL;
ImmT  ___nl__im__518 = NULL;
ImmT  ___nl__im__519 = NULL;
ImmT  ___nl__im__520 = NULL;
ImmT  ___nl__im__521 = NULL;
ImmT  ___nl__im__522 = NULL;
ImmT  ___nl__im__523 = NULL;
ImmT  ___nl__im__524 = NULL;
ImmT  ___nl__im__525 = NULL;
ImmT  ___nl__im__526 = NULL;
ImmT  ___nl__im__527 = NULL;
ImmT  ___nl__im__528 = NULL;
ImmT  ___nl__im__529 = NULL;
ImmT  ___nl__im__530 = NULL;
ImmT  ___nl__im__531 = NULL;
ImmT  ___nl__im__532 = NULL;
ImmT  ___nl__im__533 = NULL;
ImmT  ___nl__im__534 = NULL;
ImmT  ___nl__im__535 = NULL;
ImmT  ___nl__im__536 = NULL;
ImmT  ___nl__im__537 = NULL;
bool  ___nl__bool__538 = false;
ImmT  ___nl__im__539 = NULL;
ImmT  ___nl__im__540 = NULL;
ImmT  ___nl__im__541 = NULL;
ImmT  ___nl__im__542 = NULL;
ImmT  ___nl__im__543 = NULL;
ImmT  ___nl__im__544 = NULL;
ImmT  ___nl__im__545 = NULL;
ImmT  ___nl__im__546 = NULL;
bool  ___nl__bool__547 = false;
ImmT  ___nl__im__548 = NULL;
ImmT  ___nl__im__549 = NULL;
ImmT  ___nl__im__550 = NULL;
ImmT  ___nl__im__551 = NULL;
ImmT  ___nl__im__552 = NULL;
ImmT  ___nl__im__553 = NULL;
ImmT  ___nl__im__554 = NULL;
ImmT  ___nl__im__555 = NULL;
ImmT  ___nl__im__556 = NULL;
ImmT  ___nl__im__557 = NULL;
ImmT  ___nl__im__558 = NULL;
ImmT  ___nl__im__559 = NULL;
ImmT  ___nl__im__560 = NULL;
ImmT  ___nl__im__561 = NULL;
ImmT  ___nl__im__562 = NULL;
ImmT  ___nl__im__563 = NULL;
ImmT  ___nl__im__564 = NULL;
ImmT  ___nl__im__565 = NULL;
ImmT  ___nl__im__566 = NULL;
ImmT * ___nl__im_ptr__567 = NULL;
ImmT  ___nl__im__568 = NULL;
ImmT  ___nl__im__569 = NULL;
ImmT  ___nl__im__570 = NULL;
ImmT  ___nl__im__571 = NULL;
ImmT  ___nl__im__572 = NULL;
INT  ___nl__int__573 = 0;
ImmT  ___nl__im__574 = NULL;
ImmT  ___nl__im__575 = NULL;
ImmT  ___nl__im__576 = NULL;
ImmT  ___nl__im__577 = NULL;
ImmT  ___nl__im__578 = NULL;
INT  ___nl__int__579 = 0;
ImmT  ___nl__im__580 = NULL;
ImmT  ___nl__im__581 = NULL;
ImmT  ___nl__im__582 = NULL;
ImmT  ___nl__im__583 = NULL;
ImmT  ___nl__im__584 = NULL;
ImmT  ___nl__im__585 = NULL;
ImmT  ___nl__im__586 = NULL;
ImmT  ___nl__im__587 = NULL;
ImmT  ___nl__im__588 = NULL;
ImmT  ___nl__im__589 = NULL;
ImmT  ___nl__im__590 = NULL;
ImmT  ___nl__im__591 = NULL;
ImmT  ___nl__im__592 = NULL;
ImmT  ___nl__im__593 = NULL;
ImmT  ___nl__im__594 = NULL;
ImmT  ___nl__im__595 = NULL;
ImmT  ___nl__im__596 = NULL;
ImmT  ___nl__im__597 = NULL;
ImmT  ___nl__im__598 = NULL;
ImmT  ___nl__im__599 = NULL;
ImmT  ___nl__im__600 = NULL;
ImmT  ___nl__im__601 = NULL;
ImmT  ___nl__im__602 = NULL;
INT  ___nl__int__603 = 0;
ImmT  ___nl__im__604 = NULL;
ImmT  ___nl__im__605 = NULL;
ImmT  ___nl__im__606 = NULL;
ImmT  ___nl__im__607 = NULL;
INT  ___nl__int__608 = 0;
ImmT  ___nl__im__609 = NULL;
ImmT  ___nl__im__610 = NULL;
ImmT  ___nl__im__611 = NULL;
ImmT  ___nl__im__612 = NULL;
ImmT  ___nl__im__613 = NULL;
ImmT  ___nl__im__614 = NULL;
ImmT  ___nl__im__615 = NULL;
ImmT  ___nl__im__616 = NULL;
bool  ___nl__bool__617 = false;
ImmT  ___nl__im__618 = NULL;
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
ImmT * ___nl__im_ptr__637 = NULL;
ImmT  ___nl__im__638 = NULL;
ImmT  ___nl__im__639 = NULL;
ImmT  ___nl__im__640 = NULL;
ImmT  ___nl__im__641 = NULL;
ImmT  ___nl__im__642 = NULL;
ImmT  ___nl__im__643 = NULL;
ImmT  ___nl__im__644 = NULL;
ImmT * ___nl__im_ptr__645 = NULL;
ImmT  ___nl__im__646 = NULL;
ImmT  ___nl__im__647 = NULL;
ImmT  ___nl__im__648 = NULL;
ImmT  ___nl__im__649 = NULL;
ImmT  ___nl__im__650 = NULL;
ImmT * ___nl__im_ptr__651 = NULL;
ImmT  ___nl__im__652 = NULL;
ImmT  ___nl__im__653 = NULL;
ImmT  ___nl__im__654 = NULL;
ImmT  ___nl__im__655 = NULL;
ImmT  ___nl__im__656 = NULL;
ImmT * ___nl__im_ptr__657 = NULL;
ImmT  ___nl__im__658 = NULL;
ImmT  ___nl__im__659 = NULL;
ImmT  ___nl__im__660 = NULL;
ImmT  ___nl__im__661 = NULL;
ImmT  ___nl__im__662 = NULL;
ImmT  ___nl__im__663 = NULL;
ImmT  ___nl__im__664 = NULL;
ImmT  ___nl__im__665 = NULL;
ImmT  ___nl__im__666 = NULL;
ImmT  ___nl__im__667 = NULL;
ImmT  ___nl__im__668 = NULL;
ImmT  ___nl__im__669 = NULL;
ImmT  ___nl__im__670 = NULL;
ImmT  ___nl__im__671 = NULL;
ImmT  ___nl__im__672 = NULL;
bool  ___nl__bool__673 = false;
ImmT  ___nl__im__674 = NULL;
ImmT  ___nl__im__675 = NULL;
ImmT  ___nl__im__676 = NULL;
ImmT  ___nl__im__677 = NULL;
ImmT  ___nl__im__678 = NULL;
ImmT  ___nl__im__679 = NULL;
ImmT  ___nl__im__680 = NULL;
ImmT  ___nl__im__681 = NULL;
ImmT  ___nl__im__682 = NULL;
ImmT  ___nl__im__683 = NULL;
ImmT  ___nl__im__684 = NULL;
ImmT  ___nl__im__685 = NULL;
ImmT  ___nl__im__686 = NULL;
ImmT  ___nl__im__687 = NULL;
ImmT  ___nl__im__688 = NULL;
ImmT  ___nl__im__689 = NULL;
ImmT  ___nl__im__690 = NULL;
ImmT  ___nl__im__691 = NULL;
ImmT  ___nl__im__692 = NULL;
ImmT  ___nl__im__693 = NULL;
ImmT  ___nl__im__694 = NULL;
ImmT  ___nl__im__695 = NULL;
bool  ___nl__bool__696 = false;
ImmT  ___nl__im__697 = NULL;
ImmT  ___nl__im__698 = NULL;
ImmT  ___nl__im__699 = NULL;
ImmT  ___nl__im__700 = NULL;
ImmT  ___nl__im__701 = NULL;
ImmT  ___nl__im__702 = NULL;
ImmT  ___nl__im__703 = NULL;
ImmT  ___nl__im__704 = NULL;
ImmT  ___nl__im__705 = NULL;
ImmT  ___nl__im__706 = NULL;
ImmT  ___nl__im__707 = NULL;
ImmT  ___nl__im__708 = NULL;
ImmT  ___nl__im__709 = NULL;
ImmT  ___nl__im__710 = NULL;
ImmT  ___nl__im__711 = NULL;
ImmT  ___nl__im__712 = NULL;
bool  ___nl__bool__713 = false;
ImmT  ___nl__im__714 = NULL;
ImmT  ___nl__im__715 = NULL;
ImmT  ___nl__im__716 = NULL;
#line 746
c_rt_lib0move(&___nl__im__5,___get_global_string_const(542));
#line 746
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(221)));
#line 746
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(543)));
#line 746
c_rt_lib0clear(&___nl__im__10);
#line 746
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__9, ___get_global_string_const(544)));
#line 746
c_rt_lib0clear(&___nl__im__9);
#line 746
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(153)));
#line 746
___nl__int__7 = getIntFromImm(___nl__im__11);
#line 746
c_rt_lib0clear(&___nl__im__8);
#line 746
c_rt_lib0clear(&___nl__im__11);
#line 746
c_rt_lib0move(&___nl__im__12, c_rt_lib0int_new(___nl__int__7));
#line 746
c_rt_lib0move(&___nl__im__6, ptd0int_to_string(___nl__im__12));
#line 746
//clear ___nl__int__7;
#line 746
c_rt_lib0clear(&___nl__im__12);
#line 746
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 746
c_rt_lib0clear(&___nl__im__5);
#line 746
c_rt_lib0clear(&___nl__im__6);
#line 746
c_rt_lib0move(&___nl__im__13, string0lf());
#line 746
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__13));
#line 746
c_rt_lib0clear(&___nl__im__4);
#line 746
c_rt_lib0clear(&___nl__im__13);
#line 746
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__3));
#line 746
c_rt_lib0clear(&___nl__im__3);
#line 747
___nl__bool__14 = false;
#line 748
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(227)));
#line 748
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(230));
#line 748
if(___nl__bool__16){ goto label_100;}
#line 764
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(231));
#line 764
if(___nl__bool__16){ goto label_232;}
#line 779
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(237));
#line 779
if(___nl__bool__16){ goto label_343;}
#line 782
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(232));
#line 782
if(___nl__bool__16){ goto label_357;}
#line 784
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(233));
#line 784
if(___nl__bool__16){ goto label_362;}
#line 795
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(234));
#line 795
if(___nl__bool__16){ goto label_423;}
#line 797
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(235));
#line 797
if(___nl__bool__16){ goto label_428;}
#line 807
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(236));
#line 807
if(___nl__bool__16){ goto label_512;}
#line 825
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(246));
#line 825
if(___nl__bool__16){ goto label_621;}
#line 833
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(247));
#line 833
if(___nl__bool__16){ goto label_655;}
#line 835
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(238));
#line 835
if(___nl__bool__16){ goto label_670;}
#line 837
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(225));
#line 837
if(___nl__bool__16){ goto label_679;}
#line 861
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(239));
#line 861
if(___nl__bool__16){ goto label_862;}
#line 864
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(240));
#line 864
if(___nl__bool__16){ goto label_884;}
#line 870
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(241));
#line 870
if(___nl__bool__16){ goto label_907;}
#line 884
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(242));
#line 884
if(___nl__bool__16){ goto label_1005;}
#line 901
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(243));
#line 901
if(___nl__bool__16){ goto label_1134;}
#line 916
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(244));
#line 916
if(___nl__bool__16){ goto label_1225;}
#line 922
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(245));
#line 922
if(___nl__bool__16){ goto label_1248;}
#line 963
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(248));
#line 963
if(___nl__bool__16){ goto label_1541;}
#line 966
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(249));
#line 966
if(___nl__bool__16){ goto label_1645;}
#line 971
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(250));
#line 971
if(___nl__bool__16){ goto label_1755;}
#line 973
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(251));
#line 973
if(___nl__bool__16){ goto label_1768;}
#line 991
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(252));
#line 991
if(___nl__bool__16){ goto label_1889;}
#line 992
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(253));
#line 992
if(___nl__bool__16){ goto label_1893;}
#line 994
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(254));
#line 994
if(___nl__bool__16){ goto label_1898;}
#line 996
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(255));
#line 996
if(___nl__bool__16){ goto label_1911;}
#line 998
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(256));
#line 998
if(___nl__bool__16){ goto label_1916;}
#line 1004
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(257));
#line 1004
if(___nl__bool__16){ goto label_1950;}
#line 1006
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(258));
#line 1006
if(___nl__bool__16){ goto label_1955;}
#line 1008
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(259));
#line 1008
if(___nl__bool__16){ goto label_1968;}
#line 1010
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(260));
#line 1010
if(___nl__bool__16){ goto label_1973;}
#line 1014
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(261));
#line 1014
if(___nl__bool__16){ goto label_2003;}
#line 1016
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(262));
#line 1016
if(___nl__bool__16){ goto label_2008;}
#line 1018
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(263));
#line 1018
if(___nl__bool__16){ goto label_2013;}
#line 1020
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(264));
#line 1020
if(___nl__bool__16){ goto label_2018;}
#line 1020
c_rt_lib0move(&___nl__im__17,___get_global_string_const(16));
#line 1020
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1020
nl_die_arg(___nl__im__17);
#line 748
label_100:
;
#line 748
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(230)));
#line 748
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 749
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 749
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__22, ___get_global_string_const(205)));
#line 749
c_rt_lib0clear(&___nl__im__22);
#line 749
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__21, ___get_global_string_const(132));
#line 749
c_rt_lib0clear(&___nl__im__21);
#line 749
___nl__bool__20 = !___nl__bool__20;
#line 749
if(___nl__bool__20){ goto label_145;}
#line 750
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(74)));
#line 750
___nl__int__25 = c_rt_lib0array_len(___nl__im__26);
#line 750
c_rt_lib0clear(&___nl__im__26);
#line 750
c_rt_lib0move(&___nl__im__27, c_rt_lib0int_new(___nl__int__25));
#line 750
c_rt_lib0move(&___nl__im__24, ptd0int_to_string(___nl__im__27));
#line 750
//clear ___nl__int__25;
#line 750
c_rt_lib0clear(&___nl__im__27);
#line 750
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(1, ___nl__im__24));
#line 750
c_rt_lib0clear(&___nl__im__24);
#line 751
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(74)));
#line 751
___nl__int__30 = 0;
#line 751
___nl__int__31 = 1;
#line 751
___nl__int__32 = c_rt_lib0array_len(___nl__im__28);
#line 751
label_123:
;
#line 751
___nl__int__34 = ___nl__int__30 >= ___nl__int__32;
#line 751
___nl__bool__33 = ___nl__int__34;
#line 751
if(___nl__bool__33){ goto label_135;}
#line 751
c_rt_lib0move(&___nl__im__35, c_rt_lib0array_get(___nl__im__28, ___nl__int__30));
#line 751
c_rt_lib0copy(&___nl__im__29, ___nl__im__35);
#line 751
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__29));
#line 751
c_rt_lib0delete(array0push(&___nl__im__23, ___nl__im__36));
#line 751
c_rt_lib0clear(&___nl__im__36);
#line 751
c_rt_lib0clear(&___nl__im__29);
#line 751
___nl__int__30 = ___nl__int__30 + ___nl__int__31;
#line 751
goto label_123;
#line 751
label_135:
;
#line 752
c_rt_lib0move(&___nl__im__38,___get_global_string_const(545));
#line 752
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_fun_lib(___nl__im__38, ___nl__im__23));
#line 752
c_rt_lib0clear(&___nl__im__38);
#line 753
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 753
c_rt_lib0move(&___nl__im__39, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__40, ___nl__im__37));
#line 753
c_rt_lib0clear(&___nl__im__40);
#line 753
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__39));
#line 753
c_rt_lib0clear(&___nl__im__39);
#line 754
goto label_217;
#line 754
label_145:
;
#line 754
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 754
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__42, ___get_global_string_const(205)));
#line 754
c_rt_lib0clear(&___nl__im__42);
#line 754
___nl__bool__20 = c_rt_lib0priv_is(___nl__im__41, ___get_global_string_const(128));
#line 754
c_rt_lib0clear(&___nl__im__41);
#line 754
___nl__bool__20 = !___nl__bool__20;
#line 754
if(___nl__bool__20){ goto label_213;}
#line 755
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 755
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(205)));
#line 755
c_rt_lib0clear(&___nl__im__46);
#line 755
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 755
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__48, ___get_global_string_const(205)));
#line 755
c_rt_lib0clear(&___nl__im__48);
#line 755
c_rt_lib0move(&___nl__im__44, c_rt_lib0priv_as(___nl__im__47, ___get_global_string_const(128)));
#line 755
c_rt_lib0clear(&___nl__im__45);
#line 755
c_rt_lib0clear(&___nl__im__47);
#line 755
___nl__im_ptr__50 = &((*___ref___rec__0).mod_name0field);
#line 755
c_rt_lib0copy(&___nl__im__49, (*___nl__im_ptr__50));
#line 755
___nl__im_ptr__50 = NULL;
#line 755
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 755
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__52));
#line 755
c_rt_lib0clear(&___nl__im__52);
#line 755
c_rt_lib0move(&___nl__im__43, generator_c_priv0get_clean_fun_call(___nl__im__44, ___nl__im__49, ___nl__im__51, ___nl__im__2));
#line 755
c_rt_lib0clear(&___nl__im__44);
#line 755
c_rt_lib0clear(&___nl__im__49);
#line 755
c_rt_lib0clear(&___nl__im__51);
#line 757
c_rt_lib0move(&___nl__im__54, string0lf());
#line 757
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__43, ___nl__im__54));
#line 757
c_rt_lib0clear(&___nl__im__54);
#line 757
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__53));
#line 757
c_rt_lib0clear(&___nl__im__53);
#line 758
c_rt_lib0move(&___nl__im__58, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 758
c_rt_lib0move(&___nl__im__57, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__58));
#line 758
c_rt_lib0clear(&___nl__im__58);
#line 758
c_rt_lib0move(&___nl__im__59,___get_global_string_const(546));
#line 758
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__59));
#line 758
c_rt_lib0clear(&___nl__im__57);
#line 758
c_rt_lib0clear(&___nl__im__59);
#line 758
c_rt_lib0move(&___nl__im__60, string0lf());
#line 758
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__60));
#line 758
c_rt_lib0clear(&___nl__im__56);
#line 758
c_rt_lib0clear(&___nl__im__60);
#line 758
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__55));
#line 758
c_rt_lib0clear(&___nl__im__55);
#line 759
c_rt_lib0move(&___nl__im__64, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 759
c_rt_lib0move(&___nl__im__63, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__64));
#line 759
c_rt_lib0clear(&___nl__im__64);
#line 759
c_rt_lib0move(&___nl__im__65,___get_global_string_const(547));
#line 759
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__65));
#line 759
c_rt_lib0clear(&___nl__im__63);
#line 759
c_rt_lib0clear(&___nl__im__65);
#line 759
c_rt_lib0move(&___nl__im__66, string0lf());
#line 759
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__66));
#line 759
c_rt_lib0clear(&___nl__im__62);
#line 759
c_rt_lib0clear(&___nl__im__66);
#line 759
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__61));
#line 759
c_rt_lib0clear(&___nl__im__61);
#line 760
c_rt_lib0move(&___nl__im__69, c_rt_lib0hash_get_value_dec(___nl__im__18, ___get_global_string_const(223)));
#line 760
c_rt_lib0move(&___nl__im__68, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__69));
#line 760
c_rt_lib0clear(&___nl__im__69);
#line 760
c_rt_lib0move(&___nl__im__70,___get_global_string_const(548));
#line 760
c_rt_lib0move(&___nl__im__67, c_rt_lib0concat_new(___nl__im__68, ___nl__im__70));
#line 760
c_rt_lib0clear(&___nl__im__68);
#line 760
c_rt_lib0clear(&___nl__im__70);
#line 760
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__67));
#line 760
c_rt_lib0clear(&___nl__im__67);
#line 761
goto label_217;
#line 761
label_213:
;
#line 762
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(0));
#line 762
nl_die_arg(___nl__im__71);
#line 763
goto label_217;
#line 763
label_217:
;
#line 763
//clear ___nl__bool__20;
#line 763
c_rt_lib0clear(&___nl__im__23);
#line 763
c_rt_lib0clear(&___nl__im__28);
#line 763
c_rt_lib0clear(&___nl__im__29);
#line 763
//clear ___nl__int__30;
#line 763
//clear ___nl__int__31;
#line 763
//clear ___nl__int__32;
#line 763
//clear ___nl__bool__33;
#line 763
//clear ___nl__int__34;
#line 763
c_rt_lib0clear(&___nl__im__35);
#line 763
c_rt_lib0clear(&___nl__im__37);
#line 763
c_rt_lib0clear(&___nl__im__43);
#line 763
c_rt_lib0clear(&___nl__im__71);
#line 764
goto label_2023;
#line 764
label_232:
;
#line 764
c_rt_lib0move(&___nl__im__73, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(231)));
#line 764
c_rt_lib0copy(&___nl__im__72, ___nl__im__73);
#line 765
c_rt_lib0move(&___nl__im__76, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 765
c_rt_lib0move(&___nl__im__75, c_rt_lib0hash_get_value_dec(___nl__im__76, ___get_global_string_const(205)));
#line 765
c_rt_lib0clear(&___nl__im__76);
#line 765
___nl__bool__74 = c_rt_lib0priv_is(___nl__im__75, ___get_global_string_const(132));
#line 765
c_rt_lib0clear(&___nl__im__75);
#line 765
___nl__bool__74 = !___nl__bool__74;
#line 765
if(___nl__bool__74){ goto label_244;}
#line 766
c_rt_lib0delete(generator_c_priv0print_hash_declaration(___ref___rec__0, ___nl__im__72));
#line 767
goto label_338;
#line 767
label_244:
;
#line 767
c_rt_lib0move(&___nl__im__78, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 767
c_rt_lib0move(&___nl__im__77, c_rt_lib0hash_get_value_dec(___nl__im__78, ___get_global_string_const(205)));
#line 767
c_rt_lib0clear(&___nl__im__78);
#line 767
___nl__bool__74 = c_rt_lib0priv_is(___nl__im__77, ___get_global_string_const(129));
#line 767
c_rt_lib0clear(&___nl__im__77);
#line 767
___nl__bool__74 = !___nl__bool__74;
#line 767
if(___nl__bool__74){ goto label_325;}
#line 768
c_rt_lib0move(&___nl__im__82, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 768
c_rt_lib0move(&___nl__im__81, c_rt_lib0hash_get_value_dec(___nl__im__82, ___get_global_string_const(205)));
#line 768
c_rt_lib0clear(&___nl__im__82);
#line 768
c_rt_lib0move(&___nl__im__84, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 768
c_rt_lib0move(&___nl__im__83, c_rt_lib0hash_get_value_dec(___nl__im__84, ___get_global_string_const(205)));
#line 768
c_rt_lib0clear(&___nl__im__84);
#line 768
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__83, ___get_global_string_const(129)));
#line 768
c_rt_lib0clear(&___nl__im__81);
#line 768
c_rt_lib0clear(&___nl__im__83);
#line 768
___nl__im_ptr__86 = &((*___ref___rec__0).mod_name0field);
#line 768
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 768
___nl__im_ptr__86 = NULL;
#line 768
c_rt_lib0move(&___nl__im__88, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 768
c_rt_lib0move(&___nl__im__87, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__88));
#line 768
c_rt_lib0clear(&___nl__im__88);
#line 768
c_rt_lib0move(&___nl__im__79, generator_c_priv0get_clean_fun_call(___nl__im__80, ___nl__im__85, ___nl__im__87, ___nl__im__2));
#line 768
c_rt_lib0clear(&___nl__im__80);
#line 768
c_rt_lib0clear(&___nl__im__85);
#line 768
c_rt_lib0clear(&___nl__im__87);
#line 770
c_rt_lib0move(&___nl__im__90, string0lf());
#line 770
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__79, ___nl__im__90));
#line 770
c_rt_lib0clear(&___nl__im__90);
#line 770
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__89));
#line 770
c_rt_lib0clear(&___nl__im__89);
#line 771
c_rt_lib0move(&___nl__im__94, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 771
c_rt_lib0move(&___nl__im__93, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__94));
#line 771
c_rt_lib0clear(&___nl__im__94);
#line 771
c_rt_lib0move(&___nl__im__95,___get_global_string_const(546));
#line 771
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__95));
#line 771
c_rt_lib0clear(&___nl__im__93);
#line 771
c_rt_lib0clear(&___nl__im__95);
#line 771
c_rt_lib0move(&___nl__im__96, string0lf());
#line 771
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__96));
#line 771
c_rt_lib0clear(&___nl__im__92);
#line 771
c_rt_lib0clear(&___nl__im__96);
#line 771
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__91));
#line 771
c_rt_lib0clear(&___nl__im__91);
#line 772
c_rt_lib0move(&___nl__im__100, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 772
c_rt_lib0move(&___nl__im__99, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__100));
#line 772
c_rt_lib0clear(&___nl__im__100);
#line 772
c_rt_lib0move(&___nl__im__101,___get_global_string_const(547));
#line 772
c_rt_lib0move(&___nl__im__98, c_rt_lib0concat_new(___nl__im__99, ___nl__im__101));
#line 772
c_rt_lib0clear(&___nl__im__99);
#line 772
c_rt_lib0clear(&___nl__im__101);
#line 772
c_rt_lib0move(&___nl__im__102, string0lf());
#line 772
c_rt_lib0move(&___nl__im__97, c_rt_lib0concat_new(___nl__im__98, ___nl__im__102));
#line 772
c_rt_lib0clear(&___nl__im__98);
#line 772
c_rt_lib0clear(&___nl__im__102);
#line 772
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__97));
#line 772
c_rt_lib0clear(&___nl__im__97);
#line 773
c_rt_lib0move(&___nl__im__106, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 773
c_rt_lib0move(&___nl__im__105, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__106));
#line 773
c_rt_lib0clear(&___nl__im__106);
#line 773
c_rt_lib0move(&___nl__im__107,___get_global_string_const(549));
#line 773
c_rt_lib0move(&___nl__im__104, c_rt_lib0concat_new(___nl__im__105, ___nl__im__107));
#line 773
c_rt_lib0clear(&___nl__im__105);
#line 773
c_rt_lib0clear(&___nl__im__107);
#line 773
c_rt_lib0move(&___nl__im__108, string0lf());
#line 773
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__108));
#line 773
c_rt_lib0clear(&___nl__im__104);
#line 773
c_rt_lib0clear(&___nl__im__108);
#line 773
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__103));
#line 773
c_rt_lib0clear(&___nl__im__103);
#line 774
c_rt_lib0move(&___nl__im__111, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 774
c_rt_lib0move(&___nl__im__110, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__111));
#line 774
c_rt_lib0clear(&___nl__im__111);
#line 774
c_rt_lib0move(&___nl__im__112,___get_global_string_const(550));
#line 774
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__112));
#line 774
c_rt_lib0clear(&___nl__im__110);
#line 774
c_rt_lib0clear(&___nl__im__112);
#line 774
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__109));
#line 774
c_rt_lib0clear(&___nl__im__109);
#line 775
goto label_338;
#line 775
label_325:
;
#line 775
c_rt_lib0move(&___nl__im__114, c_rt_lib0hash_get_value_dec(___nl__im__72, ___get_global_string_const(223)));
#line 775
c_rt_lib0move(&___nl__im__113, c_rt_lib0hash_get_value_dec(___nl__im__114, ___get_global_string_const(205)));
#line 775
c_rt_lib0clear(&___nl__im__114);
#line 775
___nl__bool__74 = c_rt_lib0priv_is(___nl__im__113, ___get_global_string_const(551));
#line 775
c_rt_lib0clear(&___nl__im__113);
#line 775
___nl__bool__74 = !___nl__bool__74;
#line 775
if(___nl__bool__74){ goto label_334;}
#line 776
goto label_338;
#line 776
label_334:
;
#line 777
c_rt_lib0move(&___nl__im__115, c_rt_lib0array_mk(0));
#line 777
nl_die_arg(___nl__im__115);
#line 778
goto label_338;
#line 778
label_338:
;
#line 778
//clear ___nl__bool__74;
#line 778
c_rt_lib0clear(&___nl__im__79);
#line 778
c_rt_lib0clear(&___nl__im__115);
#line 779
goto label_2023;
#line 779
label_343:
;
#line 779
c_rt_lib0move(&___nl__im__117, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(237)));
#line 779
c_rt_lib0copy(&___nl__im__116, ___nl__im__117);
#line 780
c_rt_lib0move(&___nl__im__119, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(151)));
#line 780
c_rt_lib0move(&___nl__im__120, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(167)));
#line 780
c_rt_lib0move(&___nl__im__118, generator_c_priv0get_func_pointer(___ref___rec__0, ___nl__im__119, ___nl__im__120));
#line 780
c_rt_lib0clear(&___nl__im__119);
#line 780
c_rt_lib0clear(&___nl__im__120);
#line 781
c_rt_lib0move(&___nl__im__122, c_rt_lib0hash_get_value_dec(___nl__im__116, ___get_global_string_const(223)));
#line 781
c_rt_lib0move(&___nl__im__121, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__122, ___nl__im__118));
#line 781
c_rt_lib0clear(&___nl__im__122);
#line 781
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__121));
#line 781
c_rt_lib0clear(&___nl__im__121);
#line 782
goto label_2023;
#line 782
label_357:
;
#line 782
c_rt_lib0move(&___nl__im__124, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(232)));
#line 782
c_rt_lib0copy(&___nl__im__123, ___nl__im__124);
#line 783
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__123));
#line 784
goto label_2023;
#line 784
label_362:
;
#line 784
c_rt_lib0move(&___nl__im__126, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(233)));
#line 784
c_rt_lib0copy(&___nl__im__125, ___nl__im__126);
#line 785
c_rt_lib0move(&___nl__im__128, generator_c_priv0get_unary_ops());
#line 785
c_rt_lib0move(&___nl__im__129, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(552)));
#line 785
c_rt_lib0move(&___nl__im__127, hash0get_value(___nl__im__128, ___nl__im__129));
#line 785
c_rt_lib0clear(&___nl__im__128);
#line 785
c_rt_lib0clear(&___nl__im__129);
#line 787
c_rt_lib0move(&___nl__im__132,___get_global_string_const(364));
#line 787
___nl__bool__131 = c_rt_lib0eq(___nl__im__127, ___nl__im__132);
#line 787
c_rt_lib0clear(&___nl__im__132);
#line 787
___nl__bool__131 = !___nl__bool__131;
#line 787
if(___nl__bool__131){ goto label_383;}
#line 788
c_rt_lib0move(&___nl__im__133,___get_global_string_const(363));
#line 788
c_rt_lib0move(&___nl__im__135, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(74)));
#line 788
c_rt_lib0move(&___nl__im__134, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__135));
#line 788
c_rt_lib0clear(&___nl__im__135);
#line 788
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__133, ___nl__im__134));
#line 788
c_rt_lib0clear(&___nl__im__133);
#line 788
c_rt_lib0clear(&___nl__im__134);
#line 789
goto label_415;
#line 789
label_383:
;
#line 789
c_rt_lib0move(&___nl__im__137,___get_global_string_const(366));
#line 789
___nl__bool__131 = c_rt_lib0eq(___nl__im__127, ___nl__im__137);
#line 789
c_rt_lib0clear(&___nl__im__137);
#line 789
___nl__bool__136 = !___nl__bool__131;
#line 789
if(___nl__bool__136){ goto label_394;}
#line 789
c_rt_lib0move(&___nl__im__139, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(74)));
#line 789
c_rt_lib0move(&___nl__im__138, c_rt_lib0hash_get_value_dec(___nl__im__139, ___get_global_string_const(205)));
#line 789
c_rt_lib0clear(&___nl__im__139);
#line 789
___nl__bool__131 = c_rt_lib0priv_is(___nl__im__138, ___get_global_string_const(403));
#line 789
c_rt_lib0clear(&___nl__im__138);
#line 789
label_394:
;
#line 789
//clear ___nl__bool__136;
#line 789
___nl__bool__131 = !___nl__bool__131;
#line 789
if(___nl__bool__131){ goto label_406;}
#line 790
c_rt_lib0move(&___nl__im__140,___get_global_string_const(365));
#line 790
c_rt_lib0move(&___nl__im__142, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(74)));
#line 790
c_rt_lib0move(&___nl__im__141, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__142));
#line 790
c_rt_lib0clear(&___nl__im__142);
#line 790
c_rt_lib0move(&___nl__im__130, c_rt_lib0concat_new(___nl__im__140, ___nl__im__141));
#line 790
c_rt_lib0clear(&___nl__im__140);
#line 790
c_rt_lib0clear(&___nl__im__141);
#line 791
goto label_415;
#line 791
label_406:
;
#line 792
c_rt_lib0move(&___nl__im__145, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(74)));
#line 792
c_rt_lib0move(&___nl__im__144, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__145));
#line 792
c_rt_lib0clear(&___nl__im__145);
#line 792
c_rt_lib0move(&___nl__im__143, c_rt_lib0array_mk(1, ___nl__im__144));
#line 792
c_rt_lib0clear(&___nl__im__144);
#line 792
c_rt_lib0move(&___nl__im__130, generator_c_priv0get_fun_lib(___nl__im__127, ___nl__im__143));
#line 792
c_rt_lib0clear(&___nl__im__143);
#line 793
goto label_415;
#line 793
label_415:
;
#line 793
//clear ___nl__bool__131;
#line 794
c_rt_lib0move(&___nl__im__147, c_rt_lib0hash_get_value_dec(___nl__im__125, ___get_global_string_const(223)));
#line 794
c_rt_lib0move(&___nl__im__146, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__147, ___nl__im__130));
#line 794
c_rt_lib0clear(&___nl__im__147);
#line 794
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__146));
#line 794
c_rt_lib0clear(&___nl__im__146);
#line 795
goto label_2023;
#line 795
label_423:
;
#line 795
c_rt_lib0move(&___nl__im__149, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(234)));
#line 795
c_rt_lib0copy(&___nl__im__148, ___nl__im__149);
#line 796
c_rt_lib0delete(generator_c_priv0print_bin_op(___ref___rec__0, ___nl__im__148));
#line 797
goto label_2023;
#line 797
label_428:
;
#line 797
c_rt_lib0move(&___nl__im__151, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(235)));
#line 797
c_rt_lib0copy(&___nl__im__150, ___nl__im__151);
#line 798
c_rt_lib0move(&___nl__im__154, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(74)));
#line 798
c_rt_lib0move(&___nl__im__153, c_rt_lib0hash_get_value_dec(___nl__im__154, ___get_global_string_const(205)));
#line 798
c_rt_lib0clear(&___nl__im__154);
#line 798
___nl__bool__152 = c_rt_lib0priv_is(___nl__im__153, ___get_global_string_const(132));
#line 798
c_rt_lib0clear(&___nl__im__153);
#line 798
___nl__bool__152 = !___nl__bool__152;
#line 798
if(___nl__bool__152){ goto label_457;}
#line 799
c_rt_lib0move(&___nl__im__156,___get_global_string_const(553));
#line 799
c_rt_lib0move(&___nl__im__159, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(74)));
#line 799
c_rt_lib0move(&___nl__im__158, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__159));
#line 799
c_rt_lib0clear(&___nl__im__159);
#line 799
c_rt_lib0move(&___nl__im__161, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(205)));
#line 799
c_rt_lib0move(&___nl__im__160, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__161));
#line 799
c_rt_lib0clear(&___nl__im__161);
#line 799
c_rt_lib0move(&___nl__im__157, c_rt_lib0array_mk(2, ___nl__im__158, ___nl__im__160));
#line 799
c_rt_lib0clear(&___nl__im__158);
#line 799
c_rt_lib0clear(&___nl__im__160);
#line 799
c_rt_lib0move(&___nl__im__155, generator_c_priv0get_fun_lib(___nl__im__156, ___nl__im__157));
#line 799
c_rt_lib0clear(&___nl__im__156);
#line 799
c_rt_lib0clear(&___nl__im__157);
#line 800
c_rt_lib0move(&___nl__im__163, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(223)));
#line 800
c_rt_lib0move(&___nl__im__162, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__163, ___nl__im__155));
#line 800
c_rt_lib0clear(&___nl__im__163);
#line 800
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__162));
#line 800
c_rt_lib0clear(&___nl__im__162);
#line 801
goto label_507;
#line 801
label_457:
;
#line 801
c_rt_lib0move(&___nl__im__165, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(74)));
#line 801
c_rt_lib0move(&___nl__im__164, c_rt_lib0hash_get_value_dec(___nl__im__165, ___get_global_string_const(205)));
#line 801
c_rt_lib0clear(&___nl__im__165);
#line 801
___nl__bool__152 = c_rt_lib0priv_is(___nl__im__164, ___get_global_string_const(554));
#line 801
c_rt_lib0clear(&___nl__im__164);
#line 801
___nl__bool__152 = !___nl__bool__152;
#line 801
if(___nl__bool__152){ goto label_503;}
#line 802
c_rt_lib0move(&___nl__im__173, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(223)));
#line 802
c_rt_lib0move(&___nl__im__172, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__173));
#line 802
c_rt_lib0clear(&___nl__im__173);
#line 802
c_rt_lib0move(&___nl__im__174,___get_global_string_const(555));
#line 802
c_rt_lib0move(&___nl__im__171, c_rt_lib0concat_new(___nl__im__172, ___nl__im__174));
#line 802
c_rt_lib0clear(&___nl__im__172);
#line 802
c_rt_lib0clear(&___nl__im__174);
#line 803
c_rt_lib0move(&___nl__im__176, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(74)));
#line 803
c_rt_lib0move(&___nl__im__175, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__176));
#line 803
c_rt_lib0clear(&___nl__im__176);
#line 803
c_rt_lib0move(&___nl__im__170, c_rt_lib0concat_new(___nl__im__171, ___nl__im__175));
#line 803
c_rt_lib0clear(&___nl__im__171);
#line 803
c_rt_lib0clear(&___nl__im__175);
#line 803
c_rt_lib0move(&___nl__im__177,___get_global_string_const(556));
#line 803
c_rt_lib0move(&___nl__im__169, c_rt_lib0concat_new(___nl__im__170, ___nl__im__177));
#line 803
c_rt_lib0clear(&___nl__im__170);
#line 803
c_rt_lib0clear(&___nl__im__177);
#line 803
c_rt_lib0move(&___nl__im__178,___get_global_string_const(557));
#line 803
c_rt_lib0move(&___nl__im__168, c_rt_lib0concat_new(___nl__im__169, ___nl__im__178));
#line 803
c_rt_lib0clear(&___nl__im__169);
#line 803
c_rt_lib0clear(&___nl__im__178);
#line 803
c_rt_lib0move(&___nl__im__181, c_rt_lib0hash_get_value_dec(___nl__im__150, ___get_global_string_const(558)));
#line 803
___nl__int__180 = getIntFromImm(___nl__im__181);
#line 803
c_rt_lib0clear(&___nl__im__181);
#line 803
c_rt_lib0move(&___nl__im__182, c_rt_lib0int_new(___nl__int__180));
#line 803
c_rt_lib0move(&___nl__im__179, ptd0int_to_string(___nl__im__182));
#line 803
//clear ___nl__int__180;
#line 803
c_rt_lib0clear(&___nl__im__182);
#line 803
c_rt_lib0move(&___nl__im__167, c_rt_lib0concat_new(___nl__im__168, ___nl__im__179));
#line 803
c_rt_lib0clear(&___nl__im__168);
#line 803
c_rt_lib0clear(&___nl__im__179);
#line 803
c_rt_lib0move(&___nl__im__183,___get_global_string_const(320));
#line 803
c_rt_lib0move(&___nl__im__166, c_rt_lib0concat_new(___nl__im__167, ___nl__im__183));
#line 803
c_rt_lib0clear(&___nl__im__167);
#line 803
c_rt_lib0clear(&___nl__im__183);
#line 803
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__166));
#line 803
c_rt_lib0clear(&___nl__im__166);
#line 804
goto label_507;
#line 804
label_503:
;
#line 805
c_rt_lib0move(&___nl__im__184, c_rt_lib0array_mk(0));
#line 805
nl_die_arg(___nl__im__184);
#line 806
goto label_507;
#line 806
label_507:
;
#line 806
//clear ___nl__bool__152;
#line 806
c_rt_lib0clear(&___nl__im__155);
#line 806
c_rt_lib0clear(&___nl__im__184);
#line 807
goto label_2023;
#line 807
label_512:
;
#line 807
c_rt_lib0move(&___nl__im__186, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(236)));
#line 807
c_rt_lib0copy(&___nl__im__185, ___nl__im__186);
#line 808
c_rt_lib0move(&___nl__im__189, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(74)));
#line 808
c_rt_lib0move(&___nl__im__188, c_rt_lib0hash_get_value_dec(___nl__im__189, ___get_global_string_const(205)));
#line 808
c_rt_lib0clear(&___nl__im__189);
#line 808
___nl__bool__187 = c_rt_lib0priv_is(___nl__im__188, ___get_global_string_const(132));
#line 808
c_rt_lib0clear(&___nl__im__188);
#line 808
___nl__bool__187 = !___nl__bool__187;
#line 808
if(___nl__bool__187){ goto label_541;}
#line 809
c_rt_lib0move(&___nl__im__191,___get_global_string_const(559));
#line 810
c_rt_lib0move(&___nl__im__194, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(74)));
#line 810
c_rt_lib0move(&___nl__im__193, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__194));
#line 810
c_rt_lib0clear(&___nl__im__194);
#line 810
c_rt_lib0move(&___nl__im__196, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(205)));
#line 810
c_rt_lib0move(&___nl__im__195, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__196));
#line 810
c_rt_lib0clear(&___nl__im__196);
#line 810
c_rt_lib0move(&___nl__im__192, c_rt_lib0array_mk(2, ___nl__im__193, ___nl__im__195));
#line 810
c_rt_lib0clear(&___nl__im__193);
#line 810
c_rt_lib0clear(&___nl__im__195);
#line 810
c_rt_lib0move(&___nl__im__190, generator_c_priv0get_fun_lib(___nl__im__191, ___nl__im__192));
#line 810
c_rt_lib0clear(&___nl__im__191);
#line 810
c_rt_lib0clear(&___nl__im__192);
#line 811
c_rt_lib0move(&___nl__im__198, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(223)));
#line 811
c_rt_lib0move(&___nl__im__197, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__198, ___nl__im__190));
#line 811
c_rt_lib0clear(&___nl__im__198);
#line 811
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__197));
#line 811
c_rt_lib0clear(&___nl__im__197);
#line 812
goto label_614;
#line 812
label_541:
;
#line 812
c_rt_lib0move(&___nl__im__200, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(74)));
#line 812
c_rt_lib0move(&___nl__im__199, c_rt_lib0hash_get_value_dec(___nl__im__200, ___get_global_string_const(205)));
#line 812
c_rt_lib0clear(&___nl__im__200);
#line 812
___nl__bool__187 = c_rt_lib0priv_is(___nl__im__199, ___get_global_string_const(554));
#line 812
c_rt_lib0clear(&___nl__im__199);
#line 812
___nl__bool__187 = !___nl__bool__187;
#line 812
if(___nl__bool__187){ goto label_610;}
#line 813
c_rt_lib0move(&___nl__im__202, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(74)));
#line 813
c_rt_lib0move(&___nl__im__201, generator_c_priv0get_access_op(___nl__im__202));
#line 813
c_rt_lib0clear(&___nl__im__202);
#line 814
c_rt_lib0move(&___nl__im__208,___get_global_string_const(560));
#line 814
c_rt_lib0move(&___nl__im__210, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(74)));
#line 814
c_rt_lib0move(&___nl__im__209, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__210));
#line 814
c_rt_lib0clear(&___nl__im__210);
#line 814
c_rt_lib0move(&___nl__im__207, c_rt_lib0concat_new(___nl__im__208, ___nl__im__209));
#line 814
c_rt_lib0clear(&___nl__im__208);
#line 814
c_rt_lib0clear(&___nl__im__209);
#line 814
c_rt_lib0move(&___nl__im__206, c_rt_lib0concat_new(___nl__im__207, ___nl__im__201));
#line 814
c_rt_lib0clear(&___nl__im__207);
#line 814
c_rt_lib0move(&___nl__im__211,___get_global_string_const(561));
#line 814
c_rt_lib0move(&___nl__im__205, c_rt_lib0concat_new(___nl__im__206, ___nl__im__211));
#line 814
c_rt_lib0clear(&___nl__im__206);
#line 814
c_rt_lib0clear(&___nl__im__211);
#line 814
c_rt_lib0move(&___nl__im__213, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(205)));
#line 814
c_rt_lib0move(&___nl__im__212, generator_c_priv0get_case_name(___nl__im__213));
#line 814
c_rt_lib0clear(&___nl__im__213);
#line 814
c_rt_lib0move(&___nl__im__204, c_rt_lib0concat_new(___nl__im__205, ___nl__im__212));
#line 814
c_rt_lib0clear(&___nl__im__205);
#line 814
c_rt_lib0clear(&___nl__im__212);
#line 814
c_rt_lib0move(&___nl__im__214,___get_global_string_const(320));
#line 814
c_rt_lib0move(&___nl__im__203, c_rt_lib0concat_new(___nl__im__204, ___nl__im__214));
#line 814
c_rt_lib0clear(&___nl__im__204);
#line 814
c_rt_lib0clear(&___nl__im__214);
#line 815
c_rt_lib0move(&___nl__im__217, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(223)));
#line 815
c_rt_lib0move(&___nl__im__216, c_rt_lib0hash_get_value_dec(___nl__im__217, ___get_global_string_const(205)));
#line 815
c_rt_lib0clear(&___nl__im__217);
#line 815
___nl__bool__215 = c_rt_lib0priv_is(___nl__im__216, ___get_global_string_const(132));
#line 815
c_rt_lib0clear(&___nl__im__216);
#line 815
___nl__bool__215 = !___nl__bool__215;
#line 815
if(___nl__bool__215){ goto label_593;}
#line 816
c_rt_lib0move(&___nl__im__219, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(223)));
#line 816
c_rt_lib0move(&___nl__im__218, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__219));
#line 816
c_rt_lib0clear(&___nl__im__219);
#line 817
c_rt_lib0move(&___nl__im__221,___get_global_string_const(453));
#line 817
c_rt_lib0move(&___nl__im__222, c_rt_lib0array_mk(2, ___nl__im__218, ___nl__im__203));
#line 817
c_rt_lib0move(&___nl__im__220, generator_c_priv0get_fun_lib(___nl__im__221, ___nl__im__222));
#line 817
c_rt_lib0clear(&___nl__im__221);
#line 817
c_rt_lib0clear(&___nl__im__222);
#line 817
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__220));
#line 817
c_rt_lib0clear(&___nl__im__220);
#line 818
goto label_605;
#line 818
label_593:
;
#line 819
c_rt_lib0move(&___nl__im__224, c_rt_lib0hash_get_value_dec(___nl__im__185, ___get_global_string_const(223)));
#line 819
c_rt_lib0move(&___nl__im__223, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__224));
#line 819
c_rt_lib0clear(&___nl__im__224);
#line 820
c_rt_lib0move(&___nl__im__227,___get_global_string_const(562));
#line 820
c_rt_lib0move(&___nl__im__226, c_rt_lib0concat_new(___nl__im__223, ___nl__im__227));
#line 820
c_rt_lib0clear(&___nl__im__227);
#line 820
c_rt_lib0move(&___nl__im__225, c_rt_lib0concat_new(___nl__im__226, ___nl__im__203));
#line 820
c_rt_lib0clear(&___nl__im__226);
#line 820
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__225));
#line 820
c_rt_lib0clear(&___nl__im__225);
#line 821
goto label_605;
#line 821
label_605:
;
#line 821
//clear ___nl__bool__215;
#line 821
c_rt_lib0clear(&___nl__im__218);
#line 821
c_rt_lib0clear(&___nl__im__223);
#line 822
goto label_614;
#line 822
label_610:
;
#line 823
c_rt_lib0move(&___nl__im__228, c_rt_lib0array_mk(0));
#line 823
nl_die_arg(___nl__im__228);
#line 824
goto label_614;
#line 824
label_614:
;
#line 824
//clear ___nl__bool__187;
#line 824
c_rt_lib0clear(&___nl__im__190);
#line 824
c_rt_lib0clear(&___nl__im__201);
#line 824
c_rt_lib0clear(&___nl__im__203);
#line 824
c_rt_lib0clear(&___nl__im__228);
#line 825
goto label_2023;
#line 825
label_621:
;
#line 825
c_rt_lib0move(&___nl__im__230, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(246)));
#line 825
c_rt_lib0copy(&___nl__im__229, ___nl__im__230);
#line 826
___nl__bool__231 = c_rt_lib0priv_is(___nl__im__229, ___get_global_string_const(224));
#line 826
if(___nl__bool__231){ goto label_631;}
#line 829
___nl__bool__231 = c_rt_lib0priv_is(___nl__im__229, ___get_global_string_const(350));
#line 829
if(___nl__bool__231){ goto label_641;}
#line 829
c_rt_lib0move(&___nl__im__232,___get_global_string_const(16));
#line 829
c_rt_lib0move(&___nl__im__232, c_rt_lib0array_mk(2, ___nl__im__232, ___nl__im__229));
#line 829
nl_die_arg(___nl__im__232);
#line 826
label_631:
;
#line 826
c_rt_lib0move(&___nl__im__234, c_rt_lib0priv_as(___nl__im__229, ___get_global_string_const(224)));
#line 826
c_rt_lib0copy(&___nl__im__233, ___nl__im__234);
#line 827
c_rt_lib0move(&___nl__im__235,___get_global_string_const(501));
#line 827
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__235));
#line 827
c_rt_lib0clear(&___nl__im__235);
#line 828
c_rt_lib0move(&___nl__im__236, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__233));
#line 828
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__236));
#line 828
c_rt_lib0clear(&___nl__im__236);
#line 829
goto label_653;
#line 829
label_641:
;
#line 830
c_rt_lib0move(&___nl__im__237,___get_global_string_const(501));
#line 830
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__237));
#line 830
c_rt_lib0clear(&___nl__im__237);
#line 831
___nl__im_ptr__240 = &((*___ref___rec__0).ret_reg_type0field);
#line 831
c_rt_lib0copy(&___nl__im__239, (*___nl__im_ptr__240));
#line 831
___nl__im_ptr__240 = NULL;
#line 831
c_rt_lib0move(&___nl__im__238, generator_c_priv0get_empty_value(___nl__im__239));
#line 831
c_rt_lib0clear(&___nl__im__239);
#line 831
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__238));
#line 831
c_rt_lib0clear(&___nl__im__238);
#line 832
goto label_653;
#line 832
label_653:
;
#line 833
goto label_2023;
#line 833
label_655:
;
#line 833
c_rt_lib0move(&___nl__im__242, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(247)));
#line 833
c_rt_lib0copy(&___nl__im__241, ___nl__im__242);
#line 834
c_rt_lib0move(&___nl__im__245,___get_global_string_const(563));
#line 834
c_rt_lib0move(&___nl__im__246, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__241));
#line 834
c_rt_lib0move(&___nl__im__244, c_rt_lib0concat_new(___nl__im__245, ___nl__im__246));
#line 834
c_rt_lib0clear(&___nl__im__245);
#line 834
c_rt_lib0clear(&___nl__im__246);
#line 834
c_rt_lib0move(&___nl__im__247,___get_global_string_const(320));
#line 834
c_rt_lib0move(&___nl__im__243, c_rt_lib0concat_new(___nl__im__244, ___nl__im__247));
#line 834
c_rt_lib0clear(&___nl__im__244);
#line 834
c_rt_lib0clear(&___nl__im__247);
#line 834
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__243));
#line 834
c_rt_lib0clear(&___nl__im__243);
#line 835
goto label_2023;
#line 835
label_670:
;
#line 835
c_rt_lib0move(&___nl__im__249, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(238)));
#line 835
c_rt_lib0copy(&___nl__im__248, ___nl__im__249);
#line 836
c_rt_lib0move(&___nl__im__250, c_rt_lib0hash_get_value_dec(___nl__im__248, ___get_global_string_const(74)));
#line 836
c_rt_lib0move(&___nl__im__251, c_rt_lib0hash_get_value_dec(___nl__im__248, ___get_global_string_const(223)));
#line 836
c_rt_lib0delete(generator_c_priv0print_move(___ref___rec__0, ___nl__im__250, ___nl__im__251));
#line 836
c_rt_lib0clear(&___nl__im__250);
#line 836
c_rt_lib0clear(&___nl__im__251);
#line 837
goto label_2023;
#line 837
label_679:
;
#line 837
c_rt_lib0move(&___nl__im__253, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(225)));
#line 837
c_rt_lib0copy(&___nl__im__252, ___nl__im__253);
#line 838
c_rt_lib0move(&___nl__im__255, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(223)));
#line 838
c_rt_lib0move(&___nl__im__256, nlasm0is_empty(___nl__im__255));
#line 838
___nl__bool__254 = c_rt_lib0check_true_native(___nl__im__256);
#line 838
c_rt_lib0clear(&___nl__im__255);
#line 838
c_rt_lib0clear(&___nl__im__256);
#line 838
___nl__bool__254 = !___nl__bool__254;
#line 838
if(___nl__bool__254){ goto label_729;}
#line 838
c_rt_lib0clear(&___nl__im__1);
#line 838
c_rt_lib0clear(&___nl__im__2);
#line 838
//clear ___nl__bool__14;
#line 838
c_rt_lib0clear(&___nl__im__15);
#line 838
//clear ___nl__bool__16;
#line 838
c_rt_lib0clear(&___nl__im__17);
#line 838
c_rt_lib0clear(&___nl__im__18);
#line 838
c_rt_lib0clear(&___nl__im__19);
#line 838
c_rt_lib0clear(&___nl__im__72);
#line 838
c_rt_lib0clear(&___nl__im__73);
#line 838
c_rt_lib0clear(&___nl__im__116);
#line 838
c_rt_lib0clear(&___nl__im__117);
#line 838
c_rt_lib0clear(&___nl__im__118);
#line 838
c_rt_lib0clear(&___nl__im__123);
#line 838
c_rt_lib0clear(&___nl__im__124);
#line 838
c_rt_lib0clear(&___nl__im__125);
#line 838
c_rt_lib0clear(&___nl__im__126);
#line 838
c_rt_lib0clear(&___nl__im__127);
#line 838
c_rt_lib0clear(&___nl__im__130);
#line 838
c_rt_lib0clear(&___nl__im__148);
#line 838
c_rt_lib0clear(&___nl__im__149);
#line 838
c_rt_lib0clear(&___nl__im__150);
#line 838
c_rt_lib0clear(&___nl__im__151);
#line 838
c_rt_lib0clear(&___nl__im__185);
#line 838
c_rt_lib0clear(&___nl__im__186);
#line 838
c_rt_lib0clear(&___nl__im__229);
#line 838
c_rt_lib0clear(&___nl__im__230);
#line 838
//clear ___nl__bool__231;
#line 838
c_rt_lib0clear(&___nl__im__232);
#line 838
c_rt_lib0clear(&___nl__im__233);
#line 838
c_rt_lib0clear(&___nl__im__234);
#line 838
c_rt_lib0clear(&___nl__im__241);
#line 838
c_rt_lib0clear(&___nl__im__242);
#line 838
c_rt_lib0clear(&___nl__im__248);
#line 838
c_rt_lib0clear(&___nl__im__249);
#line 838
c_rt_lib0clear(&___nl__im__252);
#line 838
c_rt_lib0clear(&___nl__im__253);
#line 838
//clear ___nl__bool__254;
#line 838
return NULL;
#line 838
goto label_729;
#line 838
label_729:
;
#line 838
//clear ___nl__bool__254;
#line 839
c_rt_lib0move(&___nl__im__258, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(223)));
#line 839
c_rt_lib0move(&___nl__im__257, c_rt_lib0hash_get_value_dec(___nl__im__258, ___get_global_string_const(205)));
#line 839
c_rt_lib0clear(&___nl__im__258);
#line 839
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(132));
#line 839
if(___nl__bool__259){ goto label_753;}
#line 843
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(403));
#line 843
if(___nl__bool__259){ goto label_780;}
#line 845
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(404));
#line 845
if(___nl__bool__259){ goto label_795;}
#line 849
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(34));
#line 849
if(___nl__bool__259){ goto label_822;}
#line 852
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(551));
#line 852
if(___nl__bool__259){ goto label_836;}
#line 854
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(128));
#line 854
if(___nl__bool__259){ goto label_842;}
#line 856
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(554));
#line 856
if(___nl__bool__259){ goto label_848;}
#line 858
___nl__bool__259 = c_rt_lib0priv_is(___nl__im__257, ___get_global_string_const(129));
#line 858
if(___nl__bool__259){ goto label_854;}
#line 858
c_rt_lib0move(&___nl__im__260,___get_global_string_const(16));
#line 858
c_rt_lib0move(&___nl__im__260, c_rt_lib0array_mk(2, ___nl__im__260, ___nl__im__257));
#line 858
nl_die_arg(___nl__im__260);
#line 839
label_753:
;
#line 840
c_rt_lib0move(&___nl__im__265,___get_global_string_const(238));
#line 840
c_rt_lib0move(&___nl__im__264, generator_c_priv0get_lib_fun(___nl__im__265));
#line 840
c_rt_lib0clear(&___nl__im__265);
#line 840
c_rt_lib0move(&___nl__im__266,___get_global_string_const(455));
#line 840
c_rt_lib0move(&___nl__im__263, c_rt_lib0concat_new(___nl__im__264, ___nl__im__266));
#line 840
c_rt_lib0clear(&___nl__im__264);
#line 840
c_rt_lib0clear(&___nl__im__266);
#line 840
c_rt_lib0move(&___nl__im__268, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(223)));
#line 840
c_rt_lib0move(&___nl__im__267, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__268));
#line 840
c_rt_lib0clear(&___nl__im__268);
#line 840
c_rt_lib0move(&___nl__im__262, c_rt_lib0concat_new(___nl__im__263, ___nl__im__267));
#line 840
c_rt_lib0clear(&___nl__im__263);
#line 840
c_rt_lib0clear(&___nl__im__267);
#line 840
c_rt_lib0move(&___nl__im__269,___get_global_string_const(312));
#line 840
c_rt_lib0move(&___nl__im__261, c_rt_lib0concat_new(___nl__im__262, ___nl__im__269));
#line 840
c_rt_lib0clear(&___nl__im__262);
#line 840
c_rt_lib0clear(&___nl__im__269);
#line 840
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__261));
#line 840
c_rt_lib0clear(&___nl__im__261);
#line 841
c_rt_lib0move(&___nl__im__270, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(224)));
#line 841
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__270));
#line 841
c_rt_lib0clear(&___nl__im__270);
#line 842
c_rt_lib0move(&___nl__im__271,___get_global_string_const(320));
#line 842
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__271));
#line 842
c_rt_lib0clear(&___nl__im__271);
#line 843
goto label_860;
#line 843
label_780:
;
#line 844
c_rt_lib0move(&___nl__im__275, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(223)));
#line 844
c_rt_lib0move(&___nl__im__274, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__275));
#line 844
c_rt_lib0clear(&___nl__im__275);
#line 844
c_rt_lib0move(&___nl__im__276,___get_global_string_const(562));
#line 844
c_rt_lib0move(&___nl__im__273, c_rt_lib0concat_new(___nl__im__274, ___nl__im__276));
#line 844
c_rt_lib0clear(&___nl__im__274);
#line 844
c_rt_lib0clear(&___nl__im__276);
#line 844
c_rt_lib0move(&___nl__im__277, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(224)));
#line 844
c_rt_lib0move(&___nl__im__272, c_rt_lib0concat_new(___nl__im__273, ___nl__im__277));
#line 844
c_rt_lib0clear(&___nl__im__273);
#line 844
c_rt_lib0clear(&___nl__im__277);
#line 844
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__272));
#line 844
c_rt_lib0clear(&___nl__im__272);
#line 845
goto label_860;
#line 845
label_795:
;
#line 846
c_rt_lib0move(&___nl__im__282,___get_global_string_const(238));
#line 846
c_rt_lib0move(&___nl__im__281, generator_c_priv0get_lib_fun(___nl__im__282));
#line 846
c_rt_lib0clear(&___nl__im__282);
#line 846
c_rt_lib0move(&___nl__im__283,___get_global_string_const(455));
#line 846
c_rt_lib0move(&___nl__im__280, c_rt_lib0concat_new(___nl__im__281, ___nl__im__283));
#line 846
c_rt_lib0clear(&___nl__im__281);
#line 846
c_rt_lib0clear(&___nl__im__283);
#line 846
c_rt_lib0move(&___nl__im__285, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(223)));
#line 846
c_rt_lib0move(&___nl__im__284, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__285));
#line 846
c_rt_lib0clear(&___nl__im__285);
#line 846
c_rt_lib0move(&___nl__im__279, c_rt_lib0concat_new(___nl__im__280, ___nl__im__284));
#line 846
c_rt_lib0clear(&___nl__im__280);
#line 846
c_rt_lib0clear(&___nl__im__284);
#line 846
c_rt_lib0move(&___nl__im__286,___get_global_string_const(312));
#line 846
c_rt_lib0move(&___nl__im__278, c_rt_lib0concat_new(___nl__im__279, ___nl__im__286));
#line 846
c_rt_lib0clear(&___nl__im__279);
#line 846
c_rt_lib0clear(&___nl__im__286);
#line 846
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__278));
#line 846
c_rt_lib0clear(&___nl__im__278);
#line 847
c_rt_lib0move(&___nl__im__287, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(224)));
#line 847
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__287));
#line 847
c_rt_lib0clear(&___nl__im__287);
#line 848
c_rt_lib0move(&___nl__im__288,___get_global_string_const(320));
#line 848
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__288));
#line 848
c_rt_lib0clear(&___nl__im__288);
#line 849
goto label_860;
#line 849
label_822:
;
#line 850
c_rt_lib0move(&___nl__im__291, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(223)));
#line 850
c_rt_lib0move(&___nl__im__290, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__291));
#line 850
c_rt_lib0clear(&___nl__im__291);
#line 850
c_rt_lib0move(&___nl__im__292,___get_global_string_const(562));
#line 850
c_rt_lib0move(&___nl__im__289, c_rt_lib0concat_new(___nl__im__290, ___nl__im__292));
#line 850
c_rt_lib0clear(&___nl__im__290);
#line 850
c_rt_lib0clear(&___nl__im__292);
#line 850
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__289));
#line 850
c_rt_lib0clear(&___nl__im__289);
#line 851
c_rt_lib0move(&___nl__im__293, c_rt_lib0hash_get_value_dec(___nl__im__252, ___get_global_string_const(224)));
#line 851
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___rec__0, ___nl__im__293));
#line 851
c_rt_lib0clear(&___nl__im__293);
#line 852
goto label_860;
#line 852
label_836:
;
#line 852
c_rt_lib0move(&___nl__im__295, c_rt_lib0priv_as(___nl__im__257, ___get_global_string_const(551)));
#line 852
c_rt_lib0copy(&___nl__im__294, ___nl__im__295);
#line 853
c_rt_lib0move(&___nl__im__296, c_rt_lib0array_mk(0));
#line 853
nl_die_arg(___nl__im__296);
#line 854
goto label_860;
#line 854
label_842:
;
#line 854
c_rt_lib0move(&___nl__im__298, c_rt_lib0priv_as(___nl__im__257, ___get_global_string_const(128)));
#line 854
c_rt_lib0copy(&___nl__im__297, ___nl__im__298);
#line 855
c_rt_lib0move(&___nl__im__299, c_rt_lib0array_mk(0));
#line 855
nl_die_arg(___nl__im__299);
#line 856
goto label_860;
#line 856
label_848:
;
#line 856
c_rt_lib0move(&___nl__im__301, c_rt_lib0priv_as(___nl__im__257, ___get_global_string_const(554)));
#line 856
c_rt_lib0copy(&___nl__im__300, ___nl__im__301);
#line 857
c_rt_lib0move(&___nl__im__302, c_rt_lib0array_mk(0));
#line 857
nl_die_arg(___nl__im__302);
#line 858
goto label_860;
#line 858
label_854:
;
#line 858
c_rt_lib0move(&___nl__im__304, c_rt_lib0priv_as(___nl__im__257, ___get_global_string_const(129)));
#line 858
c_rt_lib0copy(&___nl__im__303, ___nl__im__304);
#line 859
c_rt_lib0move(&___nl__im__305, c_rt_lib0array_mk(0));
#line 859
nl_die_arg(___nl__im__305);
#line 860
goto label_860;
#line 860
label_860:
;
#line 861
goto label_2023;
#line 861
label_862:
;
#line 861
c_rt_lib0move(&___nl__im__307, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(239)));
#line 861
c_rt_lib0copy(&___nl__im__306, ___nl__im__307);
#line 862
c_rt_lib0move(&___nl__im__309,___get_global_string_const(564));
#line 862
c_rt_lib0move(&___nl__im__312, c_rt_lib0hash_get_value_dec(___nl__im__306, ___get_global_string_const(74)));
#line 862
c_rt_lib0move(&___nl__im__311, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__312));
#line 862
c_rt_lib0clear(&___nl__im__312);
#line 862
c_rt_lib0move(&___nl__im__314, c_rt_lib0hash_get_value_dec(___nl__im__306, ___get_global_string_const(276)));
#line 862
c_rt_lib0move(&___nl__im__313, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__314));
#line 862
c_rt_lib0clear(&___nl__im__314);
#line 862
c_rt_lib0move(&___nl__im__310, c_rt_lib0array_mk(2, ___nl__im__311, ___nl__im__313));
#line 862
c_rt_lib0clear(&___nl__im__311);
#line 862
c_rt_lib0clear(&___nl__im__313);
#line 862
c_rt_lib0move(&___nl__im__308, generator_c_priv0get_fun_lib(___nl__im__309, ___nl__im__310));
#line 862
c_rt_lib0clear(&___nl__im__309);
#line 862
c_rt_lib0clear(&___nl__im__310);
#line 863
c_rt_lib0move(&___nl__im__316, c_rt_lib0hash_get_value_dec(___nl__im__306, ___get_global_string_const(223)));
#line 863
c_rt_lib0move(&___nl__im__315, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__316, ___nl__im__308));
#line 863
c_rt_lib0clear(&___nl__im__316);
#line 863
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__315));
#line 863
c_rt_lib0clear(&___nl__im__315);
#line 864
goto label_2023;
#line 864
label_884:
;
#line 864
c_rt_lib0move(&___nl__im__318, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(240)));
#line 864
c_rt_lib0copy(&___nl__im__317, ___nl__im__318);
#line 865
c_rt_lib0move(&___nl__im__320,___get_global_string_const(565));
#line 866
c_rt_lib0move(&___nl__im__323, c_rt_lib0hash_get_value_dec(___nl__im__317, ___get_global_string_const(74)));
#line 866
c_rt_lib0move(&___nl__im__322, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__323));
#line 866
c_rt_lib0clear(&___nl__im__323);
#line 867
c_rt_lib0move(&___nl__im__325, c_rt_lib0hash_get_value_dec(___nl__im__317, ___get_global_string_const(276)));
#line 867
c_rt_lib0move(&___nl__im__324, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__325));
#line 867
c_rt_lib0clear(&___nl__im__325);
#line 868
c_rt_lib0move(&___nl__im__327, c_rt_lib0hash_get_value_dec(___nl__im__317, ___get_global_string_const(224)));
#line 868
c_rt_lib0move(&___nl__im__326, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__327));
#line 868
c_rt_lib0clear(&___nl__im__327);
#line 868
c_rt_lib0move(&___nl__im__321, c_rt_lib0array_mk(3, ___nl__im__322, ___nl__im__324, ___nl__im__326));
#line 868
c_rt_lib0clear(&___nl__im__322);
#line 868
c_rt_lib0clear(&___nl__im__324);
#line 868
c_rt_lib0clear(&___nl__im__326);
#line 868
c_rt_lib0move(&___nl__im__319, generator_c_priv0get_fun_lib(___nl__im__320, ___nl__im__321));
#line 868
c_rt_lib0clear(&___nl__im__320);
#line 868
c_rt_lib0clear(&___nl__im__321);
#line 868
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__319));
#line 868
c_rt_lib0clear(&___nl__im__319);
#line 870
goto label_2023;
#line 870
label_907:
;
#line 870
c_rt_lib0move(&___nl__im__329, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(241)));
#line 870
c_rt_lib0copy(&___nl__im__328, ___nl__im__329);
#line 871
c_rt_lib0move(&___nl__im__332, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 871
c_rt_lib0move(&___nl__im__331, c_rt_lib0hash_get_value_dec(___nl__im__332, ___get_global_string_const(205)));
#line 871
c_rt_lib0clear(&___nl__im__332);
#line 871
___nl__bool__330 = c_rt_lib0priv_is(___nl__im__331, ___get_global_string_const(128));
#line 871
c_rt_lib0clear(&___nl__im__331);
#line 871
___nl__bool__330 = !___nl__bool__330;
#line 871
if(___nl__bool__330){ goto label_972;}
#line 872
c_rt_lib0move(&___nl__im__336, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 872
c_rt_lib0move(&___nl__im__335, c_rt_lib0hash_get_value_dec(___nl__im__336, ___get_global_string_const(205)));
#line 872
c_rt_lib0clear(&___nl__im__336);
#line 872
c_rt_lib0move(&___nl__im__338, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 872
c_rt_lib0move(&___nl__im__337, c_rt_lib0hash_get_value_dec(___nl__im__338, ___get_global_string_const(205)));
#line 872
c_rt_lib0clear(&___nl__im__338);
#line 872
c_rt_lib0move(&___nl__im__334, c_rt_lib0priv_as(___nl__im__337, ___get_global_string_const(128)));
#line 872
c_rt_lib0clear(&___nl__im__335);
#line 872
c_rt_lib0clear(&___nl__im__337);
#line 872
c_rt_lib0move(&___nl__im__333, generator_c_priv0get_type_name(___nl__im__334));
#line 872
c_rt_lib0clear(&___nl__im__334);
#line 873
___nl__im_ptr__346 = &((*___ref___rec__0).mod_name0field);
#line 873
c_rt_lib0copy(&___nl__im__345, (*___nl__im_ptr__346));
#line 873
___nl__im_ptr__346 = NULL;
#line 873
c_rt_lib0move(&___nl__im__350, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 873
c_rt_lib0move(&___nl__im__349, c_rt_lib0hash_get_value_dec(___nl__im__350, ___get_global_string_const(205)));
#line 873
c_rt_lib0clear(&___nl__im__350);
#line 873
c_rt_lib0move(&___nl__im__352, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 873
c_rt_lib0move(&___nl__im__351, c_rt_lib0hash_get_value_dec(___nl__im__352, ___get_global_string_const(205)));
#line 873
c_rt_lib0clear(&___nl__im__352);
#line 873
c_rt_lib0move(&___nl__im__348, c_rt_lib0priv_as(___nl__im__351, ___get_global_string_const(128)));
#line 873
c_rt_lib0clear(&___nl__im__349);
#line 873
c_rt_lib0clear(&___nl__im__351);
#line 873
___nl__bool__347 = generator_c_priv0is_anon(___nl__im__348);
#line 873
c_rt_lib0clear(&___nl__im__348);
#line 873
c_rt_lib0move(&___nl__im__344, generator_c_priv0get_array_push_fun_name(___nl__im__333, ___nl__im__345, ___nl__bool__347));
#line 873
c_rt_lib0clear(&___nl__im__345);
#line 873
//clear ___nl__bool__347;
#line 873
c_rt_lib0move(&___nl__im__353,___get_global_string_const(455));
#line 873
c_rt_lib0move(&___nl__im__343, c_rt_lib0concat_new(___nl__im__344, ___nl__im__353));
#line 873
c_rt_lib0clear(&___nl__im__344);
#line 873
c_rt_lib0clear(&___nl__im__353);
#line 874
c_rt_lib0move(&___nl__im__355, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 874
c_rt_lib0move(&___nl__im__354, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__355));
#line 874
c_rt_lib0clear(&___nl__im__355);
#line 874
c_rt_lib0move(&___nl__im__342, c_rt_lib0concat_new(___nl__im__343, ___nl__im__354));
#line 874
c_rt_lib0clear(&___nl__im__343);
#line 874
c_rt_lib0clear(&___nl__im__354);
#line 874
c_rt_lib0move(&___nl__im__356,___get_global_string_const(326));
#line 874
c_rt_lib0move(&___nl__im__341, c_rt_lib0concat_new(___nl__im__342, ___nl__im__356));
#line 874
c_rt_lib0clear(&___nl__im__342);
#line 874
c_rt_lib0clear(&___nl__im__356);
#line 875
c_rt_lib0move(&___nl__im__358, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(224)));
#line 875
c_rt_lib0move(&___nl__im__357, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__358));
#line 875
c_rt_lib0clear(&___nl__im__358);
#line 875
c_rt_lib0move(&___nl__im__340, c_rt_lib0concat_new(___nl__im__341, ___nl__im__357));
#line 875
c_rt_lib0clear(&___nl__im__341);
#line 875
c_rt_lib0clear(&___nl__im__357);
#line 875
c_rt_lib0move(&___nl__im__359,___get_global_string_const(320));
#line 875
c_rt_lib0move(&___nl__im__339, c_rt_lib0concat_new(___nl__im__340, ___nl__im__359));
#line 875
c_rt_lib0clear(&___nl__im__340);
#line 875
c_rt_lib0clear(&___nl__im__359);
#line 875
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__339));
#line 875
c_rt_lib0clear(&___nl__im__339);
#line 876
goto label_1000;
#line 876
label_972:
;
#line 876
c_rt_lib0move(&___nl__im__361, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 876
c_rt_lib0move(&___nl__im__360, c_rt_lib0hash_get_value_dec(___nl__im__361, ___get_global_string_const(205)));
#line 876
c_rt_lib0clear(&___nl__im__361);
#line 876
___nl__bool__330 = c_rt_lib0priv_is(___nl__im__360, ___get_global_string_const(132));
#line 876
c_rt_lib0clear(&___nl__im__360);
#line 876
___nl__bool__330 = !___nl__bool__330;
#line 876
if(___nl__bool__330){ goto label_996;}
#line 877
c_rt_lib0move(&___nl__im__363,___get_global_string_const(241));
#line 878
c_rt_lib0move(&___nl__im__366, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(223)));
#line 878
c_rt_lib0move(&___nl__im__365, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__366));
#line 878
c_rt_lib0clear(&___nl__im__366);
#line 879
c_rt_lib0move(&___nl__im__368, c_rt_lib0hash_get_value_dec(___nl__im__328, ___get_global_string_const(224)));
#line 879
c_rt_lib0move(&___nl__im__367, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__368));
#line 879
c_rt_lib0clear(&___nl__im__368);
#line 879
c_rt_lib0move(&___nl__im__364, c_rt_lib0array_mk(2, ___nl__im__365, ___nl__im__367));
#line 879
c_rt_lib0clear(&___nl__im__365);
#line 879
c_rt_lib0clear(&___nl__im__367);
#line 879
c_rt_lib0move(&___nl__im__362, generator_c_priv0get_fun_lib(___nl__im__363, ___nl__im__364));
#line 879
c_rt_lib0clear(&___nl__im__363);
#line 879
c_rt_lib0clear(&___nl__im__364);
#line 879
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__362));
#line 879
c_rt_lib0clear(&___nl__im__362);
#line 881
goto label_1000;
#line 881
label_996:
;
#line 882
c_rt_lib0move(&___nl__im__369, c_rt_lib0array_mk(0));
#line 882
nl_die_arg(___nl__im__369);
#line 883
goto label_1000;
#line 883
label_1000:
;
#line 883
//clear ___nl__bool__330;
#line 883
c_rt_lib0clear(&___nl__im__333);
#line 883
c_rt_lib0clear(&___nl__im__369);
#line 884
goto label_2023;
#line 884
label_1005:
;
#line 884
c_rt_lib0move(&___nl__im__371, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(242)));
#line 884
c_rt_lib0copy(&___nl__im__370, ___nl__im__371);
#line 886
c_rt_lib0move(&___nl__im__375, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 886
c_rt_lib0move(&___nl__im__374, c_rt_lib0hash_get_value_dec(___nl__im__375, ___get_global_string_const(205)));
#line 886
c_rt_lib0clear(&___nl__im__375);
#line 886
___nl__bool__373 = c_rt_lib0priv_is(___nl__im__374, ___get_global_string_const(128));
#line 886
c_rt_lib0clear(&___nl__im__374);
#line 886
___nl__bool__373 = !___nl__bool__373;
#line 886
if(___nl__bool__373){ goto label_1057;}
#line 887
c_rt_lib0move(&___nl__im__379, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 887
c_rt_lib0move(&___nl__im__378, c_rt_lib0hash_get_value_dec(___nl__im__379, ___get_global_string_const(205)));
#line 887
c_rt_lib0clear(&___nl__im__379);
#line 887
c_rt_lib0move(&___nl__im__381, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 887
c_rt_lib0move(&___nl__im__380, c_rt_lib0hash_get_value_dec(___nl__im__381, ___get_global_string_const(205)));
#line 887
c_rt_lib0clear(&___nl__im__381);
#line 887
c_rt_lib0move(&___nl__im__377, c_rt_lib0priv_as(___nl__im__380, ___get_global_string_const(128)));
#line 887
c_rt_lib0clear(&___nl__im__378);
#line 887
c_rt_lib0clear(&___nl__im__380);
#line 887
c_rt_lib0move(&___nl__im__376, generator_c_priv0get_type_name(___nl__im__377));
#line 887
c_rt_lib0clear(&___nl__im__377);
#line 888
c_rt_lib0move(&___nl__im__385, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 888
c_rt_lib0move(&___nl__im__384, c_rt_lib0hash_get_value_dec(___nl__im__385, ___get_global_string_const(205)));
#line 888
c_rt_lib0clear(&___nl__im__385);
#line 888
c_rt_lib0move(&___nl__im__387, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 888
c_rt_lib0move(&___nl__im__386, c_rt_lib0hash_get_value_dec(___nl__im__387, ___get_global_string_const(205)));
#line 888
c_rt_lib0clear(&___nl__im__387);
#line 888
c_rt_lib0move(&___nl__im__383, c_rt_lib0priv_as(___nl__im__386, ___get_global_string_const(128)));
#line 888
c_rt_lib0clear(&___nl__im__384);
#line 888
c_rt_lib0clear(&___nl__im__386);
#line 888
___nl__bool__382 = generator_c_priv0is_anon(___nl__im__383);
#line 888
c_rt_lib0clear(&___nl__im__383);
#line 889
___nl__im_ptr__392 = &((*___ref___rec__0).mod_name0field);
#line 889
c_rt_lib0copy(&___nl__im__391, (*___nl__im_ptr__392));
#line 889
___nl__im_ptr__392 = NULL;
#line 889
c_rt_lib0move(&___nl__im__390, generator_c_priv0get_array_len_fun_name(___nl__im__376, ___nl__im__391, ___nl__bool__382));
#line 889
c_rt_lib0clear(&___nl__im__391);
#line 889
c_rt_lib0move(&___nl__im__393,___get_global_string_const(455));
#line 889
c_rt_lib0move(&___nl__im__389, c_rt_lib0concat_new(___nl__im__390, ___nl__im__393));
#line 889
c_rt_lib0clear(&___nl__im__390);
#line 889
c_rt_lib0clear(&___nl__im__393);
#line 890
c_rt_lib0move(&___nl__im__395, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 890
c_rt_lib0move(&___nl__im__394, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__395));
#line 890
c_rt_lib0clear(&___nl__im__395);
#line 890
c_rt_lib0move(&___nl__im__388, c_rt_lib0concat_new(___nl__im__389, ___nl__im__394));
#line 890
c_rt_lib0clear(&___nl__im__389);
#line 890
c_rt_lib0clear(&___nl__im__394);
#line 890
c_rt_lib0move(&___nl__im__396,___get_global_string_const(320));
#line 890
c_rt_lib0move(&___nl__im__372, c_rt_lib0concat_new(___nl__im__388, ___nl__im__396));
#line 890
c_rt_lib0clear(&___nl__im__388);
#line 890
c_rt_lib0clear(&___nl__im__396);
#line 891
goto label_1079;
#line 891
label_1057:
;
#line 891
c_rt_lib0move(&___nl__im__398, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 891
c_rt_lib0move(&___nl__im__397, c_rt_lib0hash_get_value_dec(___nl__im__398, ___get_global_string_const(205)));
#line 891
c_rt_lib0clear(&___nl__im__398);
#line 891
___nl__bool__373 = c_rt_lib0priv_is(___nl__im__397, ___get_global_string_const(132));
#line 891
c_rt_lib0clear(&___nl__im__397);
#line 891
___nl__bool__373 = !___nl__bool__373;
#line 891
if(___nl__bool__373){ goto label_1075;}
#line 892
c_rt_lib0move(&___nl__im__399,___get_global_string_const(242));
#line 892
c_rt_lib0move(&___nl__im__402, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(74)));
#line 892
c_rt_lib0move(&___nl__im__401, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__402));
#line 892
c_rt_lib0clear(&___nl__im__402);
#line 892
c_rt_lib0move(&___nl__im__400, c_rt_lib0array_mk(1, ___nl__im__401));
#line 892
c_rt_lib0clear(&___nl__im__401);
#line 892
c_rt_lib0move(&___nl__im__372, generator_c_priv0get_fun_lib(___nl__im__399, ___nl__im__400));
#line 892
c_rt_lib0clear(&___nl__im__399);
#line 892
c_rt_lib0clear(&___nl__im__400);
#line 893
goto label_1079;
#line 893
label_1075:
;
#line 894
c_rt_lib0move(&___nl__im__403, c_rt_lib0array_mk(0));
#line 894
nl_die_arg(___nl__im__403);
#line 895
goto label_1079;
#line 895
label_1079:
;
#line 895
//clear ___nl__bool__373;
#line 895
c_rt_lib0clear(&___nl__im__376);
#line 895
//clear ___nl__bool__382;
#line 895
c_rt_lib0clear(&___nl__im__403);
#line 896
c_rt_lib0move(&___nl__im__406, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(223)));
#line 896
c_rt_lib0move(&___nl__im__405, c_rt_lib0hash_get_value_dec(___nl__im__406, ___get_global_string_const(205)));
#line 896
c_rt_lib0clear(&___nl__im__406);
#line 896
___nl__bool__404 = c_rt_lib0priv_is(___nl__im__405, ___get_global_string_const(403));
#line 896
c_rt_lib0clear(&___nl__im__405);
#line 896
___nl__bool__404 = !___nl__bool__404;
#line 896
if(___nl__bool__404){ goto label_1103;}
#line 897
c_rt_lib0move(&___nl__im__410, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(223)));
#line 897
c_rt_lib0move(&___nl__im__409, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__410));
#line 897
c_rt_lib0clear(&___nl__im__410);
#line 897
c_rt_lib0move(&___nl__im__411,___get_global_string_const(562));
#line 897
c_rt_lib0move(&___nl__im__408, c_rt_lib0concat_new(___nl__im__409, ___nl__im__411));
#line 897
c_rt_lib0clear(&___nl__im__409);
#line 897
c_rt_lib0clear(&___nl__im__411);
#line 897
c_rt_lib0move(&___nl__im__407, c_rt_lib0concat_new(___nl__im__408, ___nl__im__372));
#line 897
c_rt_lib0clear(&___nl__im__408);
#line 897
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__407));
#line 897
c_rt_lib0clear(&___nl__im__407);
#line 898
goto label_1131;
#line 898
label_1103:
;
#line 898
c_rt_lib0move(&___nl__im__413, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(223)));
#line 898
c_rt_lib0move(&___nl__im__412, c_rt_lib0hash_get_value_dec(___nl__im__413, ___get_global_string_const(205)));
#line 898
c_rt_lib0clear(&___nl__im__413);
#line 898
___nl__bool__404 = c_rt_lib0priv_is(___nl__im__412, ___get_global_string_const(132));
#line 898
c_rt_lib0clear(&___nl__im__412);
#line 898
___nl__bool__404 = !___nl__bool__404;
#line 898
if(___nl__bool__404){ goto label_1131;}
#line 899
c_rt_lib0move(&___nl__im__415, c_rt_lib0hash_get_value_dec(___nl__im__370, ___get_global_string_const(223)));
#line 899
c_rt_lib0move(&___nl__im__420,___get_global_string_const(566));
#line 899
c_rt_lib0move(&___nl__im__419, generator_c_priv0get_lib_fun(___nl__im__420));
#line 899
c_rt_lib0clear(&___nl__im__420);
#line 899
c_rt_lib0move(&___nl__im__421,___get_global_string_const(455));
#line 899
c_rt_lib0move(&___nl__im__418, c_rt_lib0concat_new(___nl__im__419, ___nl__im__421));
#line 899
c_rt_lib0clear(&___nl__im__419);
#line 899
c_rt_lib0clear(&___nl__im__421);
#line 899
c_rt_lib0move(&___nl__im__417, c_rt_lib0concat_new(___nl__im__418, ___nl__im__372));
#line 899
c_rt_lib0clear(&___nl__im__418);
#line 899
c_rt_lib0move(&___nl__im__422,___get_global_string_const(320));
#line 899
c_rt_lib0move(&___nl__im__416, c_rt_lib0concat_new(___nl__im__417, ___nl__im__422));
#line 899
c_rt_lib0clear(&___nl__im__417);
#line 899
c_rt_lib0clear(&___nl__im__422);
#line 899
c_rt_lib0move(&___nl__im__414, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__415, ___nl__im__416));
#line 899
c_rt_lib0clear(&___nl__im__415);
#line 899
c_rt_lib0clear(&___nl__im__416);
#line 899
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__414));
#line 899
c_rt_lib0clear(&___nl__im__414);
#line 900
goto label_1131;
#line 900
label_1131:
;
#line 900
//clear ___nl__bool__404;
#line 901
goto label_2023;
#line 901
label_1134:
;
#line 901
c_rt_lib0move(&___nl__im__424, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(243)));
#line 901
c_rt_lib0copy(&___nl__im__423, ___nl__im__424);
#line 903
c_rt_lib0move(&___nl__im__427, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(74)));
#line 903
c_rt_lib0move(&___nl__im__426, c_rt_lib0hash_get_value_dec(___nl__im__427, ___get_global_string_const(351)));
#line 903
c_rt_lib0clear(&___nl__im__427);
#line 903
___nl__bool__428 = c_rt_lib0priv_is(___nl__im__426, ___get_global_string_const(219));
#line 903
if(___nl__bool__428){ goto label_1147;}
#line 905
___nl__bool__428 = c_rt_lib0priv_is(___nl__im__426, ___get_global_string_const(420));
#line 905
if(___nl__bool__428){ goto label_1162;}
#line 905
c_rt_lib0move(&___nl__im__429,___get_global_string_const(16));
#line 905
c_rt_lib0move(&___nl__im__429, c_rt_lib0array_mk(2, ___nl__im__429, ___nl__im__426));
#line 905
nl_die_arg(___nl__im__429);
#line 903
label_1147:
;
#line 904
c_rt_lib0move(&___nl__im__430,___get_global_string_const(567));
#line 904
c_rt_lib0move(&___nl__im__433, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(74)));
#line 904
c_rt_lib0move(&___nl__im__432, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__433));
#line 904
c_rt_lib0clear(&___nl__im__433);
#line 904
c_rt_lib0move(&___nl__im__435, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(568)));
#line 904
c_rt_lib0move(&___nl__im__434, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__435));
#line 904
c_rt_lib0clear(&___nl__im__435);
#line 904
c_rt_lib0move(&___nl__im__431, c_rt_lib0array_mk(2, ___nl__im__432, ___nl__im__434));
#line 904
c_rt_lib0clear(&___nl__im__432);
#line 904
c_rt_lib0clear(&___nl__im__434);
#line 904
c_rt_lib0move(&___nl__im__425, generator_c_priv0get_fun_lib(___nl__im__430, ___nl__im__431));
#line 904
c_rt_lib0clear(&___nl__im__430);
#line 904
c_rt_lib0clear(&___nl__im__431);
#line 905
goto label_1218;
#line 905
label_1162:
;
#line 906
c_rt_lib0move(&___nl__im__438, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(74)));
#line 906
c_rt_lib0move(&___nl__im__437, c_rt_lib0hash_get_value_dec(___nl__im__438, ___get_global_string_const(205)));
#line 906
c_rt_lib0clear(&___nl__im__438);
#line 906
___nl__bool__436 = c_rt_lib0priv_is(___nl__im__437, ___get_global_string_const(551));
#line 906
c_rt_lib0clear(&___nl__im__437);
#line 906
___nl__bool__436 = !___nl__bool__436;
#line 906
if(___nl__bool__436){ goto label_1184;}
#line 907
c_rt_lib0move(&___nl__im__441, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(74)));
#line 907
c_rt_lib0move(&___nl__im__440, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__441));
#line 907
c_rt_lib0clear(&___nl__im__441);
#line 907
c_rt_lib0move(&___nl__im__442,___get_global_string_const(569));
#line 907
c_rt_lib0move(&___nl__im__439, c_rt_lib0concat_new(___nl__im__440, ___nl__im__442));
#line 907
c_rt_lib0clear(&___nl__im__440);
#line 907
c_rt_lib0clear(&___nl__im__442);
#line 907
c_rt_lib0move(&___nl__im__444, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(568)));
#line 907
c_rt_lib0move(&___nl__im__443, generator_c_priv0get_field_name(___nl__im__444));
#line 907
c_rt_lib0clear(&___nl__im__444);
#line 907
c_rt_lib0move(&___nl__im__425, c_rt_lib0concat_new(___nl__im__439, ___nl__im__443));
#line 907
c_rt_lib0clear(&___nl__im__439);
#line 907
c_rt_lib0clear(&___nl__im__443);
#line 908
goto label_1214;
#line 908
label_1184:
;
#line 908
c_rt_lib0move(&___nl__im__446, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(74)));
#line 908
c_rt_lib0move(&___nl__im__445, c_rt_lib0hash_get_value_dec(___nl__im__446, ___get_global_string_const(205)));
#line 908
c_rt_lib0clear(&___nl__im__446);
#line 908
___nl__bool__436 = c_rt_lib0priv_is(___nl__im__445, ___get_global_string_const(132));
#line 908
c_rt_lib0clear(&___nl__im__445);
#line 908
___nl__bool__436 = !___nl__bool__436;
#line 908
if(___nl__bool__436){ goto label_1210;}
#line 909
c_rt_lib0move(&___nl__im__447,___get_global_string_const(567));
#line 910
c_rt_lib0move(&___nl__im__450,___get_global_string_const(373));
#line 910
c_rt_lib0move(&___nl__im__452, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(74)));
#line 910
c_rt_lib0move(&___nl__im__451, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__452));
#line 910
c_rt_lib0clear(&___nl__im__452);
#line 910
c_rt_lib0move(&___nl__im__449, c_rt_lib0concat_new(___nl__im__450, ___nl__im__451));
#line 910
c_rt_lib0clear(&___nl__im__450);
#line 910
c_rt_lib0clear(&___nl__im__451);
#line 910
c_rt_lib0move(&___nl__im__454, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(568)));
#line 910
c_rt_lib0move(&___nl__im__453, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__454));
#line 910
c_rt_lib0clear(&___nl__im__454);
#line 910
c_rt_lib0move(&___nl__im__448, c_rt_lib0array_mk(2, ___nl__im__449, ___nl__im__453));
#line 910
c_rt_lib0clear(&___nl__im__449);
#line 910
c_rt_lib0clear(&___nl__im__453);
#line 910
c_rt_lib0move(&___nl__im__425, generator_c_priv0get_fun_lib(___nl__im__447, ___nl__im__448));
#line 910
c_rt_lib0clear(&___nl__im__447);
#line 910
c_rt_lib0clear(&___nl__im__448);
#line 911
goto label_1214;
#line 911
label_1210:
;
#line 912
c_rt_lib0move(&___nl__im__455, c_rt_lib0array_mk(0));
#line 912
nl_die_arg(___nl__im__455);
#line 913
goto label_1214;
#line 913
label_1214:
;
#line 913
//clear ___nl__bool__436;
#line 913
c_rt_lib0clear(&___nl__im__455);
#line 914
goto label_1218;
#line 914
label_1218:
;
#line 915
c_rt_lib0move(&___nl__im__457, c_rt_lib0hash_get_value_dec(___nl__im__423, ___get_global_string_const(223)));
#line 915
c_rt_lib0move(&___nl__im__456, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__457, ___nl__im__425));
#line 915
c_rt_lib0clear(&___nl__im__457);
#line 915
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__456));
#line 915
c_rt_lib0clear(&___nl__im__456);
#line 916
goto label_2023;
#line 916
label_1225:
;
#line 916
c_rt_lib0move(&___nl__im__459, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(244)));
#line 916
c_rt_lib0copy(&___nl__im__458, ___nl__im__459);
#line 917
c_rt_lib0move(&___nl__im__461,___get_global_string_const(570));
#line 918
c_rt_lib0move(&___nl__im__464, c_rt_lib0hash_get_value_dec(___nl__im__458, ___get_global_string_const(74)));
#line 918
c_rt_lib0move(&___nl__im__463, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__464));
#line 918
c_rt_lib0clear(&___nl__im__464);
#line 919
c_rt_lib0move(&___nl__im__466, c_rt_lib0hash_get_value_dec(___nl__im__458, ___get_global_string_const(568)));
#line 919
c_rt_lib0move(&___nl__im__465, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__466));
#line 919
c_rt_lib0clear(&___nl__im__466);
#line 920
c_rt_lib0move(&___nl__im__468, c_rt_lib0hash_get_value_dec(___nl__im__458, ___get_global_string_const(224)));
#line 920
c_rt_lib0move(&___nl__im__467, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__468));
#line 920
c_rt_lib0clear(&___nl__im__468);
#line 920
c_rt_lib0move(&___nl__im__462, c_rt_lib0array_mk(3, ___nl__im__463, ___nl__im__465, ___nl__im__467));
#line 920
c_rt_lib0clear(&___nl__im__463);
#line 920
c_rt_lib0clear(&___nl__im__465);
#line 920
c_rt_lib0clear(&___nl__im__467);
#line 920
c_rt_lib0move(&___nl__im__460, generator_c_priv0get_fun_lib(___nl__im__461, ___nl__im__462));
#line 920
c_rt_lib0clear(&___nl__im__461);
#line 920
c_rt_lib0clear(&___nl__im__462);
#line 920
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__460));
#line 920
c_rt_lib0clear(&___nl__im__460);
#line 922
goto label_2023;
#line 922
label_1248:
;
#line 922
c_rt_lib0move(&___nl__im__470, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(245)));
#line 922
c_rt_lib0copy(&___nl__im__469, ___nl__im__470);
#line 923
c_rt_lib0move(&___nl__im__473, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(74)));
#line 923
___nl__bool__471 = c_rt_lib0priv_is(___nl__im__473, ___get_global_string_const(350));
#line 923
c_rt_lib0clear(&___nl__im__473);
#line 923
___nl__bool__472 = !___nl__bool__471;
#line 923
if(___nl__bool__472){ goto label_1261;}
#line 923
c_rt_lib0move(&___nl__im__474, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(571)));
#line 923
c_rt_lib0move(&___nl__im__475,___get_global_string_const(180));
#line 923
___nl__bool__471 = c_rt_lib0eq(___nl__im__474, ___nl__im__475);
#line 923
c_rt_lib0clear(&___nl__im__474);
#line 923
c_rt_lib0clear(&___nl__im__475);
#line 923
label_1261:
;
#line 923
//clear ___nl__bool__472;
#line 923
___nl__bool__471 = !___nl__bool__471;
#line 923
if(___nl__bool__471){ goto label_1307;}
#line 924
c_rt_lib0move(&___nl__im__478, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 924
c_rt_lib0move(&___nl__im__477, c_rt_lib0hash_get_value_dec(___nl__im__478, ___get_global_string_const(205)));
#line 924
c_rt_lib0clear(&___nl__im__478);
#line 924
___nl__bool__476 = c_rt_lib0priv_is(___nl__im__477, ___get_global_string_const(132));
#line 924
c_rt_lib0clear(&___nl__im__477);
#line 924
___nl__bool__476 = !___nl__bool__476;
#line 924
if(___nl__bool__476){ goto label_1288;}
#line 925
c_rt_lib0move(&___nl__im__480, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 926
c_rt_lib0move(&___nl__im__482,___get_global_string_const(539));
#line 926
c_rt_lib0move(&___nl__im__485,___get_global_string_const(180));
#line 926
c_rt_lib0move(&___nl__im__484, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__485));
#line 926
c_rt_lib0clear(&___nl__im__485);
#line 926
c_rt_lib0move(&___nl__im__483, c_rt_lib0array_mk(1, ___nl__im__484));
#line 926
c_rt_lib0clear(&___nl__im__484);
#line 926
c_rt_lib0move(&___nl__im__481, generator_c_priv0get_fun_lib(___nl__im__482, ___nl__im__483));
#line 926
c_rt_lib0clear(&___nl__im__482);
#line 926
c_rt_lib0clear(&___nl__im__483);
#line 926
c_rt_lib0move(&___nl__im__479, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__480, ___nl__im__481));
#line 926
c_rt_lib0clear(&___nl__im__480);
#line 926
c_rt_lib0clear(&___nl__im__481);
#line 926
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__479));
#line 926
c_rt_lib0clear(&___nl__im__479);
#line 927
goto label_1304;
#line 927
label_1288:
;
#line 927
c_rt_lib0move(&___nl__im__487, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 927
c_rt_lib0move(&___nl__im__486, c_rt_lib0hash_get_value_dec(___nl__im__487, ___get_global_string_const(205)));
#line 927
c_rt_lib0clear(&___nl__im__487);
#line 927
___nl__bool__476 = c_rt_lib0priv_is(___nl__im__486, ___get_global_string_const(34));
#line 927
c_rt_lib0clear(&___nl__im__486);
#line 927
___nl__bool__476 = !___nl__bool__476;
#line 927
if(___nl__bool__476){ goto label_1304;}
#line 928
c_rt_lib0move(&___nl__im__489, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 928
c_rt_lib0move(&___nl__im__490,___get_global_string_const(572));
#line 928
c_rt_lib0move(&___nl__im__488, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__489, ___nl__im__490));
#line 928
c_rt_lib0clear(&___nl__im__489);
#line 928
c_rt_lib0clear(&___nl__im__490);
#line 928
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__488));
#line 928
c_rt_lib0clear(&___nl__im__488);
#line 929
goto label_1304;
#line 929
label_1304:
;
#line 929
//clear ___nl__bool__476;
#line 930
goto label_1538;
#line 930
label_1307:
;
#line 930
c_rt_lib0move(&___nl__im__492, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(74)));
#line 930
___nl__bool__471 = c_rt_lib0priv_is(___nl__im__492, ___get_global_string_const(350));
#line 930
c_rt_lib0clear(&___nl__im__492);
#line 930
___nl__bool__491 = !___nl__bool__471;
#line 930
if(___nl__bool__491){ goto label_1318;}
#line 930
c_rt_lib0move(&___nl__im__493, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(571)));
#line 930
c_rt_lib0move(&___nl__im__494,___get_global_string_const(181));
#line 930
___nl__bool__471 = c_rt_lib0eq(___nl__im__493, ___nl__im__494);
#line 930
c_rt_lib0clear(&___nl__im__493);
#line 930
c_rt_lib0clear(&___nl__im__494);
#line 930
label_1318:
;
#line 930
//clear ___nl__bool__491;
#line 930
___nl__bool__471 = !___nl__bool__471;
#line 930
if(___nl__bool__471){ goto label_1364;}
#line 931
c_rt_lib0move(&___nl__im__497, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 931
c_rt_lib0move(&___nl__im__496, c_rt_lib0hash_get_value_dec(___nl__im__497, ___get_global_string_const(205)));
#line 931
c_rt_lib0clear(&___nl__im__497);
#line 931
___nl__bool__495 = c_rt_lib0priv_is(___nl__im__496, ___get_global_string_const(132));
#line 931
c_rt_lib0clear(&___nl__im__496);
#line 931
___nl__bool__495 = !___nl__bool__495;
#line 931
if(___nl__bool__495){ goto label_1345;}
#line 932
c_rt_lib0move(&___nl__im__499, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 933
c_rt_lib0move(&___nl__im__501,___get_global_string_const(539));
#line 933
c_rt_lib0move(&___nl__im__504,___get_global_string_const(181));
#line 933
c_rt_lib0move(&___nl__im__503, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__504));
#line 933
c_rt_lib0clear(&___nl__im__504);
#line 933
c_rt_lib0move(&___nl__im__502, c_rt_lib0array_mk(1, ___nl__im__503));
#line 933
c_rt_lib0clear(&___nl__im__503);
#line 933
c_rt_lib0move(&___nl__im__500, generator_c_priv0get_fun_lib(___nl__im__501, ___nl__im__502));
#line 933
c_rt_lib0clear(&___nl__im__501);
#line 933
c_rt_lib0clear(&___nl__im__502);
#line 933
c_rt_lib0move(&___nl__im__498, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__499, ___nl__im__500));
#line 933
c_rt_lib0clear(&___nl__im__499);
#line 933
c_rt_lib0clear(&___nl__im__500);
#line 933
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__498));
#line 933
c_rt_lib0clear(&___nl__im__498);
#line 934
goto label_1361;
#line 934
label_1345:
;
#line 934
c_rt_lib0move(&___nl__im__506, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 934
c_rt_lib0move(&___nl__im__505, c_rt_lib0hash_get_value_dec(___nl__im__506, ___get_global_string_const(205)));
#line 934
c_rt_lib0clear(&___nl__im__506);
#line 934
___nl__bool__495 = c_rt_lib0priv_is(___nl__im__505, ___get_global_string_const(34));
#line 934
c_rt_lib0clear(&___nl__im__505);
#line 934
___nl__bool__495 = !___nl__bool__495;
#line 934
if(___nl__bool__495){ goto label_1361;}
#line 935
c_rt_lib0move(&___nl__im__508, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 935
c_rt_lib0move(&___nl__im__509,___get_global_string_const(573));
#line 935
c_rt_lib0move(&___nl__im__507, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__508, ___nl__im__509));
#line 935
c_rt_lib0clear(&___nl__im__508);
#line 935
c_rt_lib0clear(&___nl__im__509);
#line 935
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__507));
#line 935
c_rt_lib0clear(&___nl__im__507);
#line 936
goto label_1361;
#line 936
label_1361:
;
#line 936
//clear ___nl__bool__495;
#line 937
goto label_1538;
#line 937
label_1364:
;
#line 938
c_rt_lib0move(&___nl__im__512, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 938
c_rt_lib0move(&___nl__im__511, c_rt_lib0hash_get_value_dec(___nl__im__512, ___get_global_string_const(205)));
#line 938
c_rt_lib0clear(&___nl__im__512);
#line 938
___nl__bool__510 = c_rt_lib0priv_is(___nl__im__511, ___get_global_string_const(132));
#line 938
c_rt_lib0clear(&___nl__im__511);
#line 938
___nl__bool__510 = !___nl__bool__510;
#line 938
if(___nl__bool__510){ goto label_1413;}
#line 940
c_rt_lib0move(&___nl__im__514, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(74)));
#line 940
___nl__bool__515 = c_rt_lib0priv_is(___nl__im__514, ___get_global_string_const(277));
#line 940
if(___nl__bool__515){ goto label_1380;}
#line 942
___nl__bool__515 = c_rt_lib0priv_is(___nl__im__514, ___get_global_string_const(350));
#line 942
if(___nl__bool__515){ goto label_1395;}
#line 942
c_rt_lib0move(&___nl__im__516,___get_global_string_const(16));
#line 942
c_rt_lib0move(&___nl__im__516, c_rt_lib0array_mk(2, ___nl__im__516, ___nl__im__514));
#line 942
nl_die_arg(___nl__im__516);
#line 940
label_1380:
;
#line 940
c_rt_lib0move(&___nl__im__518, c_rt_lib0priv_as(___nl__im__514, ___get_global_string_const(277)));
#line 940
c_rt_lib0copy(&___nl__im__517, ___nl__im__518);
#line 941
c_rt_lib0move(&___nl__im__519,___get_global_string_const(574));
#line 941
c_rt_lib0move(&___nl__im__522, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(571)));
#line 941
c_rt_lib0move(&___nl__im__521, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__522));
#line 941
c_rt_lib0clear(&___nl__im__522);
#line 941
c_rt_lib0move(&___nl__im__523, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__517));
#line 941
c_rt_lib0move(&___nl__im__520, c_rt_lib0array_mk(2, ___nl__im__521, ___nl__im__523));
#line 941
c_rt_lib0clear(&___nl__im__521);
#line 941
c_rt_lib0clear(&___nl__im__523);
#line 941
c_rt_lib0move(&___nl__im__513, generator_c_priv0get_fun_lib(___nl__im__519, ___nl__im__520));
#line 941
c_rt_lib0clear(&___nl__im__519);
#line 941
c_rt_lib0clear(&___nl__im__520);
#line 942
goto label_1406;
#line 942
label_1395:
;
#line 943
c_rt_lib0move(&___nl__im__524,___get_global_string_const(539));
#line 943
c_rt_lib0move(&___nl__im__527, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(571)));
#line 943
c_rt_lib0move(&___nl__im__526, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__527));
#line 943
c_rt_lib0clear(&___nl__im__527);
#line 943
c_rt_lib0move(&___nl__im__525, c_rt_lib0array_mk(1, ___nl__im__526));
#line 943
c_rt_lib0clear(&___nl__im__526);
#line 943
c_rt_lib0move(&___nl__im__513, generator_c_priv0get_fun_lib(___nl__im__524, ___nl__im__525));
#line 943
c_rt_lib0clear(&___nl__im__524);
#line 943
c_rt_lib0clear(&___nl__im__525);
#line 944
goto label_1406;
#line 944
label_1406:
;
#line 945
c_rt_lib0move(&___nl__im__529, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 945
c_rt_lib0move(&___nl__im__528, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__529, ___nl__im__513));
#line 945
c_rt_lib0clear(&___nl__im__529);
#line 945
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__528));
#line 945
c_rt_lib0clear(&___nl__im__528);
#line 946
goto label_1520;
#line 946
label_1413:
;
#line 946
c_rt_lib0move(&___nl__im__531, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 946
c_rt_lib0move(&___nl__im__530, c_rt_lib0hash_get_value_dec(___nl__im__531, ___get_global_string_const(205)));
#line 946
c_rt_lib0clear(&___nl__im__531);
#line 946
___nl__bool__510 = c_rt_lib0priv_is(___nl__im__530, ___get_global_string_const(554));
#line 946
c_rt_lib0clear(&___nl__im__530);
#line 946
___nl__bool__510 = !___nl__bool__510;
#line 946
if(___nl__bool__510){ goto label_1520;}
#line 947
c_rt_lib0move(&___nl__im__535, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 947
c_rt_lib0move(&___nl__im__534, c_rt_lib0hash_get_value_dec(___nl__im__535, ___get_global_string_const(205)));
#line 947
c_rt_lib0clear(&___nl__im__535);
#line 947
c_rt_lib0move(&___nl__im__537, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 947
c_rt_lib0move(&___nl__im__536, c_rt_lib0hash_get_value_dec(___nl__im__537, ___get_global_string_const(205)));
#line 947
c_rt_lib0clear(&___nl__im__537);
#line 947
c_rt_lib0move(&___nl__im__533, c_rt_lib0priv_as(___nl__im__536, ___get_global_string_const(554)));
#line 947
c_rt_lib0clear(&___nl__im__534);
#line 947
c_rt_lib0clear(&___nl__im__536);
#line 947
c_rt_lib0move(&___nl__im__532, generator_c_priv0get_type_name(___nl__im__533));
#line 947
c_rt_lib0clear(&___nl__im__533);
#line 948
c_rt_lib0move(&___nl__im__541, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 948
c_rt_lib0move(&___nl__im__540, c_rt_lib0hash_get_value_dec(___nl__im__541, ___get_global_string_const(205)));
#line 948
c_rt_lib0clear(&___nl__im__541);
#line 948
c_rt_lib0move(&___nl__im__543, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 948
c_rt_lib0move(&___nl__im__542, c_rt_lib0hash_get_value_dec(___nl__im__543, ___get_global_string_const(205)));
#line 948
c_rt_lib0clear(&___nl__im__543);
#line 948
c_rt_lib0move(&___nl__im__539, c_rt_lib0priv_as(___nl__im__542, ___get_global_string_const(554)));
#line 948
c_rt_lib0clear(&___nl__im__540);
#line 948
c_rt_lib0clear(&___nl__im__542);
#line 948
___nl__bool__538 = generator_c_priv0is_anon(___nl__im__539);
#line 948
c_rt_lib0clear(&___nl__im__539);
#line 951
c_rt_lib0move(&___nl__im__546, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(74)));
#line 951
___nl__bool__547 = c_rt_lib0priv_is(___nl__im__546, ___get_global_string_const(277));
#line 951
if(___nl__bool__547){ goto label_1451;}
#line 954
___nl__bool__547 = c_rt_lib0priv_is(___nl__im__546, ___get_global_string_const(350));
#line 954
if(___nl__bool__547){ goto label_1467;}
#line 954
c_rt_lib0move(&___nl__im__548,___get_global_string_const(16));
#line 954
c_rt_lib0move(&___nl__im__548, c_rt_lib0array_mk(2, ___nl__im__548, ___nl__im__546));
#line 954
nl_die_arg(___nl__im__548);
#line 951
label_1451:
;
#line 951
c_rt_lib0move(&___nl__im__550, c_rt_lib0priv_as(___nl__im__546, ___get_global_string_const(277)));
#line 951
c_rt_lib0copy(&___nl__im__549, ___nl__im__550);
#line 952
c_rt_lib0move(&___nl__im__544, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__549));
#line 953
c_rt_lib0move(&___nl__im__552,___get_global_string_const(575));
#line 953
c_rt_lib0move(&___nl__im__554, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(576)));
#line 953
c_rt_lib0move(&___nl__im__553, generator_c_priv0get_type_name(___nl__im__554));
#line 953
c_rt_lib0clear(&___nl__im__554);
#line 953
c_rt_lib0move(&___nl__im__551, c_rt_lib0concat_new(___nl__im__552, ___nl__im__553));
#line 953
c_rt_lib0clear(&___nl__im__552);
#line 953
c_rt_lib0clear(&___nl__im__553);
#line 953
c_rt_lib0move(&___nl__im__555,___get_global_string_const(320));
#line 953
c_rt_lib0move(&___nl__im__545, c_rt_lib0concat_new(___nl__im__551, ___nl__im__555));
#line 953
c_rt_lib0clear(&___nl__im__551);
#line 953
c_rt_lib0clear(&___nl__im__555);
#line 954
goto label_1471;
#line 954
label_1467:
;
#line 955
c_rt_lib0move(&___nl__im__544,___get_global_string_const(577));
#line 956
c_rt_lib0move(&___nl__im__545,___get_global_string_const(21));
#line 957
goto label_1471;
#line 957
label_1471:
;
#line 958
___nl__im_ptr__567 = &((*___ref___rec__0).mod_name0field);
#line 958
c_rt_lib0copy(&___nl__im__566, (*___nl__im_ptr__567));
#line 958
___nl__im_ptr__567 = NULL;
#line 958
c_rt_lib0move(&___nl__im__565, generator_c_priv0get_variant_make_fun_name(___nl__im__532, ___nl__im__566, ___nl__bool__538));
#line 958
c_rt_lib0clear(&___nl__im__566);
#line 958
c_rt_lib0move(&___nl__im__568,___get_global_string_const(455));
#line 958
c_rt_lib0move(&___nl__im__564, c_rt_lib0concat_new(___nl__im__565, ___nl__im__568));
#line 958
c_rt_lib0clear(&___nl__im__565);
#line 958
c_rt_lib0clear(&___nl__im__568);
#line 959
c_rt_lib0move(&___nl__im__570, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(223)));
#line 959
c_rt_lib0move(&___nl__im__569, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__570));
#line 959
c_rt_lib0clear(&___nl__im__570);
#line 959
c_rt_lib0move(&___nl__im__563, c_rt_lib0concat_new(___nl__im__564, ___nl__im__569));
#line 959
c_rt_lib0clear(&___nl__im__564);
#line 959
c_rt_lib0clear(&___nl__im__569);
#line 959
c_rt_lib0move(&___nl__im__571,___get_global_string_const(326));
#line 959
c_rt_lib0move(&___nl__im__562, c_rt_lib0concat_new(___nl__im__563, ___nl__im__571));
#line 959
c_rt_lib0clear(&___nl__im__563);
#line 959
c_rt_lib0clear(&___nl__im__571);
#line 959
c_rt_lib0move(&___nl__im__574, c_rt_lib0hash_get_value_dec(___nl__im__469, ___get_global_string_const(558)));
#line 959
___nl__int__573 = getIntFromImm(___nl__im__574);
#line 959
c_rt_lib0clear(&___nl__im__574);
#line 959
c_rt_lib0move(&___nl__im__575, c_rt_lib0int_new(___nl__int__573));
#line 959
c_rt_lib0move(&___nl__im__572, ptd0int_to_string(___nl__im__575));
#line 959
//clear ___nl__int__573;
#line 959
c_rt_lib0clear(&___nl__im__575);
#line 959
c_rt_lib0move(&___nl__im__561, c_rt_lib0concat_new(___nl__im__562, ___nl__im__572));
#line 959
c_rt_lib0clear(&___nl__im__562);
#line 959
c_rt_lib0clear(&___nl__im__572);
#line 959
c_rt_lib0move(&___nl__im__576,___get_global_string_const(326));
#line 959
c_rt_lib0move(&___nl__im__560, c_rt_lib0concat_new(___nl__im__561, ___nl__im__576));
#line 959
c_rt_lib0clear(&___nl__im__561);
#line 959
c_rt_lib0clear(&___nl__im__576);
#line 959
c_rt_lib0move(&___nl__im__559, c_rt_lib0concat_new(___nl__im__560, ___nl__im__544));
#line 959
c_rt_lib0clear(&___nl__im__560);
#line 960
c_rt_lib0move(&___nl__im__577,___get_global_string_const(326));
#line 960
c_rt_lib0move(&___nl__im__558, c_rt_lib0concat_new(___nl__im__559, ___nl__im__577));
#line 960
c_rt_lib0clear(&___nl__im__559);
#line 960
c_rt_lib0clear(&___nl__im__577);
#line 960
c_rt_lib0move(&___nl__im__557, c_rt_lib0concat_new(___nl__im__558, ___nl__im__545));
#line 960
c_rt_lib0clear(&___nl__im__558);
#line 960
c_rt_lib0move(&___nl__im__578,___get_global_string_const(320));
#line 960
c_rt_lib0move(&___nl__im__556, c_rt_lib0concat_new(___nl__im__557, ___nl__im__578));
#line 960
c_rt_lib0clear(&___nl__im__557);
#line 960
c_rt_lib0clear(&___nl__im__578);
#line 960
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__556));
#line 960
c_rt_lib0clear(&___nl__im__556);
#line 961
goto label_1520;
#line 961
label_1520:
;
#line 961
//clear ___nl__bool__510;
#line 961
c_rt_lib0clear(&___nl__im__513);
#line 961
c_rt_lib0clear(&___nl__im__514);
#line 961
//clear ___nl__bool__515;
#line 961
c_rt_lib0clear(&___nl__im__516);
#line 961
c_rt_lib0clear(&___nl__im__517);
#line 961
c_rt_lib0clear(&___nl__im__518);
#line 961
c_rt_lib0clear(&___nl__im__532);
#line 961
//clear ___nl__bool__538;
#line 961
c_rt_lib0clear(&___nl__im__544);
#line 961
c_rt_lib0clear(&___nl__im__545);
#line 961
c_rt_lib0clear(&___nl__im__546);
#line 961
//clear ___nl__bool__547;
#line 961
c_rt_lib0clear(&___nl__im__548);
#line 961
c_rt_lib0clear(&___nl__im__549);
#line 961
c_rt_lib0clear(&___nl__im__550);
#line 962
goto label_1538;
#line 962
label_1538:
;
#line 962
//clear ___nl__bool__471;
#line 963
goto label_2023;
#line 963
label_1541:
;
#line 963
c_rt_lib0move(&___nl__im__580, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(248)));
#line 963
___nl__int__579 = getIntFromImm(___nl__im__580);
#line 964
c_rt_lib0move(&___nl__im__586,___get_global_string_const(578));
#line 964
c_rt_lib0move(&___nl__im__588, c_rt_lib0int_new(___nl__int__579));
#line 964
c_rt_lib0move(&___nl__im__587, ptd0int_to_string(___nl__im__588));
#line 964
c_rt_lib0clear(&___nl__im__588);
#line 964
c_rt_lib0move(&___nl__im__585, c_rt_lib0concat_new(___nl__im__586, ___nl__im__587));
#line 964
c_rt_lib0clear(&___nl__im__586);
#line 964
c_rt_lib0clear(&___nl__im__587);
#line 964
c_rt_lib0move(&___nl__im__589,___get_global_string_const(522));
#line 964
c_rt_lib0move(&___nl__im__584, c_rt_lib0concat_new(___nl__im__585, ___nl__im__589));
#line 964
c_rt_lib0clear(&___nl__im__585);
#line 964
c_rt_lib0clear(&___nl__im__589);
#line 964
c_rt_lib0move(&___nl__im__590, string0lf());
#line 964
c_rt_lib0move(&___nl__im__583, c_rt_lib0concat_new(___nl__im__584, ___nl__im__590));
#line 964
c_rt_lib0clear(&___nl__im__584);
#line 964
c_rt_lib0clear(&___nl__im__590);
#line 964
c_rt_lib0move(&___nl__im__591,___get_global_string_const(440));
#line 964
c_rt_lib0move(&___nl__im__582, c_rt_lib0concat_new(___nl__im__583, ___nl__im__591));
#line 964
c_rt_lib0clear(&___nl__im__583);
#line 964
c_rt_lib0clear(&___nl__im__591);
#line 964
c_rt_lib0move(&___nl__im__592, string0lf());
#line 964
c_rt_lib0move(&___nl__im__581, c_rt_lib0concat_new(___nl__im__582, ___nl__im__592));
#line 964
c_rt_lib0clear(&___nl__im__582);
#line 964
c_rt_lib0clear(&___nl__im__592);
#line 964
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__581));
#line 964
c_rt_lib0clear(&___nl__im__581);
#line 965
c_rt_lib0clear(&___nl__im__1);
#line 965
c_rt_lib0clear(&___nl__im__2);
#line 965
//clear ___nl__bool__14;
#line 965
c_rt_lib0clear(&___nl__im__15);
#line 965
//clear ___nl__bool__16;
#line 965
c_rt_lib0clear(&___nl__im__17);
#line 965
c_rt_lib0clear(&___nl__im__18);
#line 965
c_rt_lib0clear(&___nl__im__19);
#line 965
c_rt_lib0clear(&___nl__im__72);
#line 965
c_rt_lib0clear(&___nl__im__73);
#line 965
c_rt_lib0clear(&___nl__im__116);
#line 965
c_rt_lib0clear(&___nl__im__117);
#line 965
c_rt_lib0clear(&___nl__im__118);
#line 965
c_rt_lib0clear(&___nl__im__123);
#line 965
c_rt_lib0clear(&___nl__im__124);
#line 965
c_rt_lib0clear(&___nl__im__125);
#line 965
c_rt_lib0clear(&___nl__im__126);
#line 965
c_rt_lib0clear(&___nl__im__127);
#line 965
c_rt_lib0clear(&___nl__im__130);
#line 965
c_rt_lib0clear(&___nl__im__148);
#line 965
c_rt_lib0clear(&___nl__im__149);
#line 965
c_rt_lib0clear(&___nl__im__150);
#line 965
c_rt_lib0clear(&___nl__im__151);
#line 965
c_rt_lib0clear(&___nl__im__185);
#line 965
c_rt_lib0clear(&___nl__im__186);
#line 965
c_rt_lib0clear(&___nl__im__229);
#line 965
c_rt_lib0clear(&___nl__im__230);
#line 965
//clear ___nl__bool__231;
#line 965
c_rt_lib0clear(&___nl__im__232);
#line 965
c_rt_lib0clear(&___nl__im__233);
#line 965
c_rt_lib0clear(&___nl__im__234);
#line 965
c_rt_lib0clear(&___nl__im__241);
#line 965
c_rt_lib0clear(&___nl__im__242);
#line 965
c_rt_lib0clear(&___nl__im__248);
#line 965
c_rt_lib0clear(&___nl__im__249);
#line 965
c_rt_lib0clear(&___nl__im__252);
#line 965
c_rt_lib0clear(&___nl__im__253);
#line 965
c_rt_lib0clear(&___nl__im__257);
#line 965
//clear ___nl__bool__259;
#line 965
c_rt_lib0clear(&___nl__im__260);
#line 965
c_rt_lib0clear(&___nl__im__294);
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
c_rt_lib0clear(&___nl__im__317);
#line 965
c_rt_lib0clear(&___nl__im__318);
#line 965
c_rt_lib0clear(&___nl__im__328);
#line 965
c_rt_lib0clear(&___nl__im__329);
#line 965
c_rt_lib0clear(&___nl__im__370);
#line 965
c_rt_lib0clear(&___nl__im__371);
#line 965
c_rt_lib0clear(&___nl__im__372);
#line 965
c_rt_lib0clear(&___nl__im__423);
#line 965
c_rt_lib0clear(&___nl__im__424);
#line 965
c_rt_lib0clear(&___nl__im__425);
#line 965
c_rt_lib0clear(&___nl__im__426);
#line 965
//clear ___nl__bool__428;
#line 965
c_rt_lib0clear(&___nl__im__429);
#line 965
c_rt_lib0clear(&___nl__im__458);
#line 965
c_rt_lib0clear(&___nl__im__459);
#line 965
c_rt_lib0clear(&___nl__im__469);
#line 965
c_rt_lib0clear(&___nl__im__470);
#line 965
//clear ___nl__int__579;
#line 965
c_rt_lib0clear(&___nl__im__580);
#line 965
return NULL;
#line 966
goto label_2023;
#line 966
label_1645:
;
#line 966
c_rt_lib0move(&___nl__im__594, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(249)));
#line 966
c_rt_lib0copy(&___nl__im__593, ___nl__im__594);
#line 967
c_rt_lib0move(&___nl__im__595,___get_global_string_const(579));
#line 967
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__595));
#line 967
c_rt_lib0clear(&___nl__im__595);
#line 968
c_rt_lib0move(&___nl__im__597, c_rt_lib0hash_get_value_dec(___nl__im__593, ___get_global_string_const(74)));
#line 968
c_rt_lib0move(&___nl__im__596, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__597));
#line 968
c_rt_lib0clear(&___nl__im__597);
#line 968
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__596));
#line 968
c_rt_lib0clear(&___nl__im__596);
#line 969
c_rt_lib0move(&___nl__im__601,___get_global_string_const(580));
#line 969
c_rt_lib0move(&___nl__im__604, c_rt_lib0hash_get_value_dec(___nl__im__593, ___get_global_string_const(223)));
#line 969
___nl__int__603 = getIntFromImm(___nl__im__604);
#line 969
c_rt_lib0clear(&___nl__im__604);
#line 969
c_rt_lib0move(&___nl__im__605, c_rt_lib0int_new(___nl__int__603));
#line 969
c_rt_lib0move(&___nl__im__602, ptd0int_to_string(___nl__im__605));
#line 969
//clear ___nl__int__603;
#line 969
c_rt_lib0clear(&___nl__im__605);
#line 969
c_rt_lib0move(&___nl__im__600, c_rt_lib0concat_new(___nl__im__601, ___nl__im__602));
#line 969
c_rt_lib0clear(&___nl__im__601);
#line 969
c_rt_lib0clear(&___nl__im__602);
#line 969
c_rt_lib0move(&___nl__im__606,___get_global_string_const(581));
#line 969
c_rt_lib0move(&___nl__im__599, c_rt_lib0concat_new(___nl__im__600, ___nl__im__606));
#line 969
c_rt_lib0clear(&___nl__im__600);
#line 969
c_rt_lib0clear(&___nl__im__606);
#line 969
c_rt_lib0move(&___nl__im__607, string0lf());
#line 969
c_rt_lib0move(&___nl__im__598, c_rt_lib0concat_new(___nl__im__599, ___nl__im__607));
#line 969
c_rt_lib0clear(&___nl__im__599);
#line 969
c_rt_lib0clear(&___nl__im__607);
#line 969
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__598));
#line 969
c_rt_lib0clear(&___nl__im__598);
#line 970
c_rt_lib0clear(&___nl__im__1);
#line 970
c_rt_lib0clear(&___nl__im__2);
#line 970
//clear ___nl__bool__14;
#line 970
c_rt_lib0clear(&___nl__im__15);
#line 970
//clear ___nl__bool__16;
#line 970
c_rt_lib0clear(&___nl__im__17);
#line 970
c_rt_lib0clear(&___nl__im__18);
#line 970
c_rt_lib0clear(&___nl__im__19);
#line 970
c_rt_lib0clear(&___nl__im__72);
#line 970
c_rt_lib0clear(&___nl__im__73);
#line 970
c_rt_lib0clear(&___nl__im__116);
#line 970
c_rt_lib0clear(&___nl__im__117);
#line 970
c_rt_lib0clear(&___nl__im__118);
#line 970
c_rt_lib0clear(&___nl__im__123);
#line 970
c_rt_lib0clear(&___nl__im__124);
#line 970
c_rt_lib0clear(&___nl__im__125);
#line 970
c_rt_lib0clear(&___nl__im__126);
#line 970
c_rt_lib0clear(&___nl__im__127);
#line 970
c_rt_lib0clear(&___nl__im__130);
#line 970
c_rt_lib0clear(&___nl__im__148);
#line 970
c_rt_lib0clear(&___nl__im__149);
#line 970
c_rt_lib0clear(&___nl__im__150);
#line 970
c_rt_lib0clear(&___nl__im__151);
#line 970
c_rt_lib0clear(&___nl__im__185);
#line 970
c_rt_lib0clear(&___nl__im__186);
#line 970
c_rt_lib0clear(&___nl__im__229);
#line 970
c_rt_lib0clear(&___nl__im__230);
#line 970
//clear ___nl__bool__231;
#line 970
c_rt_lib0clear(&___nl__im__232);
#line 970
c_rt_lib0clear(&___nl__im__233);
#line 970
c_rt_lib0clear(&___nl__im__234);
#line 970
c_rt_lib0clear(&___nl__im__241);
#line 970
c_rt_lib0clear(&___nl__im__242);
#line 970
c_rt_lib0clear(&___nl__im__248);
#line 970
c_rt_lib0clear(&___nl__im__249);
#line 970
c_rt_lib0clear(&___nl__im__252);
#line 970
c_rt_lib0clear(&___nl__im__253);
#line 970
c_rt_lib0clear(&___nl__im__257);
#line 970
//clear ___nl__bool__259;
#line 970
c_rt_lib0clear(&___nl__im__260);
#line 970
c_rt_lib0clear(&___nl__im__294);
#line 970
c_rt_lib0clear(&___nl__im__295);
#line 970
c_rt_lib0clear(&___nl__im__296);
#line 970
c_rt_lib0clear(&___nl__im__297);
#line 970
c_rt_lib0clear(&___nl__im__298);
#line 970
c_rt_lib0clear(&___nl__im__299);
#line 970
c_rt_lib0clear(&___nl__im__300);
#line 970
c_rt_lib0clear(&___nl__im__301);
#line 970
c_rt_lib0clear(&___nl__im__302);
#line 970
c_rt_lib0clear(&___nl__im__303);
#line 970
c_rt_lib0clear(&___nl__im__304);
#line 970
c_rt_lib0clear(&___nl__im__305);
#line 970
c_rt_lib0clear(&___nl__im__306);
#line 970
c_rt_lib0clear(&___nl__im__307);
#line 970
c_rt_lib0clear(&___nl__im__308);
#line 970
c_rt_lib0clear(&___nl__im__317);
#line 970
c_rt_lib0clear(&___nl__im__318);
#line 970
c_rt_lib0clear(&___nl__im__328);
#line 970
c_rt_lib0clear(&___nl__im__329);
#line 970
c_rt_lib0clear(&___nl__im__370);
#line 970
c_rt_lib0clear(&___nl__im__371);
#line 970
c_rt_lib0clear(&___nl__im__372);
#line 970
c_rt_lib0clear(&___nl__im__423);
#line 970
c_rt_lib0clear(&___nl__im__424);
#line 970
c_rt_lib0clear(&___nl__im__425);
#line 970
c_rt_lib0clear(&___nl__im__426);
#line 970
//clear ___nl__bool__428;
#line 970
c_rt_lib0clear(&___nl__im__429);
#line 970
c_rt_lib0clear(&___nl__im__458);
#line 970
c_rt_lib0clear(&___nl__im__459);
#line 970
c_rt_lib0clear(&___nl__im__469);
#line 970
c_rt_lib0clear(&___nl__im__470);
#line 970
//clear ___nl__int__579;
#line 970
c_rt_lib0clear(&___nl__im__580);
#line 970
c_rt_lib0clear(&___nl__im__593);
#line 970
c_rt_lib0clear(&___nl__im__594);
#line 970
return NULL;
#line 971
goto label_2023;
#line 971
label_1755:
;
#line 971
c_rt_lib0move(&___nl__im__609, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(250)));
#line 971
___nl__int__608 = getIntFromImm(___nl__im__609);
#line 972
c_rt_lib0move(&___nl__im__611,___get_global_string_const(582));
#line 972
c_rt_lib0move(&___nl__im__613, c_rt_lib0int_new(___nl__int__608));
#line 972
c_rt_lib0move(&___nl__im__612, ptd0int_to_string(___nl__im__613));
#line 972
c_rt_lib0clear(&___nl__im__613);
#line 972
c_rt_lib0move(&___nl__im__610, c_rt_lib0concat_new(___nl__im__611, ___nl__im__612));
#line 972
c_rt_lib0clear(&___nl__im__611);
#line 972
c_rt_lib0clear(&___nl__im__612);
#line 972
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__610));
#line 972
c_rt_lib0clear(&___nl__im__610);
#line 973
goto label_2023;
#line 973
label_1768:
;
#line 973
c_rt_lib0move(&___nl__im__615, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(251)));
#line 973
c_rt_lib0copy(&___nl__im__614, ___nl__im__615);
#line 974
c_rt_lib0move(&___nl__im__616, c_rt_lib0hash_get_value_dec(___nl__im__614, ___get_global_string_const(205)));
#line 974
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(132));
#line 974
if(___nl__bool__617){ goto label_1791;}
#line 976
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(403));
#line 976
if(___nl__bool__617){ goto label_1802;}
#line 978
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(34));
#line 978
if(___nl__bool__617){ goto label_1811;}
#line 980
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(404));
#line 980
if(___nl__bool__617){ goto label_1820;}
#line 982
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(551));
#line 982
if(___nl__bool__617){ goto label_1831;}
#line 984
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(128));
#line 984
if(___nl__bool__617){ goto label_1844;}
#line 986
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(554));
#line 986
if(___nl__bool__617){ goto label_1861;}
#line 988
___nl__bool__617 = c_rt_lib0priv_is(___nl__im__616, ___get_global_string_const(129));
#line 988
if(___nl__bool__617){ goto label_1874;}
#line 988
c_rt_lib0move(&___nl__im__618,___get_global_string_const(16));
#line 988
c_rt_lib0move(&___nl__im__618, c_rt_lib0array_mk(2, ___nl__im__618, ___nl__im__616));
#line 988
nl_die_arg(___nl__im__618);
#line 974
label_1791:
;
#line 975
c_rt_lib0move(&___nl__im__620,___get_global_string_const(251));
#line 975
c_rt_lib0move(&___nl__im__622, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__614));
#line 975
c_rt_lib0move(&___nl__im__621, c_rt_lib0array_mk(1, ___nl__im__622));
#line 975
c_rt_lib0clear(&___nl__im__622);
#line 975
c_rt_lib0move(&___nl__im__619, generator_c_priv0get_fun_lib(___nl__im__620, ___nl__im__621));
#line 975
c_rt_lib0clear(&___nl__im__620);
#line 975
c_rt_lib0clear(&___nl__im__621);
#line 975
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__619));
#line 975
c_rt_lib0clear(&___nl__im__619);
#line 976
goto label_1887;
#line 976
label_1802:
;
#line 977
c_rt_lib0move(&___nl__im__624,___get_global_string_const(583));
#line 977
c_rt_lib0move(&___nl__im__625, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__614));
#line 977
c_rt_lib0move(&___nl__im__623, c_rt_lib0concat_new(___nl__im__624, ___nl__im__625));
#line 977
c_rt_lib0clear(&___nl__im__624);
#line 977
c_rt_lib0clear(&___nl__im__625);
#line 977
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__623));
#line 977
c_rt_lib0clear(&___nl__im__623);
#line 978
goto label_1887;
#line 978
label_1811:
;
#line 979
c_rt_lib0move(&___nl__im__627,___get_global_string_const(583));
#line 979
c_rt_lib0move(&___nl__im__628, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__614));
#line 979
c_rt_lib0move(&___nl__im__626, c_rt_lib0concat_new(___nl__im__627, ___nl__im__628));
#line 979
c_rt_lib0clear(&___nl__im__627);
#line 979
c_rt_lib0clear(&___nl__im__628);
#line 979
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__626));
#line 979
c_rt_lib0clear(&___nl__im__626);
#line 980
goto label_1887;
#line 980
label_1820:
;
#line 981
c_rt_lib0move(&___nl__im__630,___get_global_string_const(251));
#line 981
c_rt_lib0move(&___nl__im__632, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__614));
#line 981
c_rt_lib0move(&___nl__im__631, c_rt_lib0array_mk(1, ___nl__im__632));
#line 981
c_rt_lib0clear(&___nl__im__632);
#line 981
c_rt_lib0move(&___nl__im__629, generator_c_priv0get_fun_lib(___nl__im__630, ___nl__im__631));
#line 981
c_rt_lib0clear(&___nl__im__630);
#line 981
c_rt_lib0clear(&___nl__im__631);
#line 981
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__629));
#line 981
c_rt_lib0clear(&___nl__im__629);
#line 982
goto label_1887;
#line 982
label_1831:
;
#line 982
c_rt_lib0move(&___nl__im__634, c_rt_lib0priv_as(___nl__im__616, ___get_global_string_const(551)));
#line 982
c_rt_lib0copy(&___nl__im__633, ___nl__im__634);
#line 983
___nl__im_ptr__637 = &((*___ref___rec__0).mod_name0field);
#line 983
c_rt_lib0copy(&___nl__im__636, (*___nl__im_ptr__637));
#line 983
___nl__im_ptr__637 = NULL;
#line 983
c_rt_lib0move(&___nl__im__638, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__614));
#line 983
c_rt_lib0move(&___nl__im__635, generator_c_priv0get_clean_fun_call(___nl__im__633, ___nl__im__636, ___nl__im__638, ___nl__im__2));
#line 983
c_rt_lib0clear(&___nl__im__636);
#line 983
c_rt_lib0clear(&___nl__im__638);
#line 983
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__635));
#line 983
c_rt_lib0clear(&___nl__im__635);
#line 984
goto label_1887;
#line 984
label_1844:
;
#line 984
c_rt_lib0move(&___nl__im__640, c_rt_lib0priv_as(___nl__im__616, ___get_global_string_const(128)));
#line 984
c_rt_lib0copy(&___nl__im__639, ___nl__im__640);
#line 985
c_rt_lib0move(&___nl__im__642, string0lf());
#line 985
___nl__im_ptr__645 = &((*___ref___rec__0).mod_name0field);
#line 985
c_rt_lib0copy(&___nl__im__644, (*___nl__im_ptr__645));
#line 985
___nl__im_ptr__645 = NULL;
#line 985
c_rt_lib0move(&___nl__im__646, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__614));
#line 985
c_rt_lib0move(&___nl__im__643, generator_c_priv0get_clean_fun_call(___nl__im__639, ___nl__im__644, ___nl__im__646, ___nl__im__2));
#line 985
c_rt_lib0clear(&___nl__im__644);
#line 985
c_rt_lib0clear(&___nl__im__646);
#line 985
c_rt_lib0move(&___nl__im__641, c_rt_lib0concat_new(___nl__im__642, ___nl__im__643));
#line 985
c_rt_lib0clear(&___nl__im__642);
#line 985
c_rt_lib0clear(&___nl__im__643);
#line 985
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__641));
#line 985
c_rt_lib0clear(&___nl__im__641);
#line 986
goto label_1887;
#line 986
label_1861:
;
#line 986
c_rt_lib0move(&___nl__im__648, c_rt_lib0priv_as(___nl__im__616, ___get_global_string_const(554)));
#line 986
c_rt_lib0copy(&___nl__im__647, ___nl__im__648);
#line 987
___nl__im_ptr__651 = &((*___ref___rec__0).mod_name0field);
#line 987
c_rt_lib0copy(&___nl__im__650, (*___nl__im_ptr__651));
#line 987
___nl__im_ptr__651 = NULL;
#line 987
c_rt_lib0move(&___nl__im__652, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__614));
#line 987
c_rt_lib0move(&___nl__im__649, generator_c_priv0get_clean_fun_call(___nl__im__647, ___nl__im__650, ___nl__im__652, ___nl__im__2));
#line 987
c_rt_lib0clear(&___nl__im__650);
#line 987
c_rt_lib0clear(&___nl__im__652);
#line 987
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__649));
#line 987
c_rt_lib0clear(&___nl__im__649);
#line 988
goto label_1887;
#line 988
label_1874:
;
#line 988
c_rt_lib0move(&___nl__im__654, c_rt_lib0priv_as(___nl__im__616, ___get_global_string_const(129)));
#line 988
c_rt_lib0copy(&___nl__im__653, ___nl__im__654);
#line 989
___nl__im_ptr__657 = &((*___ref___rec__0).mod_name0field);
#line 989
c_rt_lib0copy(&___nl__im__656, (*___nl__im_ptr__657));
#line 989
___nl__im_ptr__657 = NULL;
#line 989
c_rt_lib0move(&___nl__im__658, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__614));
#line 989
c_rt_lib0move(&___nl__im__655, generator_c_priv0get_clean_fun_call(___nl__im__653, ___nl__im__656, ___nl__im__658, ___nl__im__2));
#line 989
c_rt_lib0clear(&___nl__im__656);
#line 989
c_rt_lib0clear(&___nl__im__658);
#line 989
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__655));
#line 989
c_rt_lib0clear(&___nl__im__655);
#line 990
goto label_1887;
#line 990
label_1887:
;
#line 991
goto label_2023;
#line 991
label_1889:
;
#line 991
c_rt_lib0move(&___nl__im__660, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(252)));
#line 991
c_rt_lib0copy(&___nl__im__659, ___nl__im__660);
#line 992
goto label_2023;
#line 992
label_1893:
;
#line 992
c_rt_lib0move(&___nl__im__662, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(253)));
#line 992
c_rt_lib0copy(&___nl__im__661, ___nl__im__662);
#line 993
c_rt_lib0delete(generator_c_priv0print_use_field(___ref___rec__0, ___nl__im__661));
#line 994
goto label_2023;
#line 994
label_1898:
;
#line 994
c_rt_lib0move(&___nl__im__664, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(254)));
#line 994
c_rt_lib0copy(&___nl__im__663, ___nl__im__664);
#line 995
c_rt_lib0move(&___nl__im__667, c_rt_lib0hash_get_value_dec(___nl__im__663, ___get_global_string_const(360)));
#line 995
c_rt_lib0move(&___nl__im__666, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__667));
#line 995
c_rt_lib0clear(&___nl__im__667);
#line 995
c_rt_lib0move(&___nl__im__668,___get_global_string_const(584));
#line 995
c_rt_lib0move(&___nl__im__665, c_rt_lib0concat_new(___nl__im__666, ___nl__im__668));
#line 995
c_rt_lib0clear(&___nl__im__666);
#line 995
c_rt_lib0clear(&___nl__im__668);
#line 995
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__665));
#line 995
c_rt_lib0clear(&___nl__im__665);
#line 996
goto label_2023;
#line 996
label_1911:
;
#line 996
c_rt_lib0move(&___nl__im__670, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(255)));
#line 996
c_rt_lib0copy(&___nl__im__669, ___nl__im__670);
#line 997
c_rt_lib0delete(generator_c_priv0print_use_index(___ref___rec__0, ___nl__im__669));
#line 998
goto label_2023;
#line 998
label_1916:
;
#line 998
c_rt_lib0move(&___nl__im__672, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(256)));
#line 998
c_rt_lib0copy(&___nl__im__671, ___nl__im__672);
#line 999
c_rt_lib0move(&___nl__im__675, c_rt_lib0hash_get_value_dec(___nl__im__671, ___get_global_string_const(360)));
#line 999
c_rt_lib0move(&___nl__im__674, c_rt_lib0hash_get_value_dec(___nl__im__675, ___get_global_string_const(205)));
#line 999
c_rt_lib0clear(&___nl__im__675);
#line 999
___nl__bool__673 = c_rt_lib0priv_is(___nl__im__674, ___get_global_string_const(132));
#line 999
c_rt_lib0clear(&___nl__im__674);
#line 999
___nl__bool__673 = !___nl__bool__673;
#line 999
if(___nl__bool__673){ goto label_1936;}
#line 1000
c_rt_lib0move(&___nl__im__677,___get_global_string_const(585));
#line 1000
c_rt_lib0move(&___nl__im__679, c_rt_lib0hash_get_value_dec(___nl__im__671, ___get_global_string_const(360)));
#line 1000
c_rt_lib0move(&___nl__im__678, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__679));
#line 1000
c_rt_lib0clear(&___nl__im__679);
#line 1000
c_rt_lib0move(&___nl__im__676, c_rt_lib0concat_new(___nl__im__677, ___nl__im__678));
#line 1000
c_rt_lib0clear(&___nl__im__677);
#line 1000
c_rt_lib0clear(&___nl__im__678);
#line 1000
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__676));
#line 1000
c_rt_lib0clear(&___nl__im__676);
#line 1001
goto label_1947;
#line 1001
label_1936:
;
#line 1002
c_rt_lib0move(&___nl__im__682, c_rt_lib0hash_get_value_dec(___nl__im__671, ___get_global_string_const(360)));
#line 1002
c_rt_lib0move(&___nl__im__681, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__682));
#line 1002
c_rt_lib0clear(&___nl__im__682);
#line 1002
c_rt_lib0move(&___nl__im__683,___get_global_string_const(584));
#line 1002
c_rt_lib0move(&___nl__im__680, c_rt_lib0concat_new(___nl__im__681, ___nl__im__683));
#line 1002
c_rt_lib0clear(&___nl__im__681);
#line 1002
c_rt_lib0clear(&___nl__im__683);
#line 1002
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__680));
#line 1002
c_rt_lib0clear(&___nl__im__680);
#line 1003
goto label_1947;
#line 1003
label_1947:
;
#line 1003
//clear ___nl__bool__673;
#line 1004
goto label_2023;
#line 1004
label_1950:
;
#line 1004
c_rt_lib0move(&___nl__im__685, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(257)));
#line 1004
c_rt_lib0copy(&___nl__im__684, ___nl__im__685);
#line 1005
c_rt_lib0delete(generator_c_priv0print_use_hash_index(___ref___rec__0, ___nl__im__684));
#line 1006
goto label_2023;
#line 1006
label_1955:
;
#line 1006
c_rt_lib0move(&___nl__im__687, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(258)));
#line 1006
c_rt_lib0copy(&___nl__im__686, ___nl__im__687);
#line 1007
c_rt_lib0move(&___nl__im__690, c_rt_lib0hash_get_value_dec(___nl__im__686, ___get_global_string_const(360)));
#line 1007
c_rt_lib0move(&___nl__im__689, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__690));
#line 1007
c_rt_lib0clear(&___nl__im__690);
#line 1007
c_rt_lib0move(&___nl__im__691,___get_global_string_const(584));
#line 1007
c_rt_lib0move(&___nl__im__688, c_rt_lib0concat_new(___nl__im__689, ___nl__im__691));
#line 1007
c_rt_lib0clear(&___nl__im__689);
#line 1007
c_rt_lib0clear(&___nl__im__691);
#line 1007
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__688));
#line 1007
c_rt_lib0clear(&___nl__im__688);
#line 1008
goto label_2023;
#line 1008
label_1968:
;
#line 1008
c_rt_lib0move(&___nl__im__693, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(259)));
#line 1008
c_rt_lib0copy(&___nl__im__692, ___nl__im__693);
#line 1009
c_rt_lib0delete(generator_c_priv0print_use_variant(___ref___rec__0, ___nl__im__692));
#line 1010
goto label_2023;
#line 1010
label_1973:
;
#line 1010
c_rt_lib0move(&___nl__im__695, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(260)));
#line 1010
c_rt_lib0copy(&___nl__im__694, ___nl__im__695);
#line 1011
c_rt_lib0move(&___nl__im__698, c_rt_lib0hash_get_value_dec(___nl__im__694, ___get_global_string_const(360)));
#line 1011
c_rt_lib0move(&___nl__im__697, c_rt_lib0hash_get_value_dec(___nl__im__698, ___get_global_string_const(205)));
#line 1011
c_rt_lib0clear(&___nl__im__698);
#line 1011
___nl__bool__696 = c_rt_lib0priv_is(___nl__im__697, ___get_global_string_const(132));
#line 1011
c_rt_lib0clear(&___nl__im__697);
#line 1011
if(___nl__bool__696){ goto label_1987;}
#line 1011
c_rt_lib0move(&___nl__im__700, c_rt_lib0hash_get_value_dec(___nl__im__694, ___get_global_string_const(360)));
#line 1011
c_rt_lib0move(&___nl__im__699, c_rt_lib0hash_get_value_dec(___nl__im__700, ___get_global_string_const(351)));
#line 1011
c_rt_lib0clear(&___nl__im__700);
#line 1011
___nl__bool__696 = c_rt_lib0priv_is(___nl__im__699, ___get_global_string_const(420));
#line 1011
c_rt_lib0clear(&___nl__im__699);
#line 1011
label_1987:
;
#line 1011
___nl__bool__696 = !___nl__bool__696;
#line 1011
if(___nl__bool__696){ goto label_2000;}
#line 1012
c_rt_lib0move(&___nl__im__703, c_rt_lib0hash_get_value_dec(___nl__im__694, ___get_global_string_const(360)));
#line 1012
c_rt_lib0move(&___nl__im__702, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__703));
#line 1012
c_rt_lib0clear(&___nl__im__703);
#line 1012
c_rt_lib0move(&___nl__im__704,___get_global_string_const(584));
#line 1012
c_rt_lib0move(&___nl__im__701, c_rt_lib0concat_new(___nl__im__702, ___nl__im__704));
#line 1012
c_rt_lib0clear(&___nl__im__702);
#line 1012
c_rt_lib0clear(&___nl__im__704);
#line 1012
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__701));
#line 1012
c_rt_lib0clear(&___nl__im__701);
#line 1013
goto label_2000;
#line 1013
label_2000:
;
#line 1013
//clear ___nl__bool__696;
#line 1014
goto label_2023;
#line 1014
label_2003:
;
#line 1014
c_rt_lib0move(&___nl__im__706, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(261)));
#line 1014
c_rt_lib0copy(&___nl__im__705, ___nl__im__706);
#line 1015
c_rt_lib0delete(generator_c_priv0print_hash_init_iter(___ref___rec__0, ___nl__im__705));
#line 1016
goto label_2023;
#line 1016
label_2008:
;
#line 1016
c_rt_lib0move(&___nl__im__708, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(262)));
#line 1016
c_rt_lib0copy(&___nl__im__707, ___nl__im__708);
#line 1017
c_rt_lib0delete(generator_c_priv0print_hash_next_iter(___ref___rec__0, ___nl__im__707));
#line 1018
goto label_2023;
#line 1018
label_2013:
;
#line 1018
c_rt_lib0move(&___nl__im__710, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(263)));
#line 1018
c_rt_lib0copy(&___nl__im__709, ___nl__im__710);
#line 1019
c_rt_lib0delete(generator_c_priv0print_hash_get_key_iter(___ref___rec__0, ___nl__im__709));
#line 1020
goto label_2023;
#line 1020
label_2018:
;
#line 1020
c_rt_lib0move(&___nl__im__712, c_rt_lib0priv_as(___nl__im__15, ___get_global_string_const(264)));
#line 1020
c_rt_lib0copy(&___nl__im__711, ___nl__im__712);
#line 1021
c_rt_lib0delete(generator_c_priv0print_hash_is_end(___ref___rec__0, ___nl__im__711));
#line 1022
goto label_2023;
#line 1022
label_2023:
;
#line 1023
___nl__bool__713 = ___nl__bool__14;
#line 1023
___nl__bool__713 = !___nl__bool__713;
#line 1023
___nl__bool__713 = !___nl__bool__713;
#line 1023
if(___nl__bool__713){ goto label_2036;}
#line 1023
c_rt_lib0move(&___nl__im__715,___get_global_string_const(440));
#line 1023
c_rt_lib0move(&___nl__im__716, string0lf());
#line 1023
c_rt_lib0move(&___nl__im__714, c_rt_lib0concat_new(___nl__im__715, ___nl__im__716));
#line 1023
c_rt_lib0clear(&___nl__im__715);
#line 1023
c_rt_lib0clear(&___nl__im__716);
#line 1023
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__714));
#line 1023
c_rt_lib0clear(&___nl__im__714);
#line 1023
goto label_2036;
#line 1023
label_2036:
;
#line 1023
//clear ___nl__bool__713;
#line 1023
c_rt_lib0clear(&___nl__im__1);
#line 1023
c_rt_lib0clear(&___nl__im__2);
#line 1023
//clear ___nl__bool__14;
#line 1023
c_rt_lib0clear(&___nl__im__15);
#line 1023
//clear ___nl__bool__16;
#line 1023
c_rt_lib0clear(&___nl__im__17);
#line 1023
c_rt_lib0clear(&___nl__im__18);
#line 1023
c_rt_lib0clear(&___nl__im__19);
#line 1023
c_rt_lib0clear(&___nl__im__72);
#line 1023
c_rt_lib0clear(&___nl__im__73);
#line 1023
c_rt_lib0clear(&___nl__im__116);
#line 1023
c_rt_lib0clear(&___nl__im__117);
#line 1023
c_rt_lib0clear(&___nl__im__118);
#line 1023
c_rt_lib0clear(&___nl__im__123);
#line 1023
c_rt_lib0clear(&___nl__im__124);
#line 1023
c_rt_lib0clear(&___nl__im__125);
#line 1023
c_rt_lib0clear(&___nl__im__126);
#line 1023
c_rt_lib0clear(&___nl__im__127);
#line 1023
c_rt_lib0clear(&___nl__im__130);
#line 1023
c_rt_lib0clear(&___nl__im__148);
#line 1023
c_rt_lib0clear(&___nl__im__149);
#line 1023
c_rt_lib0clear(&___nl__im__150);
#line 1023
c_rt_lib0clear(&___nl__im__151);
#line 1023
c_rt_lib0clear(&___nl__im__185);
#line 1023
c_rt_lib0clear(&___nl__im__186);
#line 1023
c_rt_lib0clear(&___nl__im__229);
#line 1023
c_rt_lib0clear(&___nl__im__230);
#line 1023
//clear ___nl__bool__231;
#line 1023
c_rt_lib0clear(&___nl__im__232);
#line 1023
c_rt_lib0clear(&___nl__im__233);
#line 1023
c_rt_lib0clear(&___nl__im__234);
#line 1023
c_rt_lib0clear(&___nl__im__241);
#line 1023
c_rt_lib0clear(&___nl__im__242);
#line 1023
c_rt_lib0clear(&___nl__im__248);
#line 1023
c_rt_lib0clear(&___nl__im__249);
#line 1023
c_rt_lib0clear(&___nl__im__252);
#line 1023
c_rt_lib0clear(&___nl__im__253);
#line 1023
c_rt_lib0clear(&___nl__im__257);
#line 1023
//clear ___nl__bool__259;
#line 1023
c_rt_lib0clear(&___nl__im__260);
#line 1023
c_rt_lib0clear(&___nl__im__294);
#line 1023
c_rt_lib0clear(&___nl__im__295);
#line 1023
c_rt_lib0clear(&___nl__im__296);
#line 1023
c_rt_lib0clear(&___nl__im__297);
#line 1023
c_rt_lib0clear(&___nl__im__298);
#line 1023
c_rt_lib0clear(&___nl__im__299);
#line 1023
c_rt_lib0clear(&___nl__im__300);
#line 1023
c_rt_lib0clear(&___nl__im__301);
#line 1023
c_rt_lib0clear(&___nl__im__302);
#line 1023
c_rt_lib0clear(&___nl__im__303);
#line 1023
c_rt_lib0clear(&___nl__im__304);
#line 1023
c_rt_lib0clear(&___nl__im__305);
#line 1023
c_rt_lib0clear(&___nl__im__306);
#line 1023
c_rt_lib0clear(&___nl__im__307);
#line 1023
c_rt_lib0clear(&___nl__im__308);
#line 1023
c_rt_lib0clear(&___nl__im__317);
#line 1023
c_rt_lib0clear(&___nl__im__318);
#line 1023
c_rt_lib0clear(&___nl__im__328);
#line 1023
c_rt_lib0clear(&___nl__im__329);
#line 1023
c_rt_lib0clear(&___nl__im__370);
#line 1023
c_rt_lib0clear(&___nl__im__371);
#line 1023
c_rt_lib0clear(&___nl__im__372);
#line 1023
c_rt_lib0clear(&___nl__im__423);
#line 1023
c_rt_lib0clear(&___nl__im__424);
#line 1023
c_rt_lib0clear(&___nl__im__425);
#line 1023
c_rt_lib0clear(&___nl__im__426);
#line 1023
//clear ___nl__bool__428;
#line 1023
c_rt_lib0clear(&___nl__im__429);
#line 1023
c_rt_lib0clear(&___nl__im__458);
#line 1023
c_rt_lib0clear(&___nl__im__459);
#line 1023
c_rt_lib0clear(&___nl__im__469);
#line 1023
c_rt_lib0clear(&___nl__im__470);
#line 1023
//clear ___nl__int__579;
#line 1023
c_rt_lib0clear(&___nl__im__580);
#line 1023
c_rt_lib0clear(&___nl__im__593);
#line 1023
c_rt_lib0clear(&___nl__im__594);
#line 1023
//clear ___nl__int__608;
#line 1023
c_rt_lib0clear(&___nl__im__609);
#line 1023
c_rt_lib0clear(&___nl__im__614);
#line 1023
c_rt_lib0clear(&___nl__im__615);
#line 1023
c_rt_lib0clear(&___nl__im__616);
#line 1023
//clear ___nl__bool__617;
#line 1023
c_rt_lib0clear(&___nl__im__618);
#line 1023
c_rt_lib0clear(&___nl__im__633);
#line 1023
c_rt_lib0clear(&___nl__im__634);
#line 1023
c_rt_lib0clear(&___nl__im__639);
#line 1023
c_rt_lib0clear(&___nl__im__640);
#line 1023
c_rt_lib0clear(&___nl__im__647);
#line 1023
c_rt_lib0clear(&___nl__im__648);
#line 1023
c_rt_lib0clear(&___nl__im__653);
#line 1023
c_rt_lib0clear(&___nl__im__654);
#line 1023
c_rt_lib0clear(&___nl__im__659);
#line 1023
c_rt_lib0clear(&___nl__im__660);
#line 1023
c_rt_lib0clear(&___nl__im__661);
#line 1023
c_rt_lib0clear(&___nl__im__662);
#line 1023
c_rt_lib0clear(&___nl__im__663);
#line 1023
c_rt_lib0clear(&___nl__im__664);
#line 1023
c_rt_lib0clear(&___nl__im__669);
#line 1023
c_rt_lib0clear(&___nl__im__670);
#line 1023
c_rt_lib0clear(&___nl__im__671);
#line 1023
c_rt_lib0clear(&___nl__im__672);
#line 1023
c_rt_lib0clear(&___nl__im__684);
#line 1023
c_rt_lib0clear(&___nl__im__685);
#line 1023
c_rt_lib0clear(&___nl__im__686);
#line 1023
c_rt_lib0clear(&___nl__im__687);
#line 1023
c_rt_lib0clear(&___nl__im__692);
#line 1023
c_rt_lib0clear(&___nl__im__693);
#line 1023
c_rt_lib0clear(&___nl__im__694);
#line 1023
c_rt_lib0clear(&___nl__im__695);
#line 1023
c_rt_lib0clear(&___nl__im__705);
#line 1023
c_rt_lib0clear(&___nl__im__706);
#line 1023
c_rt_lib0clear(&___nl__im__707);
#line 1023
c_rt_lib0clear(&___nl__im__708);
#line 1023
c_rt_lib0clear(&___nl__im__709);
#line 1023
c_rt_lib0clear(&___nl__im__710);
#line 1023
c_rt_lib0clear(&___nl__im__711);
#line 1023
c_rt_lib0clear(&___nl__im__712);
#line 1023
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
#line 1029
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1029
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(132));
#line 1029
if(___nl__bool__5){ goto label_20;}
#line 1032
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(403));
#line 1032
if(___nl__bool__5){ goto label_24;}
#line 1035
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(34));
#line 1035
if(___nl__bool__5){ goto label_28;}
#line 1038
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(404));
#line 1038
if(___nl__bool__5){ goto label_32;}
#line 1041
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(551));
#line 1041
if(___nl__bool__5){ goto label_36;}
#line 1044
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(128));
#line 1044
if(___nl__bool__5){ goto label_42;}
#line 1051
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(554));
#line 1051
if(___nl__bool__5){ goto label_48;}
#line 1054
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__4, ___get_global_string_const(129));
#line 1054
if(___nl__bool__5){ goto label_54;}
#line 1054
c_rt_lib0move(&___nl__im__6,___get_global_string_const(16));
#line 1054
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__4));
#line 1054
nl_die_arg(___nl__im__6);
#line 1029
label_20:
;
#line 1030
c_rt_lib0move(&___nl__im__2, generator_c_priv0im_t());
#line 1031
c_rt_lib0move(&___nl__im__3,___get_global_string_const(577));
#line 1032
goto label_60;
#line 1032
label_24:
;
#line 1033
c_rt_lib0move(&___nl__im__2, generator_c_priv0int_t());
#line 1034
c_rt_lib0move(&___nl__im__3,___get_global_string_const(21));
#line 1035
goto label_60;
#line 1035
label_28:
;
#line 1036
c_rt_lib0move(&___nl__im__2, generator_c_priv0bool_t());
#line 1037
c_rt_lib0move(&___nl__im__3,___get_global_string_const(573));
#line 1038
goto label_60;
#line 1038
label_32:
;
#line 1039
c_rt_lib0move(&___nl__im__2, generator_c_priv0im_t());
#line 1040
c_rt_lib0move(&___nl__im__3,___get_global_string_const(577));
#line 1041
goto label_60;
#line 1041
label_36:
;
#line 1041
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(551)));
#line 1041
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1042
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__7));
#line 1043
c_rt_lib0move(&___nl__im__3,___get_global_string_const(586));
#line 1044
goto label_60;
#line 1044
label_42:
;
#line 1044
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(128)));
#line 1044
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1045
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__9));
#line 1046
c_rt_lib0move(&___nl__im__3,___get_global_string_const(587));
#line 1051
goto label_60;
#line 1051
label_48:
;
#line 1051
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(554)));
#line 1051
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1052
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__11));
#line 1053
c_rt_lib0move(&___nl__im__3,___get_global_string_const(586));
#line 1054
goto label_60;
#line 1054
label_54:
;
#line 1054
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__4, ___get_global_string_const(129)));
#line 1054
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1055
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_type_name(___nl__im__13));
#line 1056
c_rt_lib0move(&___nl__im__3,___get_global_string_const(588));
#line 1062
goto label_60;
#line 1062
label_60:
;
#line 1063
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(351)));
#line 1063
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(219));
#line 1063
if(___nl__bool__16){ goto label_69;}
#line 1064
___nl__bool__16 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(420));
#line 1064
if(___nl__bool__16){ goto label_71;}
#line 1064
c_rt_lib0move(&___nl__im__17,___get_global_string_const(16));
#line 1064
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__15));
#line 1064
nl_die_arg(___nl__im__17);
#line 1063
label_69:
;
#line 1064
goto label_77;
#line 1064
label_71:
;
#line 1065
c_rt_lib0move(&___nl__im__18,___get_global_string_const(373));
#line 1065
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 1065
c_rt_lib0clear(&___nl__im__18);
#line 1066
c_rt_lib0move(&___nl__im__3,___get_global_string_const(577));
#line 1067
goto label_77;
#line 1067
label_77:
;
#line 1068
c_rt_lib0move(&___nl__im__24,___get_global_string_const(467));
#line 1068
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__2, ___nl__im__24));
#line 1068
c_rt_lib0clear(&___nl__im__24);
#line 1068
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1068
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 1068
c_rt_lib0clear(&___nl__im__23);
#line 1068
c_rt_lib0clear(&___nl__im__25);
#line 1068
c_rt_lib0move(&___nl__im__26,___get_global_string_const(562));
#line 1068
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 1068
c_rt_lib0clear(&___nl__im__22);
#line 1068
c_rt_lib0clear(&___nl__im__26);
#line 1068
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__3));
#line 1068
c_rt_lib0clear(&___nl__im__21);
#line 1068
c_rt_lib0move(&___nl__im__27,___get_global_string_const(440));
#line 1068
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__27));
#line 1068
c_rt_lib0clear(&___nl__im__20);
#line 1068
c_rt_lib0clear(&___nl__im__27);
#line 1068
c_rt_lib0delete(generator_c_priv0println(___ref___rec__0, ___nl__im__19));
#line 1068
c_rt_lib0clear(&___nl__im__19);
#line 1068
c_rt_lib0clear(&___nl__im__1);
#line 1068
c_rt_lib0clear(&___nl__im__2);
#line 1068
c_rt_lib0clear(&___nl__im__3);
#line 1068
c_rt_lib0clear(&___nl__im__4);
#line 1068
//clear ___nl__bool__5;
#line 1068
c_rt_lib0clear(&___nl__im__6);
#line 1068
c_rt_lib0clear(&___nl__im__7);
#line 1068
c_rt_lib0clear(&___nl__im__8);
#line 1068
c_rt_lib0clear(&___nl__im__9);
#line 1068
c_rt_lib0clear(&___nl__im__10);
#line 1068
c_rt_lib0clear(&___nl__im__11);
#line 1068
c_rt_lib0clear(&___nl__im__12);
#line 1068
c_rt_lib0clear(&___nl__im__13);
#line 1068
c_rt_lib0clear(&___nl__im__14);
#line 1068
c_rt_lib0clear(&___nl__im__15);
#line 1068
//clear ___nl__bool__16;
#line 1068
c_rt_lib0clear(&___nl__im__17);
#line 1068
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
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
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
bool  ___nl__bool__52 = false;
ImmT  ___nl__im__53 = NULL;
ImmT  ___nl__im__54 = NULL;
ImmT  ___nl__im__55 = NULL;
ImmT  ___nl__im__56 = NULL;
ImmT  ___nl__im__57 = NULL;
ImmT  ___nl__im__58 = NULL;
ImmT  ___nl__im__59 = NULL;
ImmT  ___nl__im__60 = NULL;
ImmT  ___nl__im__61 = NULL;
bool  ___nl__bool__62 = false;
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
#line 1072
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__2));
#line 1072
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 1072
c_rt_lib0clear(&___nl__im__4);
#line 1072
___nl__bool__3 = !___nl__bool__3;
#line 1072
if(___nl__bool__3){ goto label_10;}
#line 1072
c_rt_lib0clear(&___nl__im__1);
#line 1072
c_rt_lib0clear(&___nl__im__2);
#line 1072
//clear ___nl__bool__3;
#line 1072
return NULL;
#line 1072
goto label_10;
#line 1072
label_10:
;
#line 1072
//clear ___nl__bool__3;
#line 1073
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(351)));
#line 1073
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__7, ___get_global_string_const(420));
#line 1073
c_rt_lib0clear(&___nl__im__7);
#line 1073
___nl__bool__6 = !___nl__bool__5;
#line 1073
if(___nl__bool__6){ goto label_20;}
#line 1073
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(351)));
#line 1073
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__8, ___get_global_string_const(420));
#line 1073
c_rt_lib0clear(&___nl__im__8);
#line 1073
label_20:
;
#line 1073
//clear ___nl__bool__6;
#line 1073
___nl__bool__5 = !___nl__bool__5;
#line 1073
if(___nl__bool__5){ goto label_40;}
#line 1074
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__2));
#line 1074
c_rt_lib0move(&___nl__im__12,___get_global_string_const(562));
#line 1074
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__12));
#line 1074
c_rt_lib0clear(&___nl__im__11);
#line 1074
c_rt_lib0clear(&___nl__im__12);
#line 1074
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1074
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__13));
#line 1074
c_rt_lib0clear(&___nl__im__10);
#line 1074
c_rt_lib0clear(&___nl__im__13);
#line 1074
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1074
c_rt_lib0clear(&___nl__im__9);
#line 1075
c_rt_lib0clear(&___nl__im__1);
#line 1075
c_rt_lib0clear(&___nl__im__2);
#line 1075
//clear ___nl__bool__5;
#line 1075
return NULL;
#line 1076
goto label_40;
#line 1076
label_40:
;
#line 1076
//clear ___nl__bool__5;
#line 1077
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(205)));
#line 1077
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(132));
#line 1077
if(___nl__bool__15){ goto label_62;}
#line 1079
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(403));
#line 1079
if(___nl__bool__15){ goto label_65;}
#line 1085
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(404));
#line 1085
if(___nl__bool__15){ goto label_103;}
#line 1088
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(34));
#line 1088
if(___nl__bool__15){ goto label_115;}
#line 1094
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(551));
#line 1094
if(___nl__bool__15){ goto label_153;}
#line 1100
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(128));
#line 1100
if(___nl__bool__15){ goto label_181;}
#line 1106
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(554));
#line 1106
if(___nl__bool__15){ goto label_209;}
#line 1108
___nl__bool__15 = c_rt_lib0priv_is(___nl__im__14, ___get_global_string_const(129));
#line 1108
if(___nl__bool__15){ goto label_215;}
#line 1108
c_rt_lib0move(&___nl__im__16,___get_global_string_const(16));
#line 1108
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__14));
#line 1108
nl_die_arg(___nl__im__16);
#line 1077
label_62:
;
#line 1078
c_rt_lib0delete(generator_c_priv0print_move_to_im(___ref___rec__0, ___nl__im__1, ___nl__im__2));
#line 1079
goto label_221;
#line 1079
label_65:
;
#line 1080
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1080
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(132));
#line 1080
c_rt_lib0clear(&___nl__im__18);
#line 1080
___nl__bool__17 = !___nl__bool__17;
#line 1080
if(___nl__bool__17){ goto label_87;}
#line 1081
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1081
c_rt_lib0move(&___nl__im__23,___get_global_string_const(589));
#line 1081
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1081
c_rt_lib0clear(&___nl__im__22);
#line 1081
c_rt_lib0clear(&___nl__im__23);
#line 1081
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1081
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__24));
#line 1081
c_rt_lib0clear(&___nl__im__21);
#line 1081
c_rt_lib0clear(&___nl__im__24);
#line 1081
c_rt_lib0move(&___nl__im__25,___get_global_string_const(320));
#line 1081
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__25));
#line 1081
c_rt_lib0clear(&___nl__im__20);
#line 1081
c_rt_lib0clear(&___nl__im__25);
#line 1081
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 1081
c_rt_lib0clear(&___nl__im__19);
#line 1082
goto label_100;
#line 1082
label_87:
;
#line 1083
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1083
c_rt_lib0move(&___nl__im__29,___get_global_string_const(562));
#line 1083
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 1083
c_rt_lib0clear(&___nl__im__28);
#line 1083
c_rt_lib0clear(&___nl__im__29);
#line 1083
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1083
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 1083
c_rt_lib0clear(&___nl__im__27);
#line 1083
c_rt_lib0clear(&___nl__im__30);
#line 1083
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__26));
#line 1083
c_rt_lib0clear(&___nl__im__26);
#line 1084
goto label_100;
#line 1084
label_100:
;
#line 1084
//clear ___nl__bool__17;
#line 1085
goto label_221;
#line 1085
label_103:
;
#line 1086
c_rt_lib0move(&___nl__im__32, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1086
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1086
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(2, ___nl__im__32, ___nl__im__33));
#line 1086
c_rt_lib0clear(&___nl__im__32);
#line 1086
c_rt_lib0clear(&___nl__im__33);
#line 1087
c_rt_lib0move(&___nl__im__35,___get_global_string_const(453));
#line 1087
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_fun_lib(___nl__im__35, ___nl__im__31));
#line 1087
c_rt_lib0clear(&___nl__im__35);
#line 1087
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__34));
#line 1087
c_rt_lib0clear(&___nl__im__34);
#line 1088
goto label_221;
#line 1088
label_115:
;
#line 1089
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1089
___nl__bool__36 = c_rt_lib0priv_is(___nl__im__37, ___get_global_string_const(132));
#line 1089
c_rt_lib0clear(&___nl__im__37);
#line 1089
___nl__bool__36 = !___nl__bool__36;
#line 1089
if(___nl__bool__36){ goto label_137;}
#line 1090
c_rt_lib0move(&___nl__im__41, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1090
c_rt_lib0move(&___nl__im__42,___get_global_string_const(590));
#line 1090
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__42));
#line 1090
c_rt_lib0clear(&___nl__im__41);
#line 1090
c_rt_lib0clear(&___nl__im__42);
#line 1090
c_rt_lib0move(&___nl__im__43, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1090
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__43));
#line 1090
c_rt_lib0clear(&___nl__im__40);
#line 1090
c_rt_lib0clear(&___nl__im__43);
#line 1090
c_rt_lib0move(&___nl__im__44,___get_global_string_const(320));
#line 1090
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__44));
#line 1090
c_rt_lib0clear(&___nl__im__39);
#line 1090
c_rt_lib0clear(&___nl__im__44);
#line 1090
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__38));
#line 1090
c_rt_lib0clear(&___nl__im__38);
#line 1091
goto label_150;
#line 1091
label_137:
;
#line 1092
c_rt_lib0move(&___nl__im__47, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1092
c_rt_lib0move(&___nl__im__48,___get_global_string_const(562));
#line 1092
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__48));
#line 1092
c_rt_lib0clear(&___nl__im__47);
#line 1092
c_rt_lib0clear(&___nl__im__48);
#line 1092
c_rt_lib0move(&___nl__im__49, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1092
c_rt_lib0move(&___nl__im__45, c_rt_lib0concat_new(___nl__im__46, ___nl__im__49));
#line 1092
c_rt_lib0clear(&___nl__im__46);
#line 1092
c_rt_lib0clear(&___nl__im__49);
#line 1092
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__45));
#line 1092
c_rt_lib0clear(&___nl__im__45);
#line 1093
goto label_150;
#line 1093
label_150:
;
#line 1093
//clear ___nl__bool__36;
#line 1094
goto label_221;
#line 1094
label_153:
;
#line 1094
c_rt_lib0move(&___nl__im__51, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(551)));
#line 1094
c_rt_lib0copy(&___nl__im__50, ___nl__im__51);
#line 1095
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1095
___nl__bool__52 = c_rt_lib0priv_is(___nl__im__53, ___get_global_string_const(551));
#line 1095
c_rt_lib0clear(&___nl__im__53);
#line 1095
___nl__bool__52 = !___nl__bool__52;
#line 1095
if(___nl__bool__52){ goto label_173;}
#line 1096
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1096
c_rt_lib0move(&___nl__im__57,___get_global_string_const(562));
#line 1096
c_rt_lib0move(&___nl__im__55, c_rt_lib0concat_new(___nl__im__56, ___nl__im__57));
#line 1096
c_rt_lib0clear(&___nl__im__56);
#line 1096
c_rt_lib0clear(&___nl__im__57);
#line 1096
c_rt_lib0move(&___nl__im__58, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1096
c_rt_lib0move(&___nl__im__54, c_rt_lib0concat_new(___nl__im__55, ___nl__im__58));
#line 1096
c_rt_lib0clear(&___nl__im__55);
#line 1096
c_rt_lib0clear(&___nl__im__58);
#line 1096
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__54));
#line 1096
c_rt_lib0clear(&___nl__im__54);
#line 1097
goto label_177;
#line 1097
label_173:
;
#line 1098
c_rt_lib0move(&___nl__im__59, c_rt_lib0array_mk(0));
#line 1098
nl_die_arg(___nl__im__59);
#line 1099
goto label_177;
#line 1099
label_177:
;
#line 1099
//clear ___nl__bool__52;
#line 1099
c_rt_lib0clear(&___nl__im__59);
#line 1100
goto label_221;
#line 1100
label_181:
;
#line 1100
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(128)));
#line 1100
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 1101
c_rt_lib0move(&___nl__im__63, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1101
___nl__bool__62 = c_rt_lib0priv_is(___nl__im__63, ___get_global_string_const(128));
#line 1101
c_rt_lib0clear(&___nl__im__63);
#line 1101
___nl__bool__62 = !___nl__bool__62;
#line 1101
if(___nl__bool__62){ goto label_201;}
#line 1102
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1102
c_rt_lib0move(&___nl__im__67,___get_global_string_const(562));
#line 1102
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__67));
#line 1102
c_rt_lib0clear(&___nl__im__66);
#line 1102
c_rt_lib0clear(&___nl__im__67);
#line 1102
c_rt_lib0move(&___nl__im__68, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1102
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__68));
#line 1102
c_rt_lib0clear(&___nl__im__65);
#line 1102
c_rt_lib0clear(&___nl__im__68);
#line 1102
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__64));
#line 1102
c_rt_lib0clear(&___nl__im__64);
#line 1103
goto label_205;
#line 1103
label_201:
;
#line 1104
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_mk(0));
#line 1104
nl_die_arg(___nl__im__69);
#line 1105
goto label_205;
#line 1105
label_205:
;
#line 1105
//clear ___nl__bool__62;
#line 1105
c_rt_lib0clear(&___nl__im__69);
#line 1106
goto label_221;
#line 1106
label_209:
;
#line 1106
c_rt_lib0move(&___nl__im__71, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(554)));
#line 1106
c_rt_lib0copy(&___nl__im__70, ___nl__im__71);
#line 1107
c_rt_lib0move(&___nl__im__72, c_rt_lib0array_mk(0));
#line 1107
nl_die_arg(___nl__im__72);
#line 1108
goto label_221;
#line 1108
label_215:
;
#line 1108
c_rt_lib0move(&___nl__im__74, c_rt_lib0priv_as(___nl__im__14, ___get_global_string_const(129)));
#line 1108
c_rt_lib0copy(&___nl__im__73, ___nl__im__74);
#line 1109
c_rt_lib0move(&___nl__im__75, c_rt_lib0array_mk(0));
#line 1109
nl_die_arg(___nl__im__75);
#line 1110
goto label_221;
#line 1110
label_221:
;
#line 1110
c_rt_lib0clear(&___nl__im__1);
#line 1110
c_rt_lib0clear(&___nl__im__2);
#line 1110
c_rt_lib0clear(&___nl__im__14);
#line 1110
//clear ___nl__bool__15;
#line 1110
c_rt_lib0clear(&___nl__im__16);
#line 1110
c_rt_lib0clear(&___nl__im__31);
#line 1110
c_rt_lib0clear(&___nl__im__50);
#line 1110
c_rt_lib0clear(&___nl__im__51);
#line 1110
c_rt_lib0clear(&___nl__im__60);
#line 1110
c_rt_lib0clear(&___nl__im__61);
#line 1110
c_rt_lib0clear(&___nl__im__70);
#line 1110
c_rt_lib0clear(&___nl__im__71);
#line 1110
c_rt_lib0clear(&___nl__im__72);
#line 1110
c_rt_lib0clear(&___nl__im__73);
#line 1110
c_rt_lib0clear(&___nl__im__74);
#line 1110
c_rt_lib0clear(&___nl__im__75);
#line 1110
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
#line 1114
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1114
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(132));
#line 1114
if(___nl__bool__4){ goto label_20;}
#line 1117
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(403));
#line 1117
if(___nl__bool__4){ goto label_32;}
#line 1120
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(34));
#line 1120
if(___nl__bool__4){ goto label_44;}
#line 1123
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(404));
#line 1123
if(___nl__bool__4){ goto label_56;}
#line 1126
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(551));
#line 1126
if(___nl__bool__4){ goto label_68;}
#line 1128
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 1128
if(___nl__bool__4){ goto label_74;}
#line 1130
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(554));
#line 1130
if(___nl__bool__4){ goto label_80;}
#line 1132
___nl__bool__4 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(129));
#line 1132
if(___nl__bool__4){ goto label_86;}
#line 1132
c_rt_lib0move(&___nl__im__5,___get_global_string_const(16));
#line 1132
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(2, ___nl__im__5, ___nl__im__3));
#line 1132
nl_die_arg(___nl__im__5);
#line 1114
label_20:
;
#line 1115
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1115
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1115
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__8));
#line 1115
c_rt_lib0clear(&___nl__im__7);
#line 1115
c_rt_lib0clear(&___nl__im__8);
#line 1116
c_rt_lib0move(&___nl__im__10,___get_global_string_const(453));
#line 1116
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__6));
#line 1116
c_rt_lib0clear(&___nl__im__10);
#line 1116
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__9));
#line 1116
c_rt_lib0clear(&___nl__im__9);
#line 1117
goto label_92;
#line 1117
label_32:
;
#line 1118
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1118
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1118
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1118
c_rt_lib0clear(&___nl__im__12);
#line 1118
c_rt_lib0clear(&___nl__im__13);
#line 1119
c_rt_lib0move(&___nl__im__15,___get_global_string_const(238));
#line 1119
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_fun_lib(___nl__im__15, ___nl__im__11));
#line 1119
c_rt_lib0clear(&___nl__im__15);
#line 1119
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__14));
#line 1119
c_rt_lib0clear(&___nl__im__14);
#line 1120
goto label_92;
#line 1120
label_44:
;
#line 1121
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1121
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1121
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(2, ___nl__im__17, ___nl__im__18));
#line 1121
c_rt_lib0clear(&___nl__im__17);
#line 1121
c_rt_lib0clear(&___nl__im__18);
#line 1122
c_rt_lib0move(&___nl__im__20,___get_global_string_const(238));
#line 1122
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_fun_lib(___nl__im__20, ___nl__im__16));
#line 1122
c_rt_lib0clear(&___nl__im__20);
#line 1122
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__19));
#line 1122
c_rt_lib0clear(&___nl__im__19);
#line 1123
goto label_92;
#line 1123
label_56:
;
#line 1124
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__2));
#line 1124
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_im_from_reg(___ref___rec__0, ___nl__im__1));
#line 1124
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__23));
#line 1124
c_rt_lib0clear(&___nl__im__22);
#line 1124
c_rt_lib0clear(&___nl__im__23);
#line 1125
c_rt_lib0move(&___nl__im__25,___get_global_string_const(453));
#line 1125
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_fun_lib(___nl__im__25, ___nl__im__21));
#line 1125
c_rt_lib0clear(&___nl__im__25);
#line 1125
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__24));
#line 1125
c_rt_lib0clear(&___nl__im__24);
#line 1126
goto label_92;
#line 1126
label_68:
;
#line 1126
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(551)));
#line 1126
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1127
c_rt_lib0move(&___nl__im__28, c_rt_lib0array_mk(0));
#line 1127
nl_die_arg(___nl__im__28);
#line 1128
goto label_92;
#line 1128
label_74:
;
#line 1128
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(128)));
#line 1128
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1129
c_rt_lib0move(&___nl__im__31, c_rt_lib0array_mk(0));
#line 1129
nl_die_arg(___nl__im__31);
#line 1130
goto label_92;
#line 1130
label_80:
;
#line 1130
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(554)));
#line 1130
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 1131
c_rt_lib0move(&___nl__im__34, c_rt_lib0array_mk(0));
#line 1131
nl_die_arg(___nl__im__34);
#line 1132
goto label_92;
#line 1132
label_86:
;
#line 1132
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__3, ___get_global_string_const(129)));
#line 1132
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1133
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(0));
#line 1133
nl_die_arg(___nl__im__37);
#line 1134
goto label_92;
#line 1134
label_92:
;
#line 1134
c_rt_lib0clear(&___nl__im__1);
#line 1134
c_rt_lib0clear(&___nl__im__2);
#line 1134
c_rt_lib0clear(&___nl__im__3);
#line 1134
//clear ___nl__bool__4;
#line 1134
c_rt_lib0clear(&___nl__im__5);
#line 1134
c_rt_lib0clear(&___nl__im__6);
#line 1134
c_rt_lib0clear(&___nl__im__11);
#line 1134
c_rt_lib0clear(&___nl__im__16);
#line 1134
c_rt_lib0clear(&___nl__im__21);
#line 1134
c_rt_lib0clear(&___nl__im__26);
#line 1134
c_rt_lib0clear(&___nl__im__27);
#line 1134
c_rt_lib0clear(&___nl__im__28);
#line 1134
c_rt_lib0clear(&___nl__im__29);
#line 1134
c_rt_lib0clear(&___nl__im__30);
#line 1134
c_rt_lib0clear(&___nl__im__31);
#line 1134
c_rt_lib0clear(&___nl__im__32);
#line 1134
c_rt_lib0clear(&___nl__im__33);
#line 1134
c_rt_lib0clear(&___nl__im__34);
#line 1134
c_rt_lib0clear(&___nl__im__35);
#line 1134
c_rt_lib0clear(&___nl__im__36);
#line 1134
c_rt_lib0clear(&___nl__im__37);
#line 1134
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_im_from_reg(generator_c0state_t0type* ___ref___rec__0,nlasm0reg_t0type ___nl__im__1) {
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
#line 1138
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1138
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(132));
#line 1138
if(___nl__bool__3){ goto label_20;}
#line 1140
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(403));
#line 1140
if(___nl__bool__3){ goto label_28;}
#line 1142
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(34));
#line 1142
if(___nl__bool__3){ goto label_43;}
#line 1144
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(404));
#line 1144
if(___nl__bool__3){ goto label_59;}
#line 1146
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(551));
#line 1146
if(___nl__bool__3){ goto label_70;}
#line 1148
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(128));
#line 1148
if(___nl__bool__3){ goto label_76;}
#line 1150
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(554));
#line 1150
if(___nl__bool__3){ goto label_82;}
#line 1152
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(129));
#line 1152
if(___nl__bool__3){ goto label_88;}
#line 1152
c_rt_lib0move(&___nl__im__4,___get_global_string_const(16));
#line 1152
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1152
nl_die_arg(___nl__im__4);
#line 1138
label_20:
;
#line 1139
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1139
c_rt_lib0clear(&___nl__im__1);
#line 1139
c_rt_lib0clear(&___nl__im__2);
#line 1139
//clear ___nl__bool__3;
#line 1139
c_rt_lib0clear(&___nl__im__4);
#line 1139
return ___nl__im__5;
#line 1140
goto label_94;
#line 1140
label_28:
;
#line 1141
c_rt_lib0move(&___nl__im__7,___get_global_string_const(566));
#line 1141
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1141
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_mk(1, ___nl__im__9));
#line 1141
c_rt_lib0clear(&___nl__im__9);
#line 1141
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__7, ___nl__im__8));
#line 1141
c_rt_lib0clear(&___nl__im__7);
#line 1141
c_rt_lib0clear(&___nl__im__8);
#line 1141
c_rt_lib0clear(&___nl__im__1);
#line 1141
c_rt_lib0clear(&___nl__im__2);
#line 1141
//clear ___nl__bool__3;
#line 1141
c_rt_lib0clear(&___nl__im__4);
#line 1141
c_rt_lib0clear(&___nl__im__5);
#line 1141
return ___nl__im__6;
#line 1142
goto label_94;
#line 1142
label_43:
;
#line 1143
c_rt_lib0move(&___nl__im__11,___get_global_string_const(591));
#line 1143
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1143
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(1, ___nl__im__13));
#line 1143
c_rt_lib0clear(&___nl__im__13);
#line 1143
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_fun_lib(___nl__im__11, ___nl__im__12));
#line 1143
c_rt_lib0clear(&___nl__im__11);
#line 1143
c_rt_lib0clear(&___nl__im__12);
#line 1143
c_rt_lib0clear(&___nl__im__1);
#line 1143
c_rt_lib0clear(&___nl__im__2);
#line 1143
//clear ___nl__bool__3;
#line 1143
c_rt_lib0clear(&___nl__im__4);
#line 1143
c_rt_lib0clear(&___nl__im__5);
#line 1143
c_rt_lib0clear(&___nl__im__6);
#line 1143
return ___nl__im__10;
#line 1144
goto label_94;
#line 1144
label_59:
;
#line 1145
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1145
c_rt_lib0clear(&___nl__im__1);
#line 1145
c_rt_lib0clear(&___nl__im__2);
#line 1145
//clear ___nl__bool__3;
#line 1145
c_rt_lib0clear(&___nl__im__4);
#line 1145
c_rt_lib0clear(&___nl__im__5);
#line 1145
c_rt_lib0clear(&___nl__im__6);
#line 1145
c_rt_lib0clear(&___nl__im__10);
#line 1145
return ___nl__im__14;
#line 1146
goto label_94;
#line 1146
label_70:
;
#line 1146
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(551)));
#line 1146
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 1147
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_mk(0));
#line 1147
nl_die_arg(___nl__im__17);
#line 1148
goto label_94;
#line 1148
label_76:
;
#line 1148
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(128)));
#line 1148
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1149
c_rt_lib0move(&___nl__im__20, c_rt_lib0array_mk(0));
#line 1149
nl_die_arg(___nl__im__20);
#line 1150
goto label_94;
#line 1150
label_82:
;
#line 1150
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(554)));
#line 1150
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 1151
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(0));
#line 1151
nl_die_arg(___nl__im__23);
#line 1152
goto label_94;
#line 1152
label_88:
;
#line 1152
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(129)));
#line 1152
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 1153
c_rt_lib0move(&___nl__im__26, c_rt_lib0array_mk(0));
#line 1153
nl_die_arg(___nl__im__26);
#line 1154
goto label_94;
#line 1154
label_94:
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
#line 1158
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(132));
#line 1158
if(___nl__bool__2){ goto label_19;}
#line 1160
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(403));
#line 1160
if(___nl__bool__2){ goto label_25;}
#line 1162
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(34));
#line 1162
if(___nl__bool__2){ goto label_39;}
#line 1164
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(404));
#line 1164
if(___nl__bool__2){ goto label_52;}
#line 1166
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(551));
#line 1166
if(___nl__bool__2){ goto label_60;}
#line 1168
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 1168
if(___nl__bool__2){ goto label_66;}
#line 1170
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(554));
#line 1170
if(___nl__bool__2){ goto label_72;}
#line 1172
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(129));
#line 1172
if(___nl__bool__2){ goto label_78;}
#line 1172
c_rt_lib0move(&___nl__im__3,___get_global_string_const(16));
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
goto label_84;
#line 1160
label_25:
;
#line 1161
c_rt_lib0move(&___nl__im__6,___get_global_string_const(592));
#line 1161
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__1));
#line 1161
c_rt_lib0clear(&___nl__im__6);
#line 1161
c_rt_lib0move(&___nl__im__7,___get_global_string_const(320));
#line 1161
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__7));
#line 1161
c_rt_lib0clear(&___nl__im__5);
#line 1161
c_rt_lib0clear(&___nl__im__7);
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
goto label_84;
#line 1162
label_39:
;
#line 1163
c_rt_lib0move(&___nl__im__9,___get_global_string_const(593));
#line 1163
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(1, ___nl__im__1));
#line 1163
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_fun_lib(___nl__im__9, ___nl__im__10));
#line 1163
c_rt_lib0clear(&___nl__im__9);
#line 1163
c_rt_lib0clear(&___nl__im__10);
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
return ___nl__im__8;
#line 1164
goto label_84;
#line 1164
label_52:
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
c_rt_lib0clear(&___nl__im__8);
#line 1165
return ___nl__im__1;
#line 1166
goto label_84;
#line 1166
label_60:
;
#line 1166
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(551)));
#line 1166
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1167
c_rt_lib0move(&___nl__im__13, c_rt_lib0array_mk(0));
#line 1167
nl_die_arg(___nl__im__13);
#line 1168
goto label_84;
#line 1168
label_66:
;
#line 1168
c_rt_lib0move(&___nl__im__15, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 1168
c_rt_lib0copy(&___nl__im__14, ___nl__im__15);
#line 1169
c_rt_lib0move(&___nl__im__16, c_rt_lib0array_mk(0));
#line 1169
nl_die_arg(___nl__im__16);
#line 1170
goto label_84;
#line 1170
label_72:
;
#line 1170
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(554)));
#line 1170
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 1171
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_mk(0));
#line 1171
nl_die_arg(___nl__im__19);
#line 1172
goto label_84;
#line 1172
label_78:
;
#line 1172
c_rt_lib0move(&___nl__im__21, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(129)));
#line 1172
c_rt_lib0copy(&___nl__im__20, ___nl__im__21);
#line 1173
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(0));
#line 1173
nl_die_arg(___nl__im__22);
#line 1174
goto label_84;
#line 1174
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
#line 1178
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_bin_ops());
#line 1178
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(552)));
#line 1178
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__3, ___nl__im__4));
#line 1178
c_rt_lib0clear(&___nl__im__3);
#line 1178
c_rt_lib0clear(&___nl__im__4);
#line 1179
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1179
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1179
___nl__bool__5 = nlasm0eq_reg(___nl__im__7, ___nl__im__8);
#line 1179
c_rt_lib0clear(&___nl__im__7);
#line 1179
c_rt_lib0clear(&___nl__im__8);
#line 1179
___nl__bool__6 = !___nl__bool__5;
#line 1179
if(___nl__bool__6){ goto label_17;}
#line 1179
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_bin_ops_mod());
#line 1179
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(552)));
#line 1179
___nl__bool__5 = hash0has_key(___nl__im__9, ___nl__im__10);
#line 1179
c_rt_lib0clear(&___nl__im__9);
#line 1179
c_rt_lib0clear(&___nl__im__10);
#line 1179
label_17:
;
#line 1179
//clear ___nl__bool__6;
#line 1179
___nl__bool__5 = !___nl__bool__5;
#line 1179
if(___nl__bool__5){ goto label_27;}
#line 1180
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_bin_ops_mod());
#line 1180
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(552)));
#line 1180
c_rt_lib0move(&___nl__im__2, hash0get_value(___nl__im__11, ___nl__im__12));
#line 1180
c_rt_lib0clear(&___nl__im__11);
#line 1180
c_rt_lib0clear(&___nl__im__12);
#line 1181
goto label_27;
#line 1181
label_27:
;
#line 1181
//clear ___nl__bool__5;
#line 1183
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(552)));
#line 1183
c_rt_lib0move(&___nl__im__16,___get_global_string_const(369));
#line 1183
___nl__bool__14 = c_rt_lib0eq(___nl__im__15, ___nl__im__16);
#line 1183
c_rt_lib0clear(&___nl__im__15);
#line 1183
c_rt_lib0clear(&___nl__im__16);
#line 1183
___nl__bool__14 = !___nl__bool__14;
#line 1183
if(___nl__bool__14){ goto label_74;}
#line 1184
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1184
c_rt_lib0move(&___nl__im__18, c_rt_lib0hash_get_value_dec(___nl__im__19, ___get_global_string_const(205)));
#line 1184
c_rt_lib0clear(&___nl__im__19);
#line 1184
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__18, ___get_global_string_const(132));
#line 1184
c_rt_lib0clear(&___nl__im__18);
#line 1184
if(___nl__bool__17){ goto label_47;}
#line 1184
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1184
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(205)));
#line 1184
c_rt_lib0clear(&___nl__im__21);
#line 1184
___nl__bool__17 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(404));
#line 1184
c_rt_lib0clear(&___nl__im__20);
#line 1184
label_47:
;
#line 1184
___nl__bool__17 = !___nl__bool__17;
#line 1184
if(___nl__bool__17){ goto label_62;}
#line 1185
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1185
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__24));
#line 1185
c_rt_lib0clear(&___nl__im__24);
#line 1185
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(275)));
#line 1185
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__26));
#line 1185
c_rt_lib0clear(&___nl__im__26);
#line 1185
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__23, ___nl__im__25));
#line 1185
c_rt_lib0clear(&___nl__im__23);
#line 1185
c_rt_lib0clear(&___nl__im__25);
#line 1185
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__22));
#line 1185
c_rt_lib0clear(&___nl__im__22);
#line 1186
goto label_71;
#line 1186
label_62:
;
#line 1187
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1187
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(275)));
#line 1187
c_rt_lib0move(&___nl__im__29,___get_global_string_const(381));
#line 1187
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__27, ___nl__im__28, ___nl__im__29));
#line 1187
c_rt_lib0clear(&___nl__im__27);
#line 1187
c_rt_lib0clear(&___nl__im__28);
#line 1187
c_rt_lib0clear(&___nl__im__29);
#line 1188
goto label_71;
#line 1188
label_71:
;
#line 1188
//clear ___nl__bool__17;
#line 1189
goto label_159;
#line 1189
label_74:
;
#line 1189
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(552)));
#line 1189
c_rt_lib0move(&___nl__im__31,___get_global_string_const(370));
#line 1189
___nl__bool__14 = c_rt_lib0eq(___nl__im__30, ___nl__im__31);
#line 1189
c_rt_lib0clear(&___nl__im__30);
#line 1189
c_rt_lib0clear(&___nl__im__31);
#line 1189
___nl__bool__14 = !___nl__bool__14;
#line 1189
if(___nl__bool__14){ goto label_120;}
#line 1190
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1190
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(205)));
#line 1190
c_rt_lib0clear(&___nl__im__34);
#line 1190
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__33, ___get_global_string_const(132));
#line 1190
c_rt_lib0clear(&___nl__im__33);
#line 1190
if(___nl__bool__32){ goto label_93;}
#line 1190
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1190
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__36, ___get_global_string_const(205)));
#line 1190
c_rt_lib0clear(&___nl__im__36);
#line 1190
___nl__bool__32 = c_rt_lib0priv_is(___nl__im__35, ___get_global_string_const(404));
#line 1190
c_rt_lib0clear(&___nl__im__35);
#line 1190
label_93:
;
#line 1190
___nl__bool__32 = !___nl__bool__32;
#line 1190
if(___nl__bool__32){ goto label_108;}
#line 1191
c_rt_lib0move(&___nl__im__39, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1191
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__39));
#line 1191
c_rt_lib0clear(&___nl__im__39);
#line 1191
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(275)));
#line 1191
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__41));
#line 1191
c_rt_lib0clear(&___nl__im__41);
#line 1191
c_rt_lib0move(&___nl__im__37, c_rt_lib0array_mk(2, ___nl__im__38, ___nl__im__40));
#line 1191
c_rt_lib0clear(&___nl__im__38);
#line 1191
c_rt_lib0clear(&___nl__im__40);
#line 1191
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__37));
#line 1191
c_rt_lib0clear(&___nl__im__37);
#line 1192
goto label_117;
#line 1192
label_108:
;
#line 1193
c_rt_lib0move(&___nl__im__42, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1193
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(275)));
#line 1193
c_rt_lib0move(&___nl__im__44,___get_global_string_const(383));
#line 1193
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__42, ___nl__im__43, ___nl__im__44));
#line 1193
c_rt_lib0clear(&___nl__im__42);
#line 1193
c_rt_lib0clear(&___nl__im__43);
#line 1193
c_rt_lib0clear(&___nl__im__44);
#line 1194
goto label_117;
#line 1194
label_117:
;
#line 1194
//clear ___nl__bool__32;
#line 1195
goto label_159;
#line 1195
label_120:
;
#line 1196
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1196
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__47, ___get_global_string_const(205)));
#line 1196
c_rt_lib0clear(&___nl__im__47);
#line 1196
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__46, ___get_global_string_const(132));
#line 1196
c_rt_lib0clear(&___nl__im__46);
#line 1196
if(___nl__bool__45){ goto label_132;}
#line 1196
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1196
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value_dec(___nl__im__49, ___get_global_string_const(205)));
#line 1196
c_rt_lib0clear(&___nl__im__49);
#line 1196
___nl__bool__45 = c_rt_lib0priv_is(___nl__im__48, ___get_global_string_const(404));
#line 1196
c_rt_lib0clear(&___nl__im__48);
#line 1196
label_132:
;
#line 1196
___nl__bool__45 = !___nl__bool__45;
#line 1196
if(___nl__bool__45){ goto label_147;}
#line 1197
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1197
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__52));
#line 1197
c_rt_lib0clear(&___nl__im__52);
#line 1197
c_rt_lib0move(&___nl__im__54, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(275)));
#line 1197
c_rt_lib0move(&___nl__im__53, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__54));
#line 1197
c_rt_lib0clear(&___nl__im__54);
#line 1197
c_rt_lib0move(&___nl__im__50, c_rt_lib0array_mk(2, ___nl__im__51, ___nl__im__53));
#line 1197
c_rt_lib0clear(&___nl__im__51);
#line 1197
c_rt_lib0clear(&___nl__im__53);
#line 1197
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__2, ___nl__im__50));
#line 1197
c_rt_lib0clear(&___nl__im__50);
#line 1198
goto label_156;
#line 1198
label_147:
;
#line 1199
c_rt_lib0move(&___nl__im__55, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(274)));
#line 1199
c_rt_lib0move(&___nl__im__56, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(275)));
#line 1199
c_rt_lib0move(&___nl__im__57, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(552)));
#line 1199
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_inline_bin_op(___ref___rec__0, ___nl__im__55, ___nl__im__56, ___nl__im__57));
#line 1199
c_rt_lib0clear(&___nl__im__55);
#line 1199
c_rt_lib0clear(&___nl__im__56);
#line 1199
c_rt_lib0clear(&___nl__im__57);
#line 1200
goto label_156;
#line 1200
label_156:
;
#line 1200
//clear ___nl__bool__45;
#line 1201
goto label_159;
#line 1201
label_159:
;
#line 1201
//clear ___nl__bool__14;
#line 1202
c_rt_lib0move(&___nl__im__59, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1202
c_rt_lib0move(&___nl__im__58, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__59, ___nl__im__13));
#line 1202
c_rt_lib0clear(&___nl__im__59);
#line 1202
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__58));
#line 1202
c_rt_lib0clear(&___nl__im__58);
#line 1202
c_rt_lib0clear(&___nl__im__1);
#line 1202
c_rt_lib0clear(&___nl__im__2);
#line 1202
c_rt_lib0clear(&___nl__im__13);
#line 1202
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
INT  ___nl__int__16 = 0;
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
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
ImmT  ___nl__im__30 = NULL;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
INT  ___nl__int__35 = 0;
INT  ___nl__int__36 = 0;
INT  ___nl__int__37 = 0;
bool  ___nl__bool__38 = false;
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
#line 1206
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1206
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1206
c_rt_lib0clear(&___nl__im__4);
#line 1206
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(132));
#line 1206
c_rt_lib0clear(&___nl__im__3);
#line 1206
___nl__bool__2 = !___nl__bool__2;
#line 1206
if(___nl__bool__2){ goto label_63;}
#line 1207
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(74)));
#line 1207
___nl__int__7 = c_rt_lib0array_len(___nl__im__8);
#line 1207
c_rt_lib0clear(&___nl__im__8);
#line 1207
c_rt_lib0move(&___nl__im__9, c_rt_lib0int_new(___nl__int__7));
#line 1207
c_rt_lib0move(&___nl__im__6, ptd0int_to_string(___nl__im__9));
#line 1207
//clear ___nl__int__7;
#line 1207
c_rt_lib0clear(&___nl__im__9);
#line 1207
c_rt_lib0move(&___nl__im__5, c_rt_lib0array_mk(1, ___nl__im__6));
#line 1207
c_rt_lib0clear(&___nl__im__6);
#line 1208
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(74)));
#line 1208
___nl__int__12 = 0;
#line 1208
___nl__int__13 = 1;
#line 1208
___nl__int__14 = c_rt_lib0array_len(___nl__im__10);
#line 1208
label_20:
;
#line 1208
___nl__int__16 = ___nl__int__12 >= ___nl__int__14;
#line 1208
___nl__bool__15 = ___nl__int__16;
#line 1208
if(___nl__bool__15){ goto label_53;}
#line 1208
c_rt_lib0move(&___nl__im__17, c_rt_lib0array_get(___nl__im__10, ___nl__int__12));
#line 1208
c_rt_lib0copy(&___nl__im__11, ___nl__im__17);
#line 1209
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(224)));
#line 1209
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__20, ___get_global_string_const(205)));
#line 1209
c_rt_lib0clear(&___nl__im__20);
#line 1209
___nl__bool__18 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(132));
#line 1209
c_rt_lib0clear(&___nl__im__19);
#line 1209
___nl__bool__18 = !___nl__bool__18;
#line 1209
___nl__bool__18 = !___nl__bool__18;
#line 1209
if(___nl__bool__18){ goto label_37;}
#line 1209
c_rt_lib0move(&___nl__im__21, c_rt_lib0array_mk(0));
#line 1209
nl_die_arg(___nl__im__21);
#line 1209
goto label_37;
#line 1209
label_37:
;
#line 1209
//clear ___nl__bool__18;
#line 1209
c_rt_lib0clear(&___nl__im__21);
#line 1210
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(568)));
#line 1210
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__23));
#line 1210
c_rt_lib0clear(&___nl__im__23);
#line 1210
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__22));
#line 1210
c_rt_lib0clear(&___nl__im__22);
#line 1211
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(224)));
#line 1211
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__25));
#line 1211
c_rt_lib0clear(&___nl__im__25);
#line 1211
c_rt_lib0delete(array0push(&___nl__im__5, ___nl__im__24));
#line 1211
c_rt_lib0clear(&___nl__im__24);
#line 1211
c_rt_lib0clear(&___nl__im__11);
#line 1212
___nl__int__12 = ___nl__int__12 + ___nl__int__13;
#line 1212
goto label_20;
#line 1212
label_53:
;
#line 1213
c_rt_lib0move(&___nl__im__27,___get_global_string_const(594));
#line 1213
c_rt_lib0move(&___nl__im__26, generator_c_priv0get_fun_lib(___nl__im__27, ___nl__im__5));
#line 1213
c_rt_lib0clear(&___nl__im__27);
#line 1214
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1214
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__29, ___nl__im__26));
#line 1214
c_rt_lib0clear(&___nl__im__29);
#line 1214
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__28));
#line 1214
c_rt_lib0clear(&___nl__im__28);
#line 1215
goto label_155;
#line 1215
label_63:
;
#line 1215
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1215
c_rt_lib0move(&___nl__im__30, c_rt_lib0hash_get_value_dec(___nl__im__31, ___get_global_string_const(205)));
#line 1215
c_rt_lib0clear(&___nl__im__31);
#line 1215
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__30, ___get_global_string_const(551));
#line 1215
c_rt_lib0clear(&___nl__im__30);
#line 1215
___nl__bool__2 = !___nl__bool__2;
#line 1215
if(___nl__bool__2){ goto label_151;}
#line 1216
c_rt_lib0move(&___nl__im__32, c_rt_lib0array_mk(0));
#line 1217
c_rt_lib0move(&___nl__im__33, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(74)));
#line 1217
___nl__int__35 = 0;
#line 1217
___nl__int__36 = 1;
#line 1217
___nl__int__37 = c_rt_lib0array_len(___nl__im__33);
#line 1217
label_76:
;
#line 1217
___nl__int__39 = ___nl__int__35 >= ___nl__int__37;
#line 1217
___nl__bool__38 = ___nl__int__39;
#line 1217
if(___nl__bool__38){ goto label_140;}
#line 1217
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_get(___nl__im__33, ___nl__int__35));
#line 1217
c_rt_lib0copy(&___nl__im__34, ___nl__im__40);
#line 1218
c_rt_lib0move(&___nl__im__44, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1218
c_rt_lib0move(&___nl__im__43, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__44));
#line 1218
c_rt_lib0clear(&___nl__im__44);
#line 1218
c_rt_lib0move(&___nl__im__45,___get_global_string_const(111));
#line 1218
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__45));
#line 1218
c_rt_lib0clear(&___nl__im__43);
#line 1218
c_rt_lib0clear(&___nl__im__45);
#line 1218
c_rt_lib0move(&___nl__im__47, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(568)));
#line 1218
c_rt_lib0move(&___nl__im__46, generator_c_priv0get_field_name(___nl__im__47));
#line 1218
c_rt_lib0clear(&___nl__im__47);
#line 1218
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__46));
#line 1218
c_rt_lib0clear(&___nl__im__42);
#line 1218
c_rt_lib0clear(&___nl__im__46);
#line 1219
c_rt_lib0move(&___nl__im__49, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(224)));
#line 1219
c_rt_lib0move(&___nl__im__48, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__49));
#line 1219
c_rt_lib0clear(&___nl__im__49);
#line 1220
c_rt_lib0move(&___nl__im__52, c_rt_lib0hash_get_value_dec(___nl__im__34, ___get_global_string_const(224)));
#line 1220
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__52, ___get_global_string_const(205)));
#line 1220
c_rt_lib0clear(&___nl__im__52);
#line 1220
___nl__bool__50 = c_rt_lib0priv_is(___nl__im__51, ___get_global_string_const(132));
#line 1220
c_rt_lib0clear(&___nl__im__51);
#line 1220
___nl__bool__50 = !___nl__bool__50;
#line 1220
if(___nl__bool__50){ goto label_126;}
#line 1221
c_rt_lib0move(&___nl__im__54,___get_global_string_const(584));
#line 1221
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__41, ___nl__im__54));
#line 1221
c_rt_lib0clear(&___nl__im__54);
#line 1221
c_rt_lib0array_push(&___nl__im__32, ___nl__im__53);
#line 1221
c_rt_lib0clear(&___nl__im__53);
#line 1222
c_rt_lib0move(&___nl__im__56,___get_global_string_const(453));
#line 1222
c_rt_lib0move(&___nl__im__60,___get_global_string_const(595));
#line 1222
c_rt_lib0move(&___nl__im__59, c_rt_lib0concat_new(___nl__im__60, ___nl__im__41));
#line 1222
c_rt_lib0clear(&___nl__im__60);
#line 1222
c_rt_lib0move(&___nl__im__61,___get_global_string_const(320));
#line 1222
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__61));
#line 1222
c_rt_lib0clear(&___nl__im__59);
#line 1222
c_rt_lib0clear(&___nl__im__61);
#line 1222
c_rt_lib0move(&___nl__im__57, c_rt_lib0array_mk(2, ___nl__im__58, ___nl__im__48));
#line 1222
c_rt_lib0clear(&___nl__im__58);
#line 1222
c_rt_lib0move(&___nl__im__55, generator_c_priv0get_fun_lib(___nl__im__56, ___nl__im__57));
#line 1222
c_rt_lib0clear(&___nl__im__56);
#line 1222
c_rt_lib0clear(&___nl__im__57);
#line 1222
c_rt_lib0array_push(&___nl__im__32, ___nl__im__55);
#line 1222
c_rt_lib0clear(&___nl__im__55);
#line 1223
goto label_135;
#line 1223
label_126:
;
#line 1224
c_rt_lib0move(&___nl__im__64,___get_global_string_const(562));
#line 1224
c_rt_lib0move(&___nl__im__63, c_rt_lib0concat_new(___nl__im__41, ___nl__im__64));
#line 1224
c_rt_lib0clear(&___nl__im__64);
#line 1224
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__48));
#line 1224
c_rt_lib0clear(&___nl__im__63);
#line 1224
c_rt_lib0array_push(&___nl__im__32, ___nl__im__62);
#line 1224
c_rt_lib0clear(&___nl__im__62);
#line 1225
goto label_135;
#line 1225
label_135:
;
#line 1225
//clear ___nl__bool__50;
#line 1225
c_rt_lib0clear(&___nl__im__34);
#line 1226
___nl__int__35 = ___nl__int__35 + ___nl__int__36;
#line 1226
goto label_76;
#line 1226
label_140:
;
#line 1227
c_rt_lib0move(&___nl__im__67,___get_global_string_const(440));
#line 1227
c_rt_lib0move(&___nl__im__68, string0lf());
#line 1227
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__68));
#line 1227
c_rt_lib0clear(&___nl__im__67);
#line 1227
c_rt_lib0clear(&___nl__im__68);
#line 1227
c_rt_lib0move(&___nl__im__65, array0join(___nl__im__66, ___nl__im__32));
#line 1227
c_rt_lib0clear(&___nl__im__66);
#line 1227
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__65));
#line 1227
c_rt_lib0clear(&___nl__im__65);
#line 1228
goto label_155;
#line 1228
label_151:
;
#line 1229
c_rt_lib0move(&___nl__im__69, c_rt_lib0array_mk(0));
#line 1229
nl_die_arg(___nl__im__69);
#line 1230
goto label_155;
#line 1230
label_155:
;
#line 1230
//clear ___nl__bool__2;
#line 1230
c_rt_lib0clear(&___nl__im__5);
#line 1230
c_rt_lib0clear(&___nl__im__10);
#line 1230
c_rt_lib0clear(&___nl__im__11);
#line 1230
//clear ___nl__int__12;
#line 1230
//clear ___nl__int__13;
#line 1230
//clear ___nl__int__14;
#line 1230
//clear ___nl__bool__15;
#line 1230
//clear ___nl__int__16;
#line 1230
c_rt_lib0clear(&___nl__im__17);
#line 1230
c_rt_lib0clear(&___nl__im__26);
#line 1230
c_rt_lib0clear(&___nl__im__32);
#line 1230
c_rt_lib0clear(&___nl__im__33);
#line 1230
c_rt_lib0clear(&___nl__im__34);
#line 1230
//clear ___nl__int__35;
#line 1230
//clear ___nl__int__36;
#line 1230
//clear ___nl__int__37;
#line 1230
//clear ___nl__bool__38;
#line 1230
//clear ___nl__int__39;
#line 1230
c_rt_lib0clear(&___nl__im__40);
#line 1230
c_rt_lib0clear(&___nl__im__41);
#line 1230
c_rt_lib0clear(&___nl__im__48);
#line 1230
c_rt_lib0clear(&___nl__im__69);
#line 1230
c_rt_lib0clear(&___nl__im__1);
#line 1230
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
#line 1234
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1234
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1234
c_rt_lib0clear(&___nl__im__4);
#line 1234
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(551));
#line 1234
c_rt_lib0clear(&___nl__im__3);
#line 1234
___nl__bool__2 = !___nl__bool__2;
#line 1234
if(___nl__bool__2){ goto label_52;}
#line 1235
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(359)));
#line 1235
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__8));
#line 1235
c_rt_lib0clear(&___nl__im__8);
#line 1235
c_rt_lib0move(&___nl__im__9,___get_global_string_const(596));
#line 1235
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__9));
#line 1235
c_rt_lib0clear(&___nl__im__7);
#line 1235
c_rt_lib0clear(&___nl__im__9);
#line 1235
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1235
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__11));
#line 1235
c_rt_lib0clear(&___nl__im__11);
#line 1235
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 1235
c_rt_lib0clear(&___nl__im__6);
#line 1235
c_rt_lib0clear(&___nl__im__10);
#line 1236
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1236
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__13, ___get_global_string_const(351)));
#line 1236
c_rt_lib0clear(&___nl__im__13);
#line 1236
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(219));
#line 1236
if(___nl__bool__14){ goto label_30;}
#line 1238
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(420));
#line 1238
if(___nl__bool__14){ goto label_35;}
#line 1238
c_rt_lib0move(&___nl__im__15,___get_global_string_const(16));
#line 1238
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 1238
nl_die_arg(___nl__im__15);
#line 1236
label_30:
;
#line 1237
c_rt_lib0move(&___nl__im__16,___get_global_string_const(111));
#line 1237
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__16));
#line 1237
c_rt_lib0clear(&___nl__im__16);
#line 1238
goto label_40;
#line 1238
label_35:
;
#line 1239
c_rt_lib0move(&___nl__im__17,___get_global_string_const(569));
#line 1239
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__17));
#line 1239
c_rt_lib0clear(&___nl__im__17);
#line 1240
goto label_40;
#line 1240
label_40:
;
#line 1241
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(597)));
#line 1241
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_field_name(___nl__im__20));
#line 1241
c_rt_lib0clear(&___nl__im__20);
#line 1241
c_rt_lib0move(&___nl__im__21,___get_global_string_const(320));
#line 1241
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__21));
#line 1241
c_rt_lib0clear(&___nl__im__19);
#line 1241
c_rt_lib0clear(&___nl__im__21);
#line 1241
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__18));
#line 1241
c_rt_lib0clear(&___nl__im__18);
#line 1242
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__5));
#line 1243
goto label_72;
#line 1243
label_52:
;
#line 1243
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1243
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(205)));
#line 1243
c_rt_lib0clear(&___nl__im__23);
#line 1243
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__22, ___get_global_string_const(132));
#line 1243
c_rt_lib0clear(&___nl__im__22);
#line 1243
___nl__bool__2 = !___nl__bool__2;
#line 1243
if(___nl__bool__2){ goto label_68;}
#line 1244
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1244
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(359)));
#line 1244
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(597)));
#line 1244
c_rt_lib0delete(generator_c_priv0print_get_val(___ref___rec__0, ___nl__im__24, ___nl__im__25, ___nl__im__26));
#line 1244
c_rt_lib0clear(&___nl__im__24);
#line 1244
c_rt_lib0clear(&___nl__im__25);
#line 1244
c_rt_lib0clear(&___nl__im__26);
#line 1245
goto label_72;
#line 1245
label_68:
;
#line 1246
c_rt_lib0move(&___nl__im__27, c_rt_lib0array_mk(0));
#line 1246
nl_die_arg(___nl__im__27);
#line 1247
goto label_72;
#line 1247
label_72:
;
#line 1247
//clear ___nl__bool__2;
#line 1247
c_rt_lib0clear(&___nl__im__5);
#line 1247
c_rt_lib0clear(&___nl__im__12);
#line 1247
//clear ___nl__bool__14;
#line 1247
c_rt_lib0clear(&___nl__im__15);
#line 1247
c_rt_lib0clear(&___nl__im__27);
#line 1247
c_rt_lib0clear(&___nl__im__1);
#line 1247
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
#line 1251
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1251
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1251
c_rt_lib0clear(&___nl__im__4);
#line 1251
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(128));
#line 1251
c_rt_lib0clear(&___nl__im__3);
#line 1251
___nl__bool__2 = !___nl__bool__2;
#line 1251
if(___nl__bool__2){ goto label_87;}
#line 1252
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1252
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(205)));
#line 1252
c_rt_lib0clear(&___nl__im__8);
#line 1252
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1252
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(205)));
#line 1252
c_rt_lib0clear(&___nl__im__10);
#line 1252
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(128)));
#line 1252
c_rt_lib0clear(&___nl__im__7);
#line 1252
c_rt_lib0clear(&___nl__im__9);
#line 1252
___nl__bool__5 = generator_c_priv0is_anon(___nl__im__6);
#line 1252
c_rt_lib0clear(&___nl__im__6);
#line 1253
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(359)));
#line 1253
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__15));
#line 1253
c_rt_lib0clear(&___nl__im__15);
#line 1253
c_rt_lib0move(&___nl__im__16,___get_global_string_const(562));
#line 1253
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 1253
c_rt_lib0clear(&___nl__im__14);
#line 1253
c_rt_lib0clear(&___nl__im__16);
#line 1254
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1254
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(205)));
#line 1254
c_rt_lib0clear(&___nl__im__21);
#line 1254
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1254
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(205)));
#line 1254
c_rt_lib0clear(&___nl__im__23);
#line 1254
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(128)));
#line 1254
c_rt_lib0clear(&___nl__im__20);
#line 1254
c_rt_lib0clear(&___nl__im__22);
#line 1254
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_type_name(___nl__im__19));
#line 1254
c_rt_lib0clear(&___nl__im__19);
#line 1254
___nl__im_ptr__25 = &((*___ref___rec__0).mod_name0field);
#line 1254
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1254
___nl__im_ptr__25 = NULL;
#line 1254
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_array_get_fun_name(___nl__im__18, ___nl__im__24, ___nl__bool__5));
#line 1254
c_rt_lib0clear(&___nl__im__18);
#line 1254
c_rt_lib0clear(&___nl__im__24);
#line 1254
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1254
c_rt_lib0clear(&___nl__im__13);
#line 1254
c_rt_lib0clear(&___nl__im__17);
#line 1255
c_rt_lib0move(&___nl__im__26,___get_global_string_const(455));
#line 1255
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__26));
#line 1255
c_rt_lib0clear(&___nl__im__12);
#line 1255
c_rt_lib0clear(&___nl__im__26);
#line 1256
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1256
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(351)));
#line 1256
c_rt_lib0clear(&___nl__im__28);
#line 1256
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(219));
#line 1256
if(___nl__bool__29){ goto label_59;}
#line 1258
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(420));
#line 1258
if(___nl__bool__29){ goto label_64;}
#line 1258
c_rt_lib0move(&___nl__im__30,___get_global_string_const(16));
#line 1258
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__27));
#line 1258
nl_die_arg(___nl__im__30);
#line 1256
label_59:
;
#line 1257
c_rt_lib0move(&___nl__im__31,___get_global_string_const(598));
#line 1257
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__31));
#line 1257
c_rt_lib0clear(&___nl__im__31);
#line 1258
goto label_66;
#line 1258
label_64:
;
#line 1259
goto label_66;
#line 1259
label_66:
;
#line 1260
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1260
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__34));
#line 1260
c_rt_lib0clear(&___nl__im__34);
#line 1260
c_rt_lib0move(&___nl__im__35,___get_global_string_const(326));
#line 1260
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 1260
c_rt_lib0clear(&___nl__im__33);
#line 1260
c_rt_lib0clear(&___nl__im__35);
#line 1260
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__32));
#line 1260
c_rt_lib0clear(&___nl__im__32);
#line 1261
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1261
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__38));
#line 1261
c_rt_lib0clear(&___nl__im__38);
#line 1261
c_rt_lib0move(&___nl__im__39,___get_global_string_const(320));
#line 1261
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 1261
c_rt_lib0clear(&___nl__im__37);
#line 1261
c_rt_lib0clear(&___nl__im__39);
#line 1261
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__36));
#line 1261
c_rt_lib0clear(&___nl__im__36);
#line 1262
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__11));
#line 1263
goto label_125;
#line 1263
label_87:
;
#line 1263
c_rt_lib0move(&___nl__im__41, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1263
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__41, ___get_global_string_const(205)));
#line 1263
c_rt_lib0clear(&___nl__im__41);
#line 1263
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__40, ___get_global_string_const(132));
#line 1263
c_rt_lib0clear(&___nl__im__40);
#line 1263
___nl__bool__2 = !___nl__bool__2;
#line 1263
if(___nl__bool__2){ goto label_121;}
#line 1264
c_rt_lib0move(&___nl__im__43,___get_global_string_const(238));
#line 1264
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(359)));
#line 1264
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__46));
#line 1264
c_rt_lib0clear(&___nl__im__46);
#line 1265
c_rt_lib0move(&___nl__im__48,___get_global_string_const(564));
#line 1265
c_rt_lib0move(&___nl__im__51, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1265
c_rt_lib0move(&___nl__im__50, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__51));
#line 1265
c_rt_lib0clear(&___nl__im__51);
#line 1265
c_rt_lib0move(&___nl__im__53, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1265
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__53));
#line 1265
c_rt_lib0clear(&___nl__im__53);
#line 1265
c_rt_lib0move(&___nl__im__49, c_rt_lib0array_mk(2, ___nl__im__50, ___nl__im__52));
#line 1265
c_rt_lib0clear(&___nl__im__50);
#line 1265
c_rt_lib0clear(&___nl__im__52);
#line 1265
c_rt_lib0move(&___nl__im__47, generator_c_priv0get_fun_lib(___nl__im__48, ___nl__im__49));
#line 1265
c_rt_lib0clear(&___nl__im__48);
#line 1265
c_rt_lib0clear(&___nl__im__49);
#line 1265
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(2, ___nl__im__45, ___nl__im__47));
#line 1265
c_rt_lib0clear(&___nl__im__45);
#line 1265
c_rt_lib0clear(&___nl__im__47);
#line 1265
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_fun_lib(___nl__im__43, ___nl__im__44));
#line 1265
c_rt_lib0clear(&___nl__im__43);
#line 1265
c_rt_lib0clear(&___nl__im__44);
#line 1265
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__42));
#line 1265
c_rt_lib0clear(&___nl__im__42);
#line 1267
goto label_125;
#line 1267
label_121:
;
#line 1268
c_rt_lib0move(&___nl__im__54, c_rt_lib0array_mk(0));
#line 1268
nl_die_arg(___nl__im__54);
#line 1269
goto label_125;
#line 1269
label_125:
;
#line 1269
//clear ___nl__bool__2;
#line 1269
//clear ___nl__bool__5;
#line 1269
c_rt_lib0clear(&___nl__im__11);
#line 1269
c_rt_lib0clear(&___nl__im__27);
#line 1269
//clear ___nl__bool__29;
#line 1269
c_rt_lib0clear(&___nl__im__30);
#line 1269
c_rt_lib0clear(&___nl__im__54);
#line 1269
c_rt_lib0clear(&___nl__im__1);
#line 1269
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
#line 1273
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1273
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1273
c_rt_lib0clear(&___nl__im__4);
#line 1273
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(129));
#line 1273
c_rt_lib0clear(&___nl__im__3);
#line 1273
___nl__bool__2 = !___nl__bool__2;
#line 1273
if(___nl__bool__2){ goto label_103;}
#line 1274
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1274
c_rt_lib0move(&___nl__im__7, c_rt_lib0hash_get_value_dec(___nl__im__8, ___get_global_string_const(205)));
#line 1274
c_rt_lib0clear(&___nl__im__8);
#line 1274
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1274
c_rt_lib0move(&___nl__im__9, c_rt_lib0hash_get_value_dec(___nl__im__10, ___get_global_string_const(205)));
#line 1274
c_rt_lib0clear(&___nl__im__10);
#line 1274
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__9, ___get_global_string_const(129)));
#line 1274
c_rt_lib0clear(&___nl__im__7);
#line 1274
c_rt_lib0clear(&___nl__im__9);
#line 1274
___nl__bool__5 = generator_c_priv0is_anon(___nl__im__6);
#line 1274
c_rt_lib0clear(&___nl__im__6);
#line 1275
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(359)));
#line 1275
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__15));
#line 1275
c_rt_lib0clear(&___nl__im__15);
#line 1275
c_rt_lib0move(&___nl__im__16,___get_global_string_const(562));
#line 1275
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__16));
#line 1275
c_rt_lib0clear(&___nl__im__14);
#line 1275
c_rt_lib0clear(&___nl__im__16);
#line 1276
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1276
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__21, ___get_global_string_const(205)));
#line 1276
c_rt_lib0clear(&___nl__im__21);
#line 1276
c_rt_lib0move(&___nl__im__23, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1276
c_rt_lib0move(&___nl__im__22, c_rt_lib0hash_get_value_dec(___nl__im__23, ___get_global_string_const(205)));
#line 1276
c_rt_lib0clear(&___nl__im__23);
#line 1276
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__22, ___get_global_string_const(129)));
#line 1276
c_rt_lib0clear(&___nl__im__20);
#line 1276
c_rt_lib0clear(&___nl__im__22);
#line 1276
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_type_name(___nl__im__19));
#line 1276
c_rt_lib0clear(&___nl__im__19);
#line 1276
___nl__im_ptr__25 = &((*___ref___rec__0).mod_name0field);
#line 1276
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1276
___nl__im_ptr__25 = NULL;
#line 1276
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_hash_get_fun_name(___nl__im__18, ___nl__im__24, ___nl__bool__5));
#line 1276
c_rt_lib0clear(&___nl__im__18);
#line 1276
c_rt_lib0clear(&___nl__im__24);
#line 1276
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1276
c_rt_lib0clear(&___nl__im__13);
#line 1276
c_rt_lib0clear(&___nl__im__17);
#line 1277
c_rt_lib0move(&___nl__im__26,___get_global_string_const(455));
#line 1277
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__26));
#line 1277
c_rt_lib0clear(&___nl__im__12);
#line 1277
c_rt_lib0clear(&___nl__im__26);
#line 1278
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1278
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__28, ___get_global_string_const(351)));
#line 1278
c_rt_lib0clear(&___nl__im__28);
#line 1278
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(219));
#line 1278
if(___nl__bool__29){ goto label_59;}
#line 1280
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__27, ___get_global_string_const(420));
#line 1280
if(___nl__bool__29){ goto label_64;}
#line 1280
c_rt_lib0move(&___nl__im__30,___get_global_string_const(16));
#line 1280
c_rt_lib0move(&___nl__im__30, c_rt_lib0array_mk(2, ___nl__im__30, ___nl__im__27));
#line 1280
nl_die_arg(___nl__im__30);
#line 1278
label_59:
;
#line 1279
c_rt_lib0move(&___nl__im__31,___get_global_string_const(598));
#line 1279
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__31));
#line 1279
c_rt_lib0clear(&___nl__im__31);
#line 1280
goto label_66;
#line 1280
label_64:
;
#line 1281
goto label_66;
#line 1281
label_66:
;
#line 1282
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1282
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__34));
#line 1282
c_rt_lib0clear(&___nl__im__34);
#line 1282
c_rt_lib0move(&___nl__im__35,___get_global_string_const(326));
#line 1282
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__35));
#line 1282
c_rt_lib0clear(&___nl__im__33);
#line 1282
c_rt_lib0clear(&___nl__im__35);
#line 1282
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__32));
#line 1282
c_rt_lib0clear(&___nl__im__32);
#line 1283
c_rt_lib0move(&___nl__im__38, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(361)));
#line 1283
c_rt_lib0move(&___nl__im__37, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__38));
#line 1283
c_rt_lib0clear(&___nl__im__38);
#line 1283
c_rt_lib0move(&___nl__im__39,___get_global_string_const(326));
#line 1283
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__39));
#line 1283
c_rt_lib0clear(&___nl__im__37);
#line 1283
c_rt_lib0clear(&___nl__im__39);
#line 1283
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__36));
#line 1283
c_rt_lib0clear(&___nl__im__36);
#line 1284
c_rt_lib0move(&___nl__im__43, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(599)));
#line 1284
___nl__bool__42 = c_rt_lib0check_true_native(___nl__im__43);
#line 1284
c_rt_lib0clear(&___nl__im__43);
#line 1284
if(___nl__bool__42){ goto label_91;}
#line 1284
c_rt_lib0move(&___nl__im__41,___get_global_string_const(573));
#line 1284
goto label_93;
#line 1284
label_91:
;
#line 1284
c_rt_lib0move(&___nl__im__41,___get_global_string_const(572));
#line 1284
label_93:
;
#line 1284
//clear ___nl__bool__42;
#line 1284
c_rt_lib0move(&___nl__im__44,___get_global_string_const(320));
#line 1284
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1284
c_rt_lib0clear(&___nl__im__41);
#line 1284
c_rt_lib0clear(&___nl__im__44);
#line 1284
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_add(___nl__im__11, ___nl__im__40));
#line 1284
c_rt_lib0clear(&___nl__im__40);
#line 1285
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__11));
#line 1286
goto label_116;
#line 1286
label_103:
;
#line 1286
c_rt_lib0move(&___nl__im__46, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1286
c_rt_lib0move(&___nl__im__45, c_rt_lib0hash_get_value_dec(___nl__im__46, ___get_global_string_const(205)));
#line 1286
c_rt_lib0clear(&___nl__im__46);
#line 1286
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__45, ___get_global_string_const(132));
#line 1286
c_rt_lib0clear(&___nl__im__45);
#line 1286
___nl__bool__2 = !___nl__bool__2;
#line 1286
if(___nl__bool__2){ goto label_112;}
#line 1287
goto label_116;
#line 1287
label_112:
;
#line 1288
c_rt_lib0move(&___nl__im__47, c_rt_lib0array_mk(0));
#line 1288
nl_die_arg(___nl__im__47);
#line 1289
goto label_116;
#line 1289
label_116:
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
c_rt_lib0clear(&___nl__im__47);
#line 1289
c_rt_lib0clear(&___nl__im__1);
#line 1289
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
ImmT  ___nl__im__14 = NULL;
INT  ___nl__int__15 = 0;
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
#line 1293
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1293
c_rt_lib0move(&___nl__im__2, generator_c_priv0get_access_op(___nl__im__3));
#line 1293
c_rt_lib0clear(&___nl__im__3);
#line 1294
c_rt_lib0move(&___nl__im__10,___get_global_string_const(600));
#line 1294
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1294
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__12));
#line 1294
c_rt_lib0clear(&___nl__im__12);
#line 1294
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 1294
c_rt_lib0clear(&___nl__im__10);
#line 1294
c_rt_lib0clear(&___nl__im__11);
#line 1294
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__2));
#line 1294
c_rt_lib0clear(&___nl__im__9);
#line 1294
c_rt_lib0move(&___nl__im__13,___get_global_string_const(601));
#line 1294
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__13));
#line 1294
c_rt_lib0clear(&___nl__im__8);
#line 1294
c_rt_lib0clear(&___nl__im__13);
#line 1294
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(558)));
#line 1294
___nl__int__15 = getIntFromImm(___nl__im__16);
#line 1294
c_rt_lib0clear(&___nl__im__16);
#line 1294
c_rt_lib0move(&___nl__im__17, c_rt_lib0int_new(___nl__int__15));
#line 1294
c_rt_lib0move(&___nl__im__14, ptd0int_to_string(___nl__im__17));
#line 1294
//clear ___nl__int__15;
#line 1294
c_rt_lib0clear(&___nl__im__17);
#line 1294
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__14));
#line 1294
c_rt_lib0clear(&___nl__im__7);
#line 1294
c_rt_lib0clear(&___nl__im__14);
#line 1294
c_rt_lib0move(&___nl__im__18,___get_global_string_const(602));
#line 1294
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__18));
#line 1294
c_rt_lib0clear(&___nl__im__6);
#line 1294
c_rt_lib0clear(&___nl__im__18);
#line 1294
c_rt_lib0move(&___nl__im__19, string0lf());
#line 1294
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__19));
#line 1294
c_rt_lib0clear(&___nl__im__5);
#line 1294
c_rt_lib0clear(&___nl__im__19);
#line 1295
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(359)));
#line 1295
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__24));
#line 1295
c_rt_lib0clear(&___nl__im__24);
#line 1295
c_rt_lib0move(&___nl__im__25,___get_global_string_const(562));
#line 1295
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__25));
#line 1295
c_rt_lib0clear(&___nl__im__23);
#line 1295
c_rt_lib0clear(&___nl__im__25);
#line 1295
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(358)));
#line 1295
c_rt_lib0move(&___nl__im__26, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__27));
#line 1295
c_rt_lib0clear(&___nl__im__27);
#line 1295
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 1295
c_rt_lib0clear(&___nl__im__22);
#line 1295
c_rt_lib0clear(&___nl__im__26);
#line 1295
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__2));
#line 1295
c_rt_lib0clear(&___nl__im__21);
#line 1295
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__20));
#line 1295
c_rt_lib0clear(&___nl__im__20);
#line 1296
c_rt_lib0move(&___nl__im__29,___get_global_string_const(561));
#line 1296
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(571)));
#line 1296
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_case_name(___nl__im__31));
#line 1296
c_rt_lib0clear(&___nl__im__31);
#line 1296
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 1296
c_rt_lib0clear(&___nl__im__29);
#line 1296
c_rt_lib0clear(&___nl__im__30);
#line 1296
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__28));
#line 1296
c_rt_lib0clear(&___nl__im__28);
#line 1297
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__4));
#line 1297
c_rt_lib0clear(&___nl__im__1);
#line 1297
c_rt_lib0clear(&___nl__im__2);
#line 1297
c_rt_lib0clear(&___nl__im__4);
#line 1297
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
#line 1301
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1301
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1301
c_rt_lib0clear(&___nl__im__4);
#line 1301
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(132));
#line 1301
c_rt_lib0clear(&___nl__im__3);
#line 1301
___nl__bool__2 = !___nl__bool__2;
#line 1301
if(___nl__bool__2){ goto label_23;}
#line 1303
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1304
c_rt_lib0move(&___nl__im__7,___get_global_string_const(269));
#line 1305
c_rt_lib0move(&___nl__im__8,___get_global_string_const(270));
#line 1306
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1306
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(224), ___nl__im__11));
#line 1306
c_rt_lib0clear(&___nl__im__11);
#line 1306
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1306
c_rt_lib0clear(&___nl__im__10);
#line 1306
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(223), ___nl__im__6, ___get_global_string_const(266), ___nl__im__7, ___get_global_string_const(268), ___nl__im__8, ___get_global_string_const(265), ___nl__im__9));
#line 1306
c_rt_lib0clear(&___nl__im__6);
#line 1306
c_rt_lib0clear(&___nl__im__7);
#line 1306
c_rt_lib0clear(&___nl__im__8);
#line 1306
c_rt_lib0clear(&___nl__im__9);
#line 1306
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1306
c_rt_lib0clear(&___nl__im__5);
#line 1308
goto label_72;
#line 1308
label_23:
;
#line 1309
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1309
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(205)));
#line 1309
c_rt_lib0clear(&___nl__im__15);
#line 1309
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1309
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(205)));
#line 1309
c_rt_lib0clear(&___nl__im__17);
#line 1309
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(129)));
#line 1309
c_rt_lib0clear(&___nl__im__14);
#line 1309
c_rt_lib0clear(&___nl__im__16);
#line 1309
___nl__bool__12 = generator_c_priv0is_anon(___nl__im__13);
#line 1309
c_rt_lib0clear(&___nl__im__13);
#line 1310
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1310
c_rt_lib0move(&___nl__im__24, c_rt_lib0hash_get_value_dec(___nl__im__25, ___get_global_string_const(205)));
#line 1310
c_rt_lib0clear(&___nl__im__25);
#line 1310
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1310
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(205)));
#line 1310
c_rt_lib0clear(&___nl__im__27);
#line 1310
c_rt_lib0move(&___nl__im__23, c_rt_lib0priv_as(___nl__im__26, ___get_global_string_const(129)));
#line 1310
c_rt_lib0clear(&___nl__im__24);
#line 1310
c_rt_lib0clear(&___nl__im__26);
#line 1310
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_type_name(___nl__im__23));
#line 1310
c_rt_lib0clear(&___nl__im__23);
#line 1310
___nl__im_ptr__29 = &((*___ref___rec__0).mod_name0field);
#line 1310
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1310
___nl__im_ptr__29 = NULL;
#line 1310
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__22, ___nl__im__28, ___nl__bool__12));
#line 1310
c_rt_lib0clear(&___nl__im__22);
#line 1310
c_rt_lib0clear(&___nl__im__28);
#line 1311
c_rt_lib0move(&___nl__im__30,___get_global_string_const(455));
#line 1311
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__30));
#line 1311
c_rt_lib0clear(&___nl__im__21);
#line 1311
c_rt_lib0clear(&___nl__im__30);
#line 1311
c_rt_lib0move(&___nl__im__32, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1311
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__32));
#line 1311
c_rt_lib0clear(&___nl__im__32);
#line 1311
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__31));
#line 1311
c_rt_lib0clear(&___nl__im__20);
#line 1311
c_rt_lib0clear(&___nl__im__31);
#line 1311
c_rt_lib0move(&___nl__im__33,___get_global_string_const(603));
#line 1311
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__33));
#line 1311
c_rt_lib0clear(&___nl__im__19);
#line 1311
c_rt_lib0clear(&___nl__im__33);
#line 1312
c_rt_lib0move(&___nl__im__35, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1312
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__35, ___nl__im__18));
#line 1312
c_rt_lib0clear(&___nl__im__35);
#line 1312
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__34));
#line 1312
c_rt_lib0clear(&___nl__im__34);
#line 1313
goto label_72;
#line 1313
label_72:
;
#line 1313
//clear ___nl__bool__2;
#line 1313
//clear ___nl__bool__12;
#line 1313
c_rt_lib0clear(&___nl__im__18);
#line 1313
c_rt_lib0clear(&___nl__im__1);
#line 1313
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
#line 1317
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1317
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1317
c_rt_lib0clear(&___nl__im__4);
#line 1317
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(132));
#line 1317
c_rt_lib0clear(&___nl__im__3);
#line 1317
___nl__bool__2 = !___nl__bool__2;
#line 1317
if(___nl__bool__2){ goto label_23;}
#line 1319
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1320
c_rt_lib0move(&___nl__im__7,___get_global_string_const(269));
#line 1321
c_rt_lib0move(&___nl__im__8,___get_global_string_const(273));
#line 1322
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1322
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(224), ___nl__im__11));
#line 1322
c_rt_lib0clear(&___nl__im__11);
#line 1322
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1322
c_rt_lib0clear(&___nl__im__10);
#line 1322
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(223), ___nl__im__6, ___get_global_string_const(266), ___nl__im__7, ___get_global_string_const(268), ___nl__im__8, ___get_global_string_const(265), ___nl__im__9));
#line 1322
c_rt_lib0clear(&___nl__im__6);
#line 1322
c_rt_lib0clear(&___nl__im__7);
#line 1322
c_rt_lib0clear(&___nl__im__8);
#line 1322
c_rt_lib0clear(&___nl__im__9);
#line 1322
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1322
c_rt_lib0clear(&___nl__im__5);
#line 1324
goto label_82;
#line 1324
label_23:
;
#line 1325
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1325
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__15, ___get_global_string_const(205)));
#line 1325
c_rt_lib0clear(&___nl__im__15);
#line 1325
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1325
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__17, ___get_global_string_const(205)));
#line 1325
c_rt_lib0clear(&___nl__im__17);
#line 1325
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__16, ___get_global_string_const(129)));
#line 1325
c_rt_lib0clear(&___nl__im__14);
#line 1325
c_rt_lib0clear(&___nl__im__16);
#line 1325
___nl__bool__12 = generator_c_priv0is_anon(___nl__im__13);
#line 1325
c_rt_lib0clear(&___nl__im__13);
#line 1326
c_rt_lib0move(&___nl__im__27, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1326
c_rt_lib0move(&___nl__im__26, c_rt_lib0hash_get_value_dec(___nl__im__27, ___get_global_string_const(205)));
#line 1326
c_rt_lib0clear(&___nl__im__27);
#line 1326
c_rt_lib0move(&___nl__im__29, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1326
c_rt_lib0move(&___nl__im__28, c_rt_lib0hash_get_value_dec(___nl__im__29, ___get_global_string_const(205)));
#line 1326
c_rt_lib0clear(&___nl__im__29);
#line 1326
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__28, ___get_global_string_const(129)));
#line 1326
c_rt_lib0clear(&___nl__im__26);
#line 1326
c_rt_lib0clear(&___nl__im__28);
#line 1326
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_type_name(___nl__im__25));
#line 1326
c_rt_lib0clear(&___nl__im__25);
#line 1326
___nl__im_ptr__31 = &((*___ref___rec__0).mod_name0field);
#line 1326
c_rt_lib0copy(&___nl__im__30, (*___nl__im_ptr__31));
#line 1326
___nl__im_ptr__31 = NULL;
#line 1326
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__24, ___nl__im__30, ___nl__bool__12));
#line 1326
c_rt_lib0clear(&___nl__im__24);
#line 1326
c_rt_lib0clear(&___nl__im__30);
#line 1327
c_rt_lib0move(&___nl__im__32,___get_global_string_const(455));
#line 1327
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__32));
#line 1327
c_rt_lib0clear(&___nl__im__23);
#line 1327
c_rt_lib0clear(&___nl__im__32);
#line 1327
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1327
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__34));
#line 1327
c_rt_lib0clear(&___nl__im__34);
#line 1327
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__33));
#line 1327
c_rt_lib0clear(&___nl__im__22);
#line 1327
c_rt_lib0clear(&___nl__im__33);
#line 1327
c_rt_lib0move(&___nl__im__35,___get_global_string_const(326));
#line 1327
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__35));
#line 1327
c_rt_lib0clear(&___nl__im__21);
#line 1327
c_rt_lib0clear(&___nl__im__35);
#line 1328
c_rt_lib0move(&___nl__im__37, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1328
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__37));
#line 1328
c_rt_lib0clear(&___nl__im__37);
#line 1328
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__36));
#line 1328
c_rt_lib0clear(&___nl__im__20);
#line 1328
c_rt_lib0clear(&___nl__im__36);
#line 1328
c_rt_lib0move(&___nl__im__38,___get_global_string_const(320));
#line 1328
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__38));
#line 1328
c_rt_lib0clear(&___nl__im__19);
#line 1328
c_rt_lib0clear(&___nl__im__38);
#line 1329
c_rt_lib0move(&___nl__im__40, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1329
c_rt_lib0move(&___nl__im__39, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__40, ___nl__im__18));
#line 1329
c_rt_lib0clear(&___nl__im__40);
#line 1329
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__39));
#line 1329
c_rt_lib0clear(&___nl__im__39);
#line 1330
goto label_82;
#line 1330
label_82:
;
#line 1330
//clear ___nl__bool__2;
#line 1330
//clear ___nl__bool__12;
#line 1330
c_rt_lib0clear(&___nl__im__18);
#line 1330
c_rt_lib0clear(&___nl__im__1);
#line 1330
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
#line 1334
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1334
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1334
c_rt_lib0clear(&___nl__im__4);
#line 1334
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(132));
#line 1334
c_rt_lib0clear(&___nl__im__3);
#line 1334
___nl__bool__2 = !___nl__bool__2;
#line 1334
if(___nl__bool__2){ goto label_23;}
#line 1336
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1337
c_rt_lib0move(&___nl__im__7,___get_global_string_const(269));
#line 1338
c_rt_lib0move(&___nl__im__8,___get_global_string_const(272));
#line 1339
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1339
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(224), ___nl__im__11));
#line 1339
c_rt_lib0clear(&___nl__im__11);
#line 1339
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1339
c_rt_lib0clear(&___nl__im__10);
#line 1339
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(223), ___nl__im__6, ___get_global_string_const(266), ___nl__im__7, ___get_global_string_const(268), ___nl__im__8, ___get_global_string_const(265), ___nl__im__9));
#line 1339
c_rt_lib0clear(&___nl__im__6);
#line 1339
c_rt_lib0clear(&___nl__im__7);
#line 1339
c_rt_lib0clear(&___nl__im__8);
#line 1339
c_rt_lib0clear(&___nl__im__9);
#line 1339
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1339
c_rt_lib0clear(&___nl__im__5);
#line 1341
goto label_53;
#line 1341
label_23:
;
#line 1342
c_rt_lib0move(&___nl__im__16, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1342
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__16));
#line 1342
c_rt_lib0clear(&___nl__im__16);
#line 1342
c_rt_lib0move(&___nl__im__17,___get_global_string_const(604));
#line 1342
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__17));
#line 1342
c_rt_lib0clear(&___nl__im__15);
#line 1342
c_rt_lib0clear(&___nl__im__17);
#line 1342
c_rt_lib0move(&___nl__im__19, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1342
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__19));
#line 1342
c_rt_lib0clear(&___nl__im__19);
#line 1342
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__18));
#line 1342
c_rt_lib0clear(&___nl__im__14);
#line 1342
c_rt_lib0clear(&___nl__im__18);
#line 1342
c_rt_lib0move(&___nl__im__20,___get_global_string_const(315));
#line 1342
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__20));
#line 1342
c_rt_lib0clear(&___nl__im__13);
#line 1342
c_rt_lib0clear(&___nl__im__20);
#line 1343
c_rt_lib0move(&___nl__im__22,___get_global_string_const(453));
#line 1343
c_rt_lib0move(&___nl__im__25, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1343
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__25));
#line 1343
c_rt_lib0clear(&___nl__im__25);
#line 1343
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__12));
#line 1343
c_rt_lib0clear(&___nl__im__24);
#line 1343
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_fun_lib(___nl__im__22, ___nl__im__23));
#line 1343
c_rt_lib0clear(&___nl__im__22);
#line 1343
c_rt_lib0clear(&___nl__im__23);
#line 1343
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__21));
#line 1343
c_rt_lib0clear(&___nl__im__21);
#line 1344
goto label_53;
#line 1344
label_53:
;
#line 1344
//clear ___nl__bool__2;
#line 1344
c_rt_lib0clear(&___nl__im__12);
#line 1344
c_rt_lib0clear(&___nl__im__1);
#line 1344
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
#line 1348
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(129)));
#line 1348
c_rt_lib0move(&___nl__im__3, c_rt_lib0hash_get_value_dec(___nl__im__4, ___get_global_string_const(205)));
#line 1348
c_rt_lib0clear(&___nl__im__4);
#line 1348
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__3, ___get_global_string_const(132));
#line 1348
c_rt_lib0clear(&___nl__im__3);
#line 1348
___nl__bool__2 = !___nl__bool__2;
#line 1348
if(___nl__bool__2){ goto label_23;}
#line 1350
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1351
c_rt_lib0move(&___nl__im__7,___get_global_string_const(269));
#line 1352
c_rt_lib0move(&___nl__im__8,___get_global_string_const(271));
#line 1353
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1353
c_rt_lib0move(&___nl__im__10, c_rt_lib0ov_mk_arg(___get_global_string_const(224), ___nl__im__11));
#line 1353
c_rt_lib0clear(&___nl__im__11);
#line 1353
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__10));
#line 1353
c_rt_lib0clear(&___nl__im__10);
#line 1353
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_mk(4, ___get_global_string_const(223), ___nl__im__6, ___get_global_string_const(266), ___nl__im__7, ___get_global_string_const(268), ___nl__im__8, ___get_global_string_const(265), ___nl__im__9));
#line 1353
c_rt_lib0clear(&___nl__im__6);
#line 1353
c_rt_lib0clear(&___nl__im__7);
#line 1353
c_rt_lib0clear(&___nl__im__8);
#line 1353
c_rt_lib0clear(&___nl__im__9);
#line 1353
c_rt_lib0delete(generator_c_priv0generate_call(___ref___rec__0, ___nl__im__5));
#line 1353
c_rt_lib0clear(&___nl__im__5);
#line 1355
goto label_37;
#line 1355
label_23:
;
#line 1356
c_rt_lib0move(&___nl__im__14, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(362)));
#line 1356
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__14));
#line 1356
c_rt_lib0clear(&___nl__im__14);
#line 1356
c_rt_lib0move(&___nl__im__15,___get_global_string_const(605));
#line 1356
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1356
c_rt_lib0clear(&___nl__im__13);
#line 1356
c_rt_lib0clear(&___nl__im__15);
#line 1357
c_rt_lib0move(&___nl__im__17, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1357
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__17, ___nl__im__12));
#line 1357
c_rt_lib0clear(&___nl__im__17);
#line 1357
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__16));
#line 1357
c_rt_lib0clear(&___nl__im__16);
#line 1358
goto label_37;
#line 1358
label_37:
;
#line 1358
//clear ___nl__bool__2;
#line 1358
c_rt_lib0clear(&___nl__im__12);
#line 1358
c_rt_lib0clear(&___nl__im__1);
#line 1358
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
#line 1363
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(351)));
#line 1363
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(219));
#line 1363
if(___nl__bool__6){ goto label_8;}
#line 1366
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__5, ___get_global_string_const(420));
#line 1366
if(___nl__bool__6){ goto label_23;}
#line 1366
c_rt_lib0move(&___nl__im__7,___get_global_string_const(16));
#line 1366
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__5));
#line 1366
nl_die_arg(___nl__im__7);
#line 1363
label_8:
;
#line 1364
c_rt_lib0move(&___nl__im__8, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(205)));
#line 1365
c_rt_lib0move(&___nl__im__10,___get_global_string_const(567));
#line 1365
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1365
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__3));
#line 1365
c_rt_lib0move(&___nl__im__11, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__13));
#line 1365
c_rt_lib0clear(&___nl__im__12);
#line 1365
c_rt_lib0clear(&___nl__im__13);
#line 1365
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_fun_lib(___nl__im__10, ___nl__im__11));
#line 1365
c_rt_lib0clear(&___nl__im__10);
#line 1365
c_rt_lib0clear(&___nl__im__11);
#line 1365
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_value_from_im(___nl__im__8, ___nl__im__9));
#line 1365
c_rt_lib0clear(&___nl__im__8);
#line 1365
c_rt_lib0clear(&___nl__im__9);
#line 1366
goto label_71;
#line 1366
label_23:
;
#line 1367
c_rt_lib0move(&___nl__im__15, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1367
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__15, ___get_global_string_const(551));
#line 1367
c_rt_lib0clear(&___nl__im__15);
#line 1367
___nl__bool__14 = !___nl__bool__14;
#line 1367
if(___nl__bool__14){ goto label_39;}
#line 1368
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1368
c_rt_lib0move(&___nl__im__18,___get_global_string_const(569));
#line 1368
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__18));
#line 1368
c_rt_lib0clear(&___nl__im__17);
#line 1368
c_rt_lib0clear(&___nl__im__18);
#line 1368
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_field_name(___nl__im__3));
#line 1368
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__16, ___nl__im__19));
#line 1368
c_rt_lib0clear(&___nl__im__16);
#line 1368
c_rt_lib0clear(&___nl__im__19);
#line 1369
goto label_67;
#line 1369
label_39:
;
#line 1369
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1369
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__20, ___get_global_string_const(132));
#line 1369
c_rt_lib0clear(&___nl__im__20);
#line 1369
___nl__bool__14 = !___nl__bool__14;
#line 1369
if(___nl__bool__14){ goto label_63;}
#line 1370
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(205)));
#line 1371
c_rt_lib0move(&___nl__im__23,___get_global_string_const(567));
#line 1371
c_rt_lib0move(&___nl__im__26,___get_global_string_const(373));
#line 1371
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_reg(___ref___rec__0, ___nl__im__1));
#line 1371
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__27));
#line 1371
c_rt_lib0clear(&___nl__im__26);
#line 1371
c_rt_lib0clear(&___nl__im__27);
#line 1371
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_const_string(___ref___rec__0, ___nl__im__3));
#line 1371
c_rt_lib0move(&___nl__im__24, c_rt_lib0array_mk(2, ___nl__im__25, ___nl__im__28));
#line 1371
c_rt_lib0clear(&___nl__im__25);
#line 1371
c_rt_lib0clear(&___nl__im__28);
#line 1371
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_fun_lib(___nl__im__23, ___nl__im__24));
#line 1371
c_rt_lib0clear(&___nl__im__23);
#line 1371
c_rt_lib0clear(&___nl__im__24);
#line 1371
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_value_from_im(___nl__im__21, ___nl__im__22));
#line 1371
c_rt_lib0clear(&___nl__im__21);
#line 1371
c_rt_lib0clear(&___nl__im__22);
#line 1372
goto label_67;
#line 1372
label_63:
;
#line 1373
c_rt_lib0move(&___nl__im__29, c_rt_lib0array_mk(0));
#line 1373
nl_die_arg(___nl__im__29);
#line 1374
goto label_67;
#line 1374
label_67:
;
#line 1374
//clear ___nl__bool__14;
#line 1374
c_rt_lib0clear(&___nl__im__29);
#line 1375
goto label_71;
#line 1375
label_71:
;
#line 1376
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__2, ___nl__im__4));
#line 1376
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__30));
#line 1376
c_rt_lib0clear(&___nl__im__30);
#line 1376
c_rt_lib0clear(&___nl__im__1);
#line 1376
c_rt_lib0clear(&___nl__im__2);
#line 1376
c_rt_lib0clear(&___nl__im__3);
#line 1376
c_rt_lib0clear(&___nl__im__4);
#line 1376
c_rt_lib0clear(&___nl__im__5);
#line 1376
//clear ___nl__bool__6;
#line 1376
c_rt_lib0clear(&___nl__im__7);
#line 1376
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
#line 1380
c_rt_lib0move(&___nl__im__4, nlasm0is_empty(___nl__im__1));
#line 1380
___nl__bool__3 = c_rt_lib0check_true_native(___nl__im__4);
#line 1380
c_rt_lib0clear(&___nl__im__4);
#line 1380
___nl__bool__3 = !___nl__bool__3;
#line 1380
if(___nl__bool__3){ goto label_32;}
#line 1381
c_rt_lib0move(&___nl__im__6, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1381
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__6, ___get_global_string_const(132));
#line 1381
c_rt_lib0clear(&___nl__im__6);
#line 1381
___nl__bool__5 = !___nl__bool__5;
#line 1381
if(___nl__bool__5){ goto label_21;}
#line 1382
c_rt_lib0move(&___nl__im__8,___get_global_string_const(174));
#line 1382
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(1, ___nl__im__2));
#line 1382
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_fun_lib(___nl__im__8, ___nl__im__9));
#line 1382
c_rt_lib0clear(&___nl__im__8);
#line 1382
c_rt_lib0clear(&___nl__im__9);
#line 1382
c_rt_lib0clear(&___nl__im__1);
#line 1382
c_rt_lib0clear(&___nl__im__2);
#line 1382
//clear ___nl__bool__3;
#line 1382
//clear ___nl__bool__5;
#line 1382
return ___nl__im__7;
#line 1383
goto label_28;
#line 1383
label_21:
;
#line 1384
c_rt_lib0clear(&___nl__im__1);
#line 1384
//clear ___nl__bool__3;
#line 1384
//clear ___nl__bool__5;
#line 1384
c_rt_lib0clear(&___nl__im__7);
#line 1384
return ___nl__im__2;
#line 1385
goto label_28;
#line 1385
label_28:
;
#line 1385
//clear ___nl__bool__5;
#line 1385
c_rt_lib0clear(&___nl__im__7);
#line 1386
goto label_239;
#line 1386
label_32:
;
#line 1387
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(205)));
#line 1387
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(132));
#line 1387
if(___nl__bool__11){ goto label_53;}
#line 1389
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(403));
#line 1389
if(___nl__bool__11){ goto label_69;}
#line 1391
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(404));
#line 1391
if(___nl__bool__11){ goto label_86;}
#line 1393
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(34));
#line 1393
if(___nl__bool__11){ goto label_104;}
#line 1395
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(551));
#line 1395
if(___nl__bool__11){ goto label_123;}
#line 1397
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(128));
#line 1397
if(___nl__bool__11){ goto label_147;}
#line 1399
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(554));
#line 1399
if(___nl__bool__11){ goto label_174;}
#line 1401
___nl__bool__11 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(129));
#line 1401
if(___nl__bool__11){ goto label_204;}
#line 1401
c_rt_lib0move(&___nl__im__12,___get_global_string_const(16));
#line 1401
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(2, ___nl__im__12, ___nl__im__10));
#line 1401
nl_die_arg(___nl__im__12);
#line 1387
label_53:
;
#line 1388
c_rt_lib0move(&___nl__im__14,___get_global_string_const(238));
#line 1388
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__1));
#line 1388
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__16, ___nl__im__2));
#line 1388
c_rt_lib0clear(&___nl__im__16);
#line 1388
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_fun_lib(___nl__im__14, ___nl__im__15));
#line 1388
c_rt_lib0clear(&___nl__im__14);
#line 1388
c_rt_lib0clear(&___nl__im__15);
#line 1388
c_rt_lib0clear(&___nl__im__1);
#line 1388
c_rt_lib0clear(&___nl__im__2);
#line 1388
//clear ___nl__bool__3;
#line 1388
c_rt_lib0clear(&___nl__im__10);
#line 1388
//clear ___nl__bool__11;
#line 1388
c_rt_lib0clear(&___nl__im__12);
#line 1388
return ___nl__im__13;
#line 1389
goto label_237;
#line 1389
label_69:
;
#line 1390
c_rt_lib0move(&___nl__im__19, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1390
c_rt_lib0move(&___nl__im__20,___get_global_string_const(562));
#line 1390
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__20));
#line 1390
c_rt_lib0clear(&___nl__im__19);
#line 1390
c_rt_lib0clear(&___nl__im__20);
#line 1390
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__2));
#line 1390
c_rt_lib0clear(&___nl__im__18);
#line 1390
c_rt_lib0clear(&___nl__im__1);
#line 1390
c_rt_lib0clear(&___nl__im__2);
#line 1390
//clear ___nl__bool__3;
#line 1390
c_rt_lib0clear(&___nl__im__10);
#line 1390
//clear ___nl__bool__11;
#line 1390
c_rt_lib0clear(&___nl__im__12);
#line 1390
c_rt_lib0clear(&___nl__im__13);
#line 1390
return ___nl__im__17;
#line 1391
goto label_237;
#line 1391
label_86:
;
#line 1392
c_rt_lib0move(&___nl__im__22,___get_global_string_const(238));
#line 1392
c_rt_lib0move(&___nl__im__24, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__1));
#line 1392
c_rt_lib0move(&___nl__im__23, c_rt_lib0array_mk(2, ___nl__im__24, ___nl__im__2));
#line 1392
c_rt_lib0clear(&___nl__im__24);
#line 1392
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_fun_lib(___nl__im__22, ___nl__im__23));
#line 1392
c_rt_lib0clear(&___nl__im__22);
#line 1392
c_rt_lib0clear(&___nl__im__23);
#line 1392
c_rt_lib0clear(&___nl__im__1);
#line 1392
c_rt_lib0clear(&___nl__im__2);
#line 1392
//clear ___nl__bool__3;
#line 1392
c_rt_lib0clear(&___nl__im__10);
#line 1392
//clear ___nl__bool__11;
#line 1392
c_rt_lib0clear(&___nl__im__12);
#line 1392
c_rt_lib0clear(&___nl__im__13);
#line 1392
c_rt_lib0clear(&___nl__im__17);
#line 1392
return ___nl__im__21;
#line 1393
goto label_237;
#line 1393
label_104:
;
#line 1394
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1394
c_rt_lib0move(&___nl__im__28,___get_global_string_const(562));
#line 1394
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__28));
#line 1394
c_rt_lib0clear(&___nl__im__27);
#line 1394
c_rt_lib0clear(&___nl__im__28);
#line 1394
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__2));
#line 1394
c_rt_lib0clear(&___nl__im__26);
#line 1394
c_rt_lib0clear(&___nl__im__1);
#line 1394
c_rt_lib0clear(&___nl__im__2);
#line 1394
//clear ___nl__bool__3;
#line 1394
c_rt_lib0clear(&___nl__im__10);
#line 1394
//clear ___nl__bool__11;
#line 1394
c_rt_lib0clear(&___nl__im__12);
#line 1394
c_rt_lib0clear(&___nl__im__13);
#line 1394
c_rt_lib0clear(&___nl__im__17);
#line 1394
c_rt_lib0clear(&___nl__im__21);
#line 1394
return ___nl__im__25;
#line 1395
goto label_237;
#line 1395
label_123:
;
#line 1395
c_rt_lib0move(&___nl__im__30, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(551)));
#line 1395
c_rt_lib0copy(&___nl__im__29, ___nl__im__30);
#line 1396
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1396
c_rt_lib0move(&___nl__im__34,___get_global_string_const(562));
#line 1396
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 1396
c_rt_lib0clear(&___nl__im__33);
#line 1396
c_rt_lib0clear(&___nl__im__34);
#line 1396
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__2));
#line 1396
c_rt_lib0clear(&___nl__im__32);
#line 1396
c_rt_lib0clear(&___nl__im__1);
#line 1396
c_rt_lib0clear(&___nl__im__2);
#line 1396
//clear ___nl__bool__3;
#line 1396
c_rt_lib0clear(&___nl__im__10);
#line 1396
//clear ___nl__bool__11;
#line 1396
c_rt_lib0clear(&___nl__im__12);
#line 1396
c_rt_lib0clear(&___nl__im__13);
#line 1396
c_rt_lib0clear(&___nl__im__17);
#line 1396
c_rt_lib0clear(&___nl__im__21);
#line 1396
c_rt_lib0clear(&___nl__im__25);
#line 1396
c_rt_lib0clear(&___nl__im__29);
#line 1396
c_rt_lib0clear(&___nl__im__30);
#line 1396
return ___nl__im__31;
#line 1397
goto label_237;
#line 1397
label_147:
;
#line 1397
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(128)));
#line 1397
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1398
c_rt_lib0move(&___nl__im__39, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1398
c_rt_lib0move(&___nl__im__40,___get_global_string_const(562));
#line 1398
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__40));
#line 1398
c_rt_lib0clear(&___nl__im__39);
#line 1398
c_rt_lib0clear(&___nl__im__40);
#line 1398
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__2));
#line 1398
c_rt_lib0clear(&___nl__im__38);
#line 1398
c_rt_lib0clear(&___nl__im__1);
#line 1398
c_rt_lib0clear(&___nl__im__2);
#line 1398
//clear ___nl__bool__3;
#line 1398
c_rt_lib0clear(&___nl__im__10);
#line 1398
//clear ___nl__bool__11;
#line 1398
c_rt_lib0clear(&___nl__im__12);
#line 1398
c_rt_lib0clear(&___nl__im__13);
#line 1398
c_rt_lib0clear(&___nl__im__17);
#line 1398
c_rt_lib0clear(&___nl__im__21);
#line 1398
c_rt_lib0clear(&___nl__im__25);
#line 1398
c_rt_lib0clear(&___nl__im__29);
#line 1398
c_rt_lib0clear(&___nl__im__30);
#line 1398
c_rt_lib0clear(&___nl__im__31);
#line 1398
c_rt_lib0clear(&___nl__im__35);
#line 1398
c_rt_lib0clear(&___nl__im__36);
#line 1398
return ___nl__im__37;
#line 1399
goto label_237;
#line 1399
label_174:
;
#line 1399
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(554)));
#line 1399
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 1400
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1400
c_rt_lib0move(&___nl__im__46,___get_global_string_const(562));
#line 1400
c_rt_lib0move(&___nl__im__44, c_rt_lib0concat_new(___nl__im__45, ___nl__im__46));
#line 1400
c_rt_lib0clear(&___nl__im__45);
#line 1400
c_rt_lib0clear(&___nl__im__46);
#line 1400
c_rt_lib0move(&___nl__im__43, c_rt_lib0concat_new(___nl__im__44, ___nl__im__2));
#line 1400
c_rt_lib0clear(&___nl__im__44);
#line 1400
c_rt_lib0clear(&___nl__im__1);
#line 1400
c_rt_lib0clear(&___nl__im__2);
#line 1400
//clear ___nl__bool__3;
#line 1400
c_rt_lib0clear(&___nl__im__10);
#line 1400
//clear ___nl__bool__11;
#line 1400
c_rt_lib0clear(&___nl__im__12);
#line 1400
c_rt_lib0clear(&___nl__im__13);
#line 1400
c_rt_lib0clear(&___nl__im__17);
#line 1400
c_rt_lib0clear(&___nl__im__21);
#line 1400
c_rt_lib0clear(&___nl__im__25);
#line 1400
c_rt_lib0clear(&___nl__im__29);
#line 1400
c_rt_lib0clear(&___nl__im__30);
#line 1400
c_rt_lib0clear(&___nl__im__31);
#line 1400
c_rt_lib0clear(&___nl__im__35);
#line 1400
c_rt_lib0clear(&___nl__im__36);
#line 1400
c_rt_lib0clear(&___nl__im__37);
#line 1400
c_rt_lib0clear(&___nl__im__41);
#line 1400
c_rt_lib0clear(&___nl__im__42);
#line 1400
return ___nl__im__43;
#line 1401
goto label_237;
#line 1401
label_204:
;
#line 1401
c_rt_lib0move(&___nl__im__48, c_rt_lib0priv_as(___nl__im__10, ___get_global_string_const(129)));
#line 1401
c_rt_lib0copy(&___nl__im__47, ___nl__im__48);
#line 1402
c_rt_lib0move(&___nl__im__51, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1402
c_rt_lib0move(&___nl__im__52,___get_global_string_const(562));
#line 1402
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__52));
#line 1402
c_rt_lib0clear(&___nl__im__51);
#line 1402
c_rt_lib0clear(&___nl__im__52);
#line 1402
c_rt_lib0move(&___nl__im__49, c_rt_lib0concat_new(___nl__im__50, ___nl__im__2));
#line 1402
c_rt_lib0clear(&___nl__im__50);
#line 1402
c_rt_lib0clear(&___nl__im__1);
#line 1402
c_rt_lib0clear(&___nl__im__2);
#line 1402
//clear ___nl__bool__3;
#line 1402
c_rt_lib0clear(&___nl__im__10);
#line 1402
//clear ___nl__bool__11;
#line 1402
c_rt_lib0clear(&___nl__im__12);
#line 1402
c_rt_lib0clear(&___nl__im__13);
#line 1402
c_rt_lib0clear(&___nl__im__17);
#line 1402
c_rt_lib0clear(&___nl__im__21);
#line 1402
c_rt_lib0clear(&___nl__im__25);
#line 1402
c_rt_lib0clear(&___nl__im__29);
#line 1402
c_rt_lib0clear(&___nl__im__30);
#line 1402
c_rt_lib0clear(&___nl__im__31);
#line 1402
c_rt_lib0clear(&___nl__im__35);
#line 1402
c_rt_lib0clear(&___nl__im__36);
#line 1402
c_rt_lib0clear(&___nl__im__37);
#line 1402
c_rt_lib0clear(&___nl__im__41);
#line 1402
c_rt_lib0clear(&___nl__im__42);
#line 1402
c_rt_lib0clear(&___nl__im__43);
#line 1402
c_rt_lib0clear(&___nl__im__47);
#line 1402
c_rt_lib0clear(&___nl__im__48);
#line 1402
return ___nl__im__49;
#line 1403
goto label_237;
#line 1403
label_237:
;
#line 1404
goto label_239;
#line 1404
label_239:
;
#line 1404
//clear ___nl__bool__3;
#line 1404
c_rt_lib0clear(&___nl__im__10);
#line 1404
//clear ___nl__bool__11;
#line 1404
c_rt_lib0clear(&___nl__im__12);
#line 1404
c_rt_lib0clear(&___nl__im__13);
#line 1404
c_rt_lib0clear(&___nl__im__17);
#line 1404
c_rt_lib0clear(&___nl__im__21);
#line 1404
c_rt_lib0clear(&___nl__im__25);
#line 1404
c_rt_lib0clear(&___nl__im__29);
#line 1404
c_rt_lib0clear(&___nl__im__30);
#line 1404
c_rt_lib0clear(&___nl__im__31);
#line 1404
c_rt_lib0clear(&___nl__im__35);
#line 1404
c_rt_lib0clear(&___nl__im__36);
#line 1404
c_rt_lib0clear(&___nl__im__37);
#line 1404
c_rt_lib0clear(&___nl__im__41);
#line 1404
c_rt_lib0clear(&___nl__im__42);
#line 1404
c_rt_lib0clear(&___nl__im__43);
#line 1404
c_rt_lib0clear(&___nl__im__47);
#line 1404
c_rt_lib0clear(&___nl__im__48);
#line 1404
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
INT  ___nl__int__14 = 0;
bool  ___nl__bool__15 = false;
INT  ___nl__int__16 = 0;
INT  ___nl__int__17 = 0;
ImmT  ___nl__im__18 = NULL;
ImmT  ___nl__im__19 = NULL;
ImmT  ___nl__im__20 = NULL;
bool  ___nl__bool__21 = false;
ImmT  ___nl__im__22 = NULL;
ImmT  ___nl__im__23 = NULL;
ImmT  ___nl__im__24 = NULL;
ImmT  ___nl__im__25 = NULL;
ImmT  ___nl__im__26 = NULL;
ImmT  ___nl__im__27 = NULL;
ImmT  ___nl__im__28 = NULL;
ImmT  ___nl__im__29 = NULL;
bool  ___nl__bool__30 = false;
ImmT  ___nl__im__31 = NULL;
ImmT  ___nl__im__32 = NULL;
ImmT  ___nl__im__33 = NULL;
ImmT  ___nl__im__34 = NULL;
ImmT  ___nl__im__35 = NULL;
ImmT  ___nl__im__36 = NULL;
#line 1408
c_rt_lib0move(&___nl__im__4, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(266)));
#line 1408
c_rt_lib0move(&___nl__im__5, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(268)));
#line 1408
___nl__im_ptr__7 = &((*___ref___rec__0).mod_name0field);
#line 1408
c_rt_lib0copy(&___nl__im__6, (*___nl__im_ptr__7));
#line 1408
___nl__im_ptr__7 = NULL;
#line 1408
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_fun_name(___nl__im__4, ___nl__im__5, ___nl__im__6));
#line 1408
c_rt_lib0clear(&___nl__im__4);
#line 1408
c_rt_lib0clear(&___nl__im__5);
#line 1408
c_rt_lib0clear(&___nl__im__6);
#line 1408
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 1408
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__8));
#line 1408
c_rt_lib0clear(&___nl__im__3);
#line 1408
c_rt_lib0clear(&___nl__im__8);
#line 1409
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(265)));
#line 1409
___nl__int__9 = c_rt_lib0array_len(___nl__im__10);
#line 1409
c_rt_lib0clear(&___nl__im__10);
#line 1409
___nl__int__11 = 0;
#line 1409
___nl__int__12 = 1;
#line 1409
label_18:
;
#line 1409
___nl__int__14 = ___nl__int__11 >= ___nl__int__9;
#line 1409
___nl__bool__13 = ___nl__int__14;
#line 1409
if(___nl__bool__13){ goto label_70;}
#line 1410
___nl__int__16 = 0;
#line 1410
___nl__int__17 = ___nl__int__16 == ___nl__int__11;
#line 1410
___nl__bool__15 = ___nl__int__17;
#line 1410
//clear ___nl__int__16;
#line 1410
//clear ___nl__int__17;
#line 1410
___nl__bool__15 = !___nl__bool__15;
#line 1410
___nl__bool__15 = !___nl__bool__15;
#line 1410
if(___nl__bool__15){ goto label_34;}
#line 1410
c_rt_lib0move(&___nl__im__18,___get_global_string_const(326));
#line 1410
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__18));
#line 1410
c_rt_lib0clear(&___nl__im__18);
#line 1410
goto label_34;
#line 1410
label_34:
;
#line 1410
//clear ___nl__bool__15;
#line 1411
c_rt_lib0move(&___nl__im__20, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(265)));
#line 1411
c_rt_lib0move(&___nl__im__19, c_rt_lib0array_get(___nl__im__20, ___nl__int__11));
#line 1411
c_rt_lib0clear(&___nl__im__20);
#line 1411
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(224));
#line 1411
if(___nl__bool__21){ goto label_46;}
#line 1413
___nl__bool__21 = c_rt_lib0priv_is(___nl__im__19, ___get_global_string_const(40));
#line 1413
if(___nl__bool__21){ goto label_53;}
#line 1413
c_rt_lib0move(&___nl__im__22,___get_global_string_const(16));
#line 1413
c_rt_lib0move(&___nl__im__22, c_rt_lib0array_mk(2, ___nl__im__22, ___nl__im__19));
#line 1413
nl_die_arg(___nl__im__22);
#line 1411
label_46:
;
#line 1411
c_rt_lib0move(&___nl__im__24, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(224)));
#line 1411
c_rt_lib0copy(&___nl__im__23, ___nl__im__24);
#line 1412
c_rt_lib0move(&___nl__im__25, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__23));
#line 1412
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__25));
#line 1412
c_rt_lib0clear(&___nl__im__25);
#line 1413
goto label_60;
#line 1413
label_53:
;
#line 1413
c_rt_lib0move(&___nl__im__27, c_rt_lib0priv_as(___nl__im__19, ___get_global_string_const(40)));
#line 1413
c_rt_lib0copy(&___nl__im__26, ___nl__im__27);
#line 1414
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_reg_ref(___ref___rec__0, ___nl__im__26));
#line 1414
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__28));
#line 1414
c_rt_lib0clear(&___nl__im__28);
#line 1415
goto label_60;
#line 1415
label_60:
;
#line 1415
c_rt_lib0clear(&___nl__im__19);
#line 1415
//clear ___nl__bool__21;
#line 1415
c_rt_lib0clear(&___nl__im__22);
#line 1415
c_rt_lib0clear(&___nl__im__23);
#line 1415
c_rt_lib0clear(&___nl__im__24);
#line 1415
c_rt_lib0clear(&___nl__im__26);
#line 1415
c_rt_lib0clear(&___nl__im__27);
#line 1416
___nl__int__11 = ___nl__int__11 + ___nl__int__12;
#line 1416
goto label_18;
#line 1416
label_70:
;
#line 1417
c_rt_lib0move(&___nl__im__29,___get_global_string_const(320));
#line 1417
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_add(___nl__im__2, ___nl__im__29));
#line 1417
c_rt_lib0clear(&___nl__im__29);
#line 1418
c_rt_lib0move(&___nl__im__31, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1418
c_rt_lib0move(&___nl__im__32, nlasm0is_empty(___nl__im__31));
#line 1418
___nl__bool__30 = c_rt_lib0check_true_native(___nl__im__32);
#line 1418
c_rt_lib0clear(&___nl__im__31);
#line 1418
c_rt_lib0clear(&___nl__im__32);
#line 1418
___nl__bool__30 = !___nl__bool__30;
#line 1418
if(___nl__bool__30){ goto label_87;}
#line 1419
c_rt_lib0move(&___nl__im__34, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1419
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__34, ___nl__im__2));
#line 1419
c_rt_lib0clear(&___nl__im__34);
#line 1419
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__33));
#line 1419
c_rt_lib0clear(&___nl__im__33);
#line 1420
goto label_94;
#line 1420
label_87:
;
#line 1421
c_rt_lib0move(&___nl__im__36, c_rt_lib0hash_get_value_dec(___nl__im__1, ___get_global_string_const(223)));
#line 1421
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_assign(___ref___rec__0, ___nl__im__36, ___nl__im__2));
#line 1421
c_rt_lib0clear(&___nl__im__36);
#line 1421
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__35));
#line 1421
c_rt_lib0clear(&___nl__im__35);
#line 1422
goto label_94;
#line 1422
label_94:
;
#line 1422
//clear ___nl__bool__30;
#line 1422
c_rt_lib0clear(&___nl__im__1);
#line 1422
c_rt_lib0clear(&___nl__im__2);
#line 1422
//clear ___nl__int__9;
#line 1422
//clear ___nl__int__11;
#line 1422
//clear ___nl__int__12;
#line 1422
//clear ___nl__bool__13;
#line 1422
//clear ___nl__int__14;
#line 1422
c_rt_lib0clear(&___nl__im__19);
#line 1422
//clear ___nl__bool__21;
#line 1422
c_rt_lib0clear(&___nl__im__22);
#line 1422
c_rt_lib0clear(&___nl__im__23);
#line 1422
c_rt_lib0clear(&___nl__im__24);
#line 1422
c_rt_lib0clear(&___nl__im__26);
#line 1422
c_rt_lib0clear(&___nl__im__27);
#line 1422
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
#line 1426
c_rt_lib0move(&___nl__im__5,___get_global_string_const(566));
#line 1426
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_lib_fun(___nl__im__5));
#line 1426
c_rt_lib0clear(&___nl__im__5);
#line 1426
c_rt_lib0move(&___nl__im__6,___get_global_string_const(455));
#line 1426
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__6));
#line 1426
c_rt_lib0clear(&___nl__im__4);
#line 1426
c_rt_lib0clear(&___nl__im__6);
#line 1426
c_rt_lib0move(&___nl__im__2, c_rt_lib0concat_new(___nl__im__3, ___nl__im__0));
#line 1426
c_rt_lib0clear(&___nl__im__3);
#line 1426
c_rt_lib0move(&___nl__im__7,___get_global_string_const(320));
#line 1426
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__2, ___nl__im__7));
#line 1426
c_rt_lib0clear(&___nl__im__2);
#line 1426
c_rt_lib0clear(&___nl__im__7);
#line 1426
c_rt_lib0clear(&___nl__im__0);
#line 1426
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
#line 1430
c_rt_lib0move(&___nl__im__1,___get_global_string_const(110));
#line 1430
c_rt_lib0move(&___nl__im__2,___get_global_string_const(323));
#line 1430
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__1, ___nl__im__2));
#line 1430
c_rt_lib0clear(&___nl__im__1);
#line 1430
c_rt_lib0clear(&___nl__im__2);
#line 1431
c_rt_lib0move(&___nl__im__3, string0lf());
#line 1431
c_rt_lib0move(&___nl__im__4,___get_global_string_const(327));
#line 1431
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__3, ___nl__im__4));
#line 1431
c_rt_lib0clear(&___nl__im__3);
#line 1431
c_rt_lib0clear(&___nl__im__4);
#line 1432
c_rt_lib0move(&___nl__im__5, string0r());
#line 1432
c_rt_lib0move(&___nl__im__6,___get_global_string_const(328));
#line 1432
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__5, ___nl__im__6));
#line 1432
c_rt_lib0clear(&___nl__im__5);
#line 1432
c_rt_lib0clear(&___nl__im__6);
#line 1433
c_rt_lib0move(&___nl__im__7, string0tab());
#line 1433
c_rt_lib0move(&___nl__im__8,___get_global_string_const(606));
#line 1433
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__7, ___nl__im__8));
#line 1433
c_rt_lib0clear(&___nl__im__7);
#line 1433
c_rt_lib0clear(&___nl__im__8);
#line 1434
c_rt_lib0move(&___nl__im__9,___get_global_string_const(279));
#line 1434
c_rt_lib0move(&___nl__im__10,___get_global_string_const(324));
#line 1434
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__9, ___nl__im__10));
#line 1434
c_rt_lib0clear(&___nl__im__9);
#line 1434
c_rt_lib0clear(&___nl__im__10);
#line 1435
c_rt_lib0move(&___nl__im__11,___get_global_string_const(607));
#line 1435
c_rt_lib0move(&___nl__im__12,___get_global_string_const(608));
#line 1435
c_rt_lib0move(&___nl__im__0, string0replace(___nl__im__0, ___nl__im__11, ___nl__im__12));
#line 1435
c_rt_lib0clear(&___nl__im__11);
#line 1435
c_rt_lib0clear(&___nl__im__12);
#line 1436
c_rt_lib0move(&___nl__im__17,___get_global_string_const(609));
#line 1436
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_lib_fun(___nl__im__17));
#line 1436
c_rt_lib0clear(&___nl__im__17);
#line 1436
c_rt_lib0move(&___nl__im__18,___get_global_string_const(610));
#line 1436
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__18));
#line 1436
c_rt_lib0clear(&___nl__im__16);
#line 1436
c_rt_lib0clear(&___nl__im__18);
#line 1436
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__0));
#line 1436
c_rt_lib0clear(&___nl__im__15);
#line 1436
c_rt_lib0move(&___nl__im__19,___get_global_string_const(611));
#line 1436
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__19));
#line 1436
c_rt_lib0clear(&___nl__im__14);
#line 1436
c_rt_lib0clear(&___nl__im__19);
#line 1436
c_rt_lib0clear(&___nl__im__0);
#line 1436
return ___nl__im__13;
return NULL;

}

ImmT  generator_c_priv0create_sim_to_memory(ImmT  ___nl__im__0,ImmT  ___nl__im__1) {
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
INT  ___nl__int__28 = 0;
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
#line 1440
___nl__bool__2 = nl0is_int(___nl__im__0);
#line 1440
___nl__bool__2 = !___nl__bool__2;
#line 1440
if(___nl__bool__2){ goto label_27;}
#line 1441
c_rt_lib0move(&___nl__im__9,___get_global_string_const(612));
#line 1441
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_lib_fun(___nl__im__9));
#line 1441
c_rt_lib0clear(&___nl__im__9);
#line 1441
c_rt_lib0move(&___nl__im__10,___get_global_string_const(455));
#line 1441
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 1441
c_rt_lib0clear(&___nl__im__8);
#line 1441
c_rt_lib0clear(&___nl__im__10);
#line 1441
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 1441
c_rt_lib0clear(&___nl__im__7);
#line 1441
c_rt_lib0move(&___nl__im__11,___get_global_string_const(312));
#line 1441
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 1441
c_rt_lib0clear(&___nl__im__6);
#line 1441
c_rt_lib0clear(&___nl__im__11);
#line 1441
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__1));
#line 1441
c_rt_lib0clear(&___nl__im__5);
#line 1441
c_rt_lib0move(&___nl__im__12,___get_global_string_const(320));
#line 1441
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__12));
#line 1441
c_rt_lib0clear(&___nl__im__4);
#line 1441
c_rt_lib0clear(&___nl__im__12);
#line 1441
c_rt_lib0clear(&___nl__im__0);
#line 1441
c_rt_lib0clear(&___nl__im__1);
#line 1441
//clear ___nl__bool__2;
#line 1441
return ___nl__im__3;
#line 1442
goto label_94;
#line 1442
label_27:
;
#line 1443
c_rt_lib0move(&___nl__im__14,___get_global_string_const(37));
#line 1443
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__0, ___nl__im__14));
#line 1443
c_rt_lib0clear(&___nl__im__14);
#line 1444
c_rt_lib0move(&___nl__im__15,___get_global_string_const(110));
#line 1444
c_rt_lib0move(&___nl__im__16,___get_global_string_const(323));
#line 1444
c_rt_lib0move(&___nl__im__13, string0replace(___nl__im__13, ___nl__im__15, ___nl__im__16));
#line 1444
c_rt_lib0clear(&___nl__im__15);
#line 1444
c_rt_lib0clear(&___nl__im__16);
#line 1445
c_rt_lib0move(&___nl__im__17, string0lf());
#line 1445
c_rt_lib0move(&___nl__im__18,___get_global_string_const(327));
#line 1445
c_rt_lib0move(&___nl__im__13, string0replace(___nl__im__13, ___nl__im__17, ___nl__im__18));
#line 1445
c_rt_lib0clear(&___nl__im__17);
#line 1445
c_rt_lib0clear(&___nl__im__18);
#line 1446
c_rt_lib0move(&___nl__im__19, string0r());
#line 1446
c_rt_lib0move(&___nl__im__20,___get_global_string_const(328));
#line 1446
c_rt_lib0move(&___nl__im__13, string0replace(___nl__im__13, ___nl__im__19, ___nl__im__20));
#line 1446
c_rt_lib0clear(&___nl__im__19);
#line 1446
c_rt_lib0clear(&___nl__im__20);
#line 1447
c_rt_lib0move(&___nl__im__21, string0tab());
#line 1447
c_rt_lib0move(&___nl__im__22,___get_global_string_const(606));
#line 1447
c_rt_lib0move(&___nl__im__13, string0replace(___nl__im__13, ___nl__im__21, ___nl__im__22));
#line 1447
c_rt_lib0clear(&___nl__im__21);
#line 1447
c_rt_lib0clear(&___nl__im__22);
#line 1448
c_rt_lib0move(&___nl__im__23,___get_global_string_const(279));
#line 1448
c_rt_lib0move(&___nl__im__24,___get_global_string_const(324));
#line 1448
c_rt_lib0move(&___nl__im__13, string0replace(___nl__im__13, ___nl__im__23, ___nl__im__24));
#line 1448
c_rt_lib0clear(&___nl__im__23);
#line 1448
c_rt_lib0clear(&___nl__im__24);
#line 1449
c_rt_lib0move(&___nl__im__25,___get_global_string_const(607));
#line 1449
c_rt_lib0move(&___nl__im__26,___get_global_string_const(608));
#line 1449
c_rt_lib0move(&___nl__im__13, string0replace(___nl__im__13, ___nl__im__25, ___nl__im__26));
#line 1449
c_rt_lib0clear(&___nl__im__25);
#line 1449
c_rt_lib0clear(&___nl__im__26);
#line 1450
___nl__int__28 = 0;
#line 1450
c_rt_lib0move(&___nl__im__27, string0chr(___nl__int__28));
#line 1450
//clear ___nl__int__28;
#line 1450
c_rt_lib0move(&___nl__im__29,___get_global_string_const(613));
#line 1450
c_rt_lib0move(&___nl__im__13, string0replace(___nl__im__13, ___nl__im__27, ___nl__im__29));
#line 1450
c_rt_lib0clear(&___nl__im__27);
#line 1450
c_rt_lib0clear(&___nl__im__29);
#line 1451
c_rt_lib0move(&___nl__im__36,___get_global_string_const(614));
#line 1451
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_lib_fun(___nl__im__36));
#line 1451
c_rt_lib0clear(&___nl__im__36);
#line 1451
c_rt_lib0move(&___nl__im__37,___get_global_string_const(610));
#line 1451
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__37));
#line 1451
c_rt_lib0clear(&___nl__im__35);
#line 1451
c_rt_lib0clear(&___nl__im__37);
#line 1451
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__13));
#line 1451
c_rt_lib0clear(&___nl__im__34);
#line 1451
c_rt_lib0move(&___nl__im__38,___get_global_string_const(615));
#line 1451
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__38));
#line 1451
c_rt_lib0clear(&___nl__im__33);
#line 1451
c_rt_lib0clear(&___nl__im__38);
#line 1451
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__1));
#line 1451
c_rt_lib0clear(&___nl__im__32);
#line 1451
c_rt_lib0move(&___nl__im__39,___get_global_string_const(320));
#line 1451
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__39));
#line 1451
c_rt_lib0clear(&___nl__im__31);
#line 1451
c_rt_lib0clear(&___nl__im__39);
#line 1451
c_rt_lib0clear(&___nl__im__0);
#line 1451
c_rt_lib0clear(&___nl__im__1);
#line 1451
//clear ___nl__bool__2;
#line 1451
c_rt_lib0clear(&___nl__im__3);
#line 1451
c_rt_lib0clear(&___nl__im__13);
#line 1451
return ___nl__im__30;
#line 1452
goto label_94;
#line 1452
label_94:
;
#line 1452
//clear ___nl__bool__2;
#line 1452
c_rt_lib0clear(&___nl__im__3);
#line 1452
c_rt_lib0clear(&___nl__im__13);
#line 1452
c_rt_lib0clear(&___nl__im__30);
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
ImmT  ___nl__im__83 = NULL;
bool  ___nl__bool__84 = false;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
bool  ___nl__bool__87 = false;
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
#line 1456
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1456
if(___nl__bool__2){ goto label_35;}
#line 1458
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1458
if(___nl__bool__2){ goto label_43;}
#line 1460
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1460
if(___nl__bool__2){ goto label_56;}
#line 1467
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1467
if(___nl__bool__2){ goto label_86;}
#line 1469
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1469
if(___nl__bool__2){ goto label_105;}
#line 1477
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1477
if(___nl__bool__2){ goto label_149;}
#line 1479
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1479
if(___nl__bool__2){ goto label_174;}
#line 1486
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1486
if(___nl__bool__2){ goto label_247;}
#line 1488
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 1488
if(___nl__bool__2){ goto label_282;}
#line 1490
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1490
if(___nl__bool__2){ goto label_316;}
#line 1492
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 1492
if(___nl__bool__2){ goto label_351;}
#line 1494
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 1494
if(___nl__bool__2){ goto label_387;}
#line 1496
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1496
if(___nl__bool__2){ goto label_424;}
#line 1498
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1498
if(___nl__bool__2){ goto label_462;}
#line 1500
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1500
if(___nl__bool__2){ goto label_505;}
#line 1515
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 1515
if(___nl__bool__2){ goto label_634;}
#line 1515
c_rt_lib0move(&___nl__im__3,___get_global_string_const(16));
#line 1515
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__0));
#line 1515
nl_die_arg(___nl__im__3);
#line 1456
label_35:
;
#line 1457
c_rt_lib0move(&___nl__im__4, generator_c_priv0im_t());
#line 1457
c_rt_lib0clear(&___nl__im__0);
#line 1457
c_rt_lib0clear(&___nl__im__1);
#line 1457
//clear ___nl__bool__2;
#line 1457
c_rt_lib0clear(&___nl__im__3);
#line 1457
return ___nl__im__4;
#line 1458
goto label_687;
#line 1458
label_43:
;
#line 1458
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1458
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 1459
c_rt_lib0move(&___nl__im__7, generator_c_priv0im_t());
#line 1459
c_rt_lib0clear(&___nl__im__0);
#line 1459
c_rt_lib0clear(&___nl__im__1);
#line 1459
//clear ___nl__bool__2;
#line 1459
c_rt_lib0clear(&___nl__im__3);
#line 1459
c_rt_lib0clear(&___nl__im__4);
#line 1459
c_rt_lib0clear(&___nl__im__5);
#line 1459
c_rt_lib0clear(&___nl__im__6);
#line 1459
return ___nl__im__7;
#line 1460
goto label_687;
#line 1460
label_56:
;
#line 1460
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1460
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1461
c_rt_lib0move(&___nl__im__14,___get_global_string_const(616));
#line 1461
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1461
c_rt_lib0clear(&___nl__im__14);
#line 1461
c_rt_lib0move(&___nl__im__15,___get_global_string_const(617));
#line 1461
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1461
c_rt_lib0clear(&___nl__im__13);
#line 1461
c_rt_lib0clear(&___nl__im__15);
#line 1464
c_rt_lib0move(&___nl__im__16, generator_c_priv0get_type_name(___nl__im__8));
#line 1464
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 1464
c_rt_lib0clear(&___nl__im__12);
#line 1464
c_rt_lib0clear(&___nl__im__16);
#line 1464
c_rt_lib0move(&___nl__im__17,___get_global_string_const(618));
#line 1464
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__17));
#line 1464
c_rt_lib0clear(&___nl__im__11);
#line 1464
c_rt_lib0clear(&___nl__im__17);
#line 1466
c_rt_lib0clear(&___nl__im__0);
#line 1466
c_rt_lib0clear(&___nl__im__1);
#line 1466
//clear ___nl__bool__2;
#line 1466
c_rt_lib0clear(&___nl__im__3);
#line 1466
c_rt_lib0clear(&___nl__im__4);
#line 1466
c_rt_lib0clear(&___nl__im__5);
#line 1466
c_rt_lib0clear(&___nl__im__6);
#line 1466
c_rt_lib0clear(&___nl__im__7);
#line 1466
c_rt_lib0clear(&___nl__im__8);
#line 1466
c_rt_lib0clear(&___nl__im__9);
#line 1466
return ___nl__im__10;
#line 1467
goto label_687;
#line 1467
label_86:
;
#line 1467
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1467
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1468
c_rt_lib0move(&___nl__im__20, generator_c_priv0im_t());
#line 1468
c_rt_lib0clear(&___nl__im__0);
#line 1468
c_rt_lib0clear(&___nl__im__1);
#line 1468
//clear ___nl__bool__2;
#line 1468
c_rt_lib0clear(&___nl__im__3);
#line 1468
c_rt_lib0clear(&___nl__im__4);
#line 1468
c_rt_lib0clear(&___nl__im__5);
#line 1468
c_rt_lib0clear(&___nl__im__6);
#line 1468
c_rt_lib0clear(&___nl__im__7);
#line 1468
c_rt_lib0clear(&___nl__im__8);
#line 1468
c_rt_lib0clear(&___nl__im__9);
#line 1468
c_rt_lib0clear(&___nl__im__10);
#line 1468
c_rt_lib0clear(&___nl__im__18);
#line 1468
c_rt_lib0clear(&___nl__im__19);
#line 1468
return ___nl__im__20;
#line 1469
goto label_687;
#line 1469
label_105:
;
#line 1469
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1469
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 1470
c_rt_lib0move(&___nl__im__29,___get_global_string_const(616));
#line 1470
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__1));
#line 1470
c_rt_lib0clear(&___nl__im__29);
#line 1470
c_rt_lib0move(&___nl__im__30,___get_global_string_const(617));
#line 1470
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__30));
#line 1470
c_rt_lib0clear(&___nl__im__28);
#line 1470
c_rt_lib0clear(&___nl__im__30);
#line 1473
c_rt_lib0move(&___nl__im__31, generator_c_priv0get_type_name(___nl__im__21));
#line 1473
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__31));
#line 1473
c_rt_lib0clear(&___nl__im__27);
#line 1473
c_rt_lib0clear(&___nl__im__31);
#line 1473
c_rt_lib0move(&___nl__im__32,___get_global_string_const(619));
#line 1473
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__32));
#line 1473
c_rt_lib0clear(&___nl__im__26);
#line 1473
c_rt_lib0clear(&___nl__im__32);
#line 1474
c_rt_lib0move(&___nl__im__33, generator_c_priv0im_t());
#line 1474
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__33));
#line 1474
c_rt_lib0clear(&___nl__im__25);
#line 1474
c_rt_lib0clear(&___nl__im__33);
#line 1474
c_rt_lib0move(&___nl__im__34,___get_global_string_const(620));
#line 1474
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__34));
#line 1474
c_rt_lib0clear(&___nl__im__24);
#line 1474
c_rt_lib0clear(&___nl__im__34);
#line 1476
c_rt_lib0clear(&___nl__im__0);
#line 1476
c_rt_lib0clear(&___nl__im__1);
#line 1476
//clear ___nl__bool__2;
#line 1476
c_rt_lib0clear(&___nl__im__3);
#line 1476
c_rt_lib0clear(&___nl__im__4);
#line 1476
c_rt_lib0clear(&___nl__im__5);
#line 1476
c_rt_lib0clear(&___nl__im__6);
#line 1476
c_rt_lib0clear(&___nl__im__7);
#line 1476
c_rt_lib0clear(&___nl__im__8);
#line 1476
c_rt_lib0clear(&___nl__im__9);
#line 1476
c_rt_lib0clear(&___nl__im__10);
#line 1476
c_rt_lib0clear(&___nl__im__18);
#line 1476
c_rt_lib0clear(&___nl__im__19);
#line 1476
c_rt_lib0clear(&___nl__im__20);
#line 1476
c_rt_lib0clear(&___nl__im__21);
#line 1476
c_rt_lib0clear(&___nl__im__22);
#line 1476
return ___nl__im__23;
#line 1477
goto label_687;
#line 1477
label_149:
;
#line 1477
c_rt_lib0move(&___nl__im__36, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1477
c_rt_lib0copy(&___nl__im__35, ___nl__im__36);
#line 1478
c_rt_lib0move(&___nl__im__37, generator_c_priv0im_t());
#line 1478
c_rt_lib0clear(&___nl__im__0);
#line 1478
c_rt_lib0clear(&___nl__im__1);
#line 1478
//clear ___nl__bool__2;
#line 1478
c_rt_lib0clear(&___nl__im__3);
#line 1478
c_rt_lib0clear(&___nl__im__4);
#line 1478
c_rt_lib0clear(&___nl__im__5);
#line 1478
c_rt_lib0clear(&___nl__im__6);
#line 1478
c_rt_lib0clear(&___nl__im__7);
#line 1478
c_rt_lib0clear(&___nl__im__8);
#line 1478
c_rt_lib0clear(&___nl__im__9);
#line 1478
c_rt_lib0clear(&___nl__im__10);
#line 1478
c_rt_lib0clear(&___nl__im__18);
#line 1478
c_rt_lib0clear(&___nl__im__19);
#line 1478
c_rt_lib0clear(&___nl__im__20);
#line 1478
c_rt_lib0clear(&___nl__im__21);
#line 1478
c_rt_lib0clear(&___nl__im__22);
#line 1478
c_rt_lib0clear(&___nl__im__23);
#line 1478
c_rt_lib0clear(&___nl__im__35);
#line 1478
c_rt_lib0clear(&___nl__im__36);
#line 1478
return ___nl__im__37;
#line 1479
goto label_687;
#line 1479
label_174:
;
#line 1479
c_rt_lib0move(&___nl__im__39, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1479
c_rt_lib0copy(&___nl__im__38, ___nl__im__39);
#line 1480
c_rt_lib0move(&___nl__im__43,___get_global_string_const(616));
#line 1480
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__1));
#line 1480
c_rt_lib0clear(&___nl__im__43);
#line 1480
c_rt_lib0move(&___nl__im__44,___get_global_string_const(528));
#line 1480
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__44));
#line 1480
c_rt_lib0clear(&___nl__im__42);
#line 1480
c_rt_lib0clear(&___nl__im__44);
#line 1480
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1480
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__45));
#line 1480
c_rt_lib0clear(&___nl__im__41);
#line 1480
c_rt_lib0clear(&___nl__im__45);
#line 1481
c_rt_lib0move(&___nl__im__49, c_rt_lib0init_iter(___nl__im__38));
#line 1481
label_189:
;
#line 1481
___nl__bool__47 = c_rt_lib0is_end_hash(___nl__im__49);
#line 1481
if(___nl__bool__47){ goto label_215;}
#line 1481
c_rt_lib0move(&___nl__im__46, c_rt_lib0get_key_iter(___nl__im__49));
#line 1481
c_rt_lib0move(&___nl__im__48, c_rt_lib0hash_get_value(___nl__im__38, ___nl__im__46));
#line 1482
c_rt_lib0move(&___nl__im__54, generator_c_priv0get_type_name(___nl__im__48));
#line 1482
c_rt_lib0move(&___nl__im__55,___get_global_string_const(467));
#line 1482
c_rt_lib0move(&___nl__im__53, c_rt_lib0concat_new(___nl__im__54, ___nl__im__55));
#line 1482
c_rt_lib0clear(&___nl__im__54);
#line 1482
c_rt_lib0clear(&___nl__im__55);
#line 1482
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_field_name(___nl__im__46));
#line 1482
c_rt_lib0move(&___nl__im__52, c_rt_lib0concat_new(___nl__im__53, ___nl__im__56));
#line 1482
c_rt_lib0clear(&___nl__im__53);
#line 1482
c_rt_lib0clear(&___nl__im__56);
#line 1482
c_rt_lib0move(&___nl__im__57,___get_global_string_const(440));
#line 1482
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__57));
#line 1482
c_rt_lib0clear(&___nl__im__52);
#line 1482
c_rt_lib0clear(&___nl__im__57);
#line 1482
c_rt_lib0move(&___nl__im__58, string0lf());
#line 1482
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__58));
#line 1482
c_rt_lib0clear(&___nl__im__51);
#line 1482
c_rt_lib0clear(&___nl__im__58);
#line 1482
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_add(___nl__im__40, ___nl__im__50));
#line 1482
c_rt_lib0clear(&___nl__im__50);
#line 1483
c_rt_lib0move(&___nl__im__49, c_rt_lib0next_iter(___nl__im__49));
#line 1483
goto label_189;
#line 1483
label_215:
;
#line 1484
c_rt_lib0move(&___nl__im__59,___get_global_string_const(305));
#line 1484
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_add(___nl__im__40, ___nl__im__59));
#line 1484
c_rt_lib0clear(&___nl__im__59);
#line 1485
c_rt_lib0clear(&___nl__im__0);
#line 1485
c_rt_lib0clear(&___nl__im__1);
#line 1485
//clear ___nl__bool__2;
#line 1485
c_rt_lib0clear(&___nl__im__3);
#line 1485
c_rt_lib0clear(&___nl__im__4);
#line 1485
c_rt_lib0clear(&___nl__im__5);
#line 1485
c_rt_lib0clear(&___nl__im__6);
#line 1485
c_rt_lib0clear(&___nl__im__7);
#line 1485
c_rt_lib0clear(&___nl__im__8);
#line 1485
c_rt_lib0clear(&___nl__im__9);
#line 1485
c_rt_lib0clear(&___nl__im__10);
#line 1485
c_rt_lib0clear(&___nl__im__18);
#line 1485
c_rt_lib0clear(&___nl__im__19);
#line 1485
c_rt_lib0clear(&___nl__im__20);
#line 1485
c_rt_lib0clear(&___nl__im__21);
#line 1485
c_rt_lib0clear(&___nl__im__22);
#line 1485
c_rt_lib0clear(&___nl__im__23);
#line 1485
c_rt_lib0clear(&___nl__im__35);
#line 1485
c_rt_lib0clear(&___nl__im__36);
#line 1485
c_rt_lib0clear(&___nl__im__37);
#line 1485
c_rt_lib0clear(&___nl__im__38);
#line 1485
c_rt_lib0clear(&___nl__im__39);
#line 1485
c_rt_lib0clear(&___nl__im__46);
#line 1485
//clear ___nl__bool__47;
#line 1485
c_rt_lib0clear(&___nl__im__48);
#line 1485
c_rt_lib0clear(&___nl__im__49);
#line 1485
return ___nl__im__40;
#line 1486
goto label_687;
#line 1486
label_247:
;
#line 1486
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1486
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 1487
c_rt_lib0move(&___nl__im__62, anon_naming0func_ref_to_struct_name(___nl__im__60));
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
c_rt_lib0clear(&___nl__im__10);
#line 1487
c_rt_lib0clear(&___nl__im__18);
#line 1487
c_rt_lib0clear(&___nl__im__19);
#line 1487
c_rt_lib0clear(&___nl__im__20);
#line 1487
c_rt_lib0clear(&___nl__im__21);
#line 1487
c_rt_lib0clear(&___nl__im__22);
#line 1487
c_rt_lib0clear(&___nl__im__23);
#line 1487
c_rt_lib0clear(&___nl__im__35);
#line 1487
c_rt_lib0clear(&___nl__im__36);
#line 1487
c_rt_lib0clear(&___nl__im__37);
#line 1487
c_rt_lib0clear(&___nl__im__38);
#line 1487
c_rt_lib0clear(&___nl__im__39);
#line 1487
c_rt_lib0clear(&___nl__im__40);
#line 1487
c_rt_lib0clear(&___nl__im__46);
#line 1487
//clear ___nl__bool__47;
#line 1487
c_rt_lib0clear(&___nl__im__48);
#line 1487
c_rt_lib0clear(&___nl__im__49);
#line 1487
c_rt_lib0clear(&___nl__im__60);
#line 1487
c_rt_lib0clear(&___nl__im__61);
#line 1487
return ___nl__im__62;
#line 1488
goto label_687;
#line 1488
label_282:
;
#line 1489
c_rt_lib0move(&___nl__im__63, generator_c_priv0im_t());
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
c_rt_lib0clear(&___nl__im__20);
#line 1489
c_rt_lib0clear(&___nl__im__21);
#line 1489
c_rt_lib0clear(&___nl__im__22);
#line 1489
c_rt_lib0clear(&___nl__im__23);
#line 1489
c_rt_lib0clear(&___nl__im__35);
#line 1489
c_rt_lib0clear(&___nl__im__36);
#line 1489
c_rt_lib0clear(&___nl__im__37);
#line 1489
c_rt_lib0clear(&___nl__im__38);
#line 1489
c_rt_lib0clear(&___nl__im__39);
#line 1489
c_rt_lib0clear(&___nl__im__40);
#line 1489
c_rt_lib0clear(&___nl__im__46);
#line 1489
//clear ___nl__bool__47;
#line 1489
c_rt_lib0clear(&___nl__im__48);
#line 1489
c_rt_lib0clear(&___nl__im__49);
#line 1489
c_rt_lib0clear(&___nl__im__60);
#line 1489
c_rt_lib0clear(&___nl__im__61);
#line 1489
c_rt_lib0clear(&___nl__im__62);
#line 1489
return ___nl__im__63;
#line 1490
goto label_687;
#line 1490
label_316:
;
#line 1491
c_rt_lib0move(&___nl__im__64, generator_c_priv0im_t());
#line 1491
c_rt_lib0clear(&___nl__im__0);
#line 1491
c_rt_lib0clear(&___nl__im__1);
#line 1491
//clear ___nl__bool__2;
#line 1491
c_rt_lib0clear(&___nl__im__3);
#line 1491
c_rt_lib0clear(&___nl__im__4);
#line 1491
c_rt_lib0clear(&___nl__im__5);
#line 1491
c_rt_lib0clear(&___nl__im__6);
#line 1491
c_rt_lib0clear(&___nl__im__7);
#line 1491
c_rt_lib0clear(&___nl__im__8);
#line 1491
c_rt_lib0clear(&___nl__im__9);
#line 1491
c_rt_lib0clear(&___nl__im__10);
#line 1491
c_rt_lib0clear(&___nl__im__18);
#line 1491
c_rt_lib0clear(&___nl__im__19);
#line 1491
c_rt_lib0clear(&___nl__im__20);
#line 1491
c_rt_lib0clear(&___nl__im__21);
#line 1491
c_rt_lib0clear(&___nl__im__22);
#line 1491
c_rt_lib0clear(&___nl__im__23);
#line 1491
c_rt_lib0clear(&___nl__im__35);
#line 1491
c_rt_lib0clear(&___nl__im__36);
#line 1491
c_rt_lib0clear(&___nl__im__37);
#line 1491
c_rt_lib0clear(&___nl__im__38);
#line 1491
c_rt_lib0clear(&___nl__im__39);
#line 1491
c_rt_lib0clear(&___nl__im__40);
#line 1491
c_rt_lib0clear(&___nl__im__46);
#line 1491
//clear ___nl__bool__47;
#line 1491
c_rt_lib0clear(&___nl__im__48);
#line 1491
c_rt_lib0clear(&___nl__im__49);
#line 1491
c_rt_lib0clear(&___nl__im__60);
#line 1491
c_rt_lib0clear(&___nl__im__61);
#line 1491
c_rt_lib0clear(&___nl__im__62);
#line 1491
c_rt_lib0clear(&___nl__im__63);
#line 1491
return ___nl__im__64;
#line 1492
goto label_687;
#line 1492
label_351:
;
#line 1493
c_rt_lib0move(&___nl__im__65, generator_c_priv0int_t());
#line 1493
c_rt_lib0clear(&___nl__im__0);
#line 1493
c_rt_lib0clear(&___nl__im__1);
#line 1493
//clear ___nl__bool__2;
#line 1493
c_rt_lib0clear(&___nl__im__3);
#line 1493
c_rt_lib0clear(&___nl__im__4);
#line 1493
c_rt_lib0clear(&___nl__im__5);
#line 1493
c_rt_lib0clear(&___nl__im__6);
#line 1493
c_rt_lib0clear(&___nl__im__7);
#line 1493
c_rt_lib0clear(&___nl__im__8);
#line 1493
c_rt_lib0clear(&___nl__im__9);
#line 1493
c_rt_lib0clear(&___nl__im__10);
#line 1493
c_rt_lib0clear(&___nl__im__18);
#line 1493
c_rt_lib0clear(&___nl__im__19);
#line 1493
c_rt_lib0clear(&___nl__im__20);
#line 1493
c_rt_lib0clear(&___nl__im__21);
#line 1493
c_rt_lib0clear(&___nl__im__22);
#line 1493
c_rt_lib0clear(&___nl__im__23);
#line 1493
c_rt_lib0clear(&___nl__im__35);
#line 1493
c_rt_lib0clear(&___nl__im__36);
#line 1493
c_rt_lib0clear(&___nl__im__37);
#line 1493
c_rt_lib0clear(&___nl__im__38);
#line 1493
c_rt_lib0clear(&___nl__im__39);
#line 1493
c_rt_lib0clear(&___nl__im__40);
#line 1493
c_rt_lib0clear(&___nl__im__46);
#line 1493
//clear ___nl__bool__47;
#line 1493
c_rt_lib0clear(&___nl__im__48);
#line 1493
c_rt_lib0clear(&___nl__im__49);
#line 1493
c_rt_lib0clear(&___nl__im__60);
#line 1493
c_rt_lib0clear(&___nl__im__61);
#line 1493
c_rt_lib0clear(&___nl__im__62);
#line 1493
c_rt_lib0clear(&___nl__im__63);
#line 1493
c_rt_lib0clear(&___nl__im__64);
#line 1493
return ___nl__im__65;
#line 1494
goto label_687;
#line 1494
label_387:
;
#line 1495
c_rt_lib0move(&___nl__im__66, generator_c_priv0im_t());
#line 1495
c_rt_lib0clear(&___nl__im__0);
#line 1495
c_rt_lib0clear(&___nl__im__1);
#line 1495
//clear ___nl__bool__2;
#line 1495
c_rt_lib0clear(&___nl__im__3);
#line 1495
c_rt_lib0clear(&___nl__im__4);
#line 1495
c_rt_lib0clear(&___nl__im__5);
#line 1495
c_rt_lib0clear(&___nl__im__6);
#line 1495
c_rt_lib0clear(&___nl__im__7);
#line 1495
c_rt_lib0clear(&___nl__im__8);
#line 1495
c_rt_lib0clear(&___nl__im__9);
#line 1495
c_rt_lib0clear(&___nl__im__10);
#line 1495
c_rt_lib0clear(&___nl__im__18);
#line 1495
c_rt_lib0clear(&___nl__im__19);
#line 1495
c_rt_lib0clear(&___nl__im__20);
#line 1495
c_rt_lib0clear(&___nl__im__21);
#line 1495
c_rt_lib0clear(&___nl__im__22);
#line 1495
c_rt_lib0clear(&___nl__im__23);
#line 1495
c_rt_lib0clear(&___nl__im__35);
#line 1495
c_rt_lib0clear(&___nl__im__36);
#line 1495
c_rt_lib0clear(&___nl__im__37);
#line 1495
c_rt_lib0clear(&___nl__im__38);
#line 1495
c_rt_lib0clear(&___nl__im__39);
#line 1495
c_rt_lib0clear(&___nl__im__40);
#line 1495
c_rt_lib0clear(&___nl__im__46);
#line 1495
//clear ___nl__bool__47;
#line 1495
c_rt_lib0clear(&___nl__im__48);
#line 1495
c_rt_lib0clear(&___nl__im__49);
#line 1495
c_rt_lib0clear(&___nl__im__60);
#line 1495
c_rt_lib0clear(&___nl__im__61);
#line 1495
c_rt_lib0clear(&___nl__im__62);
#line 1495
c_rt_lib0clear(&___nl__im__63);
#line 1495
c_rt_lib0clear(&___nl__im__64);
#line 1495
c_rt_lib0clear(&___nl__im__65);
#line 1495
return ___nl__im__66;
#line 1496
goto label_687;
#line 1496
label_424:
;
#line 1497
c_rt_lib0move(&___nl__im__67, generator_c_priv0bool_t());
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
c_rt_lib0clear(&___nl__im__23);
#line 1497
c_rt_lib0clear(&___nl__im__35);
#line 1497
c_rt_lib0clear(&___nl__im__36);
#line 1497
c_rt_lib0clear(&___nl__im__37);
#line 1497
c_rt_lib0clear(&___nl__im__38);
#line 1497
c_rt_lib0clear(&___nl__im__39);
#line 1497
c_rt_lib0clear(&___nl__im__40);
#line 1497
c_rt_lib0clear(&___nl__im__46);
#line 1497
//clear ___nl__bool__47;
#line 1497
c_rt_lib0clear(&___nl__im__48);
#line 1497
c_rt_lib0clear(&___nl__im__49);
#line 1497
c_rt_lib0clear(&___nl__im__60);
#line 1497
c_rt_lib0clear(&___nl__im__61);
#line 1497
c_rt_lib0clear(&___nl__im__62);
#line 1497
c_rt_lib0clear(&___nl__im__63);
#line 1497
c_rt_lib0clear(&___nl__im__64);
#line 1497
c_rt_lib0clear(&___nl__im__65);
#line 1497
c_rt_lib0clear(&___nl__im__66);
#line 1497
return ___nl__im__67;
#line 1498
goto label_687;
#line 1498
label_462:
;
#line 1498
c_rt_lib0move(&___nl__im__69, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1498
c_rt_lib0copy(&___nl__im__68, ___nl__im__69);
#line 1499
c_rt_lib0move(&___nl__im__70, generator_c_priv0im_t());
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
c_rt_lib0clear(&___nl__im__37);
#line 1499
c_rt_lib0clear(&___nl__im__38);
#line 1499
c_rt_lib0clear(&___nl__im__39);
#line 1499
c_rt_lib0clear(&___nl__im__40);
#line 1499
c_rt_lib0clear(&___nl__im__46);
#line 1499
//clear ___nl__bool__47;
#line 1499
c_rt_lib0clear(&___nl__im__48);
#line 1499
c_rt_lib0clear(&___nl__im__49);
#line 1499
c_rt_lib0clear(&___nl__im__60);
#line 1499
c_rt_lib0clear(&___nl__im__61);
#line 1499
c_rt_lib0clear(&___nl__im__62);
#line 1499
c_rt_lib0clear(&___nl__im__63);
#line 1499
c_rt_lib0clear(&___nl__im__64);
#line 1499
c_rt_lib0clear(&___nl__im__65);
#line 1499
c_rt_lib0clear(&___nl__im__66);
#line 1499
c_rt_lib0clear(&___nl__im__67);
#line 1499
c_rt_lib0clear(&___nl__im__68);
#line 1499
c_rt_lib0clear(&___nl__im__69);
#line 1499
return ___nl__im__70;
#line 1500
goto label_687;
#line 1500
label_505:
;
#line 1500
c_rt_lib0move(&___nl__im__72, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 1500
c_rt_lib0copy(&___nl__im__71, ___nl__im__72);
#line 1501
c_rt_lib0move(&___nl__im__78,___get_global_string_const(616));
#line 1501
c_rt_lib0move(&___nl__im__77, c_rt_lib0concat_new(___nl__im__78, ___nl__im__1));
#line 1501
c_rt_lib0clear(&___nl__im__78);
#line 1501
c_rt_lib0move(&___nl__im__79,___get_global_string_const(621));
#line 1501
c_rt_lib0move(&___nl__im__76, c_rt_lib0concat_new(___nl__im__77, ___nl__im__79));
#line 1501
c_rt_lib0clear(&___nl__im__77);
#line 1501
c_rt_lib0clear(&___nl__im__79);
#line 1502
c_rt_lib0move(&___nl__im__80, generator_c_priv0int_t());
#line 1502
c_rt_lib0move(&___nl__im__75, c_rt_lib0concat_new(___nl__im__76, ___nl__im__80));
#line 1502
c_rt_lib0clear(&___nl__im__76);
#line 1502
c_rt_lib0clear(&___nl__im__80);
#line 1502
c_rt_lib0move(&___nl__im__81,___get_global_string_const(622));
#line 1502
c_rt_lib0move(&___nl__im__74, c_rt_lib0concat_new(___nl__im__75, ___nl__im__81));
#line 1502
c_rt_lib0clear(&___nl__im__75);
#line 1502
c_rt_lib0clear(&___nl__im__81);
#line 1503
c_rt_lib0move(&___nl__im__82, string0lf());
#line 1503
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_new(___nl__im__74, ___nl__im__82));
#line 1503
c_rt_lib0clear(&___nl__im__74);
#line 1503
c_rt_lib0clear(&___nl__im__82);
#line 1504
c_rt_lib0move(&___nl__im__86, c_rt_lib0init_iter(___nl__im__71));
#line 1504
label_528:
;
#line 1504
___nl__bool__84 = c_rt_lib0is_end_hash(___nl__im__86);
#line 1504
if(___nl__bool__84){ goto label_572;}
#line 1504
c_rt_lib0move(&___nl__im__83, c_rt_lib0get_key_iter(___nl__im__86));
#line 1504
c_rt_lib0move(&___nl__im__85, c_rt_lib0hash_get_value(___nl__im__71, ___nl__im__83));
#line 1505
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__85, ___get_global_string_const(28));
#line 1505
if(___nl__bool__87){ goto label_540;}
#line 1507
___nl__bool__87 = c_rt_lib0priv_is(___nl__im__85, ___get_global_string_const(29));
#line 1507
if(___nl__bool__87){ goto label_563;}
#line 1507
c_rt_lib0move(&___nl__im__88,___get_global_string_const(16));
#line 1507
c_rt_lib0move(&___nl__im__88, c_rt_lib0array_mk(2, ___nl__im__88, ___nl__im__85));
#line 1507
nl_die_arg(___nl__im__88);
#line 1505
label_540:
;
#line 1505
c_rt_lib0move(&___nl__im__90, c_rt_lib0priv_as(___nl__im__85, ___get_global_string_const(28)));
#line 1505
c_rt_lib0copy(&___nl__im__89, ___nl__im__90);
#line 1506
c_rt_lib0move(&___nl__im__95, generator_c_priv0get_type_name(___nl__im__89));
#line 1506
c_rt_lib0move(&___nl__im__96,___get_global_string_const(623));
#line 1506
c_rt_lib0move(&___nl__im__94, c_rt_lib0concat_new(___nl__im__95, ___nl__im__96));
#line 1506
c_rt_lib0clear(&___nl__im__95);
#line 1506
c_rt_lib0clear(&___nl__im__96);
#line 1506
c_rt_lib0move(&___nl__im__97, generator_c_priv0get_case_name(___nl__im__83));
#line 1506
c_rt_lib0move(&___nl__im__93, c_rt_lib0concat_new(___nl__im__94, ___nl__im__97));
#line 1506
c_rt_lib0clear(&___nl__im__94);
#line 1506
c_rt_lib0clear(&___nl__im__97);
#line 1506
c_rt_lib0move(&___nl__im__98,___get_global_string_const(440));
#line 1506
c_rt_lib0move(&___nl__im__92, c_rt_lib0concat_new(___nl__im__93, ___nl__im__98));
#line 1506
c_rt_lib0clear(&___nl__im__93);
#line 1506
c_rt_lib0clear(&___nl__im__98);
#line 1506
c_rt_lib0move(&___nl__im__99, string0lf());
#line 1506
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__99));
#line 1506
c_rt_lib0clear(&___nl__im__92);
#line 1506
c_rt_lib0clear(&___nl__im__99);
#line 1506
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_add(___nl__im__73, ___nl__im__91));
#line 1506
c_rt_lib0clear(&___nl__im__91);
#line 1507
goto label_565;
#line 1507
label_563:
;
#line 1508
goto label_565;
#line 1508
label_565:
;
#line 1508
//clear ___nl__bool__87;
#line 1508
c_rt_lib0clear(&___nl__im__88);
#line 1508
c_rt_lib0clear(&___nl__im__89);
#line 1508
c_rt_lib0clear(&___nl__im__90);
#line 1509
c_rt_lib0move(&___nl__im__86, c_rt_lib0next_iter(___nl__im__86));
#line 1509
goto label_528;
#line 1509
label_572:
;
#line 1510
c_rt_lib0move(&___nl__im__102,___get_global_string_const(624));
#line 1512
c_rt_lib0move(&___nl__im__103, generator_c_priv0int_t());
#line 1512
c_rt_lib0move(&___nl__im__101, c_rt_lib0concat_new(___nl__im__102, ___nl__im__103));
#line 1512
c_rt_lib0clear(&___nl__im__102);
#line 1512
c_rt_lib0clear(&___nl__im__103);
#line 1512
c_rt_lib0move(&___nl__im__104,___get_global_string_const(625));
#line 1512
c_rt_lib0move(&___nl__im__100, c_rt_lib0concat_new(___nl__im__101, ___nl__im__104));
#line 1512
c_rt_lib0clear(&___nl__im__101);
#line 1512
c_rt_lib0clear(&___nl__im__104);
#line 1512
c_rt_lib0move(&___nl__im__73, c_rt_lib0concat_add(___nl__im__73, ___nl__im__100));
#line 1512
c_rt_lib0clear(&___nl__im__100);
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
c_rt_lib0clear(&___nl__im__65);
#line 1514
c_rt_lib0clear(&___nl__im__66);
#line 1514
c_rt_lib0clear(&___nl__im__67);
#line 1514
c_rt_lib0clear(&___nl__im__68);
#line 1514
c_rt_lib0clear(&___nl__im__69);
#line 1514
c_rt_lib0clear(&___nl__im__70);
#line 1514
c_rt_lib0clear(&___nl__im__71);
#line 1514
c_rt_lib0clear(&___nl__im__72);
#line 1514
c_rt_lib0clear(&___nl__im__83);
#line 1514
//clear ___nl__bool__84;
#line 1514
c_rt_lib0clear(&___nl__im__85);
#line 1514
c_rt_lib0clear(&___nl__im__86);
#line 1514
//clear ___nl__bool__87;
#line 1514
c_rt_lib0clear(&___nl__im__88);
#line 1514
c_rt_lib0clear(&___nl__im__89);
#line 1514
c_rt_lib0clear(&___nl__im__90);
#line 1514
return ___nl__im__73;
#line 1515
goto label_687;
#line 1515
label_634:
;
#line 1516
c_rt_lib0move(&___nl__im__105, generator_c_priv0im_t());
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
c_rt_lib0clear(&___nl__im__66);
#line 1516
c_rt_lib0clear(&___nl__im__67);
#line 1516
c_rt_lib0clear(&___nl__im__68);
#line 1516
c_rt_lib0clear(&___nl__im__69);
#line 1516
c_rt_lib0clear(&___nl__im__70);
#line 1516
c_rt_lib0clear(&___nl__im__71);
#line 1516
c_rt_lib0clear(&___nl__im__72);
#line 1516
c_rt_lib0clear(&___nl__im__73);
#line 1516
c_rt_lib0clear(&___nl__im__83);
#line 1516
//clear ___nl__bool__84;
#line 1516
c_rt_lib0clear(&___nl__im__85);
#line 1516
c_rt_lib0clear(&___nl__im__86);
#line 1516
//clear ___nl__bool__87;
#line 1516
c_rt_lib0clear(&___nl__im__88);
#line 1516
c_rt_lib0clear(&___nl__im__89);
#line 1516
c_rt_lib0clear(&___nl__im__90);
#line 1516
return ___nl__im__105;
#line 1517
goto label_687;
#line 1517
label_687:
;
return NULL;

}

ImmT  generator_c_priv0get_field_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 1521
c_rt_lib0move(&___nl__im__2,___get_global_string_const(626));
#line 1521
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 1521
c_rt_lib0clear(&___nl__im__2);
#line 1521
c_rt_lib0clear(&___nl__im__0);
#line 1521
return ___nl__im__1;
return NULL;

}

ImmT  generator_c_priv0get_case_name(ImmT  ___nl__im__0) {
c_rt_lib0arg_val(___nl__im__0);
generator_c_priv0__const__init();
ImmT  ___nl__im__1 = NULL;
ImmT  ___nl__im__2 = NULL;
#line 1525
c_rt_lib0move(&___nl__im__2,___get_global_string_const(627));
#line 1525
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_new(___nl__im__0, ___nl__im__2));
#line 1525
c_rt_lib0clear(&___nl__im__2);
#line 1525
c_rt_lib0clear(&___nl__im__0);
#line 1525
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
#line 1529
___nl__bool__1 = generator_c_priv0is_anon(___nl__im__0);
#line 1529
___nl__bool__1 = !___nl__bool__1;
#line 1529
if(___nl__bool__1){ goto label_8;}
#line 1530
c_rt_lib0move(&___nl__im__2, anon_naming0get_anon_name(___nl__im__0));
#line 1530
c_rt_lib0clear(&___nl__im__0);
#line 1530
//clear ___nl__bool__1;
#line 1530
return ___nl__im__2;
#line 1531
goto label_17;
#line 1531
label_8:
;
#line 1532
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1532
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_type_to_c(___nl__im__0, ___nl__im__4));
#line 1532
c_rt_lib0clear(&___nl__im__4);
#line 1532
c_rt_lib0clear(&___nl__im__0);
#line 1532
//clear ___nl__bool__1;
#line 1532
c_rt_lib0clear(&___nl__im__2);
#line 1532
return ___nl__im__3;
#line 1533
goto label_17;
#line 1533
label_17:
;
#line 1533
//clear ___nl__bool__1;
#line 1533
c_rt_lib0clear(&___nl__im__2);
#line 1533
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
#line 1538
c_rt_lib0move(&___nl__im__6,___get_global_string_const(37));
#line 1539
___nl__bool__7 = ___nl__bool__4;
#line 1539
___nl__bool__7 = !___nl__bool__7;
#line 1539
if(___nl__bool__7){ goto label_23;}
#line 1540
c_rt_lib0move(&___nl__im__10,___get_global_string_const(628));
#line 1540
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__1));
#line 1540
c_rt_lib0clear(&___nl__im__10);
#line 1540
c_rt_lib0move(&___nl__im__11, string0lf());
#line 1540
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__11));
#line 1540
c_rt_lib0clear(&___nl__im__9);
#line 1540
c_rt_lib0clear(&___nl__im__11);
#line 1540
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__8));
#line 1540
c_rt_lib0clear(&___nl__im__8);
#line 1541
c_rt_lib0move(&___nl__im__14,___get_global_string_const(629));
#line 1541
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1541
c_rt_lib0clear(&___nl__im__14);
#line 1541
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1541
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1541
c_rt_lib0clear(&___nl__im__13);
#line 1541
c_rt_lib0clear(&___nl__im__15);
#line 1541
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__12));
#line 1541
c_rt_lib0clear(&___nl__im__12);
#line 1542
goto label_23;
#line 1542
label_23:
;
#line 1542
//clear ___nl__bool__7;
#line 1543
c_rt_lib0move(&___nl__im__16,___get_global_string_const(37));
#line 1544
___nl__bool__17 = ___nl__bool__4;
#line 1544
___nl__bool__17 = !___nl__bool__17;
#line 1544
if(___nl__bool__17){ goto label_31;}
#line 1545
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 1546
goto label_38;
#line 1546
label_31:
;
#line 1547
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_fun_name(___nl__im__3, ___nl__im__1, ___nl__im__3));
#line 1547
c_rt_lib0move(&___nl__im__19,___get_global_string_const(36));
#line 1547
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1547
c_rt_lib0clear(&___nl__im__18);
#line 1547
c_rt_lib0clear(&___nl__im__19);
#line 1548
goto label_38;
#line 1548
label_38:
;
#line 1548
//clear ___nl__bool__17;
#line 1549
___nl__bool__20 = generator_c_struct_dependence_sort0is_divisible(___nl__im__2);
#line 1549
___nl__bool__20 = !___nl__bool__20;
#line 1549
if(___nl__bool__20){ goto label_63;}
#line 1550
c_rt_lib0move(&___nl__im__26,___get_global_string_const(630));
#line 1550
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__16));
#line 1550
c_rt_lib0clear(&___nl__im__26);
#line 1550
c_rt_lib0move(&___nl__im__27,___get_global_string_const(467));
#line 1550
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__27));
#line 1550
c_rt_lib0clear(&___nl__im__25);
#line 1550
c_rt_lib0clear(&___nl__im__27);
#line 1550
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__16));
#line 1550
c_rt_lib0clear(&___nl__im__24);
#line 1550
c_rt_lib0move(&___nl__im__28,___get_global_string_const(440));
#line 1550
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__28));
#line 1550
c_rt_lib0clear(&___nl__im__23);
#line 1550
c_rt_lib0clear(&___nl__im__28);
#line 1550
c_rt_lib0move(&___nl__im__29, string0lf());
#line 1550
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__29));
#line 1550
c_rt_lib0clear(&___nl__im__22);
#line 1550
c_rt_lib0clear(&___nl__im__29);
#line 1550
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__21));
#line 1550
c_rt_lib0clear(&___nl__im__21);
#line 1551
goto label_88;
#line 1551
label_63:
;
#line 1552
c_rt_lib0move(&___nl__im__35,___get_global_string_const(631));
#line 1552
c_rt_lib0move(&___nl__im__37,___get_global_string_const(37));
#line 1552
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_type_to_c(___nl__im__2, ___nl__im__37));
#line 1552
c_rt_lib0clear(&___nl__im__37);
#line 1552
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 1552
c_rt_lib0clear(&___nl__im__35);
#line 1552
c_rt_lib0clear(&___nl__im__36);
#line 1552
c_rt_lib0move(&___nl__im__38,___get_global_string_const(467));
#line 1552
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__38));
#line 1552
c_rt_lib0clear(&___nl__im__34);
#line 1552
c_rt_lib0clear(&___nl__im__38);
#line 1552
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__16));
#line 1552
c_rt_lib0clear(&___nl__im__33);
#line 1552
c_rt_lib0move(&___nl__im__39,___get_global_string_const(440));
#line 1552
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 1552
c_rt_lib0clear(&___nl__im__32);
#line 1552
c_rt_lib0clear(&___nl__im__39);
#line 1552
c_rt_lib0move(&___nl__im__40, string0lf());
#line 1552
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__40));
#line 1552
c_rt_lib0clear(&___nl__im__31);
#line 1552
c_rt_lib0clear(&___nl__im__40);
#line 1552
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__30));
#line 1552
c_rt_lib0clear(&___nl__im__30);
#line 1553
goto label_88;
#line 1553
label_88:
;
#line 1553
//clear ___nl__bool__20;
#line 1554
___nl__bool__41 = ___nl__bool__4;
#line 1554
___nl__bool__41 = !___nl__bool__41;
#line 1554
if(___nl__bool__41){ goto label_101;}
#line 1555
c_rt_lib0move(&___nl__im__43,___get_global_string_const(632));
#line 1555
c_rt_lib0move(&___nl__im__44, string0lf());
#line 1555
c_rt_lib0move(&___nl__im__42, c_rt_lib0concat_new(___nl__im__43, ___nl__im__44));
#line 1555
c_rt_lib0clear(&___nl__im__43);
#line 1555
c_rt_lib0clear(&___nl__im__44);
#line 1555
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__42));
#line 1555
c_rt_lib0clear(&___nl__im__42);
#line 1556
goto label_101;
#line 1556
label_101:
;
#line 1556
//clear ___nl__bool__41;
#line 1557
c_rt_lib0move(&___nl__im__45, generator_c_priv0get_additional_type_functions_decl(___nl__im__16, ___nl__im__2, ___ref___rec__0, ___nl__bool__4));
#line 1557
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__45));
#line 1557
c_rt_lib0clear(&___nl__im__45);
#line 1558
c_rt_lib0move(&___nl__im__47, string0lf());
#line 1558
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__6, ___nl__im__47));
#line 1558
c_rt_lib0clear(&___nl__im__47);
#line 1558
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__46));
#line 1558
c_rt_lib0clear(&___nl__im__46);
#line 1559
c_rt_lib0move(&___nl__im__48, generator_c_priv0get_additional_type_functions_def(___nl__im__16, ___nl__im__2, ___ref___rec__0, ___nl__im__5, ___nl__bool__4));
#line 1559
c_rt_lib0delete(generator_c_priv0print(___ref___rec__0, ___nl__im__48));
#line 1559
c_rt_lib0clear(&___nl__im__48);
#line 1559
c_rt_lib0clear(&___nl__im__1);
#line 1559
c_rt_lib0clear(&___nl__im__2);
#line 1559
c_rt_lib0clear(&___nl__im__3);
#line 1559
//clear ___nl__bool__4;
#line 1559
c_rt_lib0clear(&___nl__im__5);
#line 1559
c_rt_lib0clear(&___nl__im__6);
#line 1559
c_rt_lib0clear(&___nl__im__16);
#line 1559
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
#line 1564
___nl__bool__5 = generator_c_struct_dependence_sort0is_divisible(___nl__im__2);
#line 1564
___nl__bool__5 = !___nl__bool__5;
#line 1564
___nl__bool__5 = !___nl__bool__5;
#line 1564
if(___nl__bool__5){ goto label_11;}
#line 1565
c_rt_lib0clear(&___nl__im__1);
#line 1565
c_rt_lib0clear(&___nl__im__2);
#line 1565
c_rt_lib0clear(&___nl__im__3);
#line 1565
//clear ___nl__bool__4;
#line 1565
//clear ___nl__bool__5;
#line 1565
return NULL;
#line 1566
goto label_11;
#line 1566
label_11:
;
#line 1566
//clear ___nl__bool__5;
#line 1567
c_rt_lib0move(&___nl__im__6,___get_global_string_const(37));
#line 1568
___nl__bool__7 = ___nl__bool__4;
#line 1568
___nl__bool__7 = !___nl__bool__7;
#line 1568
if(___nl__bool__7){ goto label_36;}
#line 1569
c_rt_lib0move(&___nl__im__10,___get_global_string_const(633));
#line 1569
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__1));
#line 1569
c_rt_lib0clear(&___nl__im__10);
#line 1569
c_rt_lib0move(&___nl__im__11, string0lf());
#line 1569
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__11));
#line 1569
c_rt_lib0clear(&___nl__im__9);
#line 1569
c_rt_lib0clear(&___nl__im__11);
#line 1569
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__8));
#line 1569
c_rt_lib0clear(&___nl__im__8);
#line 1570
c_rt_lib0move(&___nl__im__14,___get_global_string_const(634));
#line 1570
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__1));
#line 1570
c_rt_lib0clear(&___nl__im__14);
#line 1570
c_rt_lib0move(&___nl__im__15, string0lf());
#line 1570
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__15));
#line 1570
c_rt_lib0clear(&___nl__im__13);
#line 1570
c_rt_lib0clear(&___nl__im__15);
#line 1570
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__12));
#line 1570
c_rt_lib0clear(&___nl__im__12);
#line 1571
goto label_36;
#line 1571
label_36:
;
#line 1571
//clear ___nl__bool__7;
#line 1572
c_rt_lib0move(&___nl__im__16,___get_global_string_const(37));
#line 1573
___nl__bool__17 = ___nl__bool__4;
#line 1573
___nl__bool__17 = !___nl__bool__17;
#line 1573
if(___nl__bool__17){ goto label_44;}
#line 1574
c_rt_lib0copy(&___nl__im__16, ___nl__im__1);
#line 1575
goto label_51;
#line 1575
label_44:
;
#line 1576
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_fun_name(___nl__im__3, ___nl__im__1, ___nl__im__3));
#line 1576
c_rt_lib0move(&___nl__im__19,___get_global_string_const(36));
#line 1576
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1576
c_rt_lib0clear(&___nl__im__18);
#line 1576
c_rt_lib0clear(&___nl__im__19);
#line 1577
goto label_51;
#line 1577
label_51:
;
#line 1577
//clear ___nl__bool__17;
#line 1578
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_type_to_c(___nl__im__2, ___nl__im__16));
#line 1578
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__20));
#line 1578
c_rt_lib0clear(&___nl__im__20);
#line 1579
c_rt_lib0move(&___nl__im__22,___get_global_string_const(440));
#line 1579
c_rt_lib0move(&___nl__im__23, string0lf());
#line 1579
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1579
c_rt_lib0clear(&___nl__im__22);
#line 1579
c_rt_lib0clear(&___nl__im__23);
#line 1579
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__21));
#line 1579
c_rt_lib0clear(&___nl__im__21);
#line 1580
___nl__bool__24 = ___nl__bool__4;
#line 1580
___nl__bool__24 = !___nl__bool__24;
#line 1580
if(___nl__bool__24){ goto label_70;}
#line 1581
c_rt_lib0move(&___nl__im__25,___get_global_string_const(632));
#line 1581
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_add(___nl__im__6, ___nl__im__25));
#line 1581
c_rt_lib0clear(&___nl__im__25);
#line 1582
goto label_70;
#line 1582
label_70:
;
#line 1582
//clear ___nl__bool__24;
#line 1583
c_rt_lib0move(&___nl__im__27, string0lf());
#line 1583
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__6, ___nl__im__27));
#line 1583
c_rt_lib0clear(&___nl__im__27);
#line 1583
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___rec__0, ___nl__im__26));
#line 1583
c_rt_lib0clear(&___nl__im__26);
#line 1583
c_rt_lib0clear(&___nl__im__1);
#line 1583
c_rt_lib0clear(&___nl__im__2);
#line 1583
c_rt_lib0clear(&___nl__im__3);
#line 1583
//clear ___nl__bool__4;
#line 1583
c_rt_lib0clear(&___nl__im__6);
#line 1583
c_rt_lib0clear(&___nl__im__16);
#line 1583
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
#line 1587
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__1));
#line 1587
c_rt_lib0move(&___nl__im__9,___get_global_string_const(467));
#line 1587
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1587
c_rt_lib0clear(&___nl__im__8);
#line 1587
c_rt_lib0clear(&___nl__im__9);
#line 1587
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__3));
#line 1587
c_rt_lib0clear(&___nl__im__7);
#line 1587
c_rt_lib0move(&___nl__im__10,___get_global_string_const(467));
#line 1587
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__10));
#line 1587
c_rt_lib0clear(&___nl__im__6);
#line 1587
c_rt_lib0clear(&___nl__im__10);
#line 1587
c_rt_lib0move(&___nl__im__11, generator_c_priv0get_reg_value(___ref___rec__0, ___nl__im__2));
#line 1587
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__11));
#line 1587
c_rt_lib0clear(&___nl__im__5);
#line 1587
c_rt_lib0clear(&___nl__im__11);
#line 1587
c_rt_lib0clear(&___nl__im__1);
#line 1587
c_rt_lib0clear(&___nl__im__2);
#line 1587
c_rt_lib0clear(&___nl__im__3);
#line 1587
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
ImmT  ___nl__im__19 = NULL;
INT  ___nl__int__20 = 0;
ImmT  ___nl__im__21 = NULL;
ImmT  ___nl__im__22 = NULL;
#line 1592
c_rt_lib0move(&___nl__im__2, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(205)));
#line 1592
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(132));
#line 1592
if(___nl__bool__3){ goto label_20;}
#line 1594
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(403));
#line 1594
if(___nl__bool__3){ goto label_23;}
#line 1596
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(34));
#line 1596
if(___nl__bool__3){ goto label_26;}
#line 1598
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(404));
#line 1598
if(___nl__bool__3){ goto label_29;}
#line 1600
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(551));
#line 1600
if(___nl__bool__3){ goto label_32;}
#line 1602
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(128));
#line 1602
if(___nl__bool__3){ goto label_37;}
#line 1604
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(554));
#line 1604
if(___nl__bool__3){ goto label_42;}
#line 1606
___nl__bool__3 = c_rt_lib0priv_is(___nl__im__2, ___get_global_string_const(129));
#line 1606
if(___nl__bool__3){ goto label_47;}
#line 1606
c_rt_lib0move(&___nl__im__4,___get_global_string_const(16));
#line 1606
c_rt_lib0move(&___nl__im__4, c_rt_lib0array_mk(2, ___nl__im__4, ___nl__im__2));
#line 1606
nl_die_arg(___nl__im__4);
#line 1592
label_20:
;
#line 1593
c_rt_lib0move(&___nl__im__1,___get_global_string_const(132));
#line 1594
goto label_52;
#line 1594
label_23:
;
#line 1595
c_rt_lib0move(&___nl__im__1,___get_global_string_const(403));
#line 1596
goto label_52;
#line 1596
label_26:
;
#line 1597
c_rt_lib0move(&___nl__im__1,___get_global_string_const(34));
#line 1598
goto label_52;
#line 1598
label_29:
;
#line 1599
c_rt_lib0move(&___nl__im__1,___get_global_string_const(404));
#line 1600
goto label_52;
#line 1600
label_32:
;
#line 1600
c_rt_lib0move(&___nl__im__6, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(551)));
#line 1600
c_rt_lib0copy(&___nl__im__5, ___nl__im__6);
#line 1601
c_rt_lib0move(&___nl__im__1,___get_global_string_const(551));
#line 1602
goto label_52;
#line 1602
label_37:
;
#line 1602
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(128)));
#line 1602
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1603
c_rt_lib0move(&___nl__im__1,___get_global_string_const(128));
#line 1604
goto label_52;
#line 1604
label_42:
;
#line 1604
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(554)));
#line 1604
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1605
c_rt_lib0move(&___nl__im__1,___get_global_string_const(502));
#line 1606
goto label_52;
#line 1606
label_47:
;
#line 1606
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__2, ___get_global_string_const(129)));
#line 1606
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1607
c_rt_lib0move(&___nl__im__1,___get_global_string_const(129));
#line 1608
goto label_52;
#line 1608
label_52:
;
#line 1609
c_rt_lib0move(&___nl__im__13, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(351)));
#line 1609
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(219));
#line 1609
if(___nl__bool__14){ goto label_61;}
#line 1610
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__13, ___get_global_string_const(420));
#line 1610
if(___nl__bool__14){ goto label_63;}
#line 1610
c_rt_lib0move(&___nl__im__15,___get_global_string_const(16));
#line 1610
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__13));
#line 1610
nl_die_arg(___nl__im__15);
#line 1609
label_61:
;
#line 1610
goto label_68;
#line 1610
label_63:
;
#line 1611
c_rt_lib0move(&___nl__im__16,___get_global_string_const(635));
#line 1611
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__16));
#line 1611
c_rt_lib0clear(&___nl__im__16);
#line 1612
goto label_68;
#line 1612
label_68:
;
#line 1613
c_rt_lib0move(&___nl__im__18,___get_global_string_const(636));
#line 1613
c_rt_lib0move(&___nl__im__21, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(218)));
#line 1613
___nl__int__20 = getIntFromImm(___nl__im__21);
#line 1613
c_rt_lib0clear(&___nl__im__21);
#line 1613
c_rt_lib0move(&___nl__im__22, c_rt_lib0int_new(___nl__int__20));
#line 1613
c_rt_lib0move(&___nl__im__19, ptd0int_to_string(___nl__im__22));
#line 1613
//clear ___nl__int__20;
#line 1613
c_rt_lib0clear(&___nl__im__22);
#line 1613
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1613
c_rt_lib0clear(&___nl__im__18);
#line 1613
c_rt_lib0clear(&___nl__im__19);
#line 1613
c_rt_lib0move(&___nl__im__1, c_rt_lib0concat_add(___nl__im__1, ___nl__im__17));
#line 1613
c_rt_lib0clear(&___nl__im__17);
#line 1614
c_rt_lib0clear(&___nl__im__0);
#line 1614
c_rt_lib0clear(&___nl__im__2);
#line 1614
//clear ___nl__bool__3;
#line 1614
c_rt_lib0clear(&___nl__im__4);
#line 1614
c_rt_lib0clear(&___nl__im__5);
#line 1614
c_rt_lib0clear(&___nl__im__6);
#line 1614
c_rt_lib0clear(&___nl__im__7);
#line 1614
c_rt_lib0clear(&___nl__im__8);
#line 1614
c_rt_lib0clear(&___nl__im__9);
#line 1614
c_rt_lib0clear(&___nl__im__10);
#line 1614
c_rt_lib0clear(&___nl__im__11);
#line 1614
c_rt_lib0clear(&___nl__im__12);
#line 1614
c_rt_lib0clear(&___nl__im__13);
#line 1614
//clear ___nl__bool__14;
#line 1614
c_rt_lib0clear(&___nl__im__15);
#line 1614
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
#line 1618
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(132));
#line 1618
if(___nl__bool__1){ goto label_19;}
#line 1620
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(403));
#line 1620
if(___nl__bool__1){ goto label_26;}
#line 1622
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(34));
#line 1622
if(___nl__bool__1){ goto label_34;}
#line 1624
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(404));
#line 1624
if(___nl__bool__1){ goto label_43;}
#line 1626
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(551));
#line 1626
if(___nl__bool__1){ goto label_53;}
#line 1628
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(128));
#line 1628
if(___nl__bool__1){ goto label_59;}
#line 1630
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(554));
#line 1630
if(___nl__bool__1){ goto label_65;}
#line 1632
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(129));
#line 1632
if(___nl__bool__1){ goto label_71;}
#line 1632
c_rt_lib0move(&___nl__im__2,___get_global_string_const(16));
#line 1632
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 1632
nl_die_arg(___nl__im__2);
#line 1618
label_19:
;
#line 1619
c_rt_lib0move(&___nl__im__3,___get_global_string_const(577));
#line 1619
c_rt_lib0clear(&___nl__im__0);
#line 1619
//clear ___nl__bool__1;
#line 1619
c_rt_lib0clear(&___nl__im__2);
#line 1619
return ___nl__im__3;
#line 1620
goto label_77;
#line 1620
label_26:
;
#line 1621
c_rt_lib0move(&___nl__im__4,___get_global_string_const(21));
#line 1621
c_rt_lib0clear(&___nl__im__0);
#line 1621
//clear ___nl__bool__1;
#line 1621
c_rt_lib0clear(&___nl__im__2);
#line 1621
c_rt_lib0clear(&___nl__im__3);
#line 1621
return ___nl__im__4;
#line 1622
goto label_77;
#line 1622
label_34:
;
#line 1623
c_rt_lib0move(&___nl__im__5,___get_global_string_const(573));
#line 1623
c_rt_lib0clear(&___nl__im__0);
#line 1623
//clear ___nl__bool__1;
#line 1623
c_rt_lib0clear(&___nl__im__2);
#line 1623
c_rt_lib0clear(&___nl__im__3);
#line 1623
c_rt_lib0clear(&___nl__im__4);
#line 1623
return ___nl__im__5;
#line 1624
goto label_77;
#line 1624
label_43:
;
#line 1625
c_rt_lib0move(&___nl__im__6,___get_global_string_const(577));
#line 1625
c_rt_lib0clear(&___nl__im__0);
#line 1625
//clear ___nl__bool__1;
#line 1625
c_rt_lib0clear(&___nl__im__2);
#line 1625
c_rt_lib0clear(&___nl__im__3);
#line 1625
c_rt_lib0clear(&___nl__im__4);
#line 1625
c_rt_lib0clear(&___nl__im__5);
#line 1625
return ___nl__im__6;
#line 1626
goto label_77;
#line 1626
label_53:
;
#line 1626
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(551)));
#line 1626
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1627
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(0));
#line 1627
nl_die_arg(___nl__im__9);
#line 1628
goto label_77;
#line 1628
label_59:
;
#line 1628
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(128)));
#line 1628
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1629
c_rt_lib0move(&___nl__im__12, c_rt_lib0array_mk(0));
#line 1629
nl_die_arg(___nl__im__12);
#line 1630
goto label_77;
#line 1630
label_65:
;
#line 1630
c_rt_lib0move(&___nl__im__14, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(554)));
#line 1630
c_rt_lib0copy(&___nl__im__13, ___nl__im__14);
#line 1631
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(0));
#line 1631
nl_die_arg(___nl__im__15);
#line 1632
goto label_77;
#line 1632
label_71:
;
#line 1632
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(129)));
#line 1632
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 1633
c_rt_lib0move(&___nl__im__18, c_rt_lib0array_mk(0));
#line 1633
nl_die_arg(___nl__im__18);
#line 1634
goto label_77;
#line 1634
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
#line 1639
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1640
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(0));
#line 1640
if(___nl__bool__5){ goto label_36;}
#line 1641
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 1641
if(___nl__bool__5){ goto label_38;}
#line 1642
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1642
if(___nl__bool__5){ goto label_42;}
#line 1648
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 1648
if(___nl__bool__5){ goto label_121;}
#line 1649
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1649
if(___nl__bool__5){ goto label_125;}
#line 1654
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 1654
if(___nl__bool__5){ goto label_189;}
#line 1655
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1655
if(___nl__bool__5){ goto label_193;}
#line 1658
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 1658
if(___nl__bool__5){ goto label_227;}
#line 1659
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 1659
if(___nl__bool__5){ goto label_231;}
#line 1660
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1660
if(___nl__bool__5){ goto label_233;}
#line 1661
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 1661
if(___nl__bool__5){ goto label_235;}
#line 1662
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1662
if(___nl__bool__5){ goto label_237;}
#line 1663
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 1663
if(___nl__bool__5){ goto label_239;}
#line 1664
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1664
if(___nl__bool__5){ goto label_241;}
#line 1665
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 1665
if(___nl__bool__5){ goto label_245;}
#line 1669
___nl__bool__5 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(15));
#line 1669
if(___nl__bool__5){ goto label_294;}
#line 1669
c_rt_lib0move(&___nl__im__6,___get_global_string_const(16));
#line 1669
c_rt_lib0move(&___nl__im__6, c_rt_lib0array_mk(2, ___nl__im__6, ___nl__im__1));
#line 1669
nl_die_arg(___nl__im__6);
#line 1640
label_36:
;
#line 1641
goto label_296;
#line 1641
label_38:
;
#line 1641
c_rt_lib0move(&___nl__im__8, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 1641
c_rt_lib0copy(&___nl__im__7, ___nl__im__8);
#line 1642
goto label_296;
#line 1642
label_42:
;
#line 1642
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(2)));
#line 1642
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 1643
___nl__im_ptr__15 = &((*___ref___rec__2).mod_name0field);
#line 1643
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1643
___nl__im_ptr__15 = NULL;
#line 1643
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_array_push_fun_header(___nl__im__0, ___nl__im__9, ___nl__im__14, ___nl__bool__3));
#line 1643
c_rt_lib0clear(&___nl__im__14);
#line 1643
c_rt_lib0move(&___nl__im__16,___get_global_string_const(440));
#line 1643
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 1643
c_rt_lib0clear(&___nl__im__13);
#line 1643
c_rt_lib0clear(&___nl__im__16);
#line 1643
c_rt_lib0move(&___nl__im__17, string0lf());
#line 1643
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__17));
#line 1643
c_rt_lib0clear(&___nl__im__12);
#line 1643
c_rt_lib0clear(&___nl__im__17);
#line 1643
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1643
c_rt_lib0clear(&___nl__im__11);
#line 1644
___nl__im_ptr__22 = &((*___ref___rec__2).mod_name0field);
#line 1644
c_rt_lib0copy(&___nl__im__21, (*___nl__im_ptr__22));
#line 1644
___nl__im_ptr__22 = NULL;
#line 1644
c_rt_lib0move(&___nl__im__20, generator_c_priv0get_array_get_fun_header(___nl__im__0, ___nl__im__9, ___nl__im__21, ___nl__bool__3));
#line 1644
c_rt_lib0clear(&___nl__im__21);
#line 1644
c_rt_lib0move(&___nl__im__23,___get_global_string_const(440));
#line 1644
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__23));
#line 1644
c_rt_lib0clear(&___nl__im__20);
#line 1644
c_rt_lib0clear(&___nl__im__23);
#line 1644
c_rt_lib0move(&___nl__im__24, string0lf());
#line 1644
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__24));
#line 1644
c_rt_lib0clear(&___nl__im__19);
#line 1644
c_rt_lib0clear(&___nl__im__24);
#line 1644
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__18));
#line 1644
c_rt_lib0clear(&___nl__im__18);
#line 1645
___nl__im_ptr__29 = &((*___ref___rec__2).mod_name0field);
#line 1645
c_rt_lib0copy(&___nl__im__28, (*___nl__im_ptr__29));
#line 1645
___nl__im_ptr__29 = NULL;
#line 1645
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_array_len_fun_header(___nl__im__0, ___nl__im__28, ___nl__bool__3));
#line 1645
c_rt_lib0clear(&___nl__im__28);
#line 1645
c_rt_lib0move(&___nl__im__30,___get_global_string_const(440));
#line 1645
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__30));
#line 1645
c_rt_lib0clear(&___nl__im__27);
#line 1645
c_rt_lib0clear(&___nl__im__30);
#line 1645
c_rt_lib0move(&___nl__im__31, string0lf());
#line 1645
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__31));
#line 1645
c_rt_lib0clear(&___nl__im__26);
#line 1645
c_rt_lib0clear(&___nl__im__31);
#line 1645
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__25));
#line 1645
c_rt_lib0clear(&___nl__im__25);
#line 1646
___nl__im_ptr__36 = &((*___ref___rec__2).mod_name0field);
#line 1646
c_rt_lib0copy(&___nl__im__35, (*___nl__im_ptr__36));
#line 1646
___nl__im_ptr__36 = NULL;
#line 1646
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_array_clean_fun_header(___nl__im__0, ___nl__im__35, ___nl__bool__3));
#line 1646
c_rt_lib0clear(&___nl__im__35);
#line 1646
c_rt_lib0move(&___nl__im__37,___get_global_string_const(440));
#line 1646
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__37));
#line 1646
c_rt_lib0clear(&___nl__im__34);
#line 1646
c_rt_lib0clear(&___nl__im__37);
#line 1646
c_rt_lib0move(&___nl__im__38, string0lf());
#line 1646
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__38));
#line 1646
c_rt_lib0clear(&___nl__im__33);
#line 1646
c_rt_lib0clear(&___nl__im__38);
#line 1646
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__32));
#line 1646
c_rt_lib0clear(&___nl__im__32);
#line 1647
___nl__im_ptr__43 = &((*___ref___rec__2).mod_name0field);
#line 1647
c_rt_lib0copy(&___nl__im__42, (*___nl__im_ptr__43));
#line 1647
___nl__im_ptr__43 = NULL;
#line 1647
c_rt_lib0move(&___nl__im__41, generator_c_priv0get_array_free_fun_header(___nl__im__0, ___nl__im__42, ___nl__bool__3));
#line 1647
c_rt_lib0clear(&___nl__im__42);
#line 1647
c_rt_lib0move(&___nl__im__44,___get_global_string_const(440));
#line 1647
c_rt_lib0move(&___nl__im__40, c_rt_lib0concat_new(___nl__im__41, ___nl__im__44));
#line 1647
c_rt_lib0clear(&___nl__im__41);
#line 1647
c_rt_lib0clear(&___nl__im__44);
#line 1647
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1647
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__45));
#line 1647
c_rt_lib0clear(&___nl__im__40);
#line 1647
c_rt_lib0clear(&___nl__im__45);
#line 1647
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__39));
#line 1647
c_rt_lib0clear(&___nl__im__39);
#line 1648
goto label_296;
#line 1648
label_121:
;
#line 1648
c_rt_lib0move(&___nl__im__47, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 1648
c_rt_lib0copy(&___nl__im__46, ___nl__im__47);
#line 1649
goto label_296;
#line 1649
label_125:
;
#line 1649
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(4)));
#line 1649
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 1650
___nl__im_ptr__54 = &((*___ref___rec__2).mod_name0field);
#line 1650
c_rt_lib0copy(&___nl__im__53, (*___nl__im_ptr__54));
#line 1650
___nl__im_ptr__54 = NULL;
#line 1650
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_hash_get_fun_header(___nl__im__0, ___nl__im__48, ___nl__im__53, ___nl__bool__3));
#line 1650
c_rt_lib0clear(&___nl__im__53);
#line 1650
c_rt_lib0move(&___nl__im__55,___get_global_string_const(440));
#line 1650
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__55));
#line 1650
c_rt_lib0clear(&___nl__im__52);
#line 1650
c_rt_lib0clear(&___nl__im__55);
#line 1650
c_rt_lib0move(&___nl__im__56, string0lf());
#line 1650
c_rt_lib0move(&___nl__im__50, c_rt_lib0concat_new(___nl__im__51, ___nl__im__56));
#line 1650
c_rt_lib0clear(&___nl__im__51);
#line 1650
c_rt_lib0clear(&___nl__im__56);
#line 1650
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__50));
#line 1650
c_rt_lib0clear(&___nl__im__50);
#line 1651
___nl__im_ptr__61 = &((*___ref___rec__2).mod_name0field);
#line 1651
c_rt_lib0copy(&___nl__im__60, (*___nl__im_ptr__61));
#line 1651
___nl__im_ptr__61 = NULL;
#line 1651
c_rt_lib0move(&___nl__im__59, generator_c_priv0get_hash_next_iter_fun_header(___nl__im__0, ___nl__im__60, ___nl__bool__3));
#line 1651
c_rt_lib0clear(&___nl__im__60);
#line 1651
c_rt_lib0move(&___nl__im__62,___get_global_string_const(440));
#line 1651
c_rt_lib0move(&___nl__im__58, c_rt_lib0concat_new(___nl__im__59, ___nl__im__62));
#line 1651
c_rt_lib0clear(&___nl__im__59);
#line 1651
c_rt_lib0clear(&___nl__im__62);
#line 1651
c_rt_lib0move(&___nl__im__63, string0lf());
#line 1651
c_rt_lib0move(&___nl__im__57, c_rt_lib0concat_new(___nl__im__58, ___nl__im__63));
#line 1651
c_rt_lib0clear(&___nl__im__58);
#line 1651
c_rt_lib0clear(&___nl__im__63);
#line 1651
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__57));
#line 1651
c_rt_lib0clear(&___nl__im__57);
#line 1652
___nl__im_ptr__68 = &((*___ref___rec__2).mod_name0field);
#line 1652
c_rt_lib0copy(&___nl__im__67, (*___nl__im_ptr__68));
#line 1652
___nl__im_ptr__68 = NULL;
#line 1652
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_hash_clean_fun_header(___nl__im__0, ___nl__im__67, ___nl__bool__3));
#line 1652
c_rt_lib0clear(&___nl__im__67);
#line 1652
c_rt_lib0move(&___nl__im__69,___get_global_string_const(440));
#line 1652
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__69));
#line 1652
c_rt_lib0clear(&___nl__im__66);
#line 1652
c_rt_lib0clear(&___nl__im__69);
#line 1652
c_rt_lib0move(&___nl__im__70, string0lf());
#line 1652
c_rt_lib0move(&___nl__im__64, c_rt_lib0concat_new(___nl__im__65, ___nl__im__70));
#line 1652
c_rt_lib0clear(&___nl__im__65);
#line 1652
c_rt_lib0clear(&___nl__im__70);
#line 1652
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__64));
#line 1652
c_rt_lib0clear(&___nl__im__64);
#line 1653
___nl__im_ptr__75 = &((*___ref___rec__2).mod_name0field);
#line 1653
c_rt_lib0copy(&___nl__im__74, (*___nl__im_ptr__75));
#line 1653
___nl__im_ptr__75 = NULL;
#line 1653
c_rt_lib0move(&___nl__im__73, generator_c_priv0get_hash_free_fun_header(___nl__im__0, ___nl__im__74, ___nl__bool__3));
#line 1653
c_rt_lib0clear(&___nl__im__74);
#line 1653
c_rt_lib0move(&___nl__im__76,___get_global_string_const(440));
#line 1653
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__76));
#line 1653
c_rt_lib0clear(&___nl__im__73);
#line 1653
c_rt_lib0clear(&___nl__im__76);
#line 1653
c_rt_lib0move(&___nl__im__77, string0lf());
#line 1653
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__77));
#line 1653
c_rt_lib0clear(&___nl__im__72);
#line 1653
c_rt_lib0clear(&___nl__im__77);
#line 1653
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__71));
#line 1653
c_rt_lib0clear(&___nl__im__71);
#line 1654
goto label_296;
#line 1654
label_189:
;
#line 1654
c_rt_lib0move(&___nl__im__79, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 1654
c_rt_lib0copy(&___nl__im__78, ___nl__im__79);
#line 1655
goto label_296;
#line 1655
label_193:
;
#line 1655
c_rt_lib0move(&___nl__im__81, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(6)));
#line 1655
c_rt_lib0copy(&___nl__im__80, ___nl__im__81);
#line 1656
___nl__im_ptr__86 = &((*___ref___rec__2).mod_name0field);
#line 1656
c_rt_lib0copy(&___nl__im__85, (*___nl__im_ptr__86));
#line 1656
___nl__im_ptr__86 = NULL;
#line 1656
c_rt_lib0move(&___nl__im__84, generator_c_priv0get_rec_clean_fun_header(___nl__im__0, ___nl__im__85, ___nl__bool__3));
#line 1656
c_rt_lib0clear(&___nl__im__85);
#line 1656
c_rt_lib0move(&___nl__im__87,___get_global_string_const(440));
#line 1656
c_rt_lib0move(&___nl__im__83, c_rt_lib0concat_new(___nl__im__84, ___nl__im__87));
#line 1656
c_rt_lib0clear(&___nl__im__84);
#line 1656
c_rt_lib0clear(&___nl__im__87);
#line 1656
c_rt_lib0move(&___nl__im__88, string0lf());
#line 1656
c_rt_lib0move(&___nl__im__82, c_rt_lib0concat_new(___nl__im__83, ___nl__im__88));
#line 1656
c_rt_lib0clear(&___nl__im__83);
#line 1656
c_rt_lib0clear(&___nl__im__88);
#line 1656
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__82));
#line 1656
c_rt_lib0clear(&___nl__im__82);
#line 1657
___nl__im_ptr__93 = &((*___ref___rec__2).mod_name0field);
#line 1657
c_rt_lib0copy(&___nl__im__92, (*___nl__im_ptr__93));
#line 1657
___nl__im_ptr__93 = NULL;
#line 1657
c_rt_lib0move(&___nl__im__91, generator_c_priv0get_rec_free_fun_header(___nl__im__0, ___nl__im__92, ___nl__bool__3));
#line 1657
c_rt_lib0clear(&___nl__im__92);
#line 1657
c_rt_lib0move(&___nl__im__94,___get_global_string_const(440));
#line 1657
c_rt_lib0move(&___nl__im__90, c_rt_lib0concat_new(___nl__im__91, ___nl__im__94));
#line 1657
c_rt_lib0clear(&___nl__im__91);
#line 1657
c_rt_lib0clear(&___nl__im__94);
#line 1657
c_rt_lib0move(&___nl__im__95, string0lf());
#line 1657
c_rt_lib0move(&___nl__im__89, c_rt_lib0concat_new(___nl__im__90, ___nl__im__95));
#line 1657
c_rt_lib0clear(&___nl__im__90);
#line 1657
c_rt_lib0clear(&___nl__im__95);
#line 1657
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__89));
#line 1657
c_rt_lib0clear(&___nl__im__89);
#line 1658
goto label_296;
#line 1658
label_227:
;
#line 1658
c_rt_lib0move(&___nl__im__97, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(7)));
#line 1658
c_rt_lib0copy(&___nl__im__96, ___nl__im__97);
#line 1659
goto label_296;
#line 1659
label_231:
;
#line 1660
goto label_296;
#line 1660
label_233:
;
#line 1661
goto label_296;
#line 1661
label_235:
;
#line 1662
goto label_296;
#line 1662
label_237:
;
#line 1663
goto label_296;
#line 1663
label_239:
;
#line 1664
goto label_296;
#line 1664
label_241:
;
#line 1664
c_rt_lib0move(&___nl__im__99, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 1664
c_rt_lib0copy(&___nl__im__98, ___nl__im__99);
#line 1665
goto label_296;
#line 1665
label_245:
;
#line 1665
c_rt_lib0move(&___nl__im__101, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(14)));
#line 1665
c_rt_lib0copy(&___nl__im__100, ___nl__im__101);
#line 1666
___nl__im_ptr__106 = &((*___ref___rec__2).mod_name0field);
#line 1666
c_rt_lib0copy(&___nl__im__105, (*___nl__im_ptr__106));
#line 1666
___nl__im_ptr__106 = NULL;
#line 1666
c_rt_lib0move(&___nl__im__104, generator_c_priv0get_variant_make_fun_header(___nl__im__0, ___nl__im__105, ___nl__bool__3));
#line 1666
c_rt_lib0clear(&___nl__im__105);
#line 1666
c_rt_lib0move(&___nl__im__107,___get_global_string_const(440));
#line 1666
c_rt_lib0move(&___nl__im__103, c_rt_lib0concat_new(___nl__im__104, ___nl__im__107));
#line 1666
c_rt_lib0clear(&___nl__im__104);
#line 1666
c_rt_lib0clear(&___nl__im__107);
#line 1666
c_rt_lib0move(&___nl__im__108, string0lf());
#line 1666
c_rt_lib0move(&___nl__im__102, c_rt_lib0concat_new(___nl__im__103, ___nl__im__108));
#line 1666
c_rt_lib0clear(&___nl__im__103);
#line 1666
c_rt_lib0clear(&___nl__im__108);
#line 1666
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__102));
#line 1666
c_rt_lib0clear(&___nl__im__102);
#line 1667
___nl__im_ptr__113 = &((*___ref___rec__2).mod_name0field);
#line 1667
c_rt_lib0copy(&___nl__im__112, (*___nl__im_ptr__113));
#line 1667
___nl__im_ptr__113 = NULL;
#line 1667
c_rt_lib0move(&___nl__im__111, generator_c_priv0get_variant_clean_fun_header(___nl__im__0, ___nl__im__112, ___nl__bool__3));
#line 1667
c_rt_lib0clear(&___nl__im__112);
#line 1667
c_rt_lib0move(&___nl__im__114,___get_global_string_const(440));
#line 1667
c_rt_lib0move(&___nl__im__110, c_rt_lib0concat_new(___nl__im__111, ___nl__im__114));
#line 1667
c_rt_lib0clear(&___nl__im__111);
#line 1667
c_rt_lib0clear(&___nl__im__114);
#line 1667
c_rt_lib0move(&___nl__im__115, string0lf());
#line 1667
c_rt_lib0move(&___nl__im__109, c_rt_lib0concat_new(___nl__im__110, ___nl__im__115));
#line 1667
c_rt_lib0clear(&___nl__im__110);
#line 1667
c_rt_lib0clear(&___nl__im__115);
#line 1667
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__109));
#line 1667
c_rt_lib0clear(&___nl__im__109);
#line 1668
___nl__im_ptr__120 = &((*___ref___rec__2).mod_name0field);
#line 1668
c_rt_lib0copy(&___nl__im__119, (*___nl__im_ptr__120));
#line 1668
___nl__im_ptr__120 = NULL;
#line 1668
c_rt_lib0move(&___nl__im__118, generator_c_priv0get_variant_free_fun_header(___nl__im__0, ___nl__im__119, ___nl__bool__3));
#line 1668
c_rt_lib0clear(&___nl__im__119);
#line 1668
c_rt_lib0move(&___nl__im__121,___get_global_string_const(440));
#line 1668
c_rt_lib0move(&___nl__im__117, c_rt_lib0concat_new(___nl__im__118, ___nl__im__121));
#line 1668
c_rt_lib0clear(&___nl__im__118);
#line 1668
c_rt_lib0clear(&___nl__im__121);
#line 1668
c_rt_lib0move(&___nl__im__122, string0lf());
#line 1668
c_rt_lib0move(&___nl__im__116, c_rt_lib0concat_new(___nl__im__117, ___nl__im__122));
#line 1668
c_rt_lib0clear(&___nl__im__117);
#line 1668
c_rt_lib0clear(&___nl__im__122);
#line 1668
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__116));
#line 1668
c_rt_lib0clear(&___nl__im__116);
#line 1669
goto label_296;
#line 1669
label_294:
;
#line 1670
goto label_296;
#line 1670
label_296:
;
#line 1671
c_rt_lib0clear(&___nl__im__0);
#line 1671
c_rt_lib0clear(&___nl__im__1);
#line 1671
//clear ___nl__bool__3;
#line 1671
//clear ___nl__bool__5;
#line 1671
c_rt_lib0clear(&___nl__im__6);
#line 1671
c_rt_lib0clear(&___nl__im__7);
#line 1671
c_rt_lib0clear(&___nl__im__8);
#line 1671
c_rt_lib0clear(&___nl__im__9);
#line 1671
c_rt_lib0clear(&___nl__im__10);
#line 1671
c_rt_lib0clear(&___nl__im__46);
#line 1671
c_rt_lib0clear(&___nl__im__47);
#line 1671
c_rt_lib0clear(&___nl__im__48);
#line 1671
c_rt_lib0clear(&___nl__im__49);
#line 1671
c_rt_lib0clear(&___nl__im__78);
#line 1671
c_rt_lib0clear(&___nl__im__79);
#line 1671
c_rt_lib0clear(&___nl__im__80);
#line 1671
c_rt_lib0clear(&___nl__im__81);
#line 1671
c_rt_lib0clear(&___nl__im__96);
#line 1671
c_rt_lib0clear(&___nl__im__97);
#line 1671
c_rt_lib0clear(&___nl__im__98);
#line 1671
c_rt_lib0clear(&___nl__im__99);
#line 1671
c_rt_lib0clear(&___nl__im__100);
#line 1671
c_rt_lib0clear(&___nl__im__101);
#line 1671
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
#line 1676
c_rt_lib0move(&___nl__im__5,___get_global_string_const(37));
#line 1677
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(0));
#line 1677
if(___nl__bool__6){ goto label_36;}
#line 1678
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(1));
#line 1678
if(___nl__bool__6){ goto label_38;}
#line 1679
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1679
if(___nl__bool__6){ goto label_42;}
#line 1685
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(3));
#line 1685
if(___nl__bool__6){ goto label_101;}
#line 1686
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1686
if(___nl__bool__6){ goto label_105;}
#line 1691
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(5));
#line 1691
if(___nl__bool__6){ goto label_153;}
#line 1692
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1692
if(___nl__bool__6){ goto label_157;}
#line 1695
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(7));
#line 1695
if(___nl__bool__6){ goto label_183;}
#line 1696
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(8));
#line 1696
if(___nl__bool__6){ goto label_187;}
#line 1697
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(9));
#line 1697
if(___nl__bool__6){ goto label_189;}
#line 1698
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 1698
if(___nl__bool__6){ goto label_191;}
#line 1699
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(11));
#line 1699
if(___nl__bool__6){ goto label_193;}
#line 1700
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 1700
if(___nl__bool__6){ goto label_195;}
#line 1701
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(13));
#line 1701
if(___nl__bool__6){ goto label_197;}
#line 1702
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 1702
if(___nl__bool__6){ goto label_201;}
#line 1707
___nl__bool__6 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(15));
#line 1707
if(___nl__bool__6){ goto label_238;}
#line 1707
c_rt_lib0move(&___nl__im__7,___get_global_string_const(16));
#line 1707
c_rt_lib0move(&___nl__im__7, c_rt_lib0array_mk(2, ___nl__im__7, ___nl__im__1));
#line 1707
nl_die_arg(___nl__im__7);
#line 1677
label_36:
;
#line 1678
goto label_240;
#line 1678
label_38:
;
#line 1678
c_rt_lib0move(&___nl__im__9, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(1)));
#line 1678
c_rt_lib0copy(&___nl__im__8, ___nl__im__9);
#line 1679
goto label_240;
#line 1679
label_42:
;
#line 1679
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(2)));
#line 1679
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 1680
___nl__im_ptr__15 = &((*___ref___rec__2).mod_name0field);
#line 1680
c_rt_lib0copy(&___nl__im__14, (*___nl__im_ptr__15));
#line 1680
___nl__im_ptr__15 = NULL;
#line 1680
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_array_push_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__14, ___nl__bool__4));
#line 1680
c_rt_lib0clear(&___nl__im__14);
#line 1680
c_rt_lib0move(&___nl__im__16, string0lf());
#line 1680
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__16));
#line 1680
c_rt_lib0clear(&___nl__im__13);
#line 1680
c_rt_lib0clear(&___nl__im__16);
#line 1680
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__12));
#line 1680
c_rt_lib0clear(&___nl__im__12);
#line 1681
___nl__im_ptr__20 = &((*___ref___rec__2).mod_name0field);
#line 1681
c_rt_lib0copy(&___nl__im__19, (*___nl__im_ptr__20));
#line 1681
___nl__im_ptr__20 = NULL;
#line 1681
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_array_get_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__19, ___nl__bool__4));
#line 1681
c_rt_lib0clear(&___nl__im__19);
#line 1681
c_rt_lib0move(&___nl__im__21, string0lf());
#line 1681
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__21));
#line 1681
c_rt_lib0clear(&___nl__im__18);
#line 1681
c_rt_lib0clear(&___nl__im__21);
#line 1681
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__17));
#line 1681
c_rt_lib0clear(&___nl__im__17);
#line 1682
___nl__im_ptr__25 = &((*___ref___rec__2).mod_name0field);
#line 1682
c_rt_lib0copy(&___nl__im__24, (*___nl__im_ptr__25));
#line 1682
___nl__im_ptr__25 = NULL;
#line 1682
c_rt_lib0move(&___nl__im__23, generator_c_priv0get_array_len_fun_def(___nl__im__0, ___nl__im__24, ___nl__bool__4));
#line 1682
c_rt_lib0clear(&___nl__im__24);
#line 1682
c_rt_lib0move(&___nl__im__26, string0lf());
#line 1682
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__26));
#line 1682
c_rt_lib0clear(&___nl__im__23);
#line 1682
c_rt_lib0clear(&___nl__im__26);
#line 1682
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__22));
#line 1682
c_rt_lib0clear(&___nl__im__22);
#line 1683
___nl__im_ptr__30 = &((*___ref___rec__2).mod_name0field);
#line 1683
c_rt_lib0copy(&___nl__im__29, (*___nl__im_ptr__30));
#line 1683
___nl__im_ptr__30 = NULL;
#line 1683
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_array_clean_fun_def(___nl__im__0, ___nl__im__10, ___nl__im__29, ___nl__im__3, ___nl__bool__4));
#line 1683
c_rt_lib0clear(&___nl__im__29);
#line 1683
c_rt_lib0move(&___nl__im__31, string0lf());
#line 1683
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__31));
#line 1683
c_rt_lib0clear(&___nl__im__28);
#line 1683
c_rt_lib0clear(&___nl__im__31);
#line 1683
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__27));
#line 1683
c_rt_lib0clear(&___nl__im__27);
#line 1684
___nl__im_ptr__35 = &((*___ref___rec__2).mod_name0field);
#line 1684
c_rt_lib0copy(&___nl__im__34, (*___nl__im_ptr__35));
#line 1684
___nl__im_ptr__35 = NULL;
#line 1684
c_rt_lib0move(&___nl__im__33, generator_c_priv0get_array_free_fun_def(___nl__im__0, ___nl__im__34, ___nl__bool__4));
#line 1684
c_rt_lib0clear(&___nl__im__34);
#line 1684
c_rt_lib0move(&___nl__im__36, string0lf());
#line 1684
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__36));
#line 1684
c_rt_lib0clear(&___nl__im__33);
#line 1684
c_rt_lib0clear(&___nl__im__36);
#line 1684
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__32));
#line 1684
c_rt_lib0clear(&___nl__im__32);
#line 1685
goto label_240;
#line 1685
label_101:
;
#line 1685
c_rt_lib0move(&___nl__im__38, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(3)));
#line 1685
c_rt_lib0copy(&___nl__im__37, ___nl__im__38);
#line 1686
goto label_240;
#line 1686
label_105:
;
#line 1686
c_rt_lib0move(&___nl__im__40, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(4)));
#line 1686
c_rt_lib0copy(&___nl__im__39, ___nl__im__40);
#line 1687
___nl__im_ptr__44 = &((*___ref___rec__2).mod_name0field);
#line 1687
c_rt_lib0copy(&___nl__im__43, (*___nl__im_ptr__44));
#line 1687
___nl__im_ptr__44 = NULL;
#line 1687
c_rt_lib0move(&___nl__im__42, generator_c_priv0get_hash_get_fun_def(___nl__im__0, ___nl__im__39, ___nl__im__43, ___nl__bool__4));
#line 1687
c_rt_lib0clear(&___nl__im__43);
#line 1687
c_rt_lib0move(&___nl__im__45, string0lf());
#line 1687
c_rt_lib0move(&___nl__im__41, c_rt_lib0concat_new(___nl__im__42, ___nl__im__45));
#line 1687
c_rt_lib0clear(&___nl__im__42);
#line 1687
c_rt_lib0clear(&___nl__im__45);
#line 1687
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__41));
#line 1687
c_rt_lib0clear(&___nl__im__41);
#line 1688
___nl__im_ptr__49 = &((*___ref___rec__2).mod_name0field);
#line 1688
c_rt_lib0copy(&___nl__im__48, (*___nl__im_ptr__49));
#line 1688
___nl__im_ptr__49 = NULL;
#line 1688
c_rt_lib0move(&___nl__im__47, generator_c_priv0get_hash_next_iter_fun_def(___nl__im__0, ___nl__im__48, ___nl__bool__4));
#line 1688
c_rt_lib0clear(&___nl__im__48);
#line 1688
c_rt_lib0move(&___nl__im__50, string0lf());
#line 1688
c_rt_lib0move(&___nl__im__46, c_rt_lib0concat_new(___nl__im__47, ___nl__im__50));
#line 1688
c_rt_lib0clear(&___nl__im__47);
#line 1688
c_rt_lib0clear(&___nl__im__50);
#line 1688
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__46));
#line 1688
c_rt_lib0clear(&___nl__im__46);
#line 1689
___nl__im_ptr__54 = &((*___ref___rec__2).mod_name0field);
#line 1689
c_rt_lib0copy(&___nl__im__53, (*___nl__im_ptr__54));
#line 1689
___nl__im_ptr__54 = NULL;
#line 1689
c_rt_lib0move(&___nl__im__52, generator_c_priv0get_hash_clean_fun_def(___nl__im__0, ___nl__im__39, ___nl__im__53, ___nl__im__3, ___nl__bool__4));
#line 1689
c_rt_lib0clear(&___nl__im__53);
#line 1689
c_rt_lib0move(&___nl__im__55, string0lf());
#line 1689
c_rt_lib0move(&___nl__im__51, c_rt_lib0concat_new(___nl__im__52, ___nl__im__55));
#line 1689
c_rt_lib0clear(&___nl__im__52);
#line 1689
c_rt_lib0clear(&___nl__im__55);
#line 1689
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__51));
#line 1689
c_rt_lib0clear(&___nl__im__51);
#line 1690
___nl__im_ptr__59 = &((*___ref___rec__2).mod_name0field);
#line 1690
c_rt_lib0copy(&___nl__im__58, (*___nl__im_ptr__59));
#line 1690
___nl__im_ptr__59 = NULL;
#line 1690
c_rt_lib0move(&___nl__im__57, generator_c_priv0get_hash_free_fun_def(___nl__im__0, ___nl__im__58, ___nl__bool__4));
#line 1690
c_rt_lib0clear(&___nl__im__58);
#line 1690
c_rt_lib0move(&___nl__im__60, string0lf());
#line 1690
c_rt_lib0move(&___nl__im__56, c_rt_lib0concat_new(___nl__im__57, ___nl__im__60));
#line 1690
c_rt_lib0clear(&___nl__im__57);
#line 1690
c_rt_lib0clear(&___nl__im__60);
#line 1690
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__56));
#line 1690
c_rt_lib0clear(&___nl__im__56);
#line 1691
goto label_240;
#line 1691
label_153:
;
#line 1691
c_rt_lib0move(&___nl__im__62, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(5)));
#line 1691
c_rt_lib0copy(&___nl__im__61, ___nl__im__62);
#line 1692
goto label_240;
#line 1692
label_157:
;
#line 1692
c_rt_lib0move(&___nl__im__64, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(6)));
#line 1692
c_rt_lib0copy(&___nl__im__63, ___nl__im__64);
#line 1693
___nl__im_ptr__68 = &((*___ref___rec__2).mod_name0field);
#line 1693
c_rt_lib0copy(&___nl__im__67, (*___nl__im_ptr__68));
#line 1693
___nl__im_ptr__68 = NULL;
#line 1693
c_rt_lib0move(&___nl__im__66, generator_c_priv0get_rec_clean_fun_def(___nl__im__0, ___nl__im__63, ___nl__im__67, ___nl__im__3, ___nl__bool__4));
#line 1693
c_rt_lib0clear(&___nl__im__67);
#line 1693
c_rt_lib0move(&___nl__im__69, string0lf());
#line 1693
c_rt_lib0move(&___nl__im__65, c_rt_lib0concat_new(___nl__im__66, ___nl__im__69));
#line 1693
c_rt_lib0clear(&___nl__im__66);
#line 1693
c_rt_lib0clear(&___nl__im__69);
#line 1693
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__65));
#line 1693
c_rt_lib0clear(&___nl__im__65);
#line 1694
___nl__im_ptr__73 = &((*___ref___rec__2).mod_name0field);
#line 1694
c_rt_lib0copy(&___nl__im__72, (*___nl__im_ptr__73));
#line 1694
___nl__im_ptr__73 = NULL;
#line 1694
c_rt_lib0move(&___nl__im__71, generator_c_priv0get_rec_free_fun_def(___nl__im__0, ___nl__im__72, ___nl__bool__4));
#line 1694
c_rt_lib0clear(&___nl__im__72);
#line 1694
c_rt_lib0move(&___nl__im__74, string0lf());
#line 1694
c_rt_lib0move(&___nl__im__70, c_rt_lib0concat_new(___nl__im__71, ___nl__im__74));
#line 1694
c_rt_lib0clear(&___nl__im__71);
#line 1694
c_rt_lib0clear(&___nl__im__74);
#line 1694
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__70));
#line 1694
c_rt_lib0clear(&___nl__im__70);
#line 1695
goto label_240;
#line 1695
label_183:
;
#line 1695
c_rt_lib0move(&___nl__im__76, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(7)));
#line 1695
c_rt_lib0copy(&___nl__im__75, ___nl__im__76);
#line 1696
goto label_240;
#line 1696
label_187:
;
#line 1697
goto label_240;
#line 1697
label_189:
;
#line 1698
goto label_240;
#line 1698
label_191:
;
#line 1699
goto label_240;
#line 1699
label_193:
;
#line 1700
goto label_240;
#line 1700
label_195:
;
#line 1701
goto label_240;
#line 1701
label_197:
;
#line 1701
c_rt_lib0move(&___nl__im__78, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(13)));
#line 1701
c_rt_lib0copy(&___nl__im__77, ___nl__im__78);
#line 1702
goto label_240;
#line 1702
label_201:
;
#line 1702
c_rt_lib0move(&___nl__im__80, c_rt_lib0priv_as(___nl__im__1, ___get_global_string_const(14)));
#line 1702
c_rt_lib0copy(&___nl__im__79, ___nl__im__80);
#line 1703
___nl__im_ptr__84 = &((*___ref___rec__2).mod_name0field);
#line 1703
c_rt_lib0copy(&___nl__im__83, (*___nl__im_ptr__84));
#line 1703
___nl__im_ptr__84 = NULL;
#line 1703
c_rt_lib0move(&___nl__im__82, generator_c_priv0get_variant_make_fun_def(___nl__im__0, ___nl__im__83, ___nl__bool__4));
#line 1703
c_rt_lib0clear(&___nl__im__83);
#line 1703
c_rt_lib0move(&___nl__im__85, string0lf());
#line 1703
c_rt_lib0move(&___nl__im__81, c_rt_lib0concat_new(___nl__im__82, ___nl__im__85));
#line 1703
c_rt_lib0clear(&___nl__im__82);
#line 1703
c_rt_lib0clear(&___nl__im__85);
#line 1703
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__81));
#line 1703
c_rt_lib0clear(&___nl__im__81);
#line 1704
___nl__im_ptr__89 = &((*___ref___rec__2).mod_name0field);
#line 1704
c_rt_lib0copy(&___nl__im__88, (*___nl__im_ptr__89));
#line 1704
___nl__im_ptr__89 = NULL;
#line 1704
c_rt_lib0move(&___nl__im__87, generator_c_priv0get_variant_clean_fun_def(___nl__im__0, ___nl__im__79, ___nl__im__88, ___nl__bool__4));
#line 1704
c_rt_lib0clear(&___nl__im__88);
#line 1705
c_rt_lib0move(&___nl__im__90, string0lf());
#line 1705
c_rt_lib0move(&___nl__im__86, c_rt_lib0concat_new(___nl__im__87, ___nl__im__90));
#line 1705
c_rt_lib0clear(&___nl__im__87);
#line 1705
c_rt_lib0clear(&___nl__im__90);
#line 1705
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__86));
#line 1705
c_rt_lib0clear(&___nl__im__86);
#line 1706
___nl__im_ptr__94 = &((*___ref___rec__2).mod_name0field);
#line 1706
c_rt_lib0copy(&___nl__im__93, (*___nl__im_ptr__94));
#line 1706
___nl__im_ptr__94 = NULL;
#line 1706
c_rt_lib0move(&___nl__im__92, generator_c_priv0get_variant_free_fun_def(___nl__im__0, ___nl__im__93, ___nl__bool__4));
#line 1706
c_rt_lib0clear(&___nl__im__93);
#line 1706
c_rt_lib0move(&___nl__im__95, string0lf());
#line 1706
c_rt_lib0move(&___nl__im__91, c_rt_lib0concat_new(___nl__im__92, ___nl__im__95));
#line 1706
c_rt_lib0clear(&___nl__im__92);
#line 1706
c_rt_lib0clear(&___nl__im__95);
#line 1706
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__91));
#line 1706
c_rt_lib0clear(&___nl__im__91);
#line 1707
goto label_240;
#line 1707
label_238:
;
#line 1708
goto label_240;
#line 1708
label_240:
;
#line 1709
c_rt_lib0clear(&___nl__im__0);
#line 1709
c_rt_lib0clear(&___nl__im__1);
#line 1709
c_rt_lib0clear(&___nl__im__3);
#line 1709
//clear ___nl__bool__4;
#line 1709
//clear ___nl__bool__6;
#line 1709
c_rt_lib0clear(&___nl__im__7);
#line 1709
c_rt_lib0clear(&___nl__im__8);
#line 1709
c_rt_lib0clear(&___nl__im__9);
#line 1709
c_rt_lib0clear(&___nl__im__10);
#line 1709
c_rt_lib0clear(&___nl__im__11);
#line 1709
c_rt_lib0clear(&___nl__im__37);
#line 1709
c_rt_lib0clear(&___nl__im__38);
#line 1709
c_rt_lib0clear(&___nl__im__39);
#line 1709
c_rt_lib0clear(&___nl__im__40);
#line 1709
c_rt_lib0clear(&___nl__im__61);
#line 1709
c_rt_lib0clear(&___nl__im__62);
#line 1709
c_rt_lib0clear(&___nl__im__63);
#line 1709
c_rt_lib0clear(&___nl__im__64);
#line 1709
c_rt_lib0clear(&___nl__im__75);
#line 1709
c_rt_lib0clear(&___nl__im__76);
#line 1709
c_rt_lib0clear(&___nl__im__77);
#line 1709
c_rt_lib0clear(&___nl__im__78);
#line 1709
c_rt_lib0clear(&___nl__im__79);
#line 1709
c_rt_lib0clear(&___nl__im__80);
#line 1709
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
#line 1714
if(___nl__bool__3){ goto label_3;}
#line 1714
c_rt_lib0move(&___nl__im__7,___get_global_string_const(37));
#line 1714
goto label_7;
#line 1714
label_3:
;
#line 1714
c_rt_lib0move(&___nl__im__8,___get_global_string_const(21));
#line 1714
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__1, ___nl__im__8));
#line 1714
c_rt_lib0clear(&___nl__im__8);
#line 1714
label_7:
;
#line 1714
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__0));
#line 1714
c_rt_lib0clear(&___nl__im__7);
#line 1714
c_rt_lib0move(&___nl__im__9,___get_global_string_const(21));
#line 1714
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 1714
c_rt_lib0clear(&___nl__im__6);
#line 1714
c_rt_lib0clear(&___nl__im__9);
#line 1714
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__2));
#line 1714
c_rt_lib0clear(&___nl__im__5);
#line 1714
c_rt_lib0clear(&___nl__im__0);
#line 1714
c_rt_lib0clear(&___nl__im__1);
#line 1714
c_rt_lib0clear(&___nl__im__2);
#line 1714
//clear ___nl__bool__3;
#line 1714
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
#line 1718
if(___nl__bool__2){ goto label_3;}
#line 1718
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1718
goto label_5;
#line 1718
label_3:
;
#line 1718
c_rt_lib0copy(&___nl__im__4, ___nl__im__1);
#line 1718
label_5:
;
#line 1718
c_rt_lib0move(&___nl__im__5,___get_global_string_const(637));
#line 1718
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__4, ___nl__im__5, ___nl__bool__2));
#line 1718
c_rt_lib0clear(&___nl__im__4);
#line 1718
c_rt_lib0clear(&___nl__im__5);
#line 1718
c_rt_lib0clear(&___nl__im__0);
#line 1718
c_rt_lib0clear(&___nl__im__1);
#line 1718
//clear ___nl__bool__2;
#line 1718
return ___nl__im__3;
#line 1718
c_rt_lib0clear(&___nl__im__0);
#line 1718
c_rt_lib0clear(&___nl__im__1);
#line 1718
//clear ___nl__bool__2;
#line 1718
c_rt_lib0clear(&___nl__im__3);
#line 1718
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
#line 1723
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1724
c_rt_lib0move(&___nl__im__7,___get_global_string_const(482));
#line 1724
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_array_push_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1724
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 1724
c_rt_lib0clear(&___nl__im__7);
#line 1724
c_rt_lib0clear(&___nl__im__8);
#line 1724
c_rt_lib0move(&___nl__im__9,___get_global_string_const(455));
#line 1724
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 1724
c_rt_lib0clear(&___nl__im__6);
#line 1724
c_rt_lib0clear(&___nl__im__9);
#line 1724
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1724
c_rt_lib0clear(&___nl__im__5);
#line 1725
c_rt_lib0move(&___nl__im__11,___get_global_string_const(638));
#line 1725
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__0, ___nl__im__11));
#line 1725
c_rt_lib0clear(&___nl__im__11);
#line 1725
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__10));
#line 1725
c_rt_lib0clear(&___nl__im__10);
#line 1726
c_rt_lib0move(&___nl__im__13, generator_c_priv0get_type_name(___nl__im__1));
#line 1726
c_rt_lib0move(&___nl__im__14,___get_global_string_const(639));
#line 1726
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__14));
#line 1726
c_rt_lib0clear(&___nl__im__13);
#line 1726
c_rt_lib0clear(&___nl__im__14);
#line 1726
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1726
c_rt_lib0clear(&___nl__im__12);
#line 1727
c_rt_lib0clear(&___nl__im__0);
#line 1727
c_rt_lib0clear(&___nl__im__1);
#line 1727
c_rt_lib0clear(&___nl__im__2);
#line 1727
//clear ___nl__bool__3;
#line 1727
return ___nl__im__4;
#line 1727
c_rt_lib0clear(&___nl__im__0);
#line 1727
c_rt_lib0clear(&___nl__im__1);
#line 1727
c_rt_lib0clear(&___nl__im__2);
#line 1727
//clear ___nl__bool__3;
#line 1727
c_rt_lib0clear(&___nl__im__4);
#line 1727
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
#line 1732
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1733
c_rt_lib0move(&___nl__im__5,___get_global_string_const(640));
#line 1734
c_rt_lib0move(&___nl__im__8,___get_global_string_const(575));
#line 1734
c_rt_lib0move(&___nl__im__9, generator_c_priv0get_type_name(___nl__im__1));
#line 1734
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1734
c_rt_lib0clear(&___nl__im__8);
#line 1734
c_rt_lib0clear(&___nl__im__9);
#line 1734
c_rt_lib0move(&___nl__im__10,___get_global_string_const(320));
#line 1734
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1734
c_rt_lib0clear(&___nl__im__7);
#line 1734
c_rt_lib0clear(&___nl__im__10);
#line 1735
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_array_push_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1735
c_rt_lib0move(&___nl__im__23,___get_global_string_const(641));
#line 1735
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1735
c_rt_lib0clear(&___nl__im__22);
#line 1735
c_rt_lib0clear(&___nl__im__23);
#line 1735
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__5));
#line 1735
c_rt_lib0clear(&___nl__im__21);
#line 1737
c_rt_lib0move(&___nl__im__24,___get_global_string_const(373));
#line 1737
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__24));
#line 1737
c_rt_lib0clear(&___nl__im__20);
#line 1737
c_rt_lib0clear(&___nl__im__24);
#line 1737
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__6));
#line 1737
c_rt_lib0clear(&___nl__im__19);
#line 1737
c_rt_lib0move(&___nl__im__25,___get_global_string_const(642));
#line 1737
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__25));
#line 1737
c_rt_lib0clear(&___nl__im__18);
#line 1737
c_rt_lib0clear(&___nl__im__25);
#line 1737
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__5));
#line 1737
c_rt_lib0clear(&___nl__im__17);
#line 1738
c_rt_lib0move(&___nl__im__26,___get_global_string_const(643));
#line 1738
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__26));
#line 1738
c_rt_lib0clear(&___nl__im__16);
#line 1738
c_rt_lib0clear(&___nl__im__26);
#line 1738
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__6));
#line 1738
c_rt_lib0clear(&___nl__im__15);
#line 1742
c_rt_lib0move(&___nl__im__27,___get_global_string_const(644));
#line 1742
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__27));
#line 1742
c_rt_lib0clear(&___nl__im__14);
#line 1742
c_rt_lib0clear(&___nl__im__27);
#line 1742
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 1742
c_rt_lib0clear(&___nl__im__13);
#line 1742
c_rt_lib0move(&___nl__im__28,___get_global_string_const(645));
#line 1742
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__28));
#line 1742
c_rt_lib0clear(&___nl__im__12);
#line 1742
c_rt_lib0clear(&___nl__im__28);
#line 1742
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1742
c_rt_lib0clear(&___nl__im__11);
#line 1746
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(6));
#line 1746
if(___nl__bool__29){ goto label_51;}
#line 1746
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(4));
#line 1746
label_51:
;
#line 1746
if(___nl__bool__29){ goto label_54;}
#line 1746
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(2));
#line 1746
label_54:
;
#line 1746
if(___nl__bool__29){ goto label_57;}
#line 1747
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(14));
#line 1747
label_57:
;
#line 1747
if(___nl__bool__29){ goto label_60;}
#line 1747
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(10));
#line 1747
label_60:
;
#line 1747
if(___nl__bool__29){ goto label_63;}
#line 1747
___nl__bool__29 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(12));
#line 1747
label_63:
;
#line 1747
___nl__bool__29 = !___nl__bool__29;
#line 1747
if(___nl__bool__29){ goto label_70;}
#line 1748
c_rt_lib0move(&___nl__im__30,___get_global_string_const(646));
#line 1748
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__30));
#line 1748
c_rt_lib0clear(&___nl__im__30);
#line 1749
goto label_91;
#line 1749
label_70:
;
#line 1750
c_rt_lib0move(&___nl__im__33,___get_global_string_const(647));
#line 1751
c_rt_lib0move(&___nl__im__35,___get_global_string_const(453));
#line 1751
c_rt_lib0move(&___nl__im__37,___get_global_string_const(648));
#line 1751
c_rt_lib0move(&___nl__im__38,___get_global_string_const(277));
#line 1751
c_rt_lib0move(&___nl__im__36, c_rt_lib0array_mk(2, ___nl__im__37, ___nl__im__38));
#line 1751
c_rt_lib0clear(&___nl__im__37);
#line 1751
c_rt_lib0clear(&___nl__im__38);
#line 1751
c_rt_lib0move(&___nl__im__34, generator_c_priv0get_fun_lib(___nl__im__35, ___nl__im__36));
#line 1751
c_rt_lib0clear(&___nl__im__35);
#line 1751
c_rt_lib0clear(&___nl__im__36);
#line 1751
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__34));
#line 1751
c_rt_lib0clear(&___nl__im__33);
#line 1751
c_rt_lib0clear(&___nl__im__34);
#line 1751
c_rt_lib0move(&___nl__im__39,___get_global_string_const(440));
#line 1751
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__39));
#line 1751
c_rt_lib0clear(&___nl__im__32);
#line 1751
c_rt_lib0clear(&___nl__im__39);
#line 1751
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__31));
#line 1751
c_rt_lib0clear(&___nl__im__31);
#line 1752
goto label_91;
#line 1752
label_91:
;
#line 1752
//clear ___nl__bool__29;
#line 1753
c_rt_lib0move(&___nl__im__40,___get_global_string_const(649));
#line 1753
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__40));
#line 1753
c_rt_lib0clear(&___nl__im__40);
#line 1755
c_rt_lib0clear(&___nl__im__0);
#line 1755
c_rt_lib0clear(&___nl__im__1);
#line 1755
c_rt_lib0clear(&___nl__im__2);
#line 1755
//clear ___nl__bool__3;
#line 1755
c_rt_lib0clear(&___nl__im__5);
#line 1755
c_rt_lib0clear(&___nl__im__6);
#line 1755
return ___nl__im__4;
#line 1755
c_rt_lib0clear(&___nl__im__0);
#line 1755
c_rt_lib0clear(&___nl__im__1);
#line 1755
c_rt_lib0clear(&___nl__im__2);
#line 1755
//clear ___nl__bool__3;
#line 1755
c_rt_lib0clear(&___nl__im__4);
#line 1755
c_rt_lib0clear(&___nl__im__5);
#line 1755
c_rt_lib0clear(&___nl__im__6);
#line 1755
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1759
c_rt_lib0move(&___nl__im__4,___get_global_string_const(650));
#line 1759
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1759
c_rt_lib0clear(&___nl__im__4);
#line 1759
c_rt_lib0clear(&___nl__im__0);
#line 1759
c_rt_lib0clear(&___nl__im__1);
#line 1759
//clear ___nl__bool__2;
#line 1759
return ___nl__im__3;
#line 1759
c_rt_lib0clear(&___nl__im__0);
#line 1759
c_rt_lib0clear(&___nl__im__1);
#line 1759
//clear ___nl__bool__2;
#line 1759
c_rt_lib0clear(&___nl__im__3);
#line 1759
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
#line 1764
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1765
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_type_name(___nl__im__1));
#line 1765
c_rt_lib0move(&___nl__im__9,___get_global_string_const(623));
#line 1765
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1765
c_rt_lib0clear(&___nl__im__8);
#line 1765
c_rt_lib0clear(&___nl__im__9);
#line 1765
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_array_get_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1765
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1765
c_rt_lib0clear(&___nl__im__7);
#line 1765
c_rt_lib0clear(&___nl__im__10);
#line 1765
c_rt_lib0move(&___nl__im__11,___get_global_string_const(455));
#line 1765
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 1765
c_rt_lib0clear(&___nl__im__6);
#line 1765
c_rt_lib0clear(&___nl__im__11);
#line 1765
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1765
c_rt_lib0clear(&___nl__im__5);
#line 1766
c_rt_lib0move(&___nl__im__13,___get_global_string_const(638));
#line 1766
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__0, ___nl__im__13));
#line 1766
c_rt_lib0clear(&___nl__im__13);
#line 1766
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1766
c_rt_lib0clear(&___nl__im__12);
#line 1767
c_rt_lib0move(&___nl__im__15, generator_c_priv0int_t());
#line 1767
c_rt_lib0move(&___nl__im__16,___get_global_string_const(651));
#line 1767
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1767
c_rt_lib0clear(&___nl__im__15);
#line 1767
c_rt_lib0clear(&___nl__im__16);
#line 1767
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__14));
#line 1767
c_rt_lib0clear(&___nl__im__14);
#line 1768
c_rt_lib0clear(&___nl__im__0);
#line 1768
c_rt_lib0clear(&___nl__im__1);
#line 1768
c_rt_lib0clear(&___nl__im__2);
#line 1768
//clear ___nl__bool__3;
#line 1768
return ___nl__im__4;
#line 1768
c_rt_lib0clear(&___nl__im__0);
#line 1768
c_rt_lib0clear(&___nl__im__1);
#line 1768
c_rt_lib0clear(&___nl__im__2);
#line 1768
//clear ___nl__bool__3;
#line 1768
c_rt_lib0clear(&___nl__im__4);
#line 1768
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
#line 1773
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1774
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_array_get_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1774
c_rt_lib0move(&___nl__im__7,___get_global_string_const(652));
#line 1774
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1774
c_rt_lib0clear(&___nl__im__6);
#line 1774
c_rt_lib0clear(&___nl__im__7);
#line 1774
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1774
c_rt_lib0clear(&___nl__im__5);
#line 1780
c_rt_lib0clear(&___nl__im__0);
#line 1780
c_rt_lib0clear(&___nl__im__1);
#line 1780
c_rt_lib0clear(&___nl__im__2);
#line 1780
//clear ___nl__bool__3;
#line 1780
return ___nl__im__4;
#line 1780
c_rt_lib0clear(&___nl__im__0);
#line 1780
c_rt_lib0clear(&___nl__im__1);
#line 1780
c_rt_lib0clear(&___nl__im__2);
#line 1780
//clear ___nl__bool__3;
#line 1780
c_rt_lib0clear(&___nl__im__4);
#line 1780
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_array_len_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1784
c_rt_lib0move(&___nl__im__4,___get_global_string_const(283));
#line 1784
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1784
c_rt_lib0clear(&___nl__im__4);
#line 1784
c_rt_lib0clear(&___nl__im__0);
#line 1784
c_rt_lib0clear(&___nl__im__1);
#line 1784
//clear ___nl__bool__2;
#line 1784
return ___nl__im__3;
#line 1784
c_rt_lib0clear(&___nl__im__0);
#line 1784
c_rt_lib0clear(&___nl__im__1);
#line 1784
//clear ___nl__bool__2;
#line 1784
c_rt_lib0clear(&___nl__im__3);
#line 1784
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
#line 1788
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 1789
c_rt_lib0move(&___nl__im__6, generator_c_priv0int_t());
#line 1789
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_array_len_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1789
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1789
c_rt_lib0clear(&___nl__im__6);
#line 1789
c_rt_lib0clear(&___nl__im__7);
#line 1789
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 1789
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1789
c_rt_lib0clear(&___nl__im__5);
#line 1789
c_rt_lib0clear(&___nl__im__8);
#line 1789
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1789
c_rt_lib0clear(&___nl__im__4);
#line 1790
c_rt_lib0move(&___nl__im__10,___get_global_string_const(653));
#line 1790
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1790
c_rt_lib0clear(&___nl__im__10);
#line 1790
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1790
c_rt_lib0clear(&___nl__im__9);
#line 1791
c_rt_lib0clear(&___nl__im__0);
#line 1791
c_rt_lib0clear(&___nl__im__1);
#line 1791
//clear ___nl__bool__2;
#line 1791
return ___nl__im__3;
#line 1791
c_rt_lib0clear(&___nl__im__0);
#line 1791
c_rt_lib0clear(&___nl__im__1);
#line 1791
//clear ___nl__bool__2;
#line 1791
c_rt_lib0clear(&___nl__im__3);
#line 1791
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
#line 1795
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 1796
c_rt_lib0move(&___nl__im__5, generator_c_priv0get_array_len_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1796
c_rt_lib0move(&___nl__im__6,___get_global_string_const(654));
#line 1796
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__6));
#line 1796
c_rt_lib0clear(&___nl__im__5);
#line 1796
c_rt_lib0clear(&___nl__im__6);
#line 1796
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1796
c_rt_lib0clear(&___nl__im__4);
#line 1799
c_rt_lib0clear(&___nl__im__0);
#line 1799
c_rt_lib0clear(&___nl__im__1);
#line 1799
//clear ___nl__bool__2;
#line 1799
return ___nl__im__3;
#line 1799
c_rt_lib0clear(&___nl__im__0);
#line 1799
c_rt_lib0clear(&___nl__im__1);
#line 1799
//clear ___nl__bool__2;
#line 1799
c_rt_lib0clear(&___nl__im__3);
#line 1799
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_get_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1803
c_rt_lib0move(&___nl__im__4,___get_global_string_const(650));
#line 1803
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1803
c_rt_lib0clear(&___nl__im__4);
#line 1803
c_rt_lib0clear(&___nl__im__0);
#line 1803
c_rt_lib0clear(&___nl__im__1);
#line 1803
//clear ___nl__bool__2;
#line 1803
return ___nl__im__3;
#line 1803
c_rt_lib0clear(&___nl__im__0);
#line 1803
c_rt_lib0clear(&___nl__im__1);
#line 1803
//clear ___nl__bool__2;
#line 1803
c_rt_lib0clear(&___nl__im__3);
#line 1803
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
#line 1808
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1809
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_type_name(___nl__im__1));
#line 1809
c_rt_lib0move(&___nl__im__9,___get_global_string_const(623));
#line 1809
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__9));
#line 1809
c_rt_lib0clear(&___nl__im__8);
#line 1809
c_rt_lib0clear(&___nl__im__9);
#line 1809
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_hash_get_fun_name(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 1809
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__10));
#line 1809
c_rt_lib0clear(&___nl__im__7);
#line 1809
c_rt_lib0clear(&___nl__im__10);
#line 1809
c_rt_lib0move(&___nl__im__11,___get_global_string_const(455));
#line 1809
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__11));
#line 1809
c_rt_lib0clear(&___nl__im__6);
#line 1809
c_rt_lib0clear(&___nl__im__11);
#line 1809
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__5));
#line 1809
c_rt_lib0clear(&___nl__im__5);
#line 1810
c_rt_lib0move(&___nl__im__13,___get_global_string_const(655));
#line 1810
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__0, ___nl__im__13));
#line 1810
c_rt_lib0clear(&___nl__im__13);
#line 1810
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__12));
#line 1810
c_rt_lib0clear(&___nl__im__12);
#line 1811
c_rt_lib0move(&___nl__im__15, generator_c_priv0im_t());
#line 1811
c_rt_lib0move(&___nl__im__16,___get_global_string_const(656));
#line 1811
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1811
c_rt_lib0clear(&___nl__im__15);
#line 1811
c_rt_lib0clear(&___nl__im__16);
#line 1811
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__14));
#line 1811
c_rt_lib0clear(&___nl__im__14);
#line 1812
c_rt_lib0move(&___nl__im__18, generator_c_priv0bool_t());
#line 1812
c_rt_lib0move(&___nl__im__19,___get_global_string_const(657));
#line 1812
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__19));
#line 1812
c_rt_lib0clear(&___nl__im__18);
#line 1812
c_rt_lib0clear(&___nl__im__19);
#line 1812
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__17));
#line 1812
c_rt_lib0clear(&___nl__im__17);
#line 1813
c_rt_lib0clear(&___nl__im__0);
#line 1813
c_rt_lib0clear(&___nl__im__1);
#line 1813
c_rt_lib0clear(&___nl__im__2);
#line 1813
//clear ___nl__bool__3;
#line 1813
return ___nl__im__4;
#line 1813
c_rt_lib0clear(&___nl__im__0);
#line 1813
c_rt_lib0clear(&___nl__im__1);
#line 1813
c_rt_lib0clear(&___nl__im__2);
#line 1813
//clear ___nl__bool__3;
#line 1813
c_rt_lib0clear(&___nl__im__4);
#line 1813
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
#line 1818
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 1819
c_rt_lib0move(&___nl__im__5,___get_global_string_const(640));
#line 1820
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_type_name(___nl__im__1));
#line 1821
c_rt_lib0move(&___nl__im__9,___get_global_string_const(575));
#line 1821
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__6));
#line 1821
c_rt_lib0clear(&___nl__im__9);
#line 1821
c_rt_lib0move(&___nl__im__10,___get_global_string_const(320));
#line 1821
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__10));
#line 1821
c_rt_lib0clear(&___nl__im__8);
#line 1821
c_rt_lib0clear(&___nl__im__10);
#line 1822
c_rt_lib0move(&___nl__im__40, generator_c_priv0get_hash_get_fun_header(___nl__im__0, ___nl__im__1, ___nl__im__2, ___nl__bool__3));
#line 1822
c_rt_lib0move(&___nl__im__41,___get_global_string_const(658));
#line 1822
c_rt_lib0move(&___nl__im__39, c_rt_lib0concat_new(___nl__im__40, ___nl__im__41));
#line 1822
c_rt_lib0clear(&___nl__im__40);
#line 1822
c_rt_lib0clear(&___nl__im__41);
#line 1822
c_rt_lib0move(&___nl__im__38, c_rt_lib0concat_new(___nl__im__39, ___nl__im__5));
#line 1822
c_rt_lib0clear(&___nl__im__39);
#line 1824
c_rt_lib0move(&___nl__im__42,___get_global_string_const(659));
#line 1824
c_rt_lib0move(&___nl__im__37, c_rt_lib0concat_new(___nl__im__38, ___nl__im__42));
#line 1824
c_rt_lib0clear(&___nl__im__38);
#line 1824
c_rt_lib0clear(&___nl__im__42);
#line 1824
c_rt_lib0move(&___nl__im__36, c_rt_lib0concat_new(___nl__im__37, ___nl__im__7));
#line 1824
c_rt_lib0clear(&___nl__im__37);
#line 1826
c_rt_lib0move(&___nl__im__43,___get_global_string_const(660));
#line 1826
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__43));
#line 1826
c_rt_lib0clear(&___nl__im__36);
#line 1826
c_rt_lib0clear(&___nl__im__43);
#line 1827
c_rt_lib0move(&___nl__im__44, generator_c_priv0im_t());
#line 1827
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__44));
#line 1827
c_rt_lib0clear(&___nl__im__35);
#line 1827
c_rt_lib0clear(&___nl__im__44);
#line 1827
c_rt_lib0move(&___nl__im__45,___get_global_string_const(661));
#line 1827
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__45));
#line 1827
c_rt_lib0clear(&___nl__im__34);
#line 1827
c_rt_lib0clear(&___nl__im__45);
#line 1827
c_rt_lib0move(&___nl__im__32, c_rt_lib0concat_new(___nl__im__33, ___nl__im__7));
#line 1827
c_rt_lib0clear(&___nl__im__33);
#line 1828
c_rt_lib0move(&___nl__im__46,___get_global_string_const(662));
#line 1828
c_rt_lib0move(&___nl__im__31, c_rt_lib0concat_new(___nl__im__32, ___nl__im__46));
#line 1828
c_rt_lib0clear(&___nl__im__32);
#line 1828
c_rt_lib0clear(&___nl__im__46);
#line 1829
c_rt_lib0move(&___nl__im__47, generator_c_priv0im_t());
#line 1829
c_rt_lib0move(&___nl__im__30, c_rt_lib0concat_new(___nl__im__31, ___nl__im__47));
#line 1829
c_rt_lib0clear(&___nl__im__31);
#line 1829
c_rt_lib0clear(&___nl__im__47);
#line 1829
c_rt_lib0move(&___nl__im__48,___get_global_string_const(663));
#line 1829
c_rt_lib0move(&___nl__im__29, c_rt_lib0concat_new(___nl__im__30, ___nl__im__48));
#line 1829
c_rt_lib0clear(&___nl__im__30);
#line 1829
c_rt_lib0clear(&___nl__im__48);
#line 1831
c_rt_lib0move(&___nl__im__49, generator_c_priv0int_t());
#line 1831
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__49));
#line 1831
c_rt_lib0clear(&___nl__im__29);
#line 1831
c_rt_lib0clear(&___nl__im__49);
#line 1831
c_rt_lib0move(&___nl__im__50,___get_global_string_const(664));
#line 1831
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__50));
#line 1831
c_rt_lib0clear(&___nl__im__28);
#line 1831
c_rt_lib0clear(&___nl__im__50);
#line 1832
c_rt_lib0move(&___nl__im__51, generator_c_priv0im_t());
#line 1832
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__51));
#line 1832
c_rt_lib0clear(&___nl__im__27);
#line 1832
c_rt_lib0clear(&___nl__im__51);
#line 1832
c_rt_lib0move(&___nl__im__52,___get_global_string_const(665));
#line 1832
c_rt_lib0move(&___nl__im__25, c_rt_lib0concat_new(___nl__im__26, ___nl__im__52));
#line 1832
c_rt_lib0clear(&___nl__im__26);
#line 1832
c_rt_lib0clear(&___nl__im__52);
#line 1832
c_rt_lib0move(&___nl__im__24, c_rt_lib0concat_new(___nl__im__25, ___nl__im__6));
#line 1832
c_rt_lib0clear(&___nl__im__25);
#line 1833
c_rt_lib0move(&___nl__im__53,___get_global_string_const(666));
#line 1833
c_rt_lib0move(&___nl__im__23, c_rt_lib0concat_new(___nl__im__24, ___nl__im__53));
#line 1833
c_rt_lib0clear(&___nl__im__24);
#line 1833
c_rt_lib0clear(&___nl__im__53);
#line 1833
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__7));
#line 1833
c_rt_lib0clear(&___nl__im__23);
#line 1835
c_rt_lib0move(&___nl__im__54,___get_global_string_const(660));
#line 1835
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__54));
#line 1835
c_rt_lib0clear(&___nl__im__22);
#line 1835
c_rt_lib0clear(&___nl__im__54);
#line 1836
c_rt_lib0move(&___nl__im__55, generator_c_priv0im_t());
#line 1836
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__55));
#line 1836
c_rt_lib0clear(&___nl__im__21);
#line 1836
c_rt_lib0clear(&___nl__im__55);
#line 1836
c_rt_lib0move(&___nl__im__56,___get_global_string_const(661));
#line 1836
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__56));
#line 1836
c_rt_lib0clear(&___nl__im__20);
#line 1836
c_rt_lib0clear(&___nl__im__56);
#line 1836
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__7));
#line 1836
c_rt_lib0clear(&___nl__im__19);
#line 1837
c_rt_lib0move(&___nl__im__57,___get_global_string_const(662));
#line 1837
c_rt_lib0move(&___nl__im__17, c_rt_lib0concat_new(___nl__im__18, ___nl__im__57));
#line 1837
c_rt_lib0clear(&___nl__im__18);
#line 1837
c_rt_lib0clear(&___nl__im__57);
#line 1838
c_rt_lib0move(&___nl__im__58, generator_c_priv0im_t());
#line 1838
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__58));
#line 1838
c_rt_lib0clear(&___nl__im__17);
#line 1838
c_rt_lib0clear(&___nl__im__58);
#line 1838
c_rt_lib0move(&___nl__im__59,___get_global_string_const(667));
#line 1838
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__59));
#line 1838
c_rt_lib0clear(&___nl__im__16);
#line 1838
c_rt_lib0clear(&___nl__im__59);
#line 1849
c_rt_lib0move(&___nl__im__60, generator_c_priv0im_t());
#line 1849
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__60));
#line 1849
c_rt_lib0clear(&___nl__im__15);
#line 1849
c_rt_lib0clear(&___nl__im__60);
#line 1849
c_rt_lib0move(&___nl__im__61,___get_global_string_const(668));
#line 1849
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__61));
#line 1849
c_rt_lib0clear(&___nl__im__14);
#line 1849
c_rt_lib0clear(&___nl__im__61);
#line 1849
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__6));
#line 1849
c_rt_lib0clear(&___nl__im__13);
#line 1850
c_rt_lib0move(&___nl__im__62,___get_global_string_const(669));
#line 1850
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__62));
#line 1850
c_rt_lib0clear(&___nl__im__12);
#line 1850
c_rt_lib0clear(&___nl__im__62);
#line 1850
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__11));
#line 1850
c_rt_lib0clear(&___nl__im__11);
#line 1866
c_rt_lib0clear(&___nl__im__0);
#line 1866
c_rt_lib0clear(&___nl__im__1);
#line 1866
c_rt_lib0clear(&___nl__im__2);
#line 1866
//clear ___nl__bool__3;
#line 1866
c_rt_lib0clear(&___nl__im__5);
#line 1866
c_rt_lib0clear(&___nl__im__6);
#line 1866
c_rt_lib0clear(&___nl__im__7);
#line 1866
return ___nl__im__4;
#line 1866
c_rt_lib0clear(&___nl__im__0);
#line 1866
c_rt_lib0clear(&___nl__im__1);
#line 1866
c_rt_lib0clear(&___nl__im__2);
#line 1866
//clear ___nl__bool__3;
#line 1866
c_rt_lib0clear(&___nl__im__4);
#line 1866
c_rt_lib0clear(&___nl__im__5);
#line 1866
c_rt_lib0clear(&___nl__im__6);
#line 1866
c_rt_lib0clear(&___nl__im__7);
#line 1866
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_hash_next_iter_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1870
c_rt_lib0move(&___nl__im__4,___get_global_string_const(273));
#line 1870
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1870
c_rt_lib0clear(&___nl__im__4);
#line 1870
c_rt_lib0clear(&___nl__im__0);
#line 1870
c_rt_lib0clear(&___nl__im__1);
#line 1870
//clear ___nl__bool__2;
#line 1870
return ___nl__im__3;
#line 1870
c_rt_lib0clear(&___nl__im__0);
#line 1870
c_rt_lib0clear(&___nl__im__1);
#line 1870
//clear ___nl__bool__2;
#line 1870
c_rt_lib0clear(&___nl__im__3);
#line 1870
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
#line 1874
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 1875
c_rt_lib0move(&___nl__im__6,___get_global_string_const(418));
#line 1875
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_hash_next_iter_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1875
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1875
c_rt_lib0clear(&___nl__im__6);
#line 1875
c_rt_lib0clear(&___nl__im__7);
#line 1875
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 1875
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1875
c_rt_lib0clear(&___nl__im__5);
#line 1875
c_rt_lib0clear(&___nl__im__8);
#line 1875
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1875
c_rt_lib0clear(&___nl__im__4);
#line 1876
c_rt_lib0move(&___nl__im__10,___get_global_string_const(655));
#line 1876
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1876
c_rt_lib0clear(&___nl__im__10);
#line 1876
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1876
c_rt_lib0clear(&___nl__im__9);
#line 1877
c_rt_lib0move(&___nl__im__11,___get_global_string_const(670));
#line 1877
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 1877
c_rt_lib0clear(&___nl__im__11);
#line 1878
c_rt_lib0clear(&___nl__im__0);
#line 1878
c_rt_lib0clear(&___nl__im__1);
#line 1878
//clear ___nl__bool__2;
#line 1878
return ___nl__im__3;
#line 1878
c_rt_lib0clear(&___nl__im__0);
#line 1878
c_rt_lib0clear(&___nl__im__1);
#line 1878
//clear ___nl__bool__2;
#line 1878
c_rt_lib0clear(&___nl__im__3);
#line 1878
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
#line 1882
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_hash_next_iter_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1882
c_rt_lib0move(&___nl__im__5,___get_global_string_const(671));
#line 1882
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__5));
#line 1882
c_rt_lib0clear(&___nl__im__4);
#line 1882
c_rt_lib0clear(&___nl__im__5);
#line 1890
c_rt_lib0clear(&___nl__im__0);
#line 1890
c_rt_lib0clear(&___nl__im__1);
#line 1890
//clear ___nl__bool__2;
#line 1890
return ___nl__im__3;
#line 1890
c_rt_lib0clear(&___nl__im__0);
#line 1890
c_rt_lib0clear(&___nl__im__1);
#line 1890
//clear ___nl__bool__2;
#line 1890
c_rt_lib0clear(&___nl__im__3);
#line 1890
return NULL;
return NULL;

}

ImmT  generator_c_priv0get_variant_make_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1895
c_rt_lib0move(&___nl__im__4,___get_global_string_const(245));
#line 1895
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1895
c_rt_lib0clear(&___nl__im__4);
#line 1895
c_rt_lib0clear(&___nl__im__0);
#line 1895
c_rt_lib0clear(&___nl__im__1);
#line 1895
//clear ___nl__bool__2;
#line 1895
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
#line 1899
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 1900
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 1900
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_variant_make_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1900
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1900
c_rt_lib0clear(&___nl__im__6);
#line 1900
c_rt_lib0clear(&___nl__im__7);
#line 1900
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 1900
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1900
c_rt_lib0clear(&___nl__im__5);
#line 1900
c_rt_lib0clear(&___nl__im__8);
#line 1900
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 1900
c_rt_lib0clear(&___nl__im__4);
#line 1901
c_rt_lib0move(&___nl__im__10,___get_global_string_const(672));
#line 1901
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 1901
c_rt_lib0clear(&___nl__im__10);
#line 1901
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 1901
c_rt_lib0clear(&___nl__im__9);
#line 1902
c_rt_lib0move(&___nl__im__11,___get_global_string_const(673));
#line 1902
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__11));
#line 1902
c_rt_lib0clear(&___nl__im__11);
#line 1903
c_rt_lib0move(&___nl__im__12,___get_global_string_const(674));
#line 1903
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__12));
#line 1903
c_rt_lib0clear(&___nl__im__12);
#line 1904
c_rt_lib0move(&___nl__im__14, generator_c_priv0int_t());
#line 1904
c_rt_lib0move(&___nl__im__15,___get_global_string_const(675));
#line 1904
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 1904
c_rt_lib0clear(&___nl__im__14);
#line 1904
c_rt_lib0clear(&___nl__im__15);
#line 1904
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__13));
#line 1904
c_rt_lib0clear(&___nl__im__13);
#line 1905
c_rt_lib0clear(&___nl__im__0);
#line 1905
c_rt_lib0clear(&___nl__im__1);
#line 1905
//clear ___nl__bool__2;
#line 1905
return ___nl__im__3;
#line 1905
c_rt_lib0clear(&___nl__im__0);
#line 1905
c_rt_lib0clear(&___nl__im__1);
#line 1905
//clear ___nl__bool__2;
#line 1905
c_rt_lib0clear(&___nl__im__3);
#line 1905
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
#line 1909
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_make_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1909
c_rt_lib0move(&___nl__im__7,___get_global_string_const(676));
#line 1909
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 1909
c_rt_lib0clear(&___nl__im__6);
#line 1909
c_rt_lib0clear(&___nl__im__7);
#line 1911
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 1911
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 1911
c_rt_lib0clear(&___nl__im__5);
#line 1911
c_rt_lib0clear(&___nl__im__8);
#line 1911
c_rt_lib0move(&___nl__im__9,___get_global_string_const(677));
#line 1911
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 1911
c_rt_lib0clear(&___nl__im__4);
#line 1911
c_rt_lib0clear(&___nl__im__9);
#line 1921
c_rt_lib0clear(&___nl__im__0);
#line 1921
c_rt_lib0clear(&___nl__im__1);
#line 1921
//clear ___nl__bool__2;
#line 1921
return ___nl__im__3;
#line 1921
c_rt_lib0clear(&___nl__im__0);
#line 1921
c_rt_lib0clear(&___nl__im__1);
#line 1921
//clear ___nl__bool__2;
#line 1921
c_rt_lib0clear(&___nl__im__3);
#line 1921
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
bool  ___nl__bool__9 = false;
ImmT  ___nl__im__10 = NULL;
ImmT  ___nl__im__11 = NULL;
bool  ___nl__bool__12 = false;
bool  ___nl__bool__13 = false;
#line 1925
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(214)));
#line 1925
___nl__int__3 = 0;
#line 1925
___nl__int__4 = 1;
#line 1925
___nl__int__5 = c_rt_lib0array_len(___nl__im__1);
#line 1925
label_4:
;
#line 1925
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 1925
___nl__bool__6 = ___nl__int__7;
#line 1925
if(___nl__bool__6){ goto label_37;}
#line 1925
c_rt_lib0move(&___nl__im__8, c_rt_lib0array_get(___nl__im__1, ___nl__int__3));
#line 1925
c_rt_lib0copy(&___nl__im__2, ___nl__im__8);
#line 1926
c_rt_lib0move(&___nl__im__11, c_rt_lib0hash_get_value_dec(___nl__im__2, ___get_global_string_const(469)));
#line 1926
c_rt_lib0move(&___nl__im__10, c_rt_lib0hash_get_value_dec(___nl__im__11, ___get_global_string_const(205)));
#line 1926
c_rt_lib0clear(&___nl__im__11);
#line 1926
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__10, ___get_global_string_const(132));
#line 1926
c_rt_lib0clear(&___nl__im__10);
#line 1926
___nl__bool__9 = !___nl__bool__9;
#line 1926
___nl__bool__9 = !___nl__bool__9;
#line 1926
if(___nl__bool__9){ goto label_31;}
#line 1926
___nl__bool__12 = true;
#line 1926
c_rt_lib0clear(&___nl__im__0);
#line 1926
c_rt_lib0clear(&___nl__im__1);
#line 1926
c_rt_lib0clear(&___nl__im__2);
#line 1926
//clear ___nl__int__3;
#line 1926
//clear ___nl__int__4;
#line 1926
//clear ___nl__int__5;
#line 1926
//clear ___nl__bool__6;
#line 1926
//clear ___nl__int__7;
#line 1926
c_rt_lib0clear(&___nl__im__8);
#line 1926
//clear ___nl__bool__9;
#line 1926
return ___nl__bool__12;
#line 1926
goto label_31;
#line 1926
label_31:
;
#line 1926
//clear ___nl__bool__9;
#line 1926
//clear ___nl__bool__12;
#line 1926
c_rt_lib0clear(&___nl__im__2);
#line 1927
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 1927
goto label_4;
#line 1927
label_37:
;
#line 1928
___nl__bool__13 = false;
#line 1928
c_rt_lib0clear(&___nl__im__0);
#line 1928
c_rt_lib0clear(&___nl__im__1);
#line 1928
c_rt_lib0clear(&___nl__im__2);
#line 1928
//clear ___nl__int__3;
#line 1928
//clear ___nl__int__4;
#line 1928
//clear ___nl__int__5;
#line 1928
//clear ___nl__bool__6;
#line 1928
//clear ___nl__int__7;
#line 1928
c_rt_lib0clear(&___nl__im__8);
#line 1928
return ___nl__bool__13;
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
#line 1932
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_get_value_dec(___nl__im__0, ___get_global_string_const(351)));
#line 1932
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(219));
#line 1932
if(___nl__bool__2){ goto label_8;}
#line 1934
___nl__bool__2 = c_rt_lib0priv_is(___nl__im__1, ___get_global_string_const(420));
#line 1934
if(___nl__bool__2){ goto label_16;}
#line 1934
c_rt_lib0move(&___nl__im__3,___get_global_string_const(16));
#line 1934
c_rt_lib0move(&___nl__im__3, c_rt_lib0array_mk(2, ___nl__im__3, ___nl__im__1));
#line 1934
nl_die_arg(___nl__im__3);
#line 1932
label_8:
;
#line 1933
c_rt_lib0move(&___nl__im__4,___get_global_string_const(111));
#line 1933
c_rt_lib0clear(&___nl__im__0);
#line 1933
c_rt_lib0clear(&___nl__im__1);
#line 1933
//clear ___nl__bool__2;
#line 1933
c_rt_lib0clear(&___nl__im__3);
#line 1933
return ___nl__im__4;
#line 1934
goto label_25;
#line 1934
label_16:
;
#line 1935
c_rt_lib0move(&___nl__im__5,___get_global_string_const(569));
#line 1935
c_rt_lib0clear(&___nl__im__0);
#line 1935
c_rt_lib0clear(&___nl__im__1);
#line 1935
//clear ___nl__bool__2;
#line 1935
c_rt_lib0clear(&___nl__im__3);
#line 1935
c_rt_lib0clear(&___nl__im__4);
#line 1935
return ___nl__im__5;
#line 1936
goto label_25;
#line 1936
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
#line 1940
c_rt_lib0move(&___nl__im__2,___get_global_string_const(35));
#line 1940
c_rt_lib0move(&___nl__im__1, string0index2(___nl__im__0, ___nl__im__2));
#line 1940
c_rt_lib0clear(&___nl__im__2);
#line 1941
___nl__int__4 = 0;
#line 1941
___nl__int__5 = getIntFromImm(___nl__im__1);
#line 1941
c_rt_lib0move(&___nl__im__3, string0substr(___nl__im__0, ___nl__int__4, ___nl__int__5));
#line 1941
//clear ___nl__int__4;
#line 1941
//clear ___nl__int__5;
#line 1941
c_rt_lib0clear(&___nl__im__0);
#line 1941
c_rt_lib0clear(&___nl__im__1);
#line 1941
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
#line 1950
c_rt_lib0move(&___nl__im__5,___get_global_string_const(37));
#line 1950
___nl__bool__6 = generator_c_priv0is_anon(___nl__im__0);
#line 1950
c_rt_lib0move(&___nl__im__4, generator_c_priv0get_clean_fun_call_exact(___nl__im__0, ___nl__im__5, ___nl__im__1, ___nl__im__2, ___nl__im__3, ___nl__bool__6));
#line 1950
c_rt_lib0clear(&___nl__im__5);
#line 1950
//clear ___nl__bool__6;
#line 1950
c_rt_lib0clear(&___nl__im__0);
#line 1950
c_rt_lib0clear(&___nl__im__1);
#line 1950
c_rt_lib0clear(&___nl__im__2);
#line 1950
c_rt_lib0clear(&___nl__im__3);
#line 1950
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
ImmT  ___nl__im__72 = NULL;
ImmT  ___nl__im__73 = NULL;
#line 1955
c_rt_lib0move(&___nl__im__6,___get_global_string_const(37));
#line 1956
c_rt_lib0move(&___nl__im__8,___get_global_string_const(37));
#line 1956
___nl__bool__7 = c_rt_lib0eq(___nl__im__1, ___nl__im__8);
#line 1956
c_rt_lib0clear(&___nl__im__8);
#line 1956
if(___nl__bool__7){ goto label_7;}
#line 1956
c_rt_lib0copy(&___nl__im__1, ___nl__im__1);
#line 1956
goto label_9;
#line 1956
label_7:
;
#line 1956
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_type_name(___nl__im__0));
#line 1956
label_9:
;
#line 1956
//clear ___nl__bool__7;
#line 1957
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 1957
if(___nl__bool__9){ goto label_46;}
#line 1959
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1959
if(___nl__bool__9){ goto label_61;}
#line 1961
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1961
if(___nl__bool__9){ goto label_76;}
#line 1963
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1963
if(___nl__bool__9){ goto label_91;}
#line 1965
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 1965
if(___nl__bool__9){ goto label_106;}
#line 1967
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 1967
if(___nl__bool__9){ goto label_113;}
#line 1969
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 1969
if(___nl__bool__9){ goto label_122;}
#line 1971
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 1971
if(___nl__bool__9){ goto label_131;}
#line 1973
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 1973
if(___nl__bool__9){ goto label_140;}
#line 1975
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 1975
if(___nl__bool__9){ goto label_149;}
#line 1976
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 1976
if(___nl__bool__9){ goto label_151;}
#line 1984
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 1984
if(___nl__bool__9){ goto label_194;}
#line 1986
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 1986
if(___nl__bool__9){ goto label_201;}
#line 1988
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 1988
if(___nl__bool__9){ goto label_208;}
#line 1989
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 1989
if(___nl__bool__9){ goto label_210;}
#line 1990
___nl__bool__9 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 1990
if(___nl__bool__9){ goto label_212;}
#line 1990
c_rt_lib0move(&___nl__im__10,___get_global_string_const(16));
#line 1990
c_rt_lib0move(&___nl__im__10, c_rt_lib0array_mk(2, ___nl__im__10, ___nl__im__0));
#line 1990
nl_die_arg(___nl__im__10);
#line 1957
label_46:
;
#line 1957
c_rt_lib0move(&___nl__im__12, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 1957
c_rt_lib0copy(&___nl__im__11, ___nl__im__12);
#line 1958
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1958
c_rt_lib0move(&___nl__im__16,___get_global_string_const(455));
#line 1958
c_rt_lib0move(&___nl__im__14, c_rt_lib0concat_new(___nl__im__15, ___nl__im__16));
#line 1958
c_rt_lib0clear(&___nl__im__15);
#line 1958
c_rt_lib0clear(&___nl__im__16);
#line 1958
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__3));
#line 1958
c_rt_lib0clear(&___nl__im__14);
#line 1958
c_rt_lib0move(&___nl__im__17,___get_global_string_const(503));
#line 1958
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__13, ___nl__im__17));
#line 1958
c_rt_lib0clear(&___nl__im__13);
#line 1958
c_rt_lib0clear(&___nl__im__17);
#line 1959
goto label_214;
#line 1959
label_61:
;
#line 1959
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 1959
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 1960
c_rt_lib0move(&___nl__im__22, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1960
c_rt_lib0move(&___nl__im__23,___get_global_string_const(455));
#line 1960
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__23));
#line 1960
c_rt_lib0clear(&___nl__im__22);
#line 1960
c_rt_lib0clear(&___nl__im__23);
#line 1960
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__3));
#line 1960
c_rt_lib0clear(&___nl__im__21);
#line 1960
c_rt_lib0move(&___nl__im__24,___get_global_string_const(503));
#line 1960
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__20, ___nl__im__24));
#line 1960
c_rt_lib0clear(&___nl__im__20);
#line 1960
c_rt_lib0clear(&___nl__im__24);
#line 1961
goto label_214;
#line 1961
label_76:
;
#line 1961
c_rt_lib0move(&___nl__im__26, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 1961
c_rt_lib0copy(&___nl__im__25, ___nl__im__26);
#line 1962
c_rt_lib0move(&___nl__im__29, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1962
c_rt_lib0move(&___nl__im__30,___get_global_string_const(455));
#line 1962
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 1962
c_rt_lib0clear(&___nl__im__29);
#line 1962
c_rt_lib0clear(&___nl__im__30);
#line 1962
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__3));
#line 1962
c_rt_lib0clear(&___nl__im__28);
#line 1962
c_rt_lib0move(&___nl__im__31,___get_global_string_const(503));
#line 1962
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__27, ___nl__im__31));
#line 1962
c_rt_lib0clear(&___nl__im__27);
#line 1962
c_rt_lib0clear(&___nl__im__31);
#line 1963
goto label_214;
#line 1963
label_91:
;
#line 1963
c_rt_lib0move(&___nl__im__33, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 1963
c_rt_lib0copy(&___nl__im__32, ___nl__im__33);
#line 1964
c_rt_lib0move(&___nl__im__36, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1964
c_rt_lib0move(&___nl__im__37,___get_global_string_const(455));
#line 1964
c_rt_lib0move(&___nl__im__35, c_rt_lib0concat_new(___nl__im__36, ___nl__im__37));
#line 1964
c_rt_lib0clear(&___nl__im__36);
#line 1964
c_rt_lib0clear(&___nl__im__37);
#line 1964
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__3));
#line 1964
c_rt_lib0clear(&___nl__im__35);
#line 1964
c_rt_lib0move(&___nl__im__38,___get_global_string_const(503));
#line 1964
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__34, ___nl__im__38));
#line 1964
c_rt_lib0clear(&___nl__im__34);
#line 1964
c_rt_lib0clear(&___nl__im__38);
#line 1965
goto label_214;
#line 1965
label_106:
;
#line 1966
c_rt_lib0move(&___nl__im__39,___get_global_string_const(174));
#line 1966
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1966
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__39, ___nl__im__40));
#line 1966
c_rt_lib0clear(&___nl__im__39);
#line 1966
c_rt_lib0clear(&___nl__im__40);
#line 1967
goto label_214;
#line 1967
label_113:
;
#line 1967
c_rt_lib0move(&___nl__im__42, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 1967
c_rt_lib0copy(&___nl__im__41, ___nl__im__42);
#line 1968
c_rt_lib0move(&___nl__im__43,___get_global_string_const(174));
#line 1968
c_rt_lib0move(&___nl__im__44, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1968
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__43, ___nl__im__44));
#line 1968
c_rt_lib0clear(&___nl__im__43);
#line 1968
c_rt_lib0clear(&___nl__im__44);
#line 1969
goto label_214;
#line 1969
label_122:
;
#line 1969
c_rt_lib0move(&___nl__im__46, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 1969
c_rt_lib0copy(&___nl__im__45, ___nl__im__46);
#line 1970
c_rt_lib0move(&___nl__im__47,___get_global_string_const(174));
#line 1970
c_rt_lib0move(&___nl__im__48, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1970
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__47, ___nl__im__48));
#line 1970
c_rt_lib0clear(&___nl__im__47);
#line 1970
c_rt_lib0clear(&___nl__im__48);
#line 1971
goto label_214;
#line 1971
label_131:
;
#line 1971
c_rt_lib0move(&___nl__im__50, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 1971
c_rt_lib0copy(&___nl__im__49, ___nl__im__50);
#line 1972
c_rt_lib0move(&___nl__im__51,___get_global_string_const(174));
#line 1972
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1972
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__51, ___nl__im__52));
#line 1972
c_rt_lib0clear(&___nl__im__51);
#line 1972
c_rt_lib0clear(&___nl__im__52);
#line 1973
goto label_214;
#line 1973
label_140:
;
#line 1973
c_rt_lib0move(&___nl__im__54, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 1973
c_rt_lib0copy(&___nl__im__53, ___nl__im__54);
#line 1974
c_rt_lib0move(&___nl__im__55,___get_global_string_const(174));
#line 1974
c_rt_lib0move(&___nl__im__56, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1974
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__55, ___nl__im__56));
#line 1974
c_rt_lib0clear(&___nl__im__55);
#line 1974
c_rt_lib0clear(&___nl__im__56);
#line 1975
goto label_214;
#line 1975
label_149:
;
#line 1976
goto label_214;
#line 1976
label_151:
;
#line 1976
c_rt_lib0move(&___nl__im__58, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 1976
c_rt_lib0copy(&___nl__im__57, ___nl__im__58);
#line 1977
c_rt_lib0move(&___nl__im__60, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__57));
#line 1977
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__60, ___get_global_string_const(6));
#line 1977
c_rt_lib0clear(&___nl__im__60);
#line 1977
if(___nl__bool__59){ goto label_159;}
#line 1977
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 1977
label_159:
;
#line 1977
if(___nl__bool__59){ goto label_162;}
#line 1977
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 1977
label_162:
;
#line 1977
if(___nl__bool__59){ goto label_165;}
#line 1978
___nl__bool__59 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 1978
label_165:
;
#line 1978
___nl__bool__59 = !___nl__bool__59;
#line 1978
if(___nl__bool__59){ goto label_180;}
#line 1979
c_rt_lib0move(&___nl__im__63, generator_c_priv0get_clean_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__5));
#line 1979
c_rt_lib0move(&___nl__im__64,___get_global_string_const(455));
#line 1979
c_rt_lib0move(&___nl__im__62, c_rt_lib0concat_new(___nl__im__63, ___nl__im__64));
#line 1979
c_rt_lib0clear(&___nl__im__63);
#line 1979
c_rt_lib0clear(&___nl__im__64);
#line 1979
c_rt_lib0move(&___nl__im__61, c_rt_lib0concat_new(___nl__im__62, ___nl__im__3));
#line 1979
c_rt_lib0clear(&___nl__im__62);
#line 1979
c_rt_lib0move(&___nl__im__65,___get_global_string_const(503));
#line 1979
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__61, ___nl__im__65));
#line 1979
c_rt_lib0clear(&___nl__im__61);
#line 1979
c_rt_lib0clear(&___nl__im__65);
#line 1980
goto label_191;
#line 1980
label_180:
;
#line 1981
c_rt_lib0move(&___nl__im__66, c_rt_lib0hash_get_value(___nl__im__4, ___nl__im__57));
#line 1981
c_rt_lib0move(&___nl__im__67, generator_c_priv0get_type_name(___nl__im__0));
#line 1982
c_rt_lib0move(&___nl__im__68, generator_c_priv0get_type_module_name(___nl__im__57));
#line 1982
___nl__bool__69 = false;
#line 1982
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_clean_fun_call_exact(___nl__im__66, ___nl__im__67, ___nl__im__68, ___nl__im__3, ___nl__im__4, ___nl__bool__69));
#line 1982
c_rt_lib0clear(&___nl__im__66);
#line 1982
c_rt_lib0clear(&___nl__im__67);
#line 1982
c_rt_lib0clear(&___nl__im__68);
#line 1982
//clear ___nl__bool__69;
#line 1983
goto label_191;
#line 1983
label_191:
;
#line 1983
//clear ___nl__bool__59;
#line 1984
goto label_214;
#line 1984
label_194:
;
#line 1985
c_rt_lib0move(&___nl__im__70,___get_global_string_const(174));
#line 1985
c_rt_lib0move(&___nl__im__71, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1985
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__70, ___nl__im__71));
#line 1985
c_rt_lib0clear(&___nl__im__70);
#line 1985
c_rt_lib0clear(&___nl__im__71);
#line 1986
goto label_214;
#line 1986
label_201:
;
#line 1987
c_rt_lib0move(&___nl__im__72,___get_global_string_const(174));
#line 1987
c_rt_lib0move(&___nl__im__73, c_rt_lib0array_mk(1, ___nl__im__3));
#line 1987
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_fun_lib(___nl__im__72, ___nl__im__73));
#line 1987
c_rt_lib0clear(&___nl__im__72);
#line 1987
c_rt_lib0clear(&___nl__im__73);
#line 1988
goto label_214;
#line 1988
label_208:
;
#line 1989
goto label_214;
#line 1989
label_210:
;
#line 1990
goto label_214;
#line 1990
label_212:
;
#line 1991
goto label_214;
#line 1991
label_214:
;
#line 1992
c_rt_lib0clear(&___nl__im__0);
#line 1992
c_rt_lib0clear(&___nl__im__1);
#line 1992
c_rt_lib0clear(&___nl__im__2);
#line 1992
c_rt_lib0clear(&___nl__im__3);
#line 1992
c_rt_lib0clear(&___nl__im__4);
#line 1992
//clear ___nl__bool__5;
#line 1992
//clear ___nl__bool__9;
#line 1992
c_rt_lib0clear(&___nl__im__10);
#line 1992
c_rt_lib0clear(&___nl__im__11);
#line 1992
c_rt_lib0clear(&___nl__im__12);
#line 1992
c_rt_lib0clear(&___nl__im__18);
#line 1992
c_rt_lib0clear(&___nl__im__19);
#line 1992
c_rt_lib0clear(&___nl__im__25);
#line 1992
c_rt_lib0clear(&___nl__im__26);
#line 1992
c_rt_lib0clear(&___nl__im__32);
#line 1992
c_rt_lib0clear(&___nl__im__33);
#line 1992
c_rt_lib0clear(&___nl__im__41);
#line 1992
c_rt_lib0clear(&___nl__im__42);
#line 1992
c_rt_lib0clear(&___nl__im__45);
#line 1992
c_rt_lib0clear(&___nl__im__46);
#line 1992
c_rt_lib0clear(&___nl__im__49);
#line 1992
c_rt_lib0clear(&___nl__im__50);
#line 1992
c_rt_lib0clear(&___nl__im__53);
#line 1992
c_rt_lib0clear(&___nl__im__54);
#line 1992
c_rt_lib0clear(&___nl__im__57);
#line 1992
c_rt_lib0clear(&___nl__im__58);
#line 1992
return ___nl__im__6;
return NULL;

}

ImmT  generator_c_priv0get_clean_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 1996
c_rt_lib0move(&___nl__im__4,___get_global_string_const(678));
#line 1996
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 1996
c_rt_lib0clear(&___nl__im__4);
#line 1996
c_rt_lib0clear(&___nl__im__0);
#line 1996
c_rt_lib0clear(&___nl__im__1);
#line 1996
//clear ___nl__bool__2;
#line 1996
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
#line 2000
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2001
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2001
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2001
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2001
c_rt_lib0clear(&___nl__im__6);
#line 2001
c_rt_lib0clear(&___nl__im__7);
#line 2001
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2001
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2001
c_rt_lib0clear(&___nl__im__5);
#line 2001
c_rt_lib0clear(&___nl__im__8);
#line 2001
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2001
c_rt_lib0clear(&___nl__im__4);
#line 2002
c_rt_lib0move(&___nl__im__10,___get_global_string_const(679));
#line 2002
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2002
c_rt_lib0clear(&___nl__im__10);
#line 2002
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2002
c_rt_lib0clear(&___nl__im__9);
#line 2003
c_rt_lib0clear(&___nl__im__0);
#line 2003
c_rt_lib0clear(&___nl__im__1);
#line 2003
//clear ___nl__bool__2;
#line 2003
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
#line 2008
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_rec_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2008
c_rt_lib0move(&___nl__im__8,___get_global_string_const(528));
#line 2008
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__8));
#line 2008
c_rt_lib0clear(&___nl__im__7);
#line 2008
c_rt_lib0clear(&___nl__im__8);
#line 2008
c_rt_lib0move(&___nl__im__9, string0lf());
#line 2008
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__9));
#line 2008
c_rt_lib0clear(&___nl__im__6);
#line 2008
c_rt_lib0clear(&___nl__im__9);
#line 2009
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 2009
label_10:
;
#line 2009
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 2009
if(___nl__bool__11){ goto label_34;}
#line 2009
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 2009
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 2010
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_field_name(___nl__im__10));
#line 2011
c_rt_lib0move(&___nl__im__19,___get_global_string_const(680));
#line 2011
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__14));
#line 2011
c_rt_lib0clear(&___nl__im__19);
#line 2011
c_rt_lib0move(&___nl__im__17, generator_c_priv0get_clean_fun_call(___nl__im__12, ___nl__im__2, ___nl__im__18, ___nl__im__3));
#line 2011
c_rt_lib0clear(&___nl__im__18);
#line 2011
c_rt_lib0move(&___nl__im__20,___get_global_string_const(440));
#line 2011
c_rt_lib0move(&___nl__im__16, c_rt_lib0concat_new(___nl__im__17, ___nl__im__20));
#line 2011
c_rt_lib0clear(&___nl__im__17);
#line 2011
c_rt_lib0clear(&___nl__im__20);
#line 2011
c_rt_lib0move(&___nl__im__21, string0lf());
#line 2011
c_rt_lib0move(&___nl__im__15, c_rt_lib0concat_new(___nl__im__16, ___nl__im__21));
#line 2011
c_rt_lib0clear(&___nl__im__16);
#line 2011
c_rt_lib0clear(&___nl__im__21);
#line 2011
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__15));
#line 2011
c_rt_lib0clear(&___nl__im__15);
#line 2011
c_rt_lib0clear(&___nl__im__14);
#line 2012
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 2012
goto label_10;
#line 2012
label_34:
;
#line 2013
c_rt_lib0move(&___nl__im__22,___get_global_string_const(305));
#line 2013
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_add(___nl__im__5, ___nl__im__22));
#line 2013
c_rt_lib0clear(&___nl__im__22);
#line 2014
c_rt_lib0clear(&___nl__im__0);
#line 2014
c_rt_lib0clear(&___nl__im__1);
#line 2014
c_rt_lib0clear(&___nl__im__2);
#line 2014
c_rt_lib0clear(&___nl__im__3);
#line 2014
//clear ___nl__bool__4;
#line 2014
c_rt_lib0clear(&___nl__im__10);
#line 2014
//clear ___nl__bool__11;
#line 2014
c_rt_lib0clear(&___nl__im__12);
#line 2014
c_rt_lib0clear(&___nl__im__13);
#line 2014
c_rt_lib0clear(&___nl__im__14);
#line 2014
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
#line 2019
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2020
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2020
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2020
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2020
c_rt_lib0clear(&___nl__im__6);
#line 2020
c_rt_lib0clear(&___nl__im__7);
#line 2020
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2020
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2020
c_rt_lib0clear(&___nl__im__5);
#line 2020
c_rt_lib0clear(&___nl__im__8);
#line 2020
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2020
c_rt_lib0clear(&___nl__im__4);
#line 2021
c_rt_lib0move(&___nl__im__10,___get_global_string_const(681));
#line 2021
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2021
c_rt_lib0clear(&___nl__im__10);
#line 2021
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2021
c_rt_lib0clear(&___nl__im__9);
#line 2022
c_rt_lib0clear(&___nl__im__0);
#line 2022
c_rt_lib0clear(&___nl__im__1);
#line 2022
//clear ___nl__bool__2;
#line 2022
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
#line 2027
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_hash_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2027
c_rt_lib0move(&___nl__im__13,___get_global_string_const(682));
#line 2027
c_rt_lib0move(&___nl__im__11, c_rt_lib0concat_new(___nl__im__12, ___nl__im__13));
#line 2027
c_rt_lib0clear(&___nl__im__12);
#line 2027
c_rt_lib0clear(&___nl__im__13);
#line 2030
c_rt_lib0move(&___nl__im__15, c_rt_lib0ov_mk_none(___get_global_string_const(9)));
#line 2030
c_rt_lib0move(&___nl__im__16,___get_global_string_const(683));
#line 2030
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_clean_fun_call(___nl__im__15, ___nl__im__2, ___nl__im__16, ___nl__im__3));
#line 2030
c_rt_lib0clear(&___nl__im__15);
#line 2030
c_rt_lib0clear(&___nl__im__16);
#line 2030
c_rt_lib0move(&___nl__im__10, c_rt_lib0concat_new(___nl__im__11, ___nl__im__14));
#line 2030
c_rt_lib0clear(&___nl__im__11);
#line 2030
c_rt_lib0clear(&___nl__im__14);
#line 2030
c_rt_lib0move(&___nl__im__17,___get_global_string_const(684));
#line 2030
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__17));
#line 2030
c_rt_lib0clear(&___nl__im__10);
#line 2030
c_rt_lib0clear(&___nl__im__17);
#line 2031
c_rt_lib0move(&___nl__im__19,___get_global_string_const(685));
#line 2031
c_rt_lib0move(&___nl__im__18, generator_c_priv0get_clean_fun_call(___nl__im__1, ___nl__im__2, ___nl__im__19, ___nl__im__3));
#line 2031
c_rt_lib0clear(&___nl__im__19);
#line 2031
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__18));
#line 2031
c_rt_lib0clear(&___nl__im__9);
#line 2031
c_rt_lib0clear(&___nl__im__18);
#line 2031
c_rt_lib0move(&___nl__im__20,___get_global_string_const(686));
#line 2031
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__20));
#line 2031
c_rt_lib0clear(&___nl__im__8);
#line 2031
c_rt_lib0clear(&___nl__im__20);
#line 2034
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_type_name(___nl__im__1));
#line 2034
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__21));
#line 2034
c_rt_lib0clear(&___nl__im__7);
#line 2034
c_rt_lib0clear(&___nl__im__21);
#line 2034
c_rt_lib0move(&___nl__im__22,___get_global_string_const(687));
#line 2034
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__22));
#line 2034
c_rt_lib0clear(&___nl__im__6);
#line 2034
c_rt_lib0clear(&___nl__im__22);
#line 2034
c_rt_lib0clear(&___nl__im__0);
#line 2034
c_rt_lib0clear(&___nl__im__1);
#line 2034
c_rt_lib0clear(&___nl__im__2);
#line 2034
c_rt_lib0clear(&___nl__im__3);
#line 2034
//clear ___nl__bool__4;
#line 2034
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
#line 2040
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2041
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2041
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2041
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2041
c_rt_lib0clear(&___nl__im__6);
#line 2041
c_rt_lib0clear(&___nl__im__7);
#line 2041
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2041
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2041
c_rt_lib0clear(&___nl__im__5);
#line 2041
c_rt_lib0clear(&___nl__im__8);
#line 2041
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2041
c_rt_lib0clear(&___nl__im__4);
#line 2042
c_rt_lib0move(&___nl__im__10,___get_global_string_const(688));
#line 2042
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2042
c_rt_lib0clear(&___nl__im__10);
#line 2042
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2042
c_rt_lib0clear(&___nl__im__9);
#line 2043
c_rt_lib0clear(&___nl__im__0);
#line 2043
c_rt_lib0clear(&___nl__im__1);
#line 2043
//clear ___nl__bool__2;
#line 2043
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
#line 2048
c_rt_lib0move(&___nl__im__10, generator_c_priv0get_array_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__4));
#line 2048
c_rt_lib0move(&___nl__im__11,___get_global_string_const(689));
#line 2048
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__10, ___nl__im__11));
#line 2048
c_rt_lib0clear(&___nl__im__10);
#line 2048
c_rt_lib0clear(&___nl__im__11);
#line 2051
c_rt_lib0move(&___nl__im__13,___get_global_string_const(690));
#line 2051
c_rt_lib0move(&___nl__im__12, generator_c_priv0get_clean_fun_call(___nl__im__1, ___nl__im__2, ___nl__im__13, ___nl__im__3));
#line 2051
c_rt_lib0clear(&___nl__im__13);
#line 2051
c_rt_lib0move(&___nl__im__8, c_rt_lib0concat_new(___nl__im__9, ___nl__im__12));
#line 2051
c_rt_lib0clear(&___nl__im__9);
#line 2051
c_rt_lib0clear(&___nl__im__12);
#line 2051
c_rt_lib0move(&___nl__im__14,___get_global_string_const(691));
#line 2051
c_rt_lib0move(&___nl__im__7, c_rt_lib0concat_new(___nl__im__8, ___nl__im__14));
#line 2051
c_rt_lib0clear(&___nl__im__8);
#line 2051
c_rt_lib0clear(&___nl__im__14);
#line 2053
c_rt_lib0move(&___nl__im__15, generator_c_priv0get_type_name(___nl__im__1));
#line 2053
c_rt_lib0move(&___nl__im__6, c_rt_lib0concat_new(___nl__im__7, ___nl__im__15));
#line 2053
c_rt_lib0clear(&___nl__im__7);
#line 2053
c_rt_lib0clear(&___nl__im__15);
#line 2053
c_rt_lib0move(&___nl__im__16,___get_global_string_const(692));
#line 2053
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__16));
#line 2053
c_rt_lib0clear(&___nl__im__6);
#line 2053
c_rt_lib0clear(&___nl__im__16);
#line 2053
c_rt_lib0clear(&___nl__im__0);
#line 2053
c_rt_lib0clear(&___nl__im__1);
#line 2053
c_rt_lib0clear(&___nl__im__2);
#line 2053
c_rt_lib0clear(&___nl__im__3);
#line 2053
//clear ___nl__bool__4;
#line 2053
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
#line 2058
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2059
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2059
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2059
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2059
c_rt_lib0clear(&___nl__im__6);
#line 2059
c_rt_lib0clear(&___nl__im__7);
#line 2059
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2059
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2059
c_rt_lib0clear(&___nl__im__5);
#line 2059
c_rt_lib0clear(&___nl__im__8);
#line 2059
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2059
c_rt_lib0clear(&___nl__im__4);
#line 2060
c_rt_lib0move(&___nl__im__10,___get_global_string_const(693));
#line 2060
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2060
c_rt_lib0clear(&___nl__im__10);
#line 2060
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2060
c_rt_lib0clear(&___nl__im__9);
#line 2061
c_rt_lib0clear(&___nl__im__0);
#line 2061
c_rt_lib0clear(&___nl__im__1);
#line 2061
//clear ___nl__bool__2;
#line 2061
return ___nl__im__3;
#line 2061
c_rt_lib0clear(&___nl__im__0);
#line 2061
c_rt_lib0clear(&___nl__im__1);
#line 2061
//clear ___nl__bool__2;
#line 2061
c_rt_lib0clear(&___nl__im__3);
#line 2061
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
ImmT  ___nl__im__34 = NULL;
#line 2067
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_clean_fun_header(___nl__im__0, ___nl__im__2, ___nl__bool__3));
#line 2067
c_rt_lib0move(&___nl__im__7,___get_global_string_const(694));
#line 2067
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2067
c_rt_lib0clear(&___nl__im__6);
#line 2067
c_rt_lib0clear(&___nl__im__7);
#line 2068
c_rt_lib0move(&___nl__im__8, string0lf());
#line 2068
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2068
c_rt_lib0clear(&___nl__im__5);
#line 2068
c_rt_lib0clear(&___nl__im__8);
#line 2069
___nl__int__9 = 0;
#line 2070
c_rt_lib0move(&___nl__im__13, c_rt_lib0init_iter(___nl__im__1));
#line 2070
label_11:
;
#line 2070
___nl__bool__11 = c_rt_lib0is_end_hash(___nl__im__13);
#line 2070
if(___nl__bool__11){ goto label_70;}
#line 2070
c_rt_lib0move(&___nl__im__10, c_rt_lib0get_key_iter(___nl__im__13));
#line 2070
c_rt_lib0move(&___nl__im__12, c_rt_lib0hash_get_value(___nl__im__1, ___nl__im__10));
#line 2071
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(29));
#line 2071
if(___nl__bool__14){ goto label_23;}
#line 2072
___nl__bool__14 = c_rt_lib0priv_is(___nl__im__12, ___get_global_string_const(28));
#line 2072
if(___nl__bool__14){ goto label_25;}
#line 2072
c_rt_lib0move(&___nl__im__15,___get_global_string_const(16));
#line 2072
c_rt_lib0move(&___nl__im__15, c_rt_lib0array_mk(2, ___nl__im__15, ___nl__im__12));
#line 2072
nl_die_arg(___nl__im__15);
#line 2071
label_23:
;
#line 2072
goto label_60;
#line 2072
label_25:
;
#line 2072
c_rt_lib0move(&___nl__im__17, c_rt_lib0priv_as(___nl__im__12, ___get_global_string_const(28)));
#line 2072
c_rt_lib0copy(&___nl__im__16, ___nl__im__17);
#line 2073
c_rt_lib0move(&___nl__im__23,___get_global_string_const(521));
#line 2073
c_rt_lib0move(&___nl__im__25, c_rt_lib0int_new(___nl__int__9));
#line 2073
c_rt_lib0move(&___nl__im__24, ptd0int_to_string(___nl__im__25));
#line 2073
c_rt_lib0clear(&___nl__im__25);
#line 2073
c_rt_lib0move(&___nl__im__22, c_rt_lib0concat_new(___nl__im__23, ___nl__im__24));
#line 2073
c_rt_lib0clear(&___nl__im__23);
#line 2073
c_rt_lib0clear(&___nl__im__24);
#line 2073
c_rt_lib0move(&___nl__im__26,___get_global_string_const(695));
#line 2073
c_rt_lib0move(&___nl__im__21, c_rt_lib0concat_new(___nl__im__22, ___nl__im__26));
#line 2073
c_rt_lib0clear(&___nl__im__22);
#line 2073
c_rt_lib0clear(&___nl__im__26);
#line 2074
c_rt_lib0move(&___nl__im__29,___get_global_string_const(696));
#line 2074
c_rt_lib0move(&___nl__im__30, generator_c_priv0get_case_name(___nl__im__10));
#line 2074
c_rt_lib0move(&___nl__im__28, c_rt_lib0concat_new(___nl__im__29, ___nl__im__30));
#line 2074
c_rt_lib0clear(&___nl__im__29);
#line 2074
c_rt_lib0clear(&___nl__im__30);
#line 2074
c_rt_lib0move(&___nl__im__27, generator_c_priv0get_free_fun_call(___nl__im__16, ___nl__im__2, ___nl__im__28));
#line 2074
c_rt_lib0clear(&___nl__im__28);
#line 2074
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__27));
#line 2074
c_rt_lib0clear(&___nl__im__21);
#line 2074
c_rt_lib0clear(&___nl__im__27);
#line 2074
c_rt_lib0move(&___nl__im__31,___get_global_string_const(697));
#line 2074
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__31));
#line 2074
c_rt_lib0clear(&___nl__im__20);
#line 2074
c_rt_lib0clear(&___nl__im__31);
#line 2075
c_rt_lib0move(&___nl__im__32, string0lf());
#line 2075
c_rt_lib0move(&___nl__im__18, c_rt_lib0concat_new(___nl__im__19, ___nl__im__32));
#line 2075
c_rt_lib0clear(&___nl__im__19);
#line 2075
c_rt_lib0clear(&___nl__im__32);
#line 2075
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__18));
#line 2075
c_rt_lib0clear(&___nl__im__18);
#line 2076
goto label_60;
#line 2076
label_60:
;
#line 2077
___nl__int__33 = 1;
#line 2077
___nl__int__9 = ___nl__int__9 + ___nl__int__33;
#line 2077
//clear ___nl__int__33;
#line 2077
//clear ___nl__bool__14;
#line 2077
c_rt_lib0clear(&___nl__im__15);
#line 2077
c_rt_lib0clear(&___nl__im__16);
#line 2077
c_rt_lib0clear(&___nl__im__17);
#line 2078
c_rt_lib0move(&___nl__im__13, c_rt_lib0next_iter(___nl__im__13));
#line 2078
goto label_11;
#line 2078
label_70:
;
#line 2079
c_rt_lib0move(&___nl__im__34,___get_global_string_const(698));
#line 2079
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_add(___nl__im__4, ___nl__im__34));
#line 2079
c_rt_lib0clear(&___nl__im__34);
#line 2081
c_rt_lib0clear(&___nl__im__0);
#line 2081
c_rt_lib0clear(&___nl__im__1);
#line 2081
c_rt_lib0clear(&___nl__im__2);
#line 2081
//clear ___nl__bool__3;
#line 2081
//clear ___nl__int__9;
#line 2081
c_rt_lib0clear(&___nl__im__10);
#line 2081
//clear ___nl__bool__11;
#line 2081
c_rt_lib0clear(&___nl__im__12);
#line 2081
c_rt_lib0clear(&___nl__im__13);
#line 2081
//clear ___nl__bool__14;
#line 2081
c_rt_lib0clear(&___nl__im__15);
#line 2081
c_rt_lib0clear(&___nl__im__16);
#line 2081
c_rt_lib0clear(&___nl__im__17);
#line 2081
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
#line 2086
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 2086
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_free_fun_call_exact(___nl__im__0, ___nl__im__4, ___nl__im__1, ___nl__im__2));
#line 2086
c_rt_lib0clear(&___nl__im__4);
#line 2086
c_rt_lib0clear(&___nl__im__0);
#line 2086
c_rt_lib0clear(&___nl__im__1);
#line 2086
c_rt_lib0clear(&___nl__im__2);
#line 2086
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
ImmT  ___nl__im__83 = NULL;
ImmT  ___nl__im__84 = NULL;
ImmT  ___nl__im__85 = NULL;
ImmT  ___nl__im__86 = NULL;
#line 2091
c_rt_lib0move(&___nl__im__4,___get_global_string_const(37));
#line 2092
c_rt_lib0move(&___nl__im__6,___get_global_string_const(37));
#line 2092
___nl__bool__5 = c_rt_lib0eq(___nl__im__1, ___nl__im__6);
#line 2092
c_rt_lib0clear(&___nl__im__6);
#line 2092
if(___nl__bool__5){ goto label_7;}
#line 2092
c_rt_lib0copy(&___nl__im__1, ___nl__im__1);
#line 2092
goto label_9;
#line 2092
label_7:
;
#line 2092
c_rt_lib0move(&___nl__im__1, generator_c_priv0get_type_name(___nl__im__0));
#line 2092
label_9:
;
#line 2092
//clear ___nl__bool__5;
#line 2093
___nl__bool__7 = generator_c_priv0is_anon(___nl__im__0);
#line 2094
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 2094
if(___nl__bool__8){ goto label_47;}
#line 2096
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2096
if(___nl__bool__8){ goto label_62;}
#line 2098
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2098
if(___nl__bool__8){ goto label_77;}
#line 2100
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2100
if(___nl__bool__8){ goto label_92;}
#line 2102
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 2102
if(___nl__bool__8){ goto label_107;}
#line 2105
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 2105
if(___nl__bool__8){ goto label_118;}
#line 2108
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 2108
if(___nl__bool__8){ goto label_131;}
#line 2111
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 2111
if(___nl__bool__8){ goto label_144;}
#line 2114
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2114
if(___nl__bool__8){ goto label_157;}
#line 2117
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2117
if(___nl__bool__8){ goto label_170;}
#line 2119
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2119
if(___nl__bool__8){ goto label_179;}
#line 2121
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2121
if(___nl__bool__8){ goto label_194;}
#line 2124
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 2124
if(___nl__bool__8){ goto label_205;}
#line 2127
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 2127
if(___nl__bool__8){ goto label_216;}
#line 2129
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2129
if(___nl__bool__8){ goto label_225;}
#line 2130
___nl__bool__8 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 2130
if(___nl__bool__8){ goto label_227;}
#line 2130
c_rt_lib0move(&___nl__im__9,___get_global_string_const(16));
#line 2130
c_rt_lib0move(&___nl__im__9, c_rt_lib0array_mk(2, ___nl__im__9, ___nl__im__0));
#line 2130
nl_die_arg(___nl__im__9);
#line 2094
label_47:
;
#line 2094
c_rt_lib0move(&___nl__im__11, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 2094
c_rt_lib0copy(&___nl__im__10, ___nl__im__11);
#line 2095
c_rt_lib0move(&___nl__im__14, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2095
c_rt_lib0move(&___nl__im__15,___get_global_string_const(455));
#line 2095
c_rt_lib0move(&___nl__im__13, c_rt_lib0concat_new(___nl__im__14, ___nl__im__15));
#line 2095
c_rt_lib0clear(&___nl__im__14);
#line 2095
c_rt_lib0clear(&___nl__im__15);
#line 2095
c_rt_lib0move(&___nl__im__12, c_rt_lib0concat_new(___nl__im__13, ___nl__im__3));
#line 2095
c_rt_lib0clear(&___nl__im__13);
#line 2095
c_rt_lib0move(&___nl__im__16,___get_global_string_const(320));
#line 2095
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__12, ___nl__im__16));
#line 2095
c_rt_lib0clear(&___nl__im__12);
#line 2095
c_rt_lib0clear(&___nl__im__16);
#line 2096
goto label_229;
#line 2096
label_62:
;
#line 2096
c_rt_lib0move(&___nl__im__18, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 2096
c_rt_lib0copy(&___nl__im__17, ___nl__im__18);
#line 2097
c_rt_lib0move(&___nl__im__21, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2097
c_rt_lib0move(&___nl__im__22,___get_global_string_const(455));
#line 2097
c_rt_lib0move(&___nl__im__20, c_rt_lib0concat_new(___nl__im__21, ___nl__im__22));
#line 2097
c_rt_lib0clear(&___nl__im__21);
#line 2097
c_rt_lib0clear(&___nl__im__22);
#line 2097
c_rt_lib0move(&___nl__im__19, c_rt_lib0concat_new(___nl__im__20, ___nl__im__3));
#line 2097
c_rt_lib0clear(&___nl__im__20);
#line 2097
c_rt_lib0move(&___nl__im__23,___get_global_string_const(320));
#line 2097
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__19, ___nl__im__23));
#line 2097
c_rt_lib0clear(&___nl__im__19);
#line 2097
c_rt_lib0clear(&___nl__im__23);
#line 2098
goto label_229;
#line 2098
label_77:
;
#line 2098
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 2098
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 2099
c_rt_lib0move(&___nl__im__28, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2099
c_rt_lib0move(&___nl__im__29,___get_global_string_const(455));
#line 2099
c_rt_lib0move(&___nl__im__27, c_rt_lib0concat_new(___nl__im__28, ___nl__im__29));
#line 2099
c_rt_lib0clear(&___nl__im__28);
#line 2099
c_rt_lib0clear(&___nl__im__29);
#line 2099
c_rt_lib0move(&___nl__im__26, c_rt_lib0concat_new(___nl__im__27, ___nl__im__3));
#line 2099
c_rt_lib0clear(&___nl__im__27);
#line 2099
c_rt_lib0move(&___nl__im__30,___get_global_string_const(320));
#line 2099
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__26, ___nl__im__30));
#line 2099
c_rt_lib0clear(&___nl__im__26);
#line 2099
c_rt_lib0clear(&___nl__im__30);
#line 2100
goto label_229;
#line 2100
label_92:
;
#line 2100
c_rt_lib0move(&___nl__im__32, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 2100
c_rt_lib0copy(&___nl__im__31, ___nl__im__32);
#line 2101
c_rt_lib0move(&___nl__im__35, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2101
c_rt_lib0move(&___nl__im__36,___get_global_string_const(455));
#line 2101
c_rt_lib0move(&___nl__im__34, c_rt_lib0concat_new(___nl__im__35, ___nl__im__36));
#line 2101
c_rt_lib0clear(&___nl__im__35);
#line 2101
c_rt_lib0clear(&___nl__im__36);
#line 2101
c_rt_lib0move(&___nl__im__33, c_rt_lib0concat_new(___nl__im__34, ___nl__im__3));
#line 2101
c_rt_lib0clear(&___nl__im__34);
#line 2101
c_rt_lib0move(&___nl__im__37,___get_global_string_const(320));
#line 2101
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__33, ___nl__im__37));
#line 2101
c_rt_lib0clear(&___nl__im__33);
#line 2101
c_rt_lib0clear(&___nl__im__37);
#line 2102
goto label_229;
#line 2102
label_107:
;
#line 2103
c_rt_lib0move(&___nl__im__39,___get_global_string_const(251));
#line 2103
c_rt_lib0move(&___nl__im__40, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2103
c_rt_lib0move(&___nl__im__38, generator_c_priv0get_fun_lib(___nl__im__39, ___nl__im__40));
#line 2103
c_rt_lib0clear(&___nl__im__39);
#line 2103
c_rt_lib0clear(&___nl__im__40);
#line 2103
c_rt_lib0move(&___nl__im__41,___get_global_string_const(699));
#line 2103
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__38, ___nl__im__41));
#line 2103
c_rt_lib0clear(&___nl__im__38);
#line 2103
c_rt_lib0clear(&___nl__im__41);
#line 2105
goto label_229;
#line 2105
label_118:
;
#line 2105
c_rt_lib0move(&___nl__im__43, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 2105
c_rt_lib0copy(&___nl__im__42, ___nl__im__43);
#line 2106
c_rt_lib0move(&___nl__im__45,___get_global_string_const(251));
#line 2106
c_rt_lib0move(&___nl__im__46, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2106
c_rt_lib0move(&___nl__im__44, generator_c_priv0get_fun_lib(___nl__im__45, ___nl__im__46));
#line 2106
c_rt_lib0clear(&___nl__im__45);
#line 2106
c_rt_lib0clear(&___nl__im__46);
#line 2106
c_rt_lib0move(&___nl__im__47,___get_global_string_const(699));
#line 2106
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__44, ___nl__im__47));
#line 2106
c_rt_lib0clear(&___nl__im__44);
#line 2106
c_rt_lib0clear(&___nl__im__47);
#line 2108
goto label_229;
#line 2108
label_131:
;
#line 2108
c_rt_lib0move(&___nl__im__49, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 2108
c_rt_lib0copy(&___nl__im__48, ___nl__im__49);
#line 2109
c_rt_lib0move(&___nl__im__51,___get_global_string_const(251));
#line 2109
c_rt_lib0move(&___nl__im__52, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2109
c_rt_lib0move(&___nl__im__50, generator_c_priv0get_fun_lib(___nl__im__51, ___nl__im__52));
#line 2109
c_rt_lib0clear(&___nl__im__51);
#line 2109
c_rt_lib0clear(&___nl__im__52);
#line 2109
c_rt_lib0move(&___nl__im__53,___get_global_string_const(699));
#line 2109
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__50, ___nl__im__53));
#line 2109
c_rt_lib0clear(&___nl__im__50);
#line 2109
c_rt_lib0clear(&___nl__im__53);
#line 2111
goto label_229;
#line 2111
label_144:
;
#line 2111
c_rt_lib0move(&___nl__im__55, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 2111
c_rt_lib0copy(&___nl__im__54, ___nl__im__55);
#line 2112
c_rt_lib0move(&___nl__im__57,___get_global_string_const(251));
#line 2112
c_rt_lib0move(&___nl__im__58, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2112
c_rt_lib0move(&___nl__im__56, generator_c_priv0get_fun_lib(___nl__im__57, ___nl__im__58));
#line 2112
c_rt_lib0clear(&___nl__im__57);
#line 2112
c_rt_lib0clear(&___nl__im__58);
#line 2112
c_rt_lib0move(&___nl__im__59,___get_global_string_const(699));
#line 2112
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__56, ___nl__im__59));
#line 2112
c_rt_lib0clear(&___nl__im__56);
#line 2112
c_rt_lib0clear(&___nl__im__59);
#line 2114
goto label_229;
#line 2114
label_157:
;
#line 2114
c_rt_lib0move(&___nl__im__61, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 2114
c_rt_lib0copy(&___nl__im__60, ___nl__im__61);
#line 2115
c_rt_lib0move(&___nl__im__63,___get_global_string_const(251));
#line 2115
c_rt_lib0move(&___nl__im__64, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2115
c_rt_lib0move(&___nl__im__62, generator_c_priv0get_fun_lib(___nl__im__63, ___nl__im__64));
#line 2115
c_rt_lib0clear(&___nl__im__63);
#line 2115
c_rt_lib0clear(&___nl__im__64);
#line 2115
c_rt_lib0move(&___nl__im__65,___get_global_string_const(699));
#line 2115
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__62, ___nl__im__65));
#line 2115
c_rt_lib0clear(&___nl__im__62);
#line 2115
c_rt_lib0clear(&___nl__im__65);
#line 2117
goto label_229;
#line 2117
label_170:
;
#line 2118
c_rt_lib0move(&___nl__im__67,___get_global_string_const(700));
#line 2118
c_rt_lib0move(&___nl__im__66, c_rt_lib0concat_new(___nl__im__67, ___nl__im__3));
#line 2118
c_rt_lib0clear(&___nl__im__67);
#line 2118
c_rt_lib0move(&___nl__im__68,___get_global_string_const(701));
#line 2118
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__66, ___nl__im__68));
#line 2118
c_rt_lib0clear(&___nl__im__66);
#line 2118
c_rt_lib0clear(&___nl__im__68);
#line 2119
goto label_229;
#line 2119
label_179:
;
#line 2119
c_rt_lib0move(&___nl__im__70, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2119
c_rt_lib0copy(&___nl__im__69, ___nl__im__70);
#line 2120
c_rt_lib0move(&___nl__im__73, generator_c_priv0get_free_fun_name(___nl__im__1, ___nl__im__2, ___nl__bool__7));
#line 2120
c_rt_lib0move(&___nl__im__74,___get_global_string_const(455));
#line 2120
c_rt_lib0move(&___nl__im__72, c_rt_lib0concat_new(___nl__im__73, ___nl__im__74));
#line 2120
c_rt_lib0clear(&___nl__im__73);
#line 2120
c_rt_lib0clear(&___nl__im__74);
#line 2120
c_rt_lib0move(&___nl__im__71, c_rt_lib0concat_new(___nl__im__72, ___nl__im__3));
#line 2120
c_rt_lib0clear(&___nl__im__72);
#line 2120
c_rt_lib0move(&___nl__im__75,___get_global_string_const(320));
#line 2120
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__71, ___nl__im__75));
#line 2120
c_rt_lib0clear(&___nl__im__71);
#line 2120
c_rt_lib0clear(&___nl__im__75);
#line 2121
goto label_229;
#line 2121
label_194:
;
#line 2122
c_rt_lib0move(&___nl__im__77,___get_global_string_const(251));
#line 2122
c_rt_lib0move(&___nl__im__78, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2122
c_rt_lib0move(&___nl__im__76, generator_c_priv0get_fun_lib(___nl__im__77, ___nl__im__78));
#line 2122
c_rt_lib0clear(&___nl__im__77);
#line 2122
c_rt_lib0clear(&___nl__im__78);
#line 2122
c_rt_lib0move(&___nl__im__79,___get_global_string_const(699));
#line 2122
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__76, ___nl__im__79));
#line 2122
c_rt_lib0clear(&___nl__im__76);
#line 2122
c_rt_lib0clear(&___nl__im__79);
#line 2124
goto label_229;
#line 2124
label_205:
;
#line 2125
c_rt_lib0move(&___nl__im__81,___get_global_string_const(251));
#line 2125
c_rt_lib0move(&___nl__im__82, c_rt_lib0array_mk(1, ___nl__im__3));
#line 2125
c_rt_lib0move(&___nl__im__80, generator_c_priv0get_fun_lib(___nl__im__81, ___nl__im__82));
#line 2125
c_rt_lib0clear(&___nl__im__81);
#line 2125
c_rt_lib0clear(&___nl__im__82);
#line 2125
c_rt_lib0move(&___nl__im__83,___get_global_string_const(699));
#line 2125
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__80, ___nl__im__83));
#line 2125
c_rt_lib0clear(&___nl__im__80);
#line 2125
c_rt_lib0clear(&___nl__im__83);
#line 2127
goto label_229;
#line 2127
label_216:
;
#line 2128
c_rt_lib0move(&___nl__im__85,___get_global_string_const(700));
#line 2128
c_rt_lib0move(&___nl__im__84, c_rt_lib0concat_new(___nl__im__85, ___nl__im__3));
#line 2128
c_rt_lib0clear(&___nl__im__85);
#line 2128
c_rt_lib0move(&___nl__im__86,___get_global_string_const(702));
#line 2128
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__84, ___nl__im__86));
#line 2128
c_rt_lib0clear(&___nl__im__84);
#line 2128
c_rt_lib0clear(&___nl__im__86);
#line 2129
goto label_229;
#line 2129
label_225:
;
#line 2130
goto label_229;
#line 2130
label_227:
;
#line 2131
goto label_229;
#line 2131
label_229:
;
#line 2132
c_rt_lib0clear(&___nl__im__0);
#line 2132
c_rt_lib0clear(&___nl__im__1);
#line 2132
c_rt_lib0clear(&___nl__im__2);
#line 2132
c_rt_lib0clear(&___nl__im__3);
#line 2132
//clear ___nl__bool__7;
#line 2132
//clear ___nl__bool__8;
#line 2132
c_rt_lib0clear(&___nl__im__9);
#line 2132
c_rt_lib0clear(&___nl__im__10);
#line 2132
c_rt_lib0clear(&___nl__im__11);
#line 2132
c_rt_lib0clear(&___nl__im__17);
#line 2132
c_rt_lib0clear(&___nl__im__18);
#line 2132
c_rt_lib0clear(&___nl__im__24);
#line 2132
c_rt_lib0clear(&___nl__im__25);
#line 2132
c_rt_lib0clear(&___nl__im__31);
#line 2132
c_rt_lib0clear(&___nl__im__32);
#line 2132
c_rt_lib0clear(&___nl__im__42);
#line 2132
c_rt_lib0clear(&___nl__im__43);
#line 2132
c_rt_lib0clear(&___nl__im__48);
#line 2132
c_rt_lib0clear(&___nl__im__49);
#line 2132
c_rt_lib0clear(&___nl__im__54);
#line 2132
c_rt_lib0clear(&___nl__im__55);
#line 2132
c_rt_lib0clear(&___nl__im__60);
#line 2132
c_rt_lib0clear(&___nl__im__61);
#line 2132
c_rt_lib0clear(&___nl__im__69);
#line 2132
c_rt_lib0clear(&___nl__im__70);
#line 2132
return ___nl__im__4;
return NULL;

}

ImmT  generator_c_priv0get_free_fun_name(ImmT  ___nl__im__0,ImmT  ___nl__im__1,bool  ___nl__bool__2) {
c_rt_lib0arg_val(___nl__im__0);
c_rt_lib0arg_val(___nl__im__1);
generator_c_priv0__const__init();
ImmT  ___nl__im__3 = NULL;
ImmT  ___nl__im__4 = NULL;
#line 2138
c_rt_lib0move(&___nl__im__4,___get_global_string_const(703));
#line 2138
c_rt_lib0move(&___nl__im__3, generator_c_priv0get_spec_fun_name(___nl__im__0, ___nl__im__1, ___nl__im__4, ___nl__bool__2));
#line 2138
c_rt_lib0clear(&___nl__im__4);
#line 2138
c_rt_lib0clear(&___nl__im__0);
#line 2138
c_rt_lib0clear(&___nl__im__1);
#line 2138
//clear ___nl__bool__2;
#line 2138
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
#line 2142
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2143
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2143
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2143
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2143
c_rt_lib0clear(&___nl__im__6);
#line 2143
c_rt_lib0clear(&___nl__im__7);
#line 2143
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2143
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2143
c_rt_lib0clear(&___nl__im__5);
#line 2143
c_rt_lib0clear(&___nl__im__8);
#line 2143
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2143
c_rt_lib0clear(&___nl__im__4);
#line 2144
c_rt_lib0move(&___nl__im__10,___get_global_string_const(704));
#line 2144
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2144
c_rt_lib0clear(&___nl__im__10);
#line 2144
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2144
c_rt_lib0clear(&___nl__im__9);
#line 2145
c_rt_lib0clear(&___nl__im__0);
#line 2145
c_rt_lib0clear(&___nl__im__1);
#line 2145
//clear ___nl__bool__2;
#line 2145
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
#line 2149
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_rec_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2149
c_rt_lib0move(&___nl__im__7,___get_global_string_const(621));
#line 2149
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2149
c_rt_lib0clear(&___nl__im__6);
#line 2149
c_rt_lib0clear(&___nl__im__7);
#line 2150
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2150
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2150
c_rt_lib0clear(&___nl__im__5);
#line 2150
c_rt_lib0clear(&___nl__im__8);
#line 2150
c_rt_lib0move(&___nl__im__9,___get_global_string_const(705));
#line 2150
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2150
c_rt_lib0clear(&___nl__im__4);
#line 2150
c_rt_lib0clear(&___nl__im__9);
#line 2150
c_rt_lib0clear(&___nl__im__0);
#line 2150
c_rt_lib0clear(&___nl__im__1);
#line 2150
//clear ___nl__bool__2;
#line 2150
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
#line 2156
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2157
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2157
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2157
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2157
c_rt_lib0clear(&___nl__im__6);
#line 2157
c_rt_lib0clear(&___nl__im__7);
#line 2157
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2157
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2157
c_rt_lib0clear(&___nl__im__5);
#line 2157
c_rt_lib0clear(&___nl__im__8);
#line 2157
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2157
c_rt_lib0clear(&___nl__im__4);
#line 2158
c_rt_lib0move(&___nl__im__10,___get_global_string_const(706));
#line 2158
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2158
c_rt_lib0clear(&___nl__im__10);
#line 2158
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2158
c_rt_lib0clear(&___nl__im__9);
#line 2159
c_rt_lib0clear(&___nl__im__0);
#line 2159
c_rt_lib0clear(&___nl__im__1);
#line 2159
//clear ___nl__bool__2;
#line 2159
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
#line 2163
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_hash_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2163
c_rt_lib0move(&___nl__im__7,___get_global_string_const(621));
#line 2163
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2163
c_rt_lib0clear(&___nl__im__6);
#line 2163
c_rt_lib0clear(&___nl__im__7);
#line 2164
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2164
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2164
c_rt_lib0clear(&___nl__im__5);
#line 2164
c_rt_lib0clear(&___nl__im__8);
#line 2164
c_rt_lib0move(&___nl__im__9,___get_global_string_const(707));
#line 2164
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2164
c_rt_lib0clear(&___nl__im__4);
#line 2164
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
#line 2171
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2172
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2172
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2172
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2172
c_rt_lib0clear(&___nl__im__6);
#line 2172
c_rt_lib0clear(&___nl__im__7);
#line 2172
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2172
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2172
c_rt_lib0clear(&___nl__im__5);
#line 2172
c_rt_lib0clear(&___nl__im__8);
#line 2172
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2172
c_rt_lib0clear(&___nl__im__4);
#line 2173
c_rt_lib0move(&___nl__im__10,___get_global_string_const(653));
#line 2173
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2173
c_rt_lib0clear(&___nl__im__10);
#line 2173
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2173
c_rt_lib0clear(&___nl__im__9);
#line 2174
c_rt_lib0clear(&___nl__im__0);
#line 2174
c_rt_lib0clear(&___nl__im__1);
#line 2174
//clear ___nl__bool__2;
#line 2174
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
#line 2178
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_array_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2178
c_rt_lib0move(&___nl__im__7,___get_global_string_const(621));
#line 2178
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2178
c_rt_lib0clear(&___nl__im__6);
#line 2178
c_rt_lib0clear(&___nl__im__7);
#line 2179
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2179
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2179
c_rt_lib0clear(&___nl__im__5);
#line 2179
c_rt_lib0clear(&___nl__im__8);
#line 2179
c_rt_lib0move(&___nl__im__9,___get_global_string_const(708));
#line 2179
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2179
c_rt_lib0clear(&___nl__im__4);
#line 2179
c_rt_lib0clear(&___nl__im__9);
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
#line 2186
c_rt_lib0move(&___nl__im__3,___get_global_string_const(37));
#line 2187
c_rt_lib0move(&___nl__im__6,___get_global_string_const(482));
#line 2187
c_rt_lib0move(&___nl__im__7, generator_c_priv0get_free_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2187
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2187
c_rt_lib0clear(&___nl__im__6);
#line 2187
c_rt_lib0clear(&___nl__im__7);
#line 2187
c_rt_lib0move(&___nl__im__8,___get_global_string_const(455));
#line 2187
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2187
c_rt_lib0clear(&___nl__im__5);
#line 2187
c_rt_lib0clear(&___nl__im__8);
#line 2187
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__4));
#line 2187
c_rt_lib0clear(&___nl__im__4);
#line 2188
c_rt_lib0move(&___nl__im__10,___get_global_string_const(709));
#line 2188
c_rt_lib0move(&___nl__im__9, c_rt_lib0concat_new(___nl__im__0, ___nl__im__10));
#line 2188
c_rt_lib0clear(&___nl__im__10);
#line 2188
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_add(___nl__im__3, ___nl__im__9));
#line 2188
c_rt_lib0clear(&___nl__im__9);
#line 2189
c_rt_lib0clear(&___nl__im__0);
#line 2189
c_rt_lib0clear(&___nl__im__1);
#line 2189
//clear ___nl__bool__2;
#line 2189
return ___nl__im__3;
#line 2189
c_rt_lib0clear(&___nl__im__0);
#line 2189
c_rt_lib0clear(&___nl__im__1);
#line 2189
//clear ___nl__bool__2;
#line 2189
c_rt_lib0clear(&___nl__im__3);
#line 2189
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
#line 2193
c_rt_lib0move(&___nl__im__6, generator_c_priv0get_variant_free_fun_header(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2193
c_rt_lib0move(&___nl__im__7,___get_global_string_const(710));
#line 2193
c_rt_lib0move(&___nl__im__5, c_rt_lib0concat_new(___nl__im__6, ___nl__im__7));
#line 2193
c_rt_lib0clear(&___nl__im__6);
#line 2193
c_rt_lib0clear(&___nl__im__7);
#line 2194
c_rt_lib0move(&___nl__im__8, generator_c_priv0get_clean_fun_name(___nl__im__0, ___nl__im__1, ___nl__bool__2));
#line 2194
c_rt_lib0move(&___nl__im__4, c_rt_lib0concat_new(___nl__im__5, ___nl__im__8));
#line 2194
c_rt_lib0clear(&___nl__im__5);
#line 2194
c_rt_lib0clear(&___nl__im__8);
#line 2194
c_rt_lib0move(&___nl__im__9,___get_global_string_const(711));
#line 2194
c_rt_lib0move(&___nl__im__3, c_rt_lib0concat_new(___nl__im__4, ___nl__im__9));
#line 2194
c_rt_lib0clear(&___nl__im__4);
#line 2194
c_rt_lib0clear(&___nl__im__9);
#line 2194
c_rt_lib0clear(&___nl__im__0);
#line 2194
c_rt_lib0clear(&___nl__im__1);
#line 2194
//clear ___nl__bool__2;
#line 2194
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
bool  ___nl__bool__36 = false;
#line 2200
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(5));
#line 2200
if(___nl__bool__1){ goto label_35;}
#line 2202
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(6));
#line 2202
if(___nl__bool__1){ goto label_46;}
#line 2204
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(3));
#line 2204
if(___nl__bool__1){ goto label_60;}
#line 2206
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(4));
#line 2206
if(___nl__bool__1){ goto label_77;}
#line 2208
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(1));
#line 2208
if(___nl__bool__1){ goto label_97;}
#line 2210
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(2));
#line 2210
if(___nl__bool__1){ goto label_120;}
#line 2212
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(13));
#line 2212
if(___nl__bool__1){ goto label_146;}
#line 2214
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(14));
#line 2214
if(___nl__bool__1){ goto label_175;}
#line 2216
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(7));
#line 2216
if(___nl__bool__1){ goto label_207;}
#line 2218
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(9));
#line 2218
if(___nl__bool__1){ goto label_242;}
#line 2220
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(10));
#line 2220
if(___nl__bool__1){ goto label_276;}
#line 2222
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(11));
#line 2222
if(___nl__bool__1){ goto label_311;}
#line 2224
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(12));
#line 2224
if(___nl__bool__1){ goto label_347;}
#line 2226
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(15));
#line 2226
if(___nl__bool__1){ goto label_384;}
#line 2228
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(8));
#line 2228
if(___nl__bool__1){ goto label_422;}
#line 2230
___nl__bool__1 = c_rt_lib0priv_is(___nl__im__0, ___get_global_string_const(0));
#line 2230
if(___nl__bool__1){ goto label_461;}
#line 2230
c_rt_lib0move(&___nl__im__2,___get_global_string_const(16));
#line 2230
c_rt_lib0move(&___nl__im__2, c_rt_lib0array_mk(2, ___nl__im__2, ___nl__im__0));
#line 2230
nl_die_arg(___nl__im__2);
#line 2200
label_35:
;
#line 2200
c_rt_lib0move(&___nl__im__4, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(5)));
#line 2200
c_rt_lib0copy(&___nl__im__3, ___nl__im__4);
#line 2201
___nl__bool__5 = false;
#line 2201
c_rt_lib0clear(&___nl__im__0);
#line 2201
//clear ___nl__bool__1;
#line 2201
c_rt_lib0clear(&___nl__im__2);
#line 2201
c_rt_lib0clear(&___nl__im__3);
#line 2201
c_rt_lib0clear(&___nl__im__4);
#line 2201
return ___nl__bool__5;
#line 2202
goto label_501;
#line 2202
label_46:
;
#line 2202
c_rt_lib0move(&___nl__im__7, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(6)));
#line 2202
c_rt_lib0copy(&___nl__im__6, ___nl__im__7);
#line 2203
___nl__bool__8 = true;
#line 2203
c_rt_lib0clear(&___nl__im__0);
#line 2203
//clear ___nl__bool__1;
#line 2203
c_rt_lib0clear(&___nl__im__2);
#line 2203
c_rt_lib0clear(&___nl__im__3);
#line 2203
c_rt_lib0clear(&___nl__im__4);
#line 2203
//clear ___nl__bool__5;
#line 2203
c_rt_lib0clear(&___nl__im__6);
#line 2203
c_rt_lib0clear(&___nl__im__7);
#line 2203
return ___nl__bool__8;
#line 2204
goto label_501;
#line 2204
label_60:
;
#line 2204
c_rt_lib0move(&___nl__im__10, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(3)));
#line 2204
c_rt_lib0copy(&___nl__im__9, ___nl__im__10);
#line 2205
___nl__bool__11 = false;
#line 2205
c_rt_lib0clear(&___nl__im__0);
#line 2205
//clear ___nl__bool__1;
#line 2205
c_rt_lib0clear(&___nl__im__2);
#line 2205
c_rt_lib0clear(&___nl__im__3);
#line 2205
c_rt_lib0clear(&___nl__im__4);
#line 2205
//clear ___nl__bool__5;
#line 2205
c_rt_lib0clear(&___nl__im__6);
#line 2205
c_rt_lib0clear(&___nl__im__7);
#line 2205
//clear ___nl__bool__8;
#line 2205
c_rt_lib0clear(&___nl__im__9);
#line 2205
c_rt_lib0clear(&___nl__im__10);
#line 2205
return ___nl__bool__11;
#line 2206
goto label_501;
#line 2206
label_77:
;
#line 2206
c_rt_lib0move(&___nl__im__13, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(4)));
#line 2206
c_rt_lib0copy(&___nl__im__12, ___nl__im__13);
#line 2207
___nl__bool__14 = true;
#line 2207
c_rt_lib0clear(&___nl__im__0);
#line 2207
//clear ___nl__bool__1;
#line 2207
c_rt_lib0clear(&___nl__im__2);
#line 2207
c_rt_lib0clear(&___nl__im__3);
#line 2207
c_rt_lib0clear(&___nl__im__4);
#line 2207
//clear ___nl__bool__5;
#line 2207
c_rt_lib0clear(&___nl__im__6);
#line 2207
c_rt_lib0clear(&___nl__im__7);
#line 2207
//clear ___nl__bool__8;
#line 2207
c_rt_lib0clear(&___nl__im__9);
#line 2207
c_rt_lib0clear(&___nl__im__10);
#line 2207
//clear ___nl__bool__11;
#line 2207
c_rt_lib0clear(&___nl__im__12);
#line 2207
c_rt_lib0clear(&___nl__im__13);
#line 2207
return ___nl__bool__14;
#line 2208
goto label_501;
#line 2208
label_97:
;
#line 2208
c_rt_lib0move(&___nl__im__16, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(1)));
#line 2208
c_rt_lib0copy(&___nl__im__15, ___nl__im__16);
#line 2209
___nl__bool__17 = false;
#line 2209
c_rt_lib0clear(&___nl__im__0);
#line 2209
//clear ___nl__bool__1;
#line 2209
c_rt_lib0clear(&___nl__im__2);
#line 2209
c_rt_lib0clear(&___nl__im__3);
#line 2209
c_rt_lib0clear(&___nl__im__4);
#line 2209
//clear ___nl__bool__5;
#line 2209
c_rt_lib0clear(&___nl__im__6);
#line 2209
c_rt_lib0clear(&___nl__im__7);
#line 2209
//clear ___nl__bool__8;
#line 2209
c_rt_lib0clear(&___nl__im__9);
#line 2209
c_rt_lib0clear(&___nl__im__10);
#line 2209
//clear ___nl__bool__11;
#line 2209
c_rt_lib0clear(&___nl__im__12);
#line 2209
c_rt_lib0clear(&___nl__im__13);
#line 2209
//clear ___nl__bool__14;
#line 2209
c_rt_lib0clear(&___nl__im__15);
#line 2209
c_rt_lib0clear(&___nl__im__16);
#line 2209
return ___nl__bool__17;
#line 2210
goto label_501;
#line 2210
label_120:
;
#line 2210
c_rt_lib0move(&___nl__im__19, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(2)));
#line 2210
c_rt_lib0copy(&___nl__im__18, ___nl__im__19);
#line 2211
___nl__bool__20 = true;
#line 2211
c_rt_lib0clear(&___nl__im__0);
#line 2211
//clear ___nl__bool__1;
#line 2211
c_rt_lib0clear(&___nl__im__2);
#line 2211
c_rt_lib0clear(&___nl__im__3);
#line 2211
c_rt_lib0clear(&___nl__im__4);
#line 2211
//clear ___nl__bool__5;
#line 2211
c_rt_lib0clear(&___nl__im__6);
#line 2211
c_rt_lib0clear(&___nl__im__7);
#line 2211
//clear ___nl__bool__8;
#line 2211
c_rt_lib0clear(&___nl__im__9);
#line 2211
c_rt_lib0clear(&___nl__im__10);
#line 2211
//clear ___nl__bool__11;
#line 2211
c_rt_lib0clear(&___nl__im__12);
#line 2211
c_rt_lib0clear(&___nl__im__13);
#line 2211
//clear ___nl__bool__14;
#line 2211
c_rt_lib0clear(&___nl__im__15);
#line 2211
c_rt_lib0clear(&___nl__im__16);
#line 2211
//clear ___nl__bool__17;
#line 2211
c_rt_lib0clear(&___nl__im__18);
#line 2211
c_rt_lib0clear(&___nl__im__19);
#line 2211
return ___nl__bool__20;
#line 2212
goto label_501;
#line 2212
label_146:
;
#line 2212
c_rt_lib0move(&___nl__im__22, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(13)));
#line 2212
c_rt_lib0copy(&___nl__im__21, ___nl__im__22);
#line 2213
___nl__bool__23 = false;
#line 2213
c_rt_lib0clear(&___nl__im__0);
#line 2213
//clear ___nl__bool__1;
#line 2213
c_rt_lib0clear(&___nl__im__2);
#line 2213
c_rt_lib0clear(&___nl__im__3);
#line 2213
c_rt_lib0clear(&___nl__im__4);
#line 2213
//clear ___nl__bool__5;
#line 2213
c_rt_lib0clear(&___nl__im__6);
#line 2213
c_rt_lib0clear(&___nl__im__7);
#line 2213
//clear ___nl__bool__8;
#line 2213
c_rt_lib0clear(&___nl__im__9);
#line 2213
c_rt_lib0clear(&___nl__im__10);
#line 2213
//clear ___nl__bool__11;
#line 2213
c_rt_lib0clear(&___nl__im__12);
#line 2213
c_rt_lib0clear(&___nl__im__13);
#line 2213
//clear ___nl__bool__14;
#line 2213
c_rt_lib0clear(&___nl__im__15);
#line 2213
c_rt_lib0clear(&___nl__im__16);
#line 2213
//clear ___nl__bool__17;
#line 2213
c_rt_lib0clear(&___nl__im__18);
#line 2213
c_rt_lib0clear(&___nl__im__19);
#line 2213
//clear ___nl__bool__20;
#line 2213
c_rt_lib0clear(&___nl__im__21);
#line 2213
c_rt_lib0clear(&___nl__im__22);
#line 2213
return ___nl__bool__23;
#line 2214
goto label_501;
#line 2214
label_175:
;
#line 2214
c_rt_lib0move(&___nl__im__25, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(14)));
#line 2214
c_rt_lib0copy(&___nl__im__24, ___nl__im__25);
#line 2215
___nl__bool__26 = true;
#line 2215
c_rt_lib0clear(&___nl__im__0);
#line 2215
//clear ___nl__bool__1;
#line 2215
c_rt_lib0clear(&___nl__im__2);
#line 2215
c_rt_lib0clear(&___nl__im__3);
#line 2215
c_rt_lib0clear(&___nl__im__4);
#line 2215
//clear ___nl__bool__5;
#line 2215
c_rt_lib0clear(&___nl__im__6);
#line 2215
c_rt_lib0clear(&___nl__im__7);
#line 2215
//clear ___nl__bool__8;
#line 2215
c_rt_lib0clear(&___nl__im__9);
#line 2215
c_rt_lib0clear(&___nl__im__10);
#line 2215
//clear ___nl__bool__11;
#line 2215
c_rt_lib0clear(&___nl__im__12);
#line 2215
c_rt_lib0clear(&___nl__im__13);
#line 2215
//clear ___nl__bool__14;
#line 2215
c_rt_lib0clear(&___nl__im__15);
#line 2215
c_rt_lib0clear(&___nl__im__16);
#line 2215
//clear ___nl__bool__17;
#line 2215
c_rt_lib0clear(&___nl__im__18);
#line 2215
c_rt_lib0clear(&___nl__im__19);
#line 2215
//clear ___nl__bool__20;
#line 2215
c_rt_lib0clear(&___nl__im__21);
#line 2215
c_rt_lib0clear(&___nl__im__22);
#line 2215
//clear ___nl__bool__23;
#line 2215
c_rt_lib0clear(&___nl__im__24);
#line 2215
c_rt_lib0clear(&___nl__im__25);
#line 2215
return ___nl__bool__26;
#line 2216
goto label_501;
#line 2216
label_207:
;
#line 2216
c_rt_lib0move(&___nl__im__28, c_rt_lib0priv_as(___nl__im__0, ___get_global_string_const(7)));
#line 2216
c_rt_lib0copy(&___nl__im__27, ___nl__im__28);
#line 2217
___nl__bool__29 = false;
#line 2217
c_rt_lib0clear(&___nl__im__0);
#line 2217
//clear ___nl__bool__1;
#line 2217
c_rt_lib0clear(&___nl__im__2);
#line 2217
c_rt_lib0clear(&___nl__im__3);
#line 2217
c_rt_lib0clear(&___nl__im__4);
#line 2217
//clear ___nl__bool__5;
#line 2217
c_rt_lib0clear(&___nl__im__6);
#line 2217
c_rt_lib0clear(&___nl__im__7);
#line 2217
//clear ___nl__bool__8;
#line 2217
c_rt_lib0clear(&___nl__im__9);
#line 2217
c_rt_lib0clear(&___nl__im__10);
#line 2217
//clear ___nl__bool__11;
#line 2217
c_rt_lib0clear(&___nl__im__12);
#line 2217
c_rt_lib0clear(&___nl__im__13);
#line 2217
//clear ___nl__bool__14;
#line 2217
c_rt_lib0clear(&___nl__im__15);
#line 2217
c_rt_lib0clear(&___nl__im__16);
#line 2217
//clear ___nl__bool__17;
#line 2217
c_rt_lib0clear(&___nl__im__18);
#line 2217
c_rt_lib0clear(&___nl__im__19);
#line 2217
//clear ___nl__bool__20;
#line 2217
c_rt_lib0clear(&___nl__im__21);
#line 2217
c_rt_lib0clear(&___nl__im__22);
#line 2217
//clear ___nl__bool__23;
#line 2217
c_rt_lib0clear(&___nl__im__24);
#line 2217
c_rt_lib0clear(&___nl__im__25);
#line 2217
//clear ___nl__bool__26;
#line 2217
c_rt_lib0clear(&___nl__im__27);
#line 2217
c_rt_lib0clear(&___nl__im__28);
#line 2217
return ___nl__bool__29;
#line 2218
goto label_501;
#line 2218
label_242:
;
#line 2219
___nl__bool__30 = false;
#line 2219
c_rt_lib0clear(&___nl__im__0);
#line 2219
//clear ___nl__bool__1;
#line 2219
c_rt_lib0clear(&___nl__im__2);
#line 2219
c_rt_lib0clear(&___nl__im__3);
#line 2219
c_rt_lib0clear(&___nl__im__4);
#line 2219
//clear ___nl__bool__5;
#line 2219
c_rt_lib0clear(&___nl__im__6);
#line 2219
c_rt_lib0clear(&___nl__im__7);
#line 2219
//clear ___nl__bool__8;
#line 2219
c_rt_lib0clear(&___nl__im__9);
#line 2219
c_rt_lib0clear(&___nl__im__10);
#line 2219
//clear ___nl__bool__11;
#line 2219
c_rt_lib0clear(&___nl__im__12);
#line 2219
c_rt_lib0clear(&___nl__im__13);
#line 2219
//clear ___nl__bool__14;
#line 2219
c_rt_lib0clear(&___nl__im__15);
#line 2219
c_rt_lib0clear(&___nl__im__16);
#line 2219
//clear ___nl__bool__17;
#line 2219
c_rt_lib0clear(&___nl__im__18);
#line 2219
c_rt_lib0clear(&___nl__im__19);
#line 2219
//clear ___nl__bool__20;
#line 2219
c_rt_lib0clear(&___nl__im__21);
#line 2219
c_rt_lib0clear(&___nl__im__22);
#line 2219
//clear ___nl__bool__23;
#line 2219
c_rt_lib0clear(&___nl__im__24);
#line 2219
c_rt_lib0clear(&___nl__im__25);
#line 2219
//clear ___nl__bool__26;
#line 2219
c_rt_lib0clear(&___nl__im__27);
#line 2219
c_rt_lib0clear(&___nl__im__28);
#line 2219
//clear ___nl__bool__29;
#line 2219
return ___nl__bool__30;
#line 2220
goto label_501;
#line 2220
label_276:
;
#line 2221
___nl__bool__31 = false;
#line 2221
c_rt_lib0clear(&___nl__im__0);
#line 2221
//clear ___nl__bool__1;
#line 2221
c_rt_lib0clear(&___nl__im__2);
#line 2221
c_rt_lib0clear(&___nl__im__3);
#line 2221
c_rt_lib0clear(&___nl__im__4);
#line 2221
//clear ___nl__bool__5;
#line 2221
c_rt_lib0clear(&___nl__im__6);
#line 2221
c_rt_lib0clear(&___nl__im__7);
#line 2221
//clear ___nl__bool__8;
#line 2221
c_rt_lib0clear(&___nl__im__9);
#line 2221
c_rt_lib0clear(&___nl__im__10);
#line 2221
//clear ___nl__bool__11;
#line 2221
c_rt_lib0clear(&___nl__im__12);
#line 2221
c_rt_lib0clear(&___nl__im__13);
#line 2221
//clear ___nl__bool__14;
#line 2221
c_rt_lib0clear(&___nl__im__15);
#line 2221
c_rt_lib0clear(&___nl__im__16);
#line 2221
//clear ___nl__bool__17;
#line 2221
c_rt_lib0clear(&___nl__im__18);
#line 2221
c_rt_lib0clear(&___nl__im__19);
#line 2221
//clear ___nl__bool__20;
#line 2221
c_rt_lib0clear(&___nl__im__21);
#line 2221
c_rt_lib0clear(&___nl__im__22);
#line 2221
//clear ___nl__bool__23;
#line 2221
c_rt_lib0clear(&___nl__im__24);
#line 2221
c_rt_lib0clear(&___nl__im__25);
#line 2221
//clear ___nl__bool__26;
#line 2221
c_rt_lib0clear(&___nl__im__27);
#line 2221
c_rt_lib0clear(&___nl__im__28);
#line 2221
//clear ___nl__bool__29;
#line 2221
//clear ___nl__bool__30;
#line 2221
return ___nl__bool__31;
#line 2222
goto label_501;
#line 2222
label_311:
;
#line 2223
___nl__bool__32 = false;
#line 2223
c_rt_lib0clear(&___nl__im__0);
#line 2223
//clear ___nl__bool__1;
#line 2223
c_rt_lib0clear(&___nl__im__2);
#line 2223
c_rt_lib0clear(&___nl__im__3);
#line 2223
c_rt_lib0clear(&___nl__im__4);
#line 2223
//clear ___nl__bool__5;
#line 2223
c_rt_lib0clear(&___nl__im__6);
#line 2223
c_rt_lib0clear(&___nl__im__7);
#line 2223
//clear ___nl__bool__8;
#line 2223
c_rt_lib0clear(&___nl__im__9);
#line 2223
c_rt_lib0clear(&___nl__im__10);
#line 2223
//clear ___nl__bool__11;
#line 2223
c_rt_lib0clear(&___nl__im__12);
#line 2223
c_rt_lib0clear(&___nl__im__13);
#line 2223
//clear ___nl__bool__14;
#line 2223
c_rt_lib0clear(&___nl__im__15);
#line 2223
c_rt_lib0clear(&___nl__im__16);
#line 2223
//clear ___nl__bool__17;
#line 2223
c_rt_lib0clear(&___nl__im__18);
#line 2223
c_rt_lib0clear(&___nl__im__19);
#line 2223
//clear ___nl__bool__20;
#line 2223
c_rt_lib0clear(&___nl__im__21);
#line 2223
c_rt_lib0clear(&___nl__im__22);
#line 2223
//clear ___nl__bool__23;
#line 2223
c_rt_lib0clear(&___nl__im__24);
#line 2223
c_rt_lib0clear(&___nl__im__25);
#line 2223
//clear ___nl__bool__26;
#line 2223
c_rt_lib0clear(&___nl__im__27);
#line 2223
c_rt_lib0clear(&___nl__im__28);
#line 2223
//clear ___nl__bool__29;
#line 2223
//clear ___nl__bool__30;
#line 2223
//clear ___nl__bool__31;
#line 2223
return ___nl__bool__32;
#line 2224
goto label_501;
#line 2224
label_347:
;
#line 2225
___nl__bool__33 = false;
#line 2225
c_rt_lib0clear(&___nl__im__0);
#line 2225
//clear ___nl__bool__1;
#line 2225
c_rt_lib0clear(&___nl__im__2);
#line 2225
c_rt_lib0clear(&___nl__im__3);
#line 2225
c_rt_lib0clear(&___nl__im__4);
#line 2225
//clear ___nl__bool__5;
#line 2225
c_rt_lib0clear(&___nl__im__6);
#line 2225
c_rt_lib0clear(&___nl__im__7);
#line 2225
//clear ___nl__bool__8;
#line 2225
c_rt_lib0clear(&___nl__im__9);
#line 2225
c_rt_lib0clear(&___nl__im__10);
#line 2225
//clear ___nl__bool__11;
#line 2225
c_rt_lib0clear(&___nl__im__12);
#line 2225
c_rt_lib0clear(&___nl__im__13);
#line 2225
//clear ___nl__bool__14;
#line 2225
c_rt_lib0clear(&___nl__im__15);
#line 2225
c_rt_lib0clear(&___nl__im__16);
#line 2225
//clear ___nl__bool__17;
#line 2225
c_rt_lib0clear(&___nl__im__18);
#line 2225
c_rt_lib0clear(&___nl__im__19);
#line 2225
//clear ___nl__bool__20;
#line 2225
c_rt_lib0clear(&___nl__im__21);
#line 2225
c_rt_lib0clear(&___nl__im__22);
#line 2225
//clear ___nl__bool__23;
#line 2225
c_rt_lib0clear(&___nl__im__24);
#line 2225
c_rt_lib0clear(&___nl__im__25);
#line 2225
//clear ___nl__bool__26;
#line 2225
c_rt_lib0clear(&___nl__im__27);
#line 2225
c_rt_lib0clear(&___nl__im__28);
#line 2225
//clear ___nl__bool__29;
#line 2225
//clear ___nl__bool__30;
#line 2225
//clear ___nl__bool__31;
#line 2225
//clear ___nl__bool__32;
#line 2225
return ___nl__bool__33;
#line 2226
goto label_501;
#line 2226
label_384:
;
#line 2227
___nl__bool__34 = false;
#line 2227
c_rt_lib0clear(&___nl__im__0);
#line 2227
//clear ___nl__bool__1;
#line 2227
c_rt_lib0clear(&___nl__im__2);
#line 2227
c_rt_lib0clear(&___nl__im__3);
#line 2227
c_rt_lib0clear(&___nl__im__4);
#line 2227
//clear ___nl__bool__5;
#line 2227
c_rt_lib0clear(&___nl__im__6);
#line 2227
c_rt_lib0clear(&___nl__im__7);
#line 2227
//clear ___nl__bool__8;
#line 2227
c_rt_lib0clear(&___nl__im__9);
#line 2227
c_rt_lib0clear(&___nl__im__10);
#line 2227
//clear ___nl__bool__11;
#line 2227
c_rt_lib0clear(&___nl__im__12);
#line 2227
c_rt_lib0clear(&___nl__im__13);
#line 2227
//clear ___nl__bool__14;
#line 2227
c_rt_lib0clear(&___nl__im__15);
#line 2227
c_rt_lib0clear(&___nl__im__16);
#line 2227
//clear ___nl__bool__17;
#line 2227
c_rt_lib0clear(&___nl__im__18);
#line 2227
c_rt_lib0clear(&___nl__im__19);
#line 2227
//clear ___nl__bool__20;
#line 2227
c_rt_lib0clear(&___nl__im__21);
#line 2227
c_rt_lib0clear(&___nl__im__22);
#line 2227
//clear ___nl__bool__23;
#line 2227
c_rt_lib0clear(&___nl__im__24);
#line 2227
c_rt_lib0clear(&___nl__im__25);
#line 2227
//clear ___nl__bool__26;
#line 2227
c_rt_lib0clear(&___nl__im__27);
#line 2227
c_rt_lib0clear(&___nl__im__28);
#line 2227
//clear ___nl__bool__29;
#line 2227
//clear ___nl__bool__30;
#line 2227
//clear ___nl__bool__31;
#line 2227
//clear ___nl__bool__32;
#line 2227
//clear ___nl__bool__33;
#line 2227
return ___nl__bool__34;
#line 2228
goto label_501;
#line 2228
label_422:
;
#line 2229
___nl__bool__35 = false;
#line 2229
c_rt_lib0clear(&___nl__im__0);
#line 2229
//clear ___nl__bool__1;
#line 2229
c_rt_lib0clear(&___nl__im__2);
#line 2229
c_rt_lib0clear(&___nl__im__3);
#line 2229
c_rt_lib0clear(&___nl__im__4);
#line 2229
//clear ___nl__bool__5;
#line 2229
c_rt_lib0clear(&___nl__im__6);
#line 2229
c_rt_lib0clear(&___nl__im__7);
#line 2229
//clear ___nl__bool__8;
#line 2229
c_rt_lib0clear(&___nl__im__9);
#line 2229
c_rt_lib0clear(&___nl__im__10);
#line 2229
//clear ___nl__bool__11;
#line 2229
c_rt_lib0clear(&___nl__im__12);
#line 2229
c_rt_lib0clear(&___nl__im__13);
#line 2229
//clear ___nl__bool__14;
#line 2229
c_rt_lib0clear(&___nl__im__15);
#line 2229
c_rt_lib0clear(&___nl__im__16);
#line 2229
//clear ___nl__bool__17;
#line 2229
c_rt_lib0clear(&___nl__im__18);
#line 2229
c_rt_lib0clear(&___nl__im__19);
#line 2229
//clear ___nl__bool__20;
#line 2229
c_rt_lib0clear(&___nl__im__21);
#line 2229
c_rt_lib0clear(&___nl__im__22);
#line 2229
//clear ___nl__bool__23;
#line 2229
c_rt_lib0clear(&___nl__im__24);
#line 2229
c_rt_lib0clear(&___nl__im__25);
#line 2229
//clear ___nl__bool__26;
#line 2229
c_rt_lib0clear(&___nl__im__27);
#line 2229
c_rt_lib0clear(&___nl__im__28);
#line 2229
//clear ___nl__bool__29;
#line 2229
//clear ___nl__bool__30;
#line 2229
//clear ___nl__bool__31;
#line 2229
//clear ___nl__bool__32;
#line 2229
//clear ___nl__bool__33;
#line 2229
//clear ___nl__bool__34;
#line 2229
return ___nl__bool__35;
#line 2230
goto label_501;
#line 2230
label_461:
;
#line 2231
___nl__bool__36 = false;
#line 2231
c_rt_lib0clear(&___nl__im__0);
#line 2231
//clear ___nl__bool__1;
#line 2231
c_rt_lib0clear(&___nl__im__2);
#line 2231
c_rt_lib0clear(&___nl__im__3);
#line 2231
c_rt_lib0clear(&___nl__im__4);
#line 2231
//clear ___nl__bool__5;
#line 2231
c_rt_lib0clear(&___nl__im__6);
#line 2231
c_rt_lib0clear(&___nl__im__7);
#line 2231
//clear ___nl__bool__8;
#line 2231
c_rt_lib0clear(&___nl__im__9);
#line 2231
c_rt_lib0clear(&___nl__im__10);
#line 2231
//clear ___nl__bool__11;
#line 2231
c_rt_lib0clear(&___nl__im__12);
#line 2231
c_rt_lib0clear(&___nl__im__13);
#line 2231
//clear ___nl__bool__14;
#line 2231
c_rt_lib0clear(&___nl__im__15);
#line 2231
c_rt_lib0clear(&___nl__im__16);
#line 2231
//clear ___nl__bool__17;
#line 2231
c_rt_lib0clear(&___nl__im__18);
#line 2231
c_rt_lib0clear(&___nl__im__19);
#line 2231
//clear ___nl__bool__20;
#line 2231
c_rt_lib0clear(&___nl__im__21);
#line 2231
c_rt_lib0clear(&___nl__im__22);
#line 2231
//clear ___nl__bool__23;
#line 2231
c_rt_lib0clear(&___nl__im__24);
#line 2231
c_rt_lib0clear(&___nl__im__25);
#line 2231
//clear ___nl__bool__26;
#line 2231
c_rt_lib0clear(&___nl__im__27);
#line 2231
c_rt_lib0clear(&___nl__im__28);
#line 2231
//clear ___nl__bool__29;
#line 2231
//clear ___nl__bool__30;
#line 2231
//clear ___nl__bool__31;
#line 2231
//clear ___nl__bool__32;
#line 2231
//clear ___nl__bool__33;
#line 2231
//clear ___nl__bool__34;
#line 2231
//clear ___nl__bool__35;
#line 2231
return ___nl__bool__36;
#line 2232
goto label_501;
#line 2232
label_501:
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(2, ___get_global_string_const(128), ___nl__im__2, ___get_global_string_const(129), ___nl__im__4));
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
INT  ___nl__int__7 = 0;
ImmT  ___nl__im__8 = NULL;
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
___nl__int__7 = ___nl__int__3 >= ___nl__int__5;
#line 2
___nl__bool__6 = ___nl__int__7;
#line 2
if(___nl__bool__6){ goto label_14;}
#line 2
___nl__im_ptr__2 = generator_c0anon_type00ownarranon_type00im0get_ptr(&(*___ref___arr__0), ___nl__int__3);
#line 2
c_rt_lib0copy(&___nl__im__8, (*___nl__im_ptr__2));
#line 2
c_rt_lib0array_push(&___nl__im__1, ___nl__im__8);
#line 2
c_rt_lib0clear(&___nl__im__8);
#line 2
___nl__int__3 = ___nl__int__3 + ___nl__int__4;
#line 2
goto label_4;
#line 2
label_14:
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
//clear ___nl__int__7;
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
//clear ___nl__int__7;
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(10, ___get_global_string_const(416), ___nl__im__2, ___get_global_string_const(412), ___nl__im__4, ___get_global_string_const(415), ___nl__im__6, ___get_global_string_const(410), ___nl__im__8, ___get_global_string_const(409), ___nl__im__10, ___get_global_string_const(222), ___nl__im__12, ___get_global_string_const(413), ___nl__im__14, ___get_global_string_const(408), ___nl__im__16, ___get_global_string_const(411), ___nl__im__18, ___get_global_string_const(414), ___nl__im__20));
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
c_rt_lib0move(&___nl__im__1, c_rt_lib0hash_mk(4, ___get_global_string_const(403), ___nl__im__2, ___get_global_string_const(404), ___nl__im__4, ___get_global_string_const(405), ___nl__im__6, ___get_global_string_const(406), ___nl__im__10));
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
