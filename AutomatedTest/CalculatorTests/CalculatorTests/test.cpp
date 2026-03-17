#include "pch.h"
#include "CppUnitTest.h"
#include <gtest/gtest.h>
#include "Calculator.h"

Calculator calc;
TEST(CalculatorTest, AddTwoNumbers) 
{
	EXPECT_EQ(calc.add(4, 12), 16);
	EXPECT_EQ(calc.add(-4, -12), -16);
	EXPECT_EQ(calc.add(-4, 2), -2);
	EXPECT_EQ(calc.add(-2, 4), 2);
}

TEST(CalculatorTest, MinusTwoNumbers)
{
	EXPECT_EQ(calc.minus(12, 4), 8);
	EXPECT_EQ(calc.minus(-12, -4), -8);
	EXPECT_EQ(calc.minus(-12, 4), -16);
	EXPECT_EQ(calc.minus(-12, 4), -16);
}