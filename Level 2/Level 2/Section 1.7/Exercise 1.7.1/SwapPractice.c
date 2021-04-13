
/*
* Level_2 Exercise 1.7.1:
* C-program that using pointers to swap two value
*
* @file SwapPractice.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O


/*
* using pointers as arguments to swap two value
* 
*
* @function Swap(int* a, int* b)
* @param two pointers: int* a, int* b
* @return none
*/
void Swap(int* a, int* b) 
{
	int temp = *a; // declare value temp = the value pointed to by a
	*a = *b; //the value pointed to by a = the value pointed to by b
	*b = temp;//the value pointed to by b = the value temp

}

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
	int i ,  j ; //init two value i, j

	printf("Please input two number i and j: \n"); // remind user to input value i and j
	scanf_s("%d %d", &i, &j); // promote user to input value i and j
	printf("Before call Swap function:\ni = %d\nj = %d\n\n ", i, j); //print the value the user typed
	Swap(&i, &j); // call function Swap() with value i's address and value j's adress
	printf("After call Swap function: \ni = %d\nj = %d\n\n ", i, j); // print the value of i and j after called the function swap






	return 0;// return 0 to end program
}