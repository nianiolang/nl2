
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nlasm.h"
typedef ImmT  flow_graph0block_t0type;

typedef ImmT  flow_graph0reg_use_t0type;

typedef ImmT  flow_graph0state_t0type;

typedef ImmT  flow_graph0blocks_t0type;

ImmT  flow_graph0block_t();
ImmT  flow_graph0block_t0ptr(int _num, ImmT *_tab);
ImmT  flow_graph0reg_use_t();
ImmT  flow_graph0reg_use_t0ptr(int _num, ImmT *_tab);
ImmT  flow_graph0state_t();
ImmT  flow_graph0state_t0ptr(int _num, ImmT *_tab);
ImmT  flow_graph0blocks_t();
ImmT  flow_graph0blocks_t0ptr(int _num, ImmT *_tab);
ImmT  flow_graph0make_blocks(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  flow_graph0make_blocks0ptr(int _num, ImmT *_tab);
ImmT  flow_graph0combine_blocks(flow_graph0blocks_t0type ___nl__im__0);
ImmT  flow_graph0combine_blocks0ptr(int _num, ImmT *_tab);
