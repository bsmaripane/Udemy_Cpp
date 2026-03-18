#include "pch.h"
#include "CppUnitTest.h"
#include <gtest/gtest.h>
#include "Calculator.h"

class CalculatorTest : public ::testing::Test
{
protected:
	Calculator calc;
};

TEST_F(CalculatorTest, AddTwoNumbers) 
{
	EXPECT_EQ(calc.add(4, 12), 16);
	EXPECT_EQ(calc.add(-4, -12), -16);
	EXPECT_EQ(calc.add(-4, 2), -2);
	EXPECT_EQ(calc.add(-2, 4), 2);
}

TEST_F(CalculatorTest, MinusTwoNumbers)
{
	EXPECT_EQ(calc.minus(12, 4), 8);
	EXPECT_EQ(calc.minus(-12, -4), -8);
	EXPECT_EQ(calc.minus(-12, 4), -16);
	EXPECT_EQ(calc.minus(-12, 4), -16);
}

TEST_F(CalculatorTest, MultiplyTwoNumbers)
{
	EXPECT_EQ(calc.multiply(2, 5), 10);
	EXPECT_EQ(calc.multiply(-2, -2), 4);
	EXPECT_EQ(calc.multiply(-4, 5), -20);
	EXPECT_EQ(calc.multiply(7, -3), -21);
}