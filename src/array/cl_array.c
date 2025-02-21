
#include "array/cl_array.h"
#include <stdio.h>
#include <stdlib.h>


//  extern void cl_array_push(cl_array_p instance, uintptr_t element);
extern void cl_array_push(cl_array_p instance, uintptr_t element) {
    (void) element;
    instance->count++;
   
}

extern cl_array_p cl_array_create_init(cl_array_len_t elements, uintptr_t init_value) {
    cl_array_p instance    = malloc(sizeof(cl_array));

    instance->count        = elements;
    if (elements > 0)
        instance->data         = malloc(elements * sizeof(init_value));
    else
        instance->data         = NULL;

    if (instance->data) {
        for (int i = 0; i < elements; ++i)
            instance->data[i] = init_value;
    }

    return instance;
};

extern cl_array_p cl_array_create() {
    return cl_array_create_init(0, 0);
}

extern bool_t  cl_array_allocated(cl_array_p array) {
    return array && array->data != NULL;
}

extern size_t cl_array_len(cl_array_p array) {
    return array == NULL ? 0 : array->count; 
}