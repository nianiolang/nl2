
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "ptd.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "interpreter.h"
typedef ImmT  post_processing_t0reg_const0type;

typedef ImmT  post_processing_t0const_reg_val_t0type;

typedef ImmT  post_processing_t0optimization_t0type;

typedef ImmT  post_processing_t0const_reg_t0type;

typedef ImmT  post_processing_t0state_t0type;

typedef ImmT  post_processing_t0reg_val_const0type;

typedef ImmT  post_processing_t0fun_tree_t0type;

typedef ImmT  post_processing_t0math_funs_t0type;

ImmT  post_processing_t0fun_tree_t();
ImmT  post_processing_t0fun_tree_t0ptr(int _num, ImmT *_tab);
ImmT  post_processing_t0state_t();
ImmT  post_processing_t0state_t0ptr(int _num, ImmT *_tab);
ImmT  post_processing_t0math_funs_t();
ImmT  post_processing_t0math_funs_t0ptr(int _num, ImmT *_tab);
ImmT  post_processing_t0reg_const();
ImmT  post_processing_t0reg_const0ptr(int _num, ImmT *_tab);
ImmT  post_processing_t0reg_val_const();
ImmT  post_processing_t0reg_val_const0ptr(int _num, ImmT *_tab);
ImmT  post_processing_t0optimization_t();
ImmT  post_processing_t0optimization_t0ptr(int _num, ImmT *_tab);
ImmT  post_processing_t0const_reg_t();
ImmT  post_processing_t0const_reg_t0ptr(int _num, ImmT *_tab);
ImmT  post_processing_t0const_reg_val_t();
ImmT  post_processing_t0const_reg_val_t0ptr(int _num, ImmT *_tab);
