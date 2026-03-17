#include "pch.h"
#include "CppUnitTest.h"
#include <gtest/gtest.h>

TEST(SampleTest, BasicAssertion) 
{
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}