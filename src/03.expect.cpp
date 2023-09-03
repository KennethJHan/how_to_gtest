// 03.expect.cpp
#include <gtest/gtest.h>

// EXPECT_TRUE(condition) : True expectation
TEST(TRUE_TEST, EXPECT_TRUE) {
    EXPECT_TRUE(1 == 1); // PASSED
    EXPECT_TRUE(1 == 2); // FAILED
}

// EXPECT_FALSE(condition) : False expectation
TEST(FALSE_TEST, EXPECT_FALSE) {
    EXPECT_FALSE(1 == 2); // PASSED
    EXPECT_FALSE(1 == 1); // FAILED
}

// EXPECT_EQ(val1, val2) : Equality expectation
TEST(EQ_TEST, EXPECT_EQ) {
    EXPECT_EQ(1, 1); // PASSED
    EXPECT_EQ(1, 2); // FAILED
}

// EXPECT_NE(val1, val2) : Inequality expectation
TEST(NE_TEST, EXPECT_NE) {
    EXPECT_NE(1, 2); // PASSED
    EXPECT_NE(1, 1); // FAILED
}

// EXPECT_LT(val1, val2) : Less than expectation
TEST(LT_TEST, EXPECT_LT) {
    EXPECT_LT(1, 2); // PASSED
    EXPECT_LT(1, 1); // FAILED
}

// EXPECT_LE(val1, val2) : Less than or equal expectation
TEST(LE_TEST, EXPECT_LE) {
    EXPECT_LE(1, 2); // PASSED
    EXPECT_LE(1, 1); // PASSED
    EXPECT_LE(2, 1); // FAILED
}

// EXPECT_GT(val1, val2) : Greater than expectation
TEST(GT_TEST, EXPECT_GT) {
    EXPECT_GT(2, 1); // PASSED
    EXPECT_GT(1, 1); // FAILED
}

// EXPECT_GE(val1, val2) : Greater than or equal expectation
TEST(GE_TEST, EXPECT_GE) {
    EXPECT_GE(2, 1); // PASSED
    EXPECT_GE(1, 1); // PASSED
    EXPECT_GE(1, 2); // FAILED
}

// EXPECT_STREQ(str1, str2) : String equality expectation
TEST(STREQ_TEST, EXPECT_STREQ) {
    EXPECT_STREQ("Hello", "Hello"); // PASSED
    EXPECT_STREQ("Hello", "World"); // FAILED
}

// EXPECT_STRNE(str1, str2) : String inequality expectation
TEST(STRNE_TEST, EXPECT_STRNE) {
    EXPECT_STRNE("Hello", "World"); // PASSED
    EXPECT_STRNE("Hello", "Hello"); // FAILED
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}