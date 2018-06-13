
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "own.h"
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

#ifndef ANON_TYPE_DECLanon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE
#define ANON_TYPE_DECLanon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE
typedef struct anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE;
#endif
void translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0clean(anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE rec);
void translator0anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE0free(anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE *rec);

typedef ImmT  translator0string_t0type;

typedef struct translator0state_t0type translator0state_t0type;
void translator0state_t0type0clean(translator0state_t0type rec);
void translator0state_t0type0free(translator0state_t0type *rec);

typedef ImmT  translator0struct_of_lvalue_t0type;

typedef ImmT  translator0function_logic_t0type;

#ifndef ANON_TYPE_DEFanon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE
#define ANON_TYPE_DEFanon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE
struct anon_type00RBanon_type00int0label_nr0anon_type00refnlasm0debug_t0type0debug0anon_type00reftranslator0function_logic_t0type0logic0anon_type00im0module_name0anon_type00refnlasm0function_t0type0result0anon_type00reftranslator0loop_label0type0loop_label0RE {
INT  label_nr0field;
nlasm0debug_t0type debug0field;
translator0function_logic_t0type logic0field;
ImmT  module_name0field;
nlasm0function_t0type result0field;
translator0loop_label0type loop_label0field;
};
#endif
struct translator0state_t0type {
INT  label_nr0field;
nlasm0debug_t0type debug0field;
translator0function_logic_t0type logic0field;
ImmT  module_name0field;
nlasm0function_t0type result0field;
translator0loop_label0type loop_label0field;
};

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
ImmT  translator0conv_to_im00state_t(translator0state_t0type* ___ref___rec__0);
