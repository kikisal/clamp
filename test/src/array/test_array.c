#include "test.h"

// prefix any test unit with TEST 

//bool a() {
static bool b();
static bool c();


TEST a() {
    return a()&&b()&&c();
}

TEST b() {
    return true;
}

TEST c() {
    return true;
}

/*
array_test_array_a
array_test_array_b
array_test_array_c
*/