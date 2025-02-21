cmake_minimum_required(VERSION 3.26.4)
project(CLamp)


add_library(clamp_tensor_lib)
add_subdirectory(src/array)
add_subdirectory(src/tensor)

# add_subdirectory(test)

message("hello")

target_include_directories(clamp_tensor_lib PUBLIC src/include)

add_executable(clamp_bin ./bin/clamp-win32.c)
target_link_libraries(clamp_bin clamp_tensor_lib)
target_include_directories(clamp_bin PRIVATE ./bin)