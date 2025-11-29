#include "pch.h"
#include "gtest/gtest.h"
#include "../BasicCalculatorApp/Calculator.h"

TEST(Calculator, AddTwoNumbers)
{
	Calculator<int> calcAdd;
	EXPECT_EQ(calcAdd.add(2,3), 5);
}
