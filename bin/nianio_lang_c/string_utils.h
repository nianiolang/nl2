
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "string.h"
#include "ptd.h"
#include "array.h"
#include "float.h"
#include "c_rt_lib.h"
#include "c_std_lib.h"
ImmT  string_utils0is_int(ImmT  ___nl__im__0);
ImmT  string_utils0is_int0ptr(int _num, ImmT *_tab);
ImmT  string_utils0is_whitespace(ImmT  ___nl__im__0);
ImmT  string_utils0is_whitespace0ptr(int _num, ImmT *_tab);
ImmT  string_utils0is_alpha(ImmT  ___nl__im__0);
ImmT  string_utils0is_alpha0ptr(int _num, ImmT *_tab);
ImmT  string_utils0get_integer(ImmT  ___nl__im__0);
ImmT  string_utils0get_integer0ptr(int _num, ImmT *_tab);
bool  string_utils0is_integer(ImmT  ___nl__im__0);
bool  string_utils0is_integer0ptr(int _num, ImmT *_tab);
bool  string_utils0is_integer_possibly_leading_zeros(ImmT  ___nl__im__0);
bool  string_utils0is_integer_possibly_leading_zeros0ptr(int _num, ImmT *_tab);
bool  string_utils0is_float(ImmT  ___nl__im__0);
bool  string_utils0is_float0ptr(int _num, ImmT *_tab);
bool  string_utils0is_number(ImmT  ___nl__im__0);
bool  string_utils0is_number0ptr(int _num, ImmT *_tab);
ImmT  string_utils0get_number(ImmT  ___nl__im__0);
ImmT  string_utils0get_number0ptr(int _num, ImmT *_tab);
ImmT  string_utils0eval_number(ImmT  ___nl__im__0);
ImmT  string_utils0eval_number0ptr(int _num, ImmT *_tab);
ImmT  string_utils0get_date(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  string_utils0get_date0ptr(int _num, ImmT *_tab);
ImmT  string_utils0change(ImmT  ___nl__im__0,ImmT  ___nl__im__1,ImmT  ___nl__im__2);
ImmT  string_utils0change0ptr(int _num, ImmT *_tab);
ImmT  string_utils0erase_tail_whitespace(ImmT  ___nl__im__0);
ImmT  string_utils0erase_tail_whitespace0ptr(int _num, ImmT *_tab);
ImmT  string_utils0erase_tail_zeroes(ImmT  ___nl__im__0);
ImmT  string_utils0erase_tail_zeroes0ptr(int _num, ImmT *_tab);
ImmT  string_utils0erase_leading_zeroes(ImmT  ___nl__im__0);
ImmT  string_utils0erase_leading_zeroes0ptr(int _num, ImmT *_tab);
ImmT  string_utils0char2hex(ImmT  ___nl__im__0);
ImmT  string_utils0char2hex0ptr(int _num, ImmT *_tab);
ImmT  string_utils0hex2char(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  string_utils0hex2char0ptr(int _num, ImmT *_tab);
ImmT  string_utils0escape2hex31(ImmT  ___nl__im__0);
ImmT  string_utils0escape2hex310ptr(int _num, ImmT *_tab);
ImmT  string_utils0float2str(ImmT  ___nl__im__0,INT  ___nl__int__1);
ImmT  string_utils0int2str_leading_digits(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  string_utils0int2str_leading_digits0ptr(int _num, ImmT *_tab);
ImmT  string_utils0int2str(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  string_utils0int2str0ptr(int _num, ImmT *_tab);
ImmT  string_utils0starts_with(ImmT  ___nl__im__0,ImmT  ___nl__im__1);
ImmT  string_utils0starts_with0ptr(int _num, ImmT *_tab);
ImmT  string_utils0normalize_newlines(ImmT  ___nl__im__0);
ImmT  string_utils0normalize_newlines0ptr(int _num, ImmT *_tab);
ImmT  string_utils0float2str_fixed(ImmT  ___nl__im__0);
ImmT  string_utils0float2str_fixed0ptr(int _num, ImmT *_tab);
