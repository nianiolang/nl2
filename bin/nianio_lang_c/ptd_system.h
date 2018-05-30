
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "ov.h"
#include "hash.h"
#include "ptd.h"
#include "tct.h"
#include "tc_types.h"
#include "boolean_t.h"
#include "string.h"
#include "array.h"
#include "ptd_parser.h"
bool ptd_system0is_known(tc_types0value_src0type ___nl__im__0);
bool ptd_system0is_known0ptr(int _num, ImmT *_tab);
bool ptd_system0is_equal(tct0meta_type0type ___nl__im__0,tct0meta_type0type ___nl__im__1);
bool ptd_system0is_equal0ptr(int _num, ImmT *_tab);
bool ptd_system0is_try_ensure_type(tc_types0type0type ___nl__im__0,tc_types0modules_t0type* ___ref___im__1,tc_types0errors_t0type* ___ref___im__2);
bool ptd_system0is_try_ensure_type0ptr(int _num, ImmT *_tab);
ImmT  ptd_system0try_get_ensure_sub_types(tc_types0type0type ___nl__im__0,tc_types0modules_t0type* ___ref___im__1,tc_types0errors_t0type* ___ref___im__2);
ImmT  ptd_system0try_get_ensure_sub_types0ptr(int _num, ImmT *_tab);
bool ptd_system0is_condition_type(tc_types0type0type ___nl__im__0,tc_types0modules_t0type* ___ref___im__1,tc_types0errors_t0type* ___ref___im__2);
bool ptd_system0is_condition_type0ptr(int _num, ImmT *_tab);
bool ptd_system0is_accepted(tc_types0type0type ___nl__im__0,tct0meta_type0type ___nl__im__1,tc_types0modules_t0type* ___ref___im__2,tc_types0errors_t0type* ___ref___im__3);
bool ptd_system0is_accepted0ptr(int _num, ImmT *_tab);
tc_types0check_info0type ptd_system0is_accepted_info(tc_types0type0type ___nl__im__0,tct0meta_type0type ___nl__im__1,tc_types0modules_t0type* ___ref___im__2,tc_types0errors_t0type* ___ref___im__3);
tc_types0check_info0type ptd_system0is_accepted_info0ptr(int _num, ImmT *_tab);
tct0meta_type0type ptd_system0cross_type(tct0meta_type0type ___nl__im__0,tct0meta_type0type ___nl__im__1,tc_types0modules_t0type* ___ref___im__2,tc_types0errors_t0type* ___ref___im__3,ImmT  ___nl__im__4);
tct0meta_type0type ptd_system0cross_type0ptr(int _num, ImmT *_tab);
tct0meta_type0type ptd_system0rec_to_hash(tct0meta_type0type ___nl__im__0,tc_types0ref_t0type ___nl__im__1,tc_types0modules_t0type* ___ref___im__2,tc_types0errors_t0type* ___ref___im__3,ImmT  ___nl__im__4);
tct0meta_type0type ptd_system0rec_to_hash0ptr(int _num, ImmT *_tab);
tc_types0check_info0type ptd_system0cast_type(tct0meta_type0type ___nl__im__0,tc_types0type0type ___nl__im__1,tc_types0modules_t0type* ___ref___im__2,tc_types0errors_t0type* ___ref___im__3);
tc_types0check_info0type ptd_system0cast_type0ptr(int _num, ImmT *_tab);
tc_types0check_info0type ptd_system0check_assignment(tct0meta_type0type ___nl__im__0,tc_types0type0type ___nl__im__1,tc_types0modules_t0type* ___ref___im__2,tc_types0errors_t0type* ___ref___im__3);
tc_types0check_info0type ptd_system0check_assignment0ptr(int _num, ImmT *_tab);
tc_types0type0type ptd_system0can_delete(tc_types0type0type ___nl__im__0,tc_types0modules_t0type* ___ref___im__1,tc_types0errors_t0type* ___ref___im__2);
tc_types0type0type ptd_system0can_delete0ptr(int _num, ImmT *_tab);
tc_types0type0type ptd_system0can_create(tc_types0type0type ___nl__im__0,tc_types0modules_t0type* ___ref___im__1,tc_types0errors_t0type* ___ref___im__2);
tc_types0type0type ptd_system0can_create0ptr(int _num, ImmT *_tab);
tct0meta_type0type ptd_system0get_ref_type(ImmT  ___nl__im__0,tc_types0modules_t0type* ___ref___im__1,tc_types0errors_t0type* ___ref___im__2);
tct0meta_type0type ptd_system0get_ref_type0ptr(int _num, ImmT *_tab);
