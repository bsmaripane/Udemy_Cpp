#include "pch.h"
#include "CppUnitTest.h"
#include <gtest/gtest.h>
#include "Calculator.h"

TEST(CalculatorTest, AddTwoNumber) 
{
	Calculator calc;
	EXPECT_EQ(calc.add(4, 12), 16);
}