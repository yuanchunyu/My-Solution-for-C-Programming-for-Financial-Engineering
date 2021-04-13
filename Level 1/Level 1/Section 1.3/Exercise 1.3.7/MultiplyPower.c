/*
* Level_1 Exercise 1.3.7: program to  efficiently multipliy a number by a factor 2 to the power n. The
* number to multiply and n are variables, which get a value at the start of the program
*
* @file MultiplyPower.c
* @author Chunyu Yuan
* @version 1.0 11/28/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O


/*
* Controls operation of the program
* Return type of main() expects an int
*
* @function main()
* @param none
* @return 0
*/
int main()
{
	int input;  // declare the number to multiply
	int n;   //declare the power n 

	int output; // declare the multiplication result

	// promote the user to input the number to multiply
	printf("Please input the number you want to multiply:\n");
	scanf_s("%d", &input);

	// print the number which user input to multiply
	printf("Your input number is %d\n", input);

	// promote the user to input the power n 
	printf("Please input the power n(2^n) you want to multiply:\n");
	scanf_s("%d", &n);

	// print the power number n which user input 
	printf("Your input power n(2^n) is %d\n", n);

	// use left shift to efficiently multiply the number by a factor 2 to the power n and assign result to output
	output = input << n;

	// print the output
	printf("The shifted output is %d, which  is the result of multiplying %d by a factor 2 to the power %d \n", output, input, n);





	return 0;
}