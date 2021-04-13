/*
* Level_1 Exercise 1.3.4: program to  use the fact that 0 (zero) is interpreted as FALSE and non-zero
* is interpreted as TRUE
*
* @file CheckTrueFalse.c
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
	
	int married; //declare an integer called married 

	//remind user to input number to answer the question "Are you married?"
	printf("Are you married(please input 0 if FALSE, or other number if TRUE)?: \n");

	//promote the user to input the number
	scanf_s("%d", &married);

	//print the answer based on the input number(if input is 0, print FALSE, otherwise print TRUE)
	printf("%s", married == 0 ? "FALSE" : "TRUE" );


	return 0;

}