
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "ptd.h"
#include "nlasm.h"
#include "array.h"
#include "ov.h"
#include "hash.h"
#include "flow_graph.h"
#include "unnecessary_commands.h"
#include "interpreter.h"
#include "const_evaluator.h"
#include "post_processing_t.h"
#include "register_cleaner.h"
#include "string_utils.h"
post_processing_t0state_t0type post_processing0init(ImmT  ___nl__im__0,post_processing_t0optimization_t0type ___nl__im__1);
post_processing_t0state_t0type post_processing0init0ptr(int _num, ImmT *_tab);
ImmT  post_processing0clear_module_from_state(post_processing_t0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
ImmT  post_processing0clear_module_from_state0ptr(int _num, ImmT *_tab);
ImmT  post_processing0find(post_processing_t0state_t0type* ___ref___im__0,ImmT * ___ref___im__1);
ImmT  post_processing0find0ptr(int _num, ImmT *_tab);
post_processing_t0fun_tree_t0type post_processing0get_call_graph(ImmT  ___nl__im__0);
post_processing_t0fun_tree_t0type post_processing0get_call_graph0ptr(int _num, ImmT *_tab);
