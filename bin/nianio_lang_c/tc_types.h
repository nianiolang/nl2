
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "hash.h"
#include "ptd.h"
#include "tct.h"
#include "boolean_t.h"
#include "nast.h"
#include "singleton.h"
#include "compiler_lib.h"
typedef ImmT  tc_types0modules_t0type;

typedef ImmT  tc_types0errors_t0type;

typedef ImmT  tc_types0deref_type0type;

typedef ImmT  tc_types0value_src0type;

typedef ImmT  tc_types0var_t0type;

typedef ImmT  tc_types0type0type;

typedef ImmT  tc_types0check_info0type;

typedef ImmT  tc_types0ref_t0type;

typedef ImmT  tc_types0deref_types0type;

typedef ImmT  tc_types0lval_path0type;

typedef ImmT  tc_types0env0type;

typedef ImmT  tc_types0special_functions0type;

typedef ImmT  tc_types0fun_arg_t0type;

typedef ImmT  tc_types0walk_arg0type;

typedef ImmT  tc_types0vars_t0type;

typedef ImmT  tc_types0stack_info_type0type;

typedef ImmT  tc_types0bin_op_type0type;

typedef ImmT  tc_types0defs_funs_t0type;

typedef ImmT  tc_types0return_t0type;

typedef ImmT  tc_types0def_fun_t0type;

tc_types0bin_op_type0type tc_types0get_bin_op_def(ImmT  ___nl__im__0);
tc_types0bin_op_type0type tc_types0get_bin_op_def0ptr(int _num, ImmT *_tab);
ImmT  tc_types0errors_t();
ImmT  tc_types0errors_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0bin_op_type();
ImmT  tc_types0bin_op_type0ptr(int _num, ImmT *_tab);
ImmT  tc_types0defs_funs_t();
ImmT  tc_types0defs_funs_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0return_t();
ImmT  tc_types0return_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0modules_t();
ImmT  tc_types0modules_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0deref_type();
ImmT  tc_types0deref_type0ptr(int _num, ImmT *_tab);
ImmT  tc_types0deref_types();
ImmT  tc_types0deref_types0ptr(int _num, ImmT *_tab);
ImmT  tc_types0env();
ImmT  tc_types0env0ptr(int _num, ImmT *_tab);
ImmT  tc_types0var_t();
ImmT  tc_types0var_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0fun_arg_t();
ImmT  tc_types0fun_arg_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0def_fun_t();
ImmT  tc_types0def_fun_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0vars_t();
ImmT  tc_types0vars_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0type();
ImmT  tc_types0type0ptr(int _num, ImmT *_tab);
ImmT  tc_types0value_src();
ImmT  tc_types0value_src0ptr(int _num, ImmT *_tab);
ImmT  tc_types0lval_path();
ImmT  tc_types0lval_path0ptr(int _num, ImmT *_tab);
ImmT  tc_types0walk_arg();
ImmT  tc_types0walk_arg0ptr(int _num, ImmT *_tab);
ImmT  tc_types0ref_t();
ImmT  tc_types0ref_t0ptr(int _num, ImmT *_tab);
ImmT  tc_types0stack_info_type();
ImmT  tc_types0stack_info_type0ptr(int _num, ImmT *_tab);
ImmT  tc_types0check_info();
ImmT  tc_types0check_info0ptr(int _num, ImmT *_tab);
ImmT  tc_types0special_functions();
ImmT  tc_types0special_functions0ptr(int _num, ImmT *_tab);
tc_types0type0type tc_types0get_default_type();
tc_types0type0type tc_types0get_default_type0ptr(int _num, ImmT *_tab);
