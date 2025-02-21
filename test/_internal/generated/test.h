#pragma once

#include <stdbool.h>

#define TEST bool

typedef bool (* test_unit_fn)();

typedef struct test_unit_st {
    
    test_unit_fn test_fn;
} test_unit_t;

#include "unit_tests.h" // auto-generated
