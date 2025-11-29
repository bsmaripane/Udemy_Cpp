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
	}

	TEST(Calculator, MinusTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.minus(2, 3), -1);
	}

	TEST(Calculator, MultipleTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.multiple(2, 3), 6);
	}

	TEST(Calculator, DivideTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.divide(13, 3), 4);
	}

	TEST(Calculator, ModuleTwoNumbers)
	{
		Calculator calc;
		EXPECT_EQ(calc.module(9, 2), 1);
	}
}