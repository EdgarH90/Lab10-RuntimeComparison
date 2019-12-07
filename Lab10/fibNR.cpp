/*******************************************************************************************
** Author: Edgar Hernandez
** Creation Date: 11/30/2019
** Description: This program contains an iterative implementation for calculating Fibonacci
** series. The code for this algorithm was obtained from
** https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
********************************************************************************************/
#include "fibNR.hpp"
#include <iostream>

fibNR::fibNR() {

}

fibNR::fibNR(const int& n) :n_(&n) {

}

fibNR::~fibNR() {
}

int fibNR::Fibonacci(const int& n)
{
	int first = 0;
	int second = 1;
	int counter = 2;
	while (counter < n)
	{
		int temp = second;
		second = first + second;
		first = temp;
		++counter;
	}
	if (n == 0)
		return 0;
	else
		return first + second;
}
void fibNR::PrintFibonacci() {
	const int result = Fibonacci(*n_);
	std::cout << "Fibonacci number " << *n_ << " : " << result << std::endl;
}