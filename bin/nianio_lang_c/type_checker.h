
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "array.h"
#include "ptd.h"
#include "tct.h"
#include "tc_types.h"
#include "hash.h"
#include "enum.h"
#include "string.h"
#include "nast.h"
#include "ptd_parser.h"
#include "ptd_system.h"
#include "singleton.h"
#include "own_to_im_converter.h"
#include "nparser.h"
tc_types0return_t0type type_checker0check(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
tc_types0return_t0type type_checker0check0ptr(int _num, ImmT *_tab);
tc_types0return_t0type type_checker0check_modules(ImmT * ___ref___im__0,ImmT  ___nl__im__1);
tc_types0return_t0type type_checker0check_modules0ptr(int _num, ImmT *_tab);
