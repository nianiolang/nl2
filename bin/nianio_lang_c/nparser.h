
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "string.h"
#include "array.h"
#include "hash.h"
#include "boolean_t.h"
#include "ptd.h"
#include "nast.h"
#include "ntokenizer.h"
#include "singleton.h"
#include "compiler_lib.h"
#include "ptd_parser.h"
#include "string_utils.h"
typedef ImmT  nparser0parse_ret_t0type;

typedef ImmT  nparser0state_t0type;

typedef ImmT  nparser0try_value_t0type;

typedef ImmT  nparser0try_cmd_t0type;

ImmT  nparser0parse_ret_t();
ImmT  nparser0parse_ret_t0ptr(int _num, ImmT *_tab);
ImmT  nparser0state_t();
ImmT  nparser0state_t0ptr(int _num, ImmT *_tab);
ImmT  nparser0try_value_t();
ImmT  nparser0try_value_t0ptr(int _num, ImmT *_tab);
ImmT  nparser0try_cmd_t();
ImmT  nparser0try_cmd_t0ptr(int _num, ImmT *_tab);
ImmT  nparser0sparse(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  nparser0sparse0ptr(int _num, ImmT *_tab);
