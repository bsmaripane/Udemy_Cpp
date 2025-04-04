#include "pch.h"
#include "factorial.h"
#include <gtest/gtest.h>
#include <stdexcept>

TEST(FactorialTest, HandlesZeroInput) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(7), 5040);
}

TEST(FactorialTest, HandlesNegativeInput) {
    EXPECT_THROW(factorial(-1), std::invalid_argument);
}

// Additional tests
TEST(FactorialTest, HandlesLargeInput) {
    EXPECT_EQ(factorial(10), 3628800);
    EXPECT_EQ(factorial(12), 479001600);
}

TEST(FactorialTest, HandlesEdgeCases) {
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(4), 25);
}