#include <gmock/gmock.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// EXPECT_THAT is a macro that takes two arguments:
// Eq is a matcher that takes one argument.
// Eq means Equal.
TEST(EXPECT_THAT, Eq) { EXPECT_THAT(factorial(5), testing::Eq(120)); }

// Ne is a matcher that takes one argument.
// Ne means Not Equal.
TEST(EXPECT_THAT, Ne) { EXPECT_THAT(factorial(5), testing::Ne(121)); }

// Starts With is a matcher that takes one argument.
// Starts With means the string starts with the given string.
TEST(EXPECT_THAT, StartsWith) {
    std::string str = "Hello World!";
    EXPECT_THAT(str, testing::StartsWith("Hello"));
}

// IsEmpty is a matcher that takes no arguments.
// IsEmpty means the string is empty.
TEST(EXPECT_THAT, IsEmpty) {
    std::string str = "";
    EXPECT_THAT(str, testing::IsEmpty());
}

TEST(EXPECT_THAT, IsEmpty2) {
    std::vector<int> vec = {};
    EXPECT_THAT(vec, testing::IsEmpty());
}

// SizeIs is a matcher that takes one argument.
// SizeIs means the object has the given size.
TEST(EXPECT_THAT, SizeIs) {
    std::string str = "Hello World!";
    EXPECT_THAT(str, testing::SizeIs(12));
}

TEST(EXPECT_THAT, SizeIs2) {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    EXPECT_THAT(vec, testing::SizeIs(5));
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}