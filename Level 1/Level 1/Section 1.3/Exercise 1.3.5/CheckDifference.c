/*
* Level_1 Exercise 1.3.5: program to clearly show the difference between --i and i--
*
* @file CheckDifference.c
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
	
	int j = -1, i = 1; // declare two integer j and i, then initizes j = -1, i = 1

	j = i--; // assign i-- result to j

	// print i and j value after above operation (i=0, j=1)
	printf("i = 1, j = -1. After asigned i-- to j, i=%d, j=%d\n", i, j); 


	i = 1; // re-initize i =1

	j = --i; // assign --i result to j

	// print i and j value after above operation (i=0, j=0)
	printf("i = 1, j = -1. After asigned --i to j, i=%d, j=%d\n", i, j);


	return 0;

}
