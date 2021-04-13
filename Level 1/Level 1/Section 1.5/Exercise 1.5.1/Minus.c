/*
* Level_1 Exercise 1.5.1: program to call a function minus(). This function receives two arguments
* and returns the difference (regular subtraction, not absolute). This difference should be
* printed on screen.
*
* @file Minus.c
* @author Chunyu Yuan
* @version 1.0 11/30/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O


// receives two arguments


/*
* Function to receive two arguments and 
* return the difference(regular subtraction, not absolute).
*
* @function minus(float num1, float num2)
* @param float num1 // first number
* @param float num2 // second number
* @return float //the difference(num1-num2)
*/
float minus(float num1, float num2);

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
	float num1_input, num2_input; // declare two float numbers: first number, second number
	float output; //output
	
	printf("Please input two numbers to minus: \n\n");

	// promote user to input first number
	printf("The first number: \n");
	scanf_s("%f", &num1_input);

	// promote user to input second number
	printf("The second number: \n");
	scanf_s("%f", &num2_input);

	//call the minus function to get the subtraction different result
	output = minus(num1_input, num2_input);

	//prit result
	printf("The minus result is %f\n", output);


	return 0;

}

// function minus body
float minus(float num1, float num2)
{

	return num1 - num2; // regular subtraction

	
}