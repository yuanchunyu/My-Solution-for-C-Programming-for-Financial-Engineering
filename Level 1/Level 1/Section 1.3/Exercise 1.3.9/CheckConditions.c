/*
* Level_1 Exercise 1.3.9: program to predict conditional expression printing results
* 
*
* @file CheckConditions.c
* @author Chunyu Yuan
* @version 1.0 11/29/2020
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
	//declare three integers
	int x = 1;
	int y = 1;
	int z = 1;

	x += y += x; // (x = 1) --> (y = y + x, y = 2) --> (x = x + y, x = 3)

	printf("%d\n\n", (x < y) ? y : x); // the result is 3, since (3 < 2) --> x

	printf("%d\n", (x < y) ? x++ : y++); // the result is 2, since (3 < 2) --> y++, then y = y + 1, y = 3

	printf("%d\n", x); // the result is 3, since above contional expression didn't goto x++

	printf("%d\n", y); // the result is 3, reason is in above 

	return 0;
}