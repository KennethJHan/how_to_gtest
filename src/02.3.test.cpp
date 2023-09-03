// 02.3.test.cpp
#include <gtest/gtest.h>
#include <iostream>

TEST(TestName, Subtest_1) { EXPECT_TRUE(1 == 2); }
TEST(TestName, Subtest_2) { EXPECT_TRUE(1 == 1); }

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}