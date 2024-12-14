#include "pch.h"
#include "../SampleProject.Sources/MathFunctions.h"

TEST(MathOperationsTest, Add)
{
	EXPECT_EQ(add(2, 2), 4);
	EXPECT_EQ(add(-1, 1), 0);
	EXPECT_EQ(add(0, 0), 0);
}

TEST(MathOperationsTest, Subtract)
{
	EXPECT_EQ(substract(5, 3), 2);
	EXPECT_EQ(substract(3, 5), -2);
}

TEST(MathOperationsTest, Divide)
{
	EXPECT_EQ(divide(10, 2), 5);
	//EXPECT_EQ(divide(10, 2), 7);
	EXPECT_THROW(divide(1, 0), std::invalid_argument);
}

TEST(MathOperationsTest, Multiply)
{
	EXPECT_EQ(multiply(10, 2), 20);
}