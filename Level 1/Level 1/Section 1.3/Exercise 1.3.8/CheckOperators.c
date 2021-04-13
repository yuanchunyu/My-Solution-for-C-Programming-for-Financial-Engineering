/*
* Level_1 Exercise 1.3.8: program to use assignment-operators
*
* @file CheckOperators.c
* @author Chunyu Yuan
* @version 1.0 11/28/2020
*
*/

// Preprocessor for include file
#include <stdio.h>// C tyle I/O

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
	// declare  three integer
	int x = 2;
	int y;
	int z;

	x *= 3 + 2; // 3+2 is the first priority, then x =x * 5, x=10
	printf("x=%d\n", x); // the print result is x=10

	x *= y = z = 4; // z=4 is the first priority, then y=z, y=4, then x = x*y, x=40
	printf("x=%d\n", x); // the print result is x=40

	x = y == z; // y ==z is the first priority y==z->1, then x=1
	printf("x=%d\n", x); // the print result x=1

	return 0;
}