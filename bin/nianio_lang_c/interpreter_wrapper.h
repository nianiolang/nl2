
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "c_fe_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "nparser.h"
#include "translator.h"
#include "nlasm.h"
#include "interpreter.h"
#include "nl.h"
#include "compiler_lib.h"
typedef ImmT  interpreter_wrapper0errors_hash_t0type;

typedef ImmT  interpreter_wrapper0errors_group_t0type;

typedef ImmT  interpreter_wrapper0module_t0type;

ImmT  interpreter_wrapper0errors_hash_t();
ImmT  interpreter_wrapper0errors_hash_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter_wrapper0errors_group_t();
ImmT  interpreter_wrapper0errors_group_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter_wrapper0module_t();
ImmT  interpreter_wrapper0module_t0ptr(int _num, ImmT *_tab);
INT  interpreter_wrapper0compile(ImmT  ___nl__im__0);
INT  interpreter_wrapper0compile0ptr(int _num, ImmT *_tab);
INT  interpreter_wrapper0exec_interpreter(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
INT  interpreter_wrapper0exec_interpreter0ptr(int _num, ImmT *_tab);
