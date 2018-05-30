
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "hash.h"
#include "array.h"
#include "ov.h"
#include "c_std_lib.h"
typedef ImmT  ptd0meta_type0type;

typedef ImmT  ptd0cast_t0type;

typedef ImmT  ptd0imm_kind_t0type;

typedef ImmT  ptd0cast_error_t0type;

ptd0meta_type0type ptd0arr(ptd0meta_type0type ___nl__im__0);
ptd0meta_type0type ptd0arr0ptr(int _num, ImmT *_tab);
ptd0meta_type0type ptd0rec(ImmT  ___nl__im__0);
ptd0meta_type0type ptd0rec0ptr(int _num, ImmT *_tab);
ptd0meta_type0type ptd0int();
ptd0meta_type0type ptd0int0ptr(int _num, ImmT *_tab);
ptd0meta_type0type ptd0string();
ptd0meta_type0type ptd0string0ptr(int _num, ImmT *_tab);
ptd0meta_type0type ptd0bool();
ptd0meta_type0type ptd0bool0ptr(int _num, ImmT *_tab);
ImmT  ptd0none();
ImmT  ptd0none0ptr(int _num, ImmT *_tab);
ImmT  ptd0void();
ImmT  ptd0void0ptr(int _num, ImmT *_tab);
ptd0meta_type0type ptd0hash(ptd0meta_type0type ___nl__im__0);
ptd0meta_type0type ptd0hash0ptr(int _num, ImmT *_tab);
ptd0meta_type0type ptd0ptd_im();
ptd0meta_type0type ptd0ptd_im0ptr(int _num, ImmT *_tab);
ptd0meta_type0type ptd0var(ImmT  ___nl__im__0);
ptd0meta_type0type ptd0var0ptr(int _num, ImmT *_tab);
ImmT  ptd0meta_type();
ImmT  ptd0meta_type0ptr(int _num, ImmT *_tab);
ImmT  ptd0ensure(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  ptd0ensure0ptr(int _num, ImmT *_tab);
ImmT  ptd0try_ensure(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  ptd0try_ensure0ptr(int _num, ImmT *_tab);
ImmT  ptd0ensure_only_dynamic(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  ptd0ensure_only_dynamic0ptr(int _num, ImmT *_tab);
ImmT  ptd0ensure_only_static_do_not_touch_without_permission(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  ptd0ensure_only_static_do_not_touch_without_permission0ptr(int _num, ImmT *_tab);
ImmT  ptd0ensure_dyn(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT * ___ref___im__2);
ImmT  ptd0ensure_dyn0ptr(int _num, ImmT *_tab);
ImmT  ptd0is_ref_type(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  ptd0is_ref_type0ptr(int _num, ImmT *_tab);
ImmT  ptd0cast_t();
ImmT  ptd0cast_t0ptr(int _num, ImmT *_tab);
ptd0cast_t0type ptd0try_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ptd0cast_t0type ptd0try_cast0ptr(int _num, ImmT *_tab);
ptd0cast_t0type ptd0try_dynamic_cast(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ptd0cast_t0type ptd0try_dynamic_cast0ptr(int _num, ImmT *_tab);
ImmT  ptd0imm_kind_t();
ImmT  ptd0imm_kind_t0ptr(int _num, ImmT *_tab);
ImmT  ptd0cast_error_t();
ImmT  ptd0cast_error_t0ptr(int _num, ImmT *_tab);
ptd0imm_kind_t0type ptd0get_imm_kind(ImmT  ___nl__im__0);
ptd0imm_kind_t0type ptd0get_imm_kind0ptr(int _num, ImmT *_tab);
ImmT  ptd0reconstruct_nl_with_args(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,ImmT  ___nl__im__4);
ImmT  ptd0reconstruct_nl_with_args0ptr(int _num, ImmT *_tab);
ImmT  ptd0ptd_reconstruct_nl_with_args(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2,ImmT  ___nl__im__3,ImmT  ___nl__im__4);
ImmT  ptd0ptd_reconstruct_nl_with_args0ptr(int _num, ImmT *_tab);
ImmT  ptd0int_to_string(INT  ___nl__int__0);
