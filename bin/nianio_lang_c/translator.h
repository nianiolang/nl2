
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "tct.h"
#include "array.h"
#include "string.h"
#include "ptd.h"
#include "nast.h"
#include "hash.h"
#include "nlasm.h"
#include "boolean_t.h"
typedef ImmT  translator0loop0type;

typedef ImmT  translator0lvalue_values_t0type;

typedef ImmT  translator0loop_label0type;

typedef ImmT  translator0ref_rec_args_t0type;

typedef ImmT  translator0string_t0type;

typedef ImmT  translator0state_t0type;

typedef ImmT  translator0struct_of_lvalue_t0type;

typedef ImmT  translator0function_logic_t0type;

ImmT  translator0function_logic_t();
ImmT  translator0function_logic_t0ptr(int _num, ImmT *_tab);
ImmT  translator0loop();
ImmT  translator0loop0ptr(int _num, ImmT *_tab);
ImmT  translator0loop_label();
ImmT  translator0loop_label0ptr(int _num, ImmT *_tab);
ImmT  translator0state_t();
ImmT  translator0state_t0ptr(int _num, ImmT *_tab);
ImmT  translator0string_t();
ImmT  translator0string_t0ptr(int _num, ImmT *_tab);
ImmT  translator0lvalue_values_t();
ImmT  translator0lvalue_values_t0ptr(int _num, ImmT *_tab);
nast0debug_t0type translator0last_debug_char(nast0debug_t0type ___nl__im__0);
nast0debug_t0type translator0last_debug_char0ptr(int _num, ImmT *_tab);
nlasm0result_t0type translator0translate(nast0module_t0type ___nl__im__0,ImmT  ___nl__im__1);
nlasm0result_t0type translator0translate0ptr(int _num, ImmT *_tab);
ImmT  translator0ref_rec_args_t();
ImmT  translator0ref_rec_args_t0ptr(int _num, ImmT *_tab);
ImmT  translator0struct_of_lvalue_t();
ImmT  translator0struct_of_lvalue_t0ptr(int _num, ImmT *_tab);
