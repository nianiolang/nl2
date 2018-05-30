
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "c_std_lib.h"
#include "boolean_t.h"
#include "ptd.h"
bool nl0is_array(ImmT  ___nl__im__0);
bool nl0is_array0ptr(int _num, ImmT *_tab);
bool nl0is_hash(ImmT  ___nl__im__0);
bool nl0is_hash0ptr(int _num, ImmT *_tab);
bool nl0is_sim(ImmT  ___nl__im__0);
bool nl0is_sim0ptr(int _num, ImmT *_tab);
bool nl0is_variant(ImmT  ___nl__im__0);
bool nl0is_variant0ptr(int _num, ImmT *_tab);
ImmT  nl0print(ImmT  ___nl__im__0);
ImmT  nl0print0ptr(int _num, ImmT *_tab);
ImmT  nl0debug_die(ImmT  ___nl__im__0);
ImmT  nl0debug_die0ptr(int _num, ImmT *_tab);
