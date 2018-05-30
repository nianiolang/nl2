
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "array.h"
#include "dfile.h"
#include "string.h"
#include "nl.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "ptd.h"
#include "string_utils.h"
typedef ImmT  generator_pm0fun_args_t0type;

typedef ImmT  generator_pm0state_t0type;

ImmT  generator_pm0fun_args_t();
ImmT  generator_pm0fun_args_t0ptr(int _num, ImmT *_tab);
ImmT  generator_pm0state_t();
ImmT  generator_pm0state_t0ptr(int _num, ImmT *_tab);
ImmT  generator_pm0generate(nlasm0result_t0type ___nl__im__0);
ImmT  generator_pm0generate0ptr(int _num, ImmT *_tab);
