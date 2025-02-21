#include <stdio.h>
#include <stdlib.h>
#include "tensor/cl_tensor.h"

int main() {

    
    cl_tensor_pt t = cl_named_tensor("T1");
    
    // setting up tensor shape
    cl_tr_add_dim(t, 3);
    cl_tr_add_dim(t, 3);

    // ok we have setup the shape, now allocate the tensor data
    // given this shape.
    cl_tr_alloc_data(t);
    
    // cl_tr_print(t);

    return 0;
}