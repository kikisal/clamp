#pragma once

#include "common/types.h"


typedef size_t cl_array_len_t;

typedef struct cl_array_struct {
    cl_array_len_t count;
    uintptr_t* data;
} cl_array, *cl_array_p;

extern void cl_array_push(cl_array_p instance, uintptr_t element);
extern cl_array_p cl_array_create();
extern cl_array_p cl_array_create_init(cl_array_len_t elements, uintptr_t init_value);
extern bool_t  cl_array_allocated(cl_array_p array);
extern size_t cl_array_len(cl_array_p array);