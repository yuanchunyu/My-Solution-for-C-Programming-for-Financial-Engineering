/*
* Level_2 Exercise 1.9.1:
* C-program that reads the characters from the keyboard and shows them on screen
* 
* @file InputPractice.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
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

	printf("Please input the character\n");
	printf("Hit 'Enter' to display the input \n");
	printf("CTRL+A ending the input \n");
	
	char c; //declare character c which record the character typed
	while ((c=getchar())!=1) //check if the typed character is ^A
	{
		if (c != '\n')   //if the character is not enter
		{
			//display one character
			//please note that the terminal is line-buffered 
			//only submits input to the program when a newline character is encountered.
			putchar(c); 
		}
		else
		{
			
			printf("\n");// new line
		
		}

	}


	return 0;// return 0 to end program

}