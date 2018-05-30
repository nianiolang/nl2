
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "nlasm.h"
#include "translator.h"
#include "nparser.h"
#include "module_checker.h"
#include "type_checker.h"
#include "array.h"
#include "hash.h"
#include "post_processing.h"
#include "ptd.h"
#include "pretty_printer.h"
#include "nast.h"
#include "compiler_lib.h"
typedef ImmT  string_compiler0modules_t0type;

typedef ImmT  string_compiler0type_check_t0type;

typedef ImmT  string_compiler0printed_struct_t0type;

typedef ImmT  string_compiler0error_t0type;

ImmT  string_compiler0compile(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  string_compiler0compile0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0modules_t();
ImmT  string_compiler0modules_t0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0type_check_t();
ImmT  string_compiler0type_check_t0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0printed_struct_t();
ImmT  string_compiler0printed_struct_t0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0error_t();
ImmT  string_compiler0error_t0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0print_modules(ImmT  ___nl__im__0);
ImmT  string_compiler0print_modules0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0parse_module(string_compiler0modules_t0type ___nl__im__0);
ImmT  string_compiler0parse_module0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0check_type(string_compiler0type_check_t0type ___nl__im__0,ImmT  ___nl__im__1);
ImmT  string_compiler0check_type0ptr(int _num, ImmT *_tab);
ImmT  string_compiler0compile_to_nlasm(ImmT  ___nl__im__0);
ImmT  string_compiler0compile_to_nlasm0ptr(int _num, ImmT *_tab);
