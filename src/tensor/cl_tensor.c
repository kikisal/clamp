#include "tensor/cl_tensor.h"

#include <stdio.h>
#include <stdlib.h>

extern cl_tensor_pt cl_named_tensor(const char* label) {
    cl_tensor_pt instance = cl_tensor();
    instance->label = label;
    return instance;
}

extern cl_tensor_pt cl_tensor() {
    cl_tensor_pt instance = malloc(sizeof(cl_tensor_t));
    instance->label       = NULL;
    instance->shape       = cl_array_create();
    instance->data        = cl_array_create();

    return instance;
}

extern bool_t cl_tr_alloc_data(cl_tensor_pt t) {
    if (cl_tr_is_null(t) || cl_array_len(t->shape) <= 0)
        return FALSE;

    /*

    */

    int entries = 1;

    // 5, 3, 10
    // 5 * 3 * 10

    // for (cl_array_len_t i = 0; i < cl_array_len(t->shape); ++i) {
    //     entries *= cl_array_get(t->shape, i);
    // }
}

extern bool_t cl_tr_add_dim(cl_tensor_pt t, int size) {
    cl_array_push(t->shape, size);
} 

extern void cl_tr_print(cl_tensor_pt tensor) {
    if (!tensor) {
        printf("(Null)\n");
    } else {
        if (cl_tr_initialized(tensor))
            printf("[%s] Tensor(DATA <-)\n", tensor->label);
        else 
            printf("[%s] Tensor()\n", tensor->label);
    }

}

extern bool_t cl_tr_initialized(cl_tensor_pt t) {
    return t != NULL && t->data != NULL && cl_array_allocated(t->data);
}

extern bool_t cl_tr_is_null(cl_tensor_pt t) {
    return t == NULL;
}