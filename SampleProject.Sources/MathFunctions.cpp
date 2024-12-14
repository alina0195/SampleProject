#include <stdexcept>
#include<cmath>  
#include "MathFunctions.h"

int add(int a, int b)
{
	return a + b;
}

int substract(int a, int b)
{
	return a - b;
}

int divide(int a, int b)
{
	if (b == 0) throw std::invalid_argument("Divizion by zero");
	return a / b;
}

int multiply(int a, int b)
{
	return a * b;
}

double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int factorial(int n) 
{
    if (n < 0) throw std::invalid_argument("Negative input for factorial");
    int result = 1;
    for (int i = 1; i <= n; ++i) result *= i;
    return result;
}