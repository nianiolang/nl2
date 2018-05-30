
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "string.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "wprinter.h"
#include "boolean_t.h"
typedef ImmT  pretty_printer0struct_t0type;

ImmT  pretty_printer0struct_t();
ImmT  pretty_printer0struct_t0ptr(int _num, ImmT *_tab);
pretty_printer0struct_t0type pretty_printer0print_module_to_struct(nast0module_t0type ___nl__im__0);
pretty_printer0struct_t0type pretty_printer0print_module_to_struct0ptr(int _num, ImmT *_tab);
ImmT  pretty_printer0print_module_to_str(nast0module_t0type ___nl__im__0);
ImmT  pretty_printer0print_module_to_str0ptr(int _num, ImmT *_tab);
