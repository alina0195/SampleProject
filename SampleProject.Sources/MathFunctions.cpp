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

double mean(const std::vector<int>& numbers)
{
	if (numbers.empty()) 
		throw std::invalid_argument("Empty input for mean");
	int sum = 0;
	for (int num : numbers) 
		sum += num;
	double result = static_cast<double>(sum) / numbers.size();
	return result;
}

double median(std::vector<int> numbers)
{
	if (numbers.empty()) 
		throw std::invalid_argument("Empty input for median");

	std::sort(numbers.begin(), numbers.end());
	size_t size = numbers.size();
	if (size % 2 == 0) 
	{
		return ((double)numbers[size / 2 - 1] + (double)numbers[size / 2]) / 2.0;
	}
	else 
	{
		return numbers[size / 2];
	}
}	