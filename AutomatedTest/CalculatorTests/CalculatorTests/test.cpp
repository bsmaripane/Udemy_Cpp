#include "pch.h"
#include "CppUnitTest.h"
#include <gtest/gtest.h>
#include "Calculator.h"

TEST(CalculatorTest, AddTwoNumbers) 
{
	Calculator calc;
	EXPECT_EQ(calc.add(4, 12), 16);
}

TEST(CalculatorTest, AddTwoNegNumbers) 
{
	Calculator calc;
	EXPECT_EQ(calc.add(-4, -12), -16);
}

TEST(CalculatorTest, AddTwoNegAndPosNumbers) 
{
	Calculator calc;
	EXPECT_EQ(calc.add(-4, 2), -2);
}

TEST(CalculatorTest, AddTwoPosAndNegNumbers) 
{
	Calculator calc;
	EXPECT_EQ(calc.add(-2, 4), 2);
}

TEST(CalculatorTest, MinusTwoNumbers)
{
	Calculator calc;
	EXPECT_EQ(calc.minus(12, 4), 8);
}