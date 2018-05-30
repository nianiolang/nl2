
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#include "ov.h"
#include "nast.h"
#include "ptd.h"
#include "array.h"
#include "hash.h"
#include "string.h"
#include "enum.h"
#include "c_std_lib.h"
#include "boolean_t.h"
#include "singleton.h"
typedef ImmT  ntokenizer0state_t0type;

typedef ImmT  ntokenizer0token_t0type;

ImmT  ntokenizer0state_t();
ImmT  ntokenizer0state_t0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0token_t();
ImmT  ntokenizer0token_t0ptr(int _num, ImmT *_tab);
ntokenizer0state_t0type ntokenizer0init(ImmT  ___nl__im__0);
ntokenizer0state_t0type ntokenizer0init0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0get_last_comment(ntokenizer0state_t0type ___nl__im__0);
ImmT  ntokenizer0get_last_comment0ptr(int _num, ImmT *_tab);
bool ntokenizer0eat_token(ntokenizer0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
bool ntokenizer0eat_token0ptr(int _num, ImmT *_tab);
INT  ntokenizer0get_line(ntokenizer0state_t0type ___nl__im__0);
INT  ntokenizer0get_line0ptr(int _num, ImmT *_tab);
INT  ntokenizer0get_column(ntokenizer0state_t0type ___nl__im__0);
INT  ntokenizer0get_column0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0get_place(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer0get_place0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0get_place_ws(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer0get_place_ws0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0get_token(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer0get_token0ptr(int _num, ImmT *_tab);
bool ntokenizer0is_type(ntokenizer0state_t0type* ___ref___im__0,ntokenizer0token_t0type ___nl__im__1);
bool ntokenizer0is_type0ptr(int _num, ImmT *_tab);
bool ntokenizer0next_is(ntokenizer0state_t0type* ___ref___im__0,ImmT  ___nl__im__1);
bool ntokenizer0next_is0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0eat_type(ntokenizer0state_t0type* ___ref___im__0,ntokenizer0token_t0type ___nl__im__1);
ImmT  ntokenizer0eat_type0ptr(int _num, ImmT *_tab);
bool ntokenizer0is_text(ntokenizer0state_t0type* ___ref___im__0);
bool ntokenizer0is_text0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0eat_text(ntokenizer0state_t0type* ___ref___im__0);
ImmT  ntokenizer0eat_text0ptr(int _num, ImmT *_tab);
ImmT  ntokenizer0info(ntokenizer0state_t0type ___nl__im__0);
ImmT  ntokenizer0info0ptr(int _num, ImmT *_tab);
