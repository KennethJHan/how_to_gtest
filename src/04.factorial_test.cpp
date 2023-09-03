// 04.factorial_test.cpp
#include "04.factorial.h"
#include <gtest/gtest.h>
#include <iostream>

// Tests factorial of 0.
TEST(FactorialTest, Zero) { EXPECT_EQ(1, factorial(0)); }

// Tests factorial of positive numbers.
TEST(factorialTest, Positive) {
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(6, factorial(3));
    EXPECT_EQ(40320, factorial(8));
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}