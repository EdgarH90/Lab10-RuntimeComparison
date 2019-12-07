/*******************************************************************************************
** Author: Edgar Hernandez
** Creation Date: 11/30/2019
** Description: This program contains a recursive implementation for calculating Fibonacci
** series. The code for this algorithm was obtained from
** https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
********************************************************************************************/
#ifndef FIBR_HPP
#define FIBR_HPP
#include <string>

class fibR {
public:
	fibR(const int& n);
	virtual ~fibR();
	void PrintFibonacci();
private:
	fibR();
	int Fibonacci(const int& n);
	const int* n_;
};
#endif
