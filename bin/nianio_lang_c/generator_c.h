
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "ptd.h"
#include "nlasm.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "ov.h"
#include "singleton.h"
#include "nl.h"
#include "boolean_t.h"
#include "string_utils.h"
#include "tct.h"
#include "generator_c_struct_dependence_sort.h"
#include "anon_naming.h"
typedef ImmT  generator_c0const_dict0type;

typedef ImmT  generator_c0fun_args_t0type;

typedef ImmT  generator_c0const_t0type;

typedef ImmT  generator_c0global_const_t0type;

typedef ImmT  generator_c0state_t0type;

typedef ImmT  generator_c0module_out_t0type;

typedef ImmT  generator_c0out_t0type;

ImmT  generator_c0const_dict();
ImmT  generator_c0const_dict0ptr(int _num, ImmT *_tab);
ImmT  generator_c0fun_args_t();
ImmT  generator_c0fun_args_t0ptr(int _num, ImmT *_tab);
ImmT  generator_c0const_t();
ImmT  generator_c0const_t0ptr(int _num, ImmT *_tab);
ImmT  generator_c0global_const_t();
ImmT  generator_c0global_const_t0ptr(int _num, ImmT *_tab);
ImmT  generator_c0state_t();
ImmT  generator_c0state_t0ptr(int _num, ImmT *_tab);
generator_c0state_t0type generator_c0get_empty_state();
generator_c0state_t0type generator_c0get_empty_state0ptr(int _num, ImmT *_tab);
ImmT  generator_c0module_out_t();
ImmT  generator_c0module_out_t0ptr(int _num, ImmT *_tab);
ImmT  generator_c0out_t();
ImmT  generator_c0out_t0ptr(int _num, ImmT *_tab);
generator_c0out_t0type generator_c0generate(ImmT  ___nl__im__0,generator_c0state_t0type* ___ref___im__1);
generator_c0out_t0type generator_c0generate0ptr(int _num, ImmT *_tab);
ImmT  generator_c0clear_module_from_state(generator_c0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  generator_c0clear_module_from_state0ptr(int _num, ImmT *_tab);
