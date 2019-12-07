/*******************************************************************************************
** Author: Edgar Hernandez
** Creation Date: 11/30/2019
** Description: This program contains recursive and iterative implementations of Fibonacci 
** Numbers Calculations. It then measures the running time of both implementations.
********************************************************************************************/
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <chrono>
#include "fibNR.hpp"
#include "fibR.hpp"
#include "inputValidation.hpp"

int main()
{
	//Initialize the variables for the user's choices
	int userChoice = 1;
	int userInt = 0;
	std::string errorMsg = "Please enter a valid integer";
	
	while (userChoice != 2)
	{

		std::cout << "Please enter an integer between 1 and 50 to run the Fibonacci sequence for. "
			<< std::endl;
		inputValidation(userInt, errorMsg, 1, 50);

		// Run the recursive fibonacci implementation and print out the runtime
		// Used https://stackoverflow.com/questions/22387586/measuring-execution-time-of-a-function-in-c
		// as a reference for both functions
		auto start = std::chrono::high_resolution_clock::now();
		fibR recursive(userInt);
		recursive.PrintFibonacci();
		auto end = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
		std::cout << "It took " << duration << " microseconds to run the recursive implemenation." << std::endl;

		//Run the iterative fibonacci implementation and print out the runtime
		start = std::chrono::high_resolution_clock::now();
		fibNR iterative(userInt);
		iterative.PrintFibonacci();
		end = std::chrono::high_resolution_clock::now();
		duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
		std::cout << "It took " << duration << " microseconds to run the iterative implemenation." << std::endl;

		//Ask user if they would like to run the sequence again
		std::cout << "Would you like to run the sequence for another number? \n";
		std::cout << "1. Yes 2. No" << std::endl;
		inputValidation(userChoice, errorMsg, 1, 2);
	}

	return 0;
}