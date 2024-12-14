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
}

TEST(MathOperationsTest, Multiply)
{
	EXPECT_EQ(multiply(10, 2), 20);
}

// Test cases for advanced operations
TEST(MathOperationsTest, Power)
{
	EXPECT_DOUBLE_EQ(power(2, 3), 8.0);
	EXPECT_DOUBLE_EQ(power(5, 0), 1.0);
}

TEST(MathOperationsTest, Factorial) {
	EXPECT_EQ(factorial(5), 120);
	EXPECT_EQ(factorial(0), 1);
	EXPECT_THROW(factorial(-3), std::invalid_argument);
}

// Edge cases 
TEST(MathOperationsTest, DivideEdgeCases) {
	EXPECT_DOUBLE_EQ(divide(0.0, 5.0), 0.0); // Zero numerator
	EXPECT_THROW(divide(1.0, 0.0), std::invalid_argument); // Zero denominator
}

TEST(MathOperationsTest, FactorialEdgeCases) {
	EXPECT_EQ(factorial(1), 1); // Single factorial
}