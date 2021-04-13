/*
* Level_1 Exercise 1.3.3: code sample to understand the variable assigning in th printf() 
*
* @file PrintResults.c
* @author Chunyu Yuan
* @version 1.0 11/28/2020
*
*/

// Preprocessor for include file
#include <stdio.h> //  C tyle I/O

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
	int x;  // declare an integer x 

	x = -3 + 4 * 5 - 6; // (-3 + 4 * 5 -6) --> (-3 + 20 -6) --> (11), x=11

	printf("x=%d\n", x); // printed result on the screen: x=11

	x = 3 + 4 % 5 - 6; // (3 + 4 % 5 - 6) --> (3 + 4 - 6) --> (1), x=1 

	printf("x=%d\n", x); // printed result on the screen:  x=1

	x = -3 * 4 % -6 / 5; // (-3 * 4 % -6 / 5) --> (-12 % -6 / 5) --> (0 / 5) --> (0), x=0

	printf("x=%d\n", x); // printed result on the screen: x=0

	x = (7 + 6) % 5 / 2; // ((7 + 6) % 5 / 2) --> (13 % 5 / 2) --> (3 / 2) --> (1), x=1

	printf("x=%d\n", x); // printed result on the screen: x=1

	return 0;
}