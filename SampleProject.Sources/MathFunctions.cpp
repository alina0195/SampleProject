#include <stdexcept>
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
