#include <vector>
#include <algorithm> // For sort
#include <chrono>    // For time measurement
#include <cstdlib>   // For rand()
#include <iostream>  // For console output
#include <time.h>
#include "pch.h"
#include "../SampleProject.Sources/MathFunctions.h"
using namespace std;


// Basic arithmetic tests
TEST(MathOperationsTest, BasicOperations) {
	EXPECT_EQ(add(2, 3), 5);
	EXPECT_EQ(substract(10, 4), 6);
	EXPECT_EQ(multiply(4, 5), 20);
	EXPECT_DOUBLE_EQ(divide(10.0, 2.0), 5.0);
}

TEST(MathOperationsTest, Add)
{
	EXPECT_EQ(add(-1, -1), -2);
	EXPECT_EQ(add(-1, 1), 0);
	EXPECT_EQ(add(0, 0), 0);
}

TEST(MathOperationsTest, Subtract)
{
	EXPECT_EQ(substract(0, 0), 0);
	EXPECT_EQ(substract(5, -5), 10);
	EXPECT_EQ(substract(-5, -5), 0);
	EXPECT_EQ(substract(-5.0, -5.0), 0);
}

TEST(MathOperationsTest, Divide)
{
	EXPECT_EQ(divide(-1, 2), 0);
}

TEST(MathOperationsTest, Multiply)
{
	EXPECT_EQ(multiply(10, 0), 0);
	EXPECT_EQ(multiply(10, -10), -100);
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
}

// Edge cases for basic functions 
TEST(MathOperationsTest, DivideEdgeCases) {
	EXPECT_DOUBLE_EQ(divide(0.0, 5.0), 0.0); // Zero numerator
	EXPECT_THROW(divide(1.0, 0.0), std::invalid_argument); // Zero denominator
}

TEST(MathOperationsTest, FactorialEdgeCases) {
	EXPECT_EQ(factorial(1), 1); // Single factorial
	EXPECT_THROW(factorial(-3), std::invalid_argument);
}

// Statistical computation tests
TEST(MathOperationsTest, Mean) {
	EXPECT_DOUBLE_EQ(mean({ 1, 2, 3, 4, 5 }), 3.0);
	EXPECT_THROW(mean({}), std::invalid_argument);
}

TEST(MathOperationsTest, Median) {
	EXPECT_DOUBLE_EQ(median({ 1, 2, 3, 4, 5 }), 3.0);
	EXPECT_DOUBLE_EQ(median({ 2, 1, 3, 5, 4 }), 3.0);
	EXPECT_DOUBLE_EQ(median({ 1, 3, 2, 4 }), 2.5);
	EXPECT_THROW(median({}), std::invalid_argument);
}

TEST(MathOperationsTest, MedianFunctionPerformance) {

	// Generate a large vector of 1,000,000 integers
	std::vector<int> largeVector(1000000);
	for (int i = 0; i < 1000000; ++i) {
		largeVector[i] = std::rand();
	}

	// Measure execution time
	clock_t start = time(0);
	double result = median(largeVector);
	clock_t end = time(0);

	// Calculate duration
	double duration = 1000.0 * (end - start) / CLOCKS_PER_SEC;

	// Output duration
	std::cout << "Execution time: " << duration << " ms\n";

	// Assertions	
	EXPECT_GE(result, 0.0); // Ensures result is valid
	EXPECT_LT(duration, 2000); // Fail if execution takes longer than 2 seconds
}
