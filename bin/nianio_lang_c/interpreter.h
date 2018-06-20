
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "array.h"
#include "hash.h"
#include "nlasm.h"
#include "ov.h"
#include "ptd.h"
#include "nast.h"
#include "func.h"
#include "nl.h"
#include "string.h"
#include "string_utils.h"
#include "dfile.h"
#include "c_rt_lib.h"
#include "c_std_lib.h"
#include "profile_inter.h"
#include "optional_libraries.h"
typedef ImmT  interpreter0known_exec_func_t0type;

typedef ImmT  interpreter0stack_element_debug_t0type;

typedef ImmT  interpreter0stack_t0type;

typedef ImmT  interpreter0stack_element_t0type;

typedef ImmT  interpreter0callback_t0type;

typedef ImmT  interpreter0callback_value_t0type;

typedef ImmT  interpreter0return_t0type;

typedef ImmT  interpreter0state_t0type;

typedef ImmT  interpreter0module_labels_t0type;

typedef ImmT  interpreter0rstate_t0type;

typedef ImmT  interpreter0part_state_t0type;

ImmT  interpreter0stack_element_t();
ImmT  interpreter0stack_element_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0module_labels_t();
ImmT  interpreter0module_labels_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0known_exec_func_t();
ImmT  interpreter0known_exec_func_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0state_t();
ImmT  interpreter0state_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0rstate_t();
ImmT  interpreter0rstate_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0callback_t();
ImmT  interpreter0callback_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0stack_t();
ImmT  interpreter0stack_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0stack_element_debug_t();
ImmT  interpreter0stack_element_debug_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0part_state_t();
ImmT  interpreter0part_state_t0ptr(int _num, ImmT *_tab);
interpreter0part_state_t0type interpreter0part_state(nlasm0result_t0type ___nl__im__0);
interpreter0part_state_t0type interpreter0part_state0ptr(int _num, ImmT *_tab);
interpreter0state_t0type interpreter0init(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
interpreter0state_t0type interpreter0init0ptr(int _num, ImmT *_tab);
interpreter0state_t0type interpreter0get_short_state(interpreter0state_t0type ___nl__im__0);
interpreter0state_t0type interpreter0get_short_state0ptr(int _num, ImmT *_tab);
interpreter0state_t0type interpreter0init_from_part_and_short(interpreter0state_t0type ___nl__im__0,ImmT  ___nl__im__1);
interpreter0state_t0type interpreter0init_from_part_and_short0ptr(int _num, ImmT *_tab);
interpreter0state_t0type interpreter0init_from_short(interpreter0state_t0type ___nl__im__0,ImmT  ___nl__im__1);
interpreter0state_t0type interpreter0init_from_short0ptr(int _num, ImmT *_tab);
interpreter0state_t0type interpreter0init_from_part(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
interpreter0state_t0type interpreter0init_from_part0ptr(int _num, ImmT *_tab);
ImmT  interpreter0start(interpreter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  interpreter0start0ptr(int _num, ImmT *_tab);
ImmT  interpreter0start_args(interpreter0state_t0type* ___ref___im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3);
ImmT  interpreter0start_args0ptr(int _num, ImmT *_tab);
interpreter0rstate_t0type interpreter0exec_instruction(interpreter0state_t0type* ___ref___im__0,INT  ___nl__int__1);
ImmT  interpreter0exec_all_code(interpreter0state_t0type ___nl__im__0);
ImmT  interpreter0exec_all_code0ptr(int _num, ImmT *_tab);
ImmT  interpreter0evaluate_const(interpreter0state_t0type ___nl__im__0,nlasm0function_t0type ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,INT  ___nl__int__4);
ImmT  interpreter0get_none_variant();
ImmT  interpreter0get_none_variant0ptr(int _num, ImmT *_tab);
ImmT  interpreter0get_profile(interpreter0state_t0type ___nl__im__0);
ImmT  interpreter0get_profile0ptr(int _num, ImmT *_tab);
ImmT  interpreter0get_whole_stack_debug(interpreter0state_t0type ___nl__im__0);
ImmT  interpreter0get_whole_stack_debug0ptr(int _num, ImmT *_tab);
bool  interpreter0has_next_instruction(interpreter0state_t0type ___nl__im__0);
bool  interpreter0has_next_instruction0ptr(int _num, ImmT *_tab);
INT  interpreter0get_instruction_nr(interpreter0state_t0type ___nl__im__0);
INT  interpreter0get_instruction_nr0ptr(int _num, ImmT *_tab);
ImmT  interpreter0execute_full_instruction(interpreter0state_t0type* ___ref___im__0);
ImmT  interpreter0execute_full_instruction0ptr(int _num, ImmT *_tab);
ImmT  interpreter0callback_value_t();
ImmT  interpreter0callback_value_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0return_t();
ImmT  interpreter0return_t0ptr(int _num, ImmT *_tab);
ImmT  interpreter0finish_callback(ImmT  ___nl__im__0,ImmT  ___nl__im__1,interpreter0callback_value_t0type ___nl__im__2,interpreter0state_t0type* ___ref___im__3);
ImmT  interpreter0finish_callback0ptr(int _num, ImmT *_tab);
