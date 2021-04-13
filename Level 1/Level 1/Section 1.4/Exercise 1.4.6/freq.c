/*
* Level_1 Exercise 1.4.6: program to count how many times each of the numbers 0-4 have been
* typed. Use a switch-case construction. Use default to count the number of other
* characters. The input will be halted with ^Z (EOF)
*
* @file freq.c
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
	int num_zero = 0; // number times of number zero typed
	int num_one = 0; // number times of number one typed
	int num_two = 0; // number times of number two typed
	int num_three = 0; // number times of number three typed
	int num_four = 0;  // number times of number four typed
	int num_other = 0; // number times of other characters typed

	char cur_char;    // current chatacter typed

	//remind user to input
	printf("Please input any number or character, the input will be halted with ^Z (EOF):\n");

	while ((cur_char = getchar()) != EOF) // check if current character is EOF
	{
		switch (cur_char)  // swtich-case to check typed character case
		{
		case '0':         // typed character is '0'
			++num_zero;   // increase the number times of number zero typed
			break;

		case '1':         // typed character is '1'
			++num_one;    // increase the number times of number one typed
			break;
		
		case '2':         // typed character is '2'
			++num_two;    // increase the number times of number two typed
			break;

		case '3':         // typed character is '3'
			++num_three;  // increase the number times of number three typed
			break;

		case '4':         // typed character is '4'
			++num_four;   // increase the number times of number four typed
			break;

		default:         // typed character is other character
			++num_other; // increase the number times of other character typed
			break;



		}

	}

	// print the amount of times a certain number or other character has been typed
	printf("\n number times of zero typed: %d\n", num_zero);
	printf(" number times of one typed: %d\n", num_one);
	printf(" number times of two typed: %d\n", num_two);
	printf(" number times of three typed: %d\n", num_three);
	printf(" number times of four typed: %d\n", num_four);
	printf(" number times of other characters typed: %d\n", num_other);


	return 0;

}


