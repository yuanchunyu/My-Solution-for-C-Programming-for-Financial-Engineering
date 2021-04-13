/*
* Level_1 Exercise 1.3.6: program to shift any number two places to the right. Input should be an
* integer. Output should be the shifted result, as well as output an indication of
* whether a logical or arithmetic shift is performed
*
* @file CheckShift.c
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
	int input; //declare an signed integer input
	int output; //declare an integer which will save shifted result
	unsigned int input1;//declare an unsigned integer input1

	/*
	* e.g. input is -2, output is -1
	* 
	* */
	//remind user to input the signed integer
	printf("Please input an integer which  will be assigned to a signed integer: \n");
	
	//promote the user to input
	scanf_s("%d", &input);
	
	//make input right shift two place and assign the result to output
	output = input >> 2;

	// print the indication that the right shift is arithmetic shift and output result
	printf("Since the input is signed integer, right shift is arithmetic shift\n");
	printf("The 2 place right shift for %d is %d\n\n ", input, output);


	/*
	* e.g. input1 is 2, output is 0
	*
	* */
	//remind user to input the unsigned integer
	printf("Please input an integer which  will be assigned to a unsigned integer: \n");
	
	//promote the user to input
	scanf_s("%d", &input1);

	//make input1 right shift two place and assign the result to output
	output = input1 >> 2;

	// print the indication that the right shift is logical shift and output result
	printf("Since the input1 is unsigned integer, right shift is logical shift\n");
	printf("The 2 place right shift for %d is %d\n ", input1,  output);



	return 0;
}