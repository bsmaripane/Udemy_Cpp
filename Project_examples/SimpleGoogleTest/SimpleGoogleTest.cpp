// SimpleGoogleTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <gtest/gtest.h>

// Function to calculate factorial using recursion
int factorial(int n) {
	if (n < 0) throw std::invalid_argument("Negative input not allowed");
	return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

// Unit tests
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

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

