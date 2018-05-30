
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "string.h"
#include "ptd.h"
#include "array.h"
#include "boolean_t.h"
typedef ImmT  wprinter0state_t0type;

typedef ImmT  wprinter0arr_kind_t0type;

typedef ImmT  wprinter0pretty_t0type;

typedef ImmT  wprinter0str_arr_t0type;

typedef ImmT  wprinter0pretty_arr_t0type;

ImmT  wprinter0state_t();
ImmT  wprinter0state_t0ptr(int _num, ImmT *_tab);
ImmT  wprinter0arr_kind_t();
ImmT  wprinter0arr_kind_t0ptr(int _num, ImmT *_tab);
ImmT  wprinter0pretty_t();
ImmT  wprinter0pretty_t0ptr(int _num, ImmT *_tab);
ImmT  wprinter0str_arr_t();
ImmT  wprinter0str_arr_t0ptr(int _num, ImmT *_tab);
ImmT  wprinter0pretty_arr_t();
ImmT  wprinter0pretty_arr_t0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0get_sep();
wprinter0pretty_t0type wprinter0get_sep0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0build_pretty_a(wprinter0pretty_arr_t0type ___nl__im__0);
wprinter0pretty_t0type wprinter0build_pretty_a0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0build_pretty_l(wprinter0pretty_arr_t0type ___nl__im__0);
wprinter0pretty_t0type wprinter0build_pretty_l0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0build_pretty_op_l(wprinter0pretty_arr_t0type ___nl__im__0);
wprinter0pretty_t0type wprinter0build_pretty_op_l0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0build_pretty_bind(wprinter0pretty_t0type ___nl__im__0,wprinter0pretty_t0type ___nl__im__1);
wprinter0pretty_t0type wprinter0build_pretty_bind0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0build_pretty_arr_decl(wprinter0pretty_arr_t0type ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
wprinter0pretty_t0type wprinter0build_pretty_arr_decl0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0build_sim(ImmT  ___nl__im__0);
wprinter0pretty_t0type wprinter0build_sim0ptr(int _num, ImmT *_tab);
wprinter0pretty_t0type wprinter0build_str_arr(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
wprinter0pretty_t0type wprinter0build_str_arr0ptr(int _num, ImmT *_tab);
ImmT  wprinter0print_t(wprinter0state_t0type* ___ref___im__0,wprinter0pretty_t0type ___nl__im__1,INT  ___nl__int__2);
