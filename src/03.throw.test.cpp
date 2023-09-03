// 03.throw.test.cpp
#include <gtest/gtest.h>

int Divide(int a, int b) {
    if (b == 0)
        throw std::runtime_error("Division by zero");
    return a / b;
}

TEST(DivideTest, PositiveNumbers) {
    EXPECT_THROW(Divide(10, 0), std::runtime_error);
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}