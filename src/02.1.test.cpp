// 02.1.test.cpp

#include <iostream>
#include <gtest/gtest.h>

TEST(TestName, Subtest_1)
{
    ASSERT_TRUE(true);
}

TEST(TestName, Subtest_2)
{
    ASSERT_TRUE(1 == 2);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}