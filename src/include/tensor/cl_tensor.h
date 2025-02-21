#pragma once

#include "common/types.h"
#include "array/cl_array.h"

typedef struct cl_tensor_t_struct {
    const char* label;
    cl_array_p shape;
    cl_array_p data;
} cl_tensor_t, *cl_tensor_pt;

extern cl_tensor_pt cl_named_tensor(const char* label);
extern cl_tensor_pt cl_tensor();
extern bool_t cl_tr_alloc_data(cl_tensor_pt data);
extern bool_t cl_tr_add_dim(cl_tensor_pt t, int size);
extern bool_t cl_tr_initialized(cl_tensor_pt t);
extern void cl_tr_print(cl_tensor_pt tensor);
extern bool_t cl_tr_is_null(cl_tensor_pt t);