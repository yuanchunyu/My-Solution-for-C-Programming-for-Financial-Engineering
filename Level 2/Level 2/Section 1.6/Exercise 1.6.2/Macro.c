/*
* Level_2 Exercise 1.6.2:
* A C-program has two macros MAX2(x,y) and MAX3(x,y,z). These macros can return the
* maximum value of the given arguments. The macro MAX3  will make use of the macro
* MAX2. 
*
* @file Macro.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/

// Preprocessor for include file
#include <stdio.h>// C tyle I/O
#include "Defs.h" // header file for Macro MAX2(x,y) and Macro MAX3(x,y,z)

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
	int x, y, z; // declare three value x, y, z
	int result1; // declare value result1 for MAX2(x,y)'s result
	int result2; // declare value result2 for MAX3(x,y,z)'s result

	printf("Please input the number x and y:\n"); // reminder user to input the number x and y
	scanf_s("%d %d", &x,&y);// promote user to input x and y

	result1 = MAX2(x, y); // call Macro MAX2(x,y) to get result and assign it to value result1
	printf("After call macro MAX2, the result is %d\n\n", result1); // print result1 which came from the Macro MAX2(x,y)

	printf("Please input the number x, y and z:\n");// reminder user to input the number x, y and z
	scanf_s("%d %d%d", &x, &y, &z);// promote user to input x, y and z

	result2 = MAX3(x, y, z);// call Macro MAX3(x,y,z) to get result and assign it to value result2
	printf("After call macro MAX3, the result is %d\n\n", result2); // print result2 which came from the Macro MAX3(x,y,z)


	return 0;// return 0 to end program
}