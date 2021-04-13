/*
* Level_1 Exercise 1.5.2: program to print the factorials of a number.
*
* @file Factorials.c
* @author Chunyu Yuan
* @version 1.0 11/29/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O

/*
* Function to calculate the factorials of a number
* Return type of factorial_cal(int num) expects a long long int 
*
* @function factorial_cal(int num)
* @param int num // one number for calculation
* @return long long int //return the result of the factorials of a number
*/
long long int factorial_cal(int num);

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
	int input; // declare a number for the factorial calculation
	
	// promote the user to input the number
	printf("Please input the number whcih you want to do factorial: \n");
	scanf_s("%d", &input);

	// call  the factorial_cal to get the calculation result
	long long int  output = factorial_cal(input);

	// print the result
	printf("The result is %lld", output);


	return 0;

}


// function factorial_cal body, it is a recursive function
long long int  factorial_cal(int num)
{
	if (num == 0) // 0! =1
	{
		return 1;
	}
	else 
	{
		return num * factorial_cal(num-1); // current number multiply the next result of the funciton
	}



}
