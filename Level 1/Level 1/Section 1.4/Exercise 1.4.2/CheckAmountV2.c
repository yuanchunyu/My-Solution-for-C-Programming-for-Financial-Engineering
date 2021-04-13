/*
* Level_1 Exercise 1.4.2: program to  ask for text input from the keyboard. The output of this
* program should be the amount of characters, the amount of words and the amount of
* newlines that have been typed. Multiple consecutive spaces shouldnot be counted as
* multiple words. Using do while
*
* @file CheckAmountV2.c
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

	int num_char = 0; //declare the number of the characters, initiate  0 
	int num_line = 1; //declare the number of the lines, initiate 1
	int num_word = 0; // declare the number of words, initiate 0

	char cur_char;  // current typed character
	char pre_char = ' '; // previous typed character

	printf("Please input the text, (CTRL + D) stop: \n");

	// do - while loop, promote user to input the text
	do
	{ 
		cur_char = getchar(); //get the character which user typed

		// check if user typed the shutdown code CTRL + D, (its ASCII-value equals 4)
		// if not, update the number of characters, lines and words
		if (cur_char != 4) 
		{

			++num_char;  // increase the number of characters since user typed 

			if (cur_char == '\n') // check if the user type the enter key to start a newline
				++num_line;       // increase the number of lines

			if (cur_char != ' ' && pre_char == ' ') // check if user typed consecutive spaces to make sure user typed word
				++num_word;  // increase the number of words

			pre_char = cur_char; // update previous typed character to new typed character

		}


	} 
	while (cur_char  != 4); // check if user typed the shutdown code CTRL + D to jump out of the loop

	printf(" number of lines = %d\n number of characters = %d\n number of words = %d", num_line, num_char, num_word);// print the results




	return 0;

}


