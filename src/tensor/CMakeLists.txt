set(TENSOR_SOURCE_FILES 
    cl_tensor.c
)

target_sources(clamp_tensor_lib PRIVATE ${TENSOR_SOURCE_FILES})