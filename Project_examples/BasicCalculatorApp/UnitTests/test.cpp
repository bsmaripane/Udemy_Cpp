#include "pch.h"
#include "gtest/gtest.h"
#include "../BasicCalculatorApp/Calculator.h"
#include "../BasicCalculatorApp/Calculator.cpp"

namespace CalculatorAppTest
{
	TEST(Calculator, AddTwoNumbers)
	{
		Calculator calcAdd;
		EXPECT_EQ(calcAdd.add(2, 3), 5);
		EXPECT_EQ(calcAdd.add(-3, 3), 0);
		EXPECT_EQ(calcAdd.add(-2, -3), -5);
	}

	TEST(Calculator, MinusTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.minus(2, 3), -1);
		EXPECT_EQ(calc.minus(-6, 3), -9);
		EXPECT_EQ(calc.minus(5, 3), 2);
	}

	TEST(Calculator, MultipleTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.multiple(2, 3), 6);
		EXPECT_EQ(calc.multiple(2, -3), -6);
		EXPECT_EQ(calc.multiple(-2, -3), 6);
	}

	TEST(Calculator, DivideTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.divide(13, 3), 4);
		EXPECT_EQ(calc.divide(3, 3), 1);
		EXPECT_EQ(calc.divide(10, -3), -3);
		EXPECT_THROW(calc.divide(3, 0), std::runtime_error);
	}

	TEST(Calculator, ModuleTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.module(9, 2), 1);
		EXPECT_EQ(calc.module(1, 2), 1);
		EXPECT_EQ(calc.module(-8, 2), 0);
		EXPECT_THROW(calc.module(9, 0), std::runtime_error);
	}
}