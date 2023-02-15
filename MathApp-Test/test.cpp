#include "pch.h"
#include "../MathApp/doubleNum.cpp"


TEST(DoubleNumTest, posititiveValues) 
{
	ASSERT_EQ(12, doubleNum(6));
	ASSERT_EQ(24, doubleNum(12));
  
}

TEST(DoubleNumTest,negativeValues)
{
	ASSERT_EQ(-12,doubleNum(-6));
	ASSERT_EQ(-24,doubleNum(-12));

}