/*
* Level_1 Exercise 1.5.3: program that consists of two source-files. The first (Main.c) contains
* the main() function and gives the variable ia value. The second source-file (Print.c)
* multiplies i by 2 and prints it.
*
*
*
* @file Print.c
* @author Chunyu Yuan
* @version 1.0 11/29/2020
*
*/



// Preprocessor for include file
#include <stdio.h> // C tyle I/O
#include "Print.h" // header file for function print



/*
* define the function print
* Given a integer, then multiply it by 2 and print it 
*
* @function print(int num)
* @param int num // one integer 
* @return none
*/
void print(int num) {

	printf("%d\n", num * 2);


}