
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nast.h"
#include "tc_types.h"
#include "tct.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd_parser.h"
typedef ImmT  module_checker0modules_t0type;

typedef ImmT  module_checker0var_t0type;

typedef ImmT  module_checker0stack_t0type;

typedef ImmT  module_checker0save_t0type;

typedef ImmT  module_checker0ret_t0type;

typedef ImmT  module_checker0init_checker_t0type;

typedef ImmT  module_checker0return_t0type;

typedef ImmT  module_checker0state_t0type;

typedef ImmT  module_checker0stack_hash_t0type;

ImmT  module_checker0stack_t();
ImmT  module_checker0stack_t0ptr(int _num, ImmT *_tab);
ImmT  module_checker0stack_hash_t();
ImmT  module_checker0stack_hash_t0ptr(int _num, ImmT *_tab);
ImmT  module_checker0ret_t();
ImmT  module_checker0ret_t0ptr(int _num, ImmT *_tab);
ImmT  module_checker0modules_t();
ImmT  module_checker0modules_t0ptr(int _num, ImmT *_tab);
module_checker0ret_t0type module_checker0search_loops(module_checker0modules_t0type ___nl__im__0);
module_checker0ret_t0type module_checker0search_loops0ptr(int _num, ImmT *_tab);
ImmT  module_checker0var_t();
ImmT  module_checker0var_t0ptr(int _num, ImmT *_tab);
ImmT  module_checker0return_t();
ImmT  module_checker0return_t0ptr(int _num, ImmT *_tab);
ImmT  module_checker0state_t();
ImmT  module_checker0state_t0ptr(int _num, ImmT *_tab);
ImmT  module_checker0save_t();
ImmT  module_checker0save_t0ptr(int _num, ImmT *_tab);
ImmT  module_checker0init_checker_t();
ImmT  module_checker0init_checker_t0ptr(int _num, ImmT *_tab);
tc_types0errors_t0type module_checker0check_module(nast0module_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
tc_types0errors_t0type module_checker0check_module0ptr(int _num, ImmT *_tab);
ImmT  module_checker0check_used_functions(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,tc_types0return_t0type* ___ref___im__3);
ImmT  module_checker0check_used_functions0ptr(int _num, ImmT *_tab);
