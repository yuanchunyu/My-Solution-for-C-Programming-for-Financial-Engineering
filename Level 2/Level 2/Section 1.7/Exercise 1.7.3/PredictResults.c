/*
* Level_2 Exercise 1.7.3:
* Predict what will be printed on the screen
*
* @file PredictResults.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/


// Preprocessor for include file
#include <stdio.h> // C tyle I/O
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line
// Create and initialse array
int a[] = { 0, 1, 2, 3, 4 };

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
	int i; // declare i
	int* p; // declare pointer
	for (i = 0; i <= 4; i++) PRD(a[i]); // result: 01234, for loop to print array value
	NL;// Print new line
	for (p = &a[0]; p <= &a[4]; p++) PRD(*p); // result: 01234, p pointed to each element of the array, print value pointed by p
	NL;// Print new line
	NL;// Print new line
	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]); // result: 01234, p pointed to the  array, increase p to make p point the next value in the array and print
	NL;// Print new line
	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i)); // result: 024, p pointed to the  array. In for loop each step increase 2 to the p  which point the even index element of this array 
	NL;// Print new line
	NL;// Print new line
	for (p = a + 4; p >= a; p--) PRD(*p); // result: 43210, p point the last element of the array. In for loop, each step reduce 1 from p to make p points previous element of array and print
	NL;// Print new line
	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]); // result: 43210, p point the last element of the array. In for loop, each step, the -i of current p to make p points ith element of array and print
	NL;// Print new line
	for (p = a + 4; p >= a; p--) PRD(a[p - a]); // result: 43210, p point the last element of the array. In for loop, each step reduce 1 from p to make p points previous element of array, p-a means the distance between current p and array address and print
	NL;// Print new line
	return 0;// return 0 to end program
}