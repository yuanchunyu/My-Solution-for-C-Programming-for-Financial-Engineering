/*
* Level_1 Exercise 1.5.3: program that consists of two source-files. The first (Main.c) contains
* the main() function and gives the variable ia value. The second source-file (Print.c)
* multiplies i by 2 and prints it. 
*
* 
* 
* @file Main.c
* @author Chunyu Yuan
* @version 1.0 11/29/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O
#include "Print.h" // header file for function print


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

	int i; // declare a integer for later printing

	// promote the user to input the number
	printf("Please input the number for printing: \n");
	scanf_s("%d", &i);

	printf("\nAfter call the function print: \n");

	// call the print function
	print(i);



	return 0;

}


