/*
* Level_2 Exercise 1.7.2:
* Implementing the function Length(char str[]) which can calculate the length of a string
*
* @file LengthPractice.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/



// Preprocessor for include file
#include <stdio.h> // C tyle I/O
#define MAXLINE 30 //define constant MAXLINE = 30
// String lenght declaration
int Length(char str[]);

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
	char string[MAXLINE + 1]; // Line of maxium 30 chars + \0
	int c; // The input character
	int i = 0; // The counter
	// Print intro text
	printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);
	// Get the characters
	while ((c = getchar()) != EOF && i < MAXLINE && c != 4) // !=enter
	{
		// Append entered character to string
		string[i++] = (char)c;
	}
	string[i] = '\0'; // String must be closed with \0
	printf("String length is %d\n", Length(string)); // print the length result of the string
	
	return 0; // return 0 to end program
}
/* Implement the Length() function here */


/*
*Calculating the length of a string
*
* @function Length()
* @param a string
* @return the length of a string, Integer type
*/
int Length(char str[])
{
	int count = 0; //declare a count value which will record the length of the string

	// reading each character in the string and check if the character is '\0', 
	//if '\0', it means finish reading the string
	while (str[count] != '\0') 
	{
		count++; // current character is in the string, increasing the length record 
	}
	return count;// return length result of the string


}