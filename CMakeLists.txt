cmake_minimum_required(VERSION 3.26.4)
project(CLamp)


add_executable(clamp_bin src/bin/clamp-win32.c)
target_include_directories(clamp_bin PRIVATE src/include)
