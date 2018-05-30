
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "hash.h"
#include "ptd.h"
#include "singleton.h"
#include "tct.h"
typedef ImmT  nast0bin_op_t0type;

typedef ImmT  nast0fun_label_t0type;

typedef ImmT  nast0variable_type_t0type;

typedef ImmT  nast0fun_def_t0type;

typedef ImmT  nast0fun_def_arg_t0type;

typedef ImmT  nast0try_ensure_t0type;

typedef ImmT  nast0variant_variable_declaration_t0type;

typedef ImmT  nast0op_t0type;

typedef ImmT  nast0debug_t0type;

typedef ImmT  nast0fun_val_t0type;

typedef ImmT  nast0op_assoc_t0type;

typedef ImmT  nast0variant_decl_t0type;

typedef ImmT  nast0hash_decl_t0type;

typedef ImmT  nast0fora_t0type;

typedef ImmT  nast0block_t0type;

typedef ImmT  nast0if_mod_t0type;

typedef ImmT  nast0match_t0type;

typedef ImmT  nast0module_t0type;

typedef ImmT  nast0forh_t0type;

typedef ImmT  nast0cmd_t0type;

typedef ImmT  nast0if_t0type;

typedef ImmT  nast0value_only_t0type;

typedef ImmT  nast0fun_val_arg_t0type;

typedef ImmT  nast0variable_declaration_t0type;

typedef ImmT  nast0hash_elem_t0type;

typedef ImmT  nast0die_t0type;

typedef ImmT  nast0place_t0type;

typedef ImmT  nast0op_struct_t0type;

typedef ImmT  nast0unary_op_t0type;

typedef ImmT  nast0ternary_op_t0type;

typedef ImmT  nast0variant_t0type;

typedef ImmT  nast0match_branch_t0type;

typedef ImmT  nast0while_t0type;

typedef ImmT  nast0for_t0type;

typedef ImmT  nast0rep_t0type;

typedef ImmT  nast0value_t0type;

typedef ImmT  nast0unless_mod_t0type;

ImmT  nast0intepreter_evaluate_max_steps();
ImmT  nast0intepreter_evaluate_max_steps0ptr(int _num, ImmT *_tab);
ImmT  nast0op_assoc_t();
ImmT  nast0op_assoc_t0ptr(int _num, ImmT *_tab);
ImmT  nast0op_t();
ImmT  nast0op_t0ptr(int _num, ImmT *_tab);
ImmT  nast0op_struct_t();
ImmT  nast0op_struct_t0ptr(int _num, ImmT *_tab);
nast0op_struct_t0type nast0get_ternary_ops();
nast0op_struct_t0type nast0get_ternary_ops0ptr(int _num, ImmT *_tab);
nast0op_struct_t0type nast0get_unary_ops();
nast0op_struct_t0type nast0get_unary_ops0ptr(int _num, ImmT *_tab);
nast0op_struct_t0type nast0get_bin_ops();
nast0op_struct_t0type nast0get_bin_ops0ptr(int _num, ImmT *_tab);
INT  nast0get_max_precedence();
INT  nast0get_max_precedence0ptr(int _num, ImmT *_tab);
ImmT  nast0variant_t();
ImmT  nast0variant_t0ptr(int _num, ImmT *_tab);
ImmT  nast0fun_def_t();
ImmT  nast0fun_def_t0ptr(int _num, ImmT *_tab);
ImmT  nast0fun_def_arg_t();
ImmT  nast0fun_def_arg_t0ptr(int _num, ImmT *_tab);
ImmT  nast0module_t();
ImmT  nast0module_t0ptr(int _num, ImmT *_tab);
ImmT  nast0variable_type_t();
ImmT  nast0variable_type_t0ptr(int _num, ImmT *_tab);
ImmT  nast0variable_declaration_t();
ImmT  nast0variable_declaration_t0ptr(int _num, ImmT *_tab);
ImmT  nast0fun_val_arg_t();
ImmT  nast0fun_val_arg_t0ptr(int _num, ImmT *_tab);
ImmT  nast0fun_val_t();
ImmT  nast0fun_val_t0ptr(int _num, ImmT *_tab);
ImmT  nast0hash_elem_t();
ImmT  nast0hash_elem_t0ptr(int _num, ImmT *_tab);
ImmT  nast0hash_decl_t();
ImmT  nast0hash_decl_t0ptr(int _num, ImmT *_tab);
ImmT  nast0bin_op_t();
ImmT  nast0bin_op_t0ptr(int _num, ImmT *_tab);
ImmT  nast0fun_label_t();
ImmT  nast0fun_label_t0ptr(int _num, ImmT *_tab);
ImmT  nast0unary_op_t();
ImmT  nast0unary_op_t0ptr(int _num, ImmT *_tab);
ImmT  nast0ternary_op_t();
ImmT  nast0ternary_op_t0ptr(int _num, ImmT *_tab);
ImmT  nast0value_t();
ImmT  nast0value_t0ptr(int _num, ImmT *_tab);
ImmT  nast0value_only_t();
ImmT  nast0value_only_t0ptr(int _num, ImmT *_tab);
ImmT  nast0match_t();
ImmT  nast0match_t0ptr(int _num, ImmT *_tab);
ImmT  nast0variant_decl_t();
ImmT  nast0variant_decl_t0ptr(int _num, ImmT *_tab);
ImmT  nast0variant_variable_declaration_t();
ImmT  nast0variant_variable_declaration_t0ptr(int _num, ImmT *_tab);
ImmT  nast0match_branch_t();
ImmT  nast0match_branch_t0ptr(int _num, ImmT *_tab);
ImmT  nast0fora_t();
ImmT  nast0fora_t0ptr(int _num, ImmT *_tab);
ImmT  nast0forh_t();
ImmT  nast0forh_t0ptr(int _num, ImmT *_tab);
ImmT  nast0rep_t();
ImmT  nast0rep_t0ptr(int _num, ImmT *_tab);
ImmT  nast0while_t();
ImmT  nast0while_t0ptr(int _num, ImmT *_tab);
ImmT  nast0try_ensure_t();
ImmT  nast0try_ensure_t0ptr(int _num, ImmT *_tab);
ImmT  nast0if_t();
ImmT  nast0if_t0ptr(int _num, ImmT *_tab);
ImmT  nast0for_t();
ImmT  nast0for_t0ptr(int _num, ImmT *_tab);
ImmT  nast0place_t();
ImmT  nast0place_t0ptr(int _num, ImmT *_tab);
ImmT  nast0debug_t();
ImmT  nast0debug_t0ptr(int _num, ImmT *_tab);
nast0debug_t0type nast0empty_debug();
nast0debug_t0type nast0empty_debug0ptr(int _num, ImmT *_tab);
nast0value_t0type nast0cast_to_value(nast0value_only_t0type ___nl__im__0);
nast0value_t0type nast0cast_to_value0ptr(int _num, ImmT *_tab);
ImmT  nast0cmd_t();
ImmT  nast0cmd_t0ptr(int _num, ImmT *_tab);
ImmT  nast0die_t();
ImmT  nast0die_t0ptr(int _num, ImmT *_tab);
ImmT  nast0block_t();
ImmT  nast0block_t0ptr(int _num, ImmT *_tab);
ImmT  nast0if_mod_t();
ImmT  nast0if_mod_t0ptr(int _num, ImmT *_tab);
ImmT  nast0unless_mod_t();
ImmT  nast0unless_mod_t0ptr(int _num, ImmT *_tab);
