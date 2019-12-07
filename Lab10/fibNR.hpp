/*******************************************************************************************
** Author: Edgar Hernandez
** Creation Date: 11/30/2019
** Description: This program contains an iterative implementation for calculating Fibonacci
** series. The code for this algorithm was obtained from
** https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
********************************************************************************************/
#ifndef FIBNR_HPP
#define FIBNR_HPP
#include <string>

class fibNR {
public:
	fibNR(const int& n);
	virtual ~fibNR();
	void PrintFibonacci();
private:
	fibNR();
	int Fibonacci(const int& n);
	const int* n_;
};
#endif
