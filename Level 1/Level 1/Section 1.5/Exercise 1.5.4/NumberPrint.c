/*
* Level_1 Exercise 1.5.4: program to print the number digit by digit 
* by using a recursive function
*
* @file NumberPrint.c
* @author Chunyu Yuan
* @version 1.0 11/29/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O
#include "NumberPrint.h" // header file for function printnumber()

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
	int input; // declare one number for later digit by digit printing

	// promote the user to input the number for later digit by digit printing
	printf("Please input the number you want to display digit by digit: \n");
	scanf_s("%d", &input);

	printf("After call the function printnumber(int num): \n");
	// call the function for the input number to  digit by digit printing
	printnumber(input);


	return 0;

}

/*
* Function printnumber to digit by digit print a integer
* It is a recursive function
*
* @function printnumber(int num)
* @param int num // one integer for digit by digit printing
* @return none
*/
void printnumber(int num)
{
	
	if (num < 0)  // check if the number is negative 
	{

		putchar('-'); // print the negative sign 
		num = (-1)*num; // transfer the negative number to a positive number
		printnumber(num); // continue the next digit print

	}
	else if (num / 10 == 0) // check if it comes to the last digit or it is only one digit
	{
		putchar(num % 10 + '0'); // print the digit character
	}
	else
	{
		// firstly continue the next digit print
		// then print current digit (e.g. 123 -> 123)
		// otherwise, the result will be reversed and it is wrong order(e.g. 123 -> 321)
		printnumber(num / 10); 
		putchar(num % 10+'0'); 

	}


}


