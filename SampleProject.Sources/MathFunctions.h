#pragma once
#include <vector>
#include <stdexcept>
#include <cmath>
#include <algorithm>

int add(int x, int y);
int substract(int x, int y);
int divide(int x, int y);
int multiply(int x, int y);

// Advanced Math Operations
int factorial(int n);
double power(double base, double exponent);

// Statistical computations
double mean(const std::vector<int>& numbers);
double median(std::vector<int> numbers);