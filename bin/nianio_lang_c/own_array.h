
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#pragma once
#include "c_rt_lib.h"
#include <stdbool.h>
#ifndef ANON_TYPE_DECLanon_type00ownarranon_type00im
#define ANON_TYPE_DECLanon_type00ownarranon_type00im
typedef struct  {
INT capacity;
INT size;
ImmT  *value;
} anon_type00ownarranon_type00im;
#endif
void own_array0anon_type00ownarranon_type00im0push(anon_type00ownarranon_type00im *arr, ImmT  arg);
ImmT  *own_array0anon_type00ownarranon_type00im0get_ptr(anon_type00ownarranon_type00im *arr, INT index);
INT own_array0anon_type00ownarranon_type00im0len(anon_type00ownarranon_type00im *arr);
void own_array0anon_type00ownarranon_type00im0clean(anon_type00ownarranon_type00im arr);
void own_array0anon_type00ownarranon_type00im0free(anon_type00ownarranon_type00im *arr);

INT  own_array0len(anon_type00ownarranon_type00im* ___ref___arr__0);
