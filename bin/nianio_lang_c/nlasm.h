
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "ptd.h"
#include "nast.h"
#include "tct.h"
#include "boolean_t.h"
typedef ImmT  nlasm0hash_dest_iter_t0type;

typedef ImmT  nlasm0args_type0type;

typedef ImmT  nlasm0release_index_t0type;

typedef ImmT  nlasm0result_t0type;

typedef ImmT  nlasm0release_variant_t0type;

typedef ImmT  nlasm0una_op_t0type;

typedef INT  nlasm0label_t0type;

typedef ImmT  nlasm0reg_access_type_t0type;

typedef ImmT  nlasm0return0type;

typedef ImmT  nlasm0use_index_t0type;

typedef ImmT  nlasm0reg_t0type;

typedef ImmT  nlasm0use_hash_index_t0type;

typedef ImmT  nlasm0access_t0type;

typedef ImmT  nlasm0function_t0type;

typedef ImmT  nlasm0release_field_t0type;

typedef ImmT  nlasm0var_decl_t0type;

typedef ImmT  nlasm0order_t0type;

typedef ImmT  nlasm0cmds_t0type;

typedef ImmT  nlasm0ov_mk_t0type;

typedef ImmT  nlasm0hash_iter_t0type;

typedef ImmT  nlasm0annotation_t0type;

typedef ImmT  nlasm0call_t0type;

typedef ImmT  nlasm0debug_t0type;

typedef ImmT  nlasm0arg_type_t0type;

typedef ImmT  nlasm0reg_type0type;

typedef ImmT  nlasm0hash_decl_t0type;

typedef ImmT  nlasm0release_hash_index_t0type;

typedef ImmT  nlasm0use_field_t0type;

typedef ImmT  nlasm0use_variant_t0type;

typedef ImmT  nlasm0bin_op0type;

typedef ImmT  nlasm0cmd_t0type;

ImmT  nlasm0result_t();
ImmT  nlasm0result_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0access_t();
ImmT  nlasm0access_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0arg_type_t();
ImmT  nlasm0arg_type_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0function_t();
ImmT  nlasm0function_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0cmds_t();
ImmT  nlasm0cmds_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0args_type();
ImmT  nlasm0args_type0ptr(int _num, ImmT *_tab);
ImmT  nlasm0reg_t();
ImmT  nlasm0reg_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0debug_t();
ImmT  nlasm0debug_t0ptr(int _num, ImmT *_tab);
nlasm0debug_t0type nlasm0empty_debug();
nlasm0debug_t0type nlasm0empty_debug0ptr(int _num, ImmT *_tab);
ImmT  nlasm0cmd_t();
ImmT  nlasm0cmd_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0annotation_t();
ImmT  nlasm0annotation_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0order_t();
ImmT  nlasm0order_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0var_decl_t();
ImmT  nlasm0var_decl_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0use_field_t();
ImmT  nlasm0use_field_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0release_field_t();
ImmT  nlasm0release_field_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0use_index_t();
ImmT  nlasm0use_index_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0release_index_t();
ImmT  nlasm0release_index_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0use_hash_index_t();
ImmT  nlasm0use_hash_index_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0release_hash_index_t();
ImmT  nlasm0release_hash_index_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0use_variant_t();
ImmT  nlasm0use_variant_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0release_variant_t();
ImmT  nlasm0release_variant_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0hash_decl_t();
ImmT  nlasm0hash_decl_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0hash_iter_t();
ImmT  nlasm0hash_iter_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0hash_dest_iter_t();
ImmT  nlasm0hash_dest_iter_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0label_t();
ImmT  nlasm0label_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0una_op_t();
ImmT  nlasm0una_op_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0bin_op();
ImmT  nlasm0bin_op0ptr(int _num, ImmT *_tab);
ImmT  nlasm0return();
ImmT  nlasm0return0ptr(int _num, ImmT *_tab);
ImmT  nlasm0ov_mk_t();
ImmT  nlasm0ov_mk_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0call_t();
ImmT  nlasm0call_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0reg_type();
ImmT  nlasm0reg_type0ptr(int _num, ImmT *_tab);
ImmT  nlasm0reg_access_type_t();
ImmT  nlasm0reg_access_type_t0ptr(int _num, ImmT *_tab);
ImmT  nlasm0is_empty(nlasm0reg_t0type ___nl__im__0);
ImmT  nlasm0is_empty0ptr(int _num, ImmT *_tab);
bool nlasm0eq_reg(nlasm0reg_t0type ___nl__im__0,nlasm0reg_t0type ___nl__im__1);
bool nlasm0eq_reg0ptr(int _num, ImmT *_tab);
bool nlasm0eq_reg_type(nlasm0reg_type0type ___nl__im__0,nlasm0reg_type0type ___nl__im__1);
bool nlasm0eq_reg_type0ptr(int _num, ImmT *_tab);
