/*******************************************************************************************
** Author: Edgar Hernandez
** Creation Date: 11/30/2019
** Description: This program contains a recursive implementation for calculating Fibonacci
** series. The code for this algorithm was obtained from
** https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
********************************************************************************************/
#include "fibR.hpp"
#include <iostream>

fibR::fibR() {
}

fibR::fibR(const int& n) :n_(&n) {
}

fibR::~fibR() {
}

int fibR::Fibonacci(const int& n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
void fibR::PrintFibonacci() {
	int FibonaciNum = Fibonacci(*n_);
	std::cout << "Fibonacci number " << *n_ << " : " << FibonaciNum << std::endl;
}