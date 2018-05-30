
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
#include "dfile.h"
#include "ptd.h"
#include "nast.h"
#include "nparser.h"
#include "boolean_t.h"
#include "pretty_printer.h"
#include "generator_c.h"
#include "translator.h"
#include "nlasm.h"
#include "post_processing.h"
#include "post_processing_t.h"
#include "tc_types.h"
#include "type_checker.h"
#include "module_checker.h"
#include "interpreter.h"
#include "nl.h"
#include "compiler_lib.h"
#include "profile.h"
#include "nsystem.h"
#include "string_utils.h"
#include "reference_generator.h"
#include "tct.h"
typedef ImmT  compiler0deref_t0type;

typedef ImmT  compiler0input_type0type;

typedef ImmT  compiler0language_t0type;

typedef ImmT  compiler0parse_check_t0type;

typedef ImmT  compiler0file_t0type;

typedef ImmT  compiler0errors_hash_t0type;

typedef ImmT  compiler0destination_t0type;

typedef ImmT  compiler0module_t0type;

typedef ImmT  compiler0try_t0type;

typedef ImmT  compiler0errors_group_t0type;

ImmT  compiler0parse_check_t();
ImmT  compiler0parse_check_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0errors_hash_t();
ImmT  compiler0errors_hash_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0errors_group_t();
ImmT  compiler0errors_group_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0language_t();
ImmT  compiler0language_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0destination_t();
ImmT  compiler0destination_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0module_t();
ImmT  compiler0module_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0deref_t();
ImmT  compiler0deref_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0try_t();
ImmT  compiler0try_t0ptr(int _num, ImmT *_tab);
ImmT  compiler0input_type();
ImmT  compiler0input_type0ptr(int _num, ImmT *_tab);
ImmT  compiler0file_t();
ImmT  compiler0file_t0ptr(int _num, ImmT *_tab);
INT  compiler0compile(ImmT  ___nl__im__0);
INT  compiler0compile0ptr(int _num, ImmT *_tab);
