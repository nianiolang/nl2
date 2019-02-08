
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
#include "pretty_printer.h"
#include "generator_c.h"
#include "generator_js.h"
#include "translator.h"
#include "nlasm.h"
#include "post_processing.h"
#include "post_processing_t.h"
#include "tc_types.h"
#include "type_checker.h"
#include "module_checker.h"
#include "compiler_lib.h"
#include "profile.h"
#include "nsystem.h"
#include "string_utils.h"
#include "reference_generator.h"
#include "tct.h"
#include "interpreter_wrapper.h"
#ifndef ANON_TYPE_DECLanon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE
#define ANON_TYPE_DECLanon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE
typedef struct anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE;
#endif
void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0clean(anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE rec);
void compiler0anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE0free(anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE *rec);

typedef ImmT  compiler0deref_t0type;

#ifndef ANON_TYPE_DECLanon_type00ownhashanon_type00bool
#define ANON_TYPE_DECLanon_type00ownhashanon_type00bool
typedef struct  {
INT capacity;
INT size;
bool  *values;
ImmT  *keys;
} anon_type00ownhashanon_type00bool;
#endif
bool  *compiler0anon_type00ownhashanon_type00bool0get_ptr(anon_type00ownhashanon_type00bool *hash, ImmT key, bool create_if_not_exist);
INT compiler0anon_type00ownhashanon_type00bool0next_iter(anon_type00ownhashanon_type00bool *hash, INT last_iter);
void compiler0anon_type00ownhashanon_type00bool0clean(anon_type00ownhashanon_type00bool hash);
void compiler0anon_type00ownhashanon_type00bool0free(anon_type00ownhashanon_type00bool *hash);

#ifndef ANON_TYPE_DECLanon_type00ownarranon_type00im
#define ANON_TYPE_DECLanon_type00ownarranon_type00im
typedef struct  {
INT capacity;
INT size;
ImmT  *value;
} anon_type00ownarranon_type00im;
#endif
void compiler0anon_type00ownarranon_type00im0push(anon_type00ownarranon_type00im *arr, ImmT  arg);
ImmT  *compiler0anon_type00ownarranon_type00im0get_ptr(anon_type00ownarranon_type00im *arr, INT index);
INT compiler0anon_type00ownarranon_type00im0len(anon_type00ownarranon_type00im *arr);
void compiler0anon_type00ownarranon_type00im0clean(anon_type00ownarranon_type00im arr);
void compiler0anon_type00ownarranon_type00im0free(anon_type00ownarranon_type00im *arr);

typedef ImmT  compiler0input_type0type;

typedef ImmT  compiler0language_t0type;

typedef ImmT  compiler0parse_check_t0type;

typedef ImmT  compiler0file_t0type;

typedef ImmT  compiler0errors_hash_t0type;

typedef ImmT  compiler0destination_t0type;

typedef ImmT  compiler0module_t0type;

typedef ImmT  compiler0try_t0type;

typedef ImmT  compiler0errors_group_t0type;

#ifndef ANON_TYPE_DEFanon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE
#define ANON_TYPE_DEFanon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE
struct anon_type00RBanon_type00refgenerator_c0const_t0type0sim0anon_type00refgenerator_c0const_t0type0singleton0anon_type00int0dynamic_nr0RE {
generator_c0const_t0type sim0field;
generator_c0const_t0type singleton0field;
INT  dynamic_nr0field;
};
#endif
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
