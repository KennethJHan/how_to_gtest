// 03.no_throw.test.cpp
#include <gtest/gtest.h>

int Add(int a, int b) { return a + b; }

TEST(AddTest, PositiveNumbers) {
    EXPECT_NO_THROW(Add(1, 1));
    EXPECT_NO_THROW(Add(5, 5));
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}