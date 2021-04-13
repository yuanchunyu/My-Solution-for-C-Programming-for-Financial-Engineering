/*
* Level_2 Exercise 1.6.1: 
* C-program that contains two print macro calls. The first prints the variable a, the
* second prints the variables a and b. Printing happens by the use of the PRINT1 and
* PRINT2 macros that accept arguments.
*
* @file Macro.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O
#include "Defs.h"  //header file for Macro PRINT1 and Macro PRINT2


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
	int a, b; // define two variables

	printf("Please input the number a:\n"); // reminder user to input the number a
	scanf_s("%d", &a); // promote user to input a value
	printf("After call macro PRINT1\n"); // reminder user that it is calling Macro PRINT1
	PRINT1(a); // call Macro PRINT1

	printf("Please input the number a and b:\n");// reminder user to input the number a and number b
	scanf_s("%d %d", &a, &b); // promote user to input a value and b value
	printf("After call macro PRINT2\n"); // reminder user that it is calling Macro PRINT2
	PRINT2(a,b); // call Macro PRINT2




	return 0; // return 0 to end program
}