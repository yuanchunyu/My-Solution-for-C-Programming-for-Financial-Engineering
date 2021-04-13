/*
* Level_2 Exercise 1.8.1:
* C-program that prints the contents of a struct called Article
*
* @file TestArticle.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/



// Preprocessor for include file
#include <stdio.h> // C tyle I/O


// struct Article declaration
struct Article
{
	unsigned int article_Number; //Article number which is positive integer number
	unsigned int quantity; //Quantity number which is positive integer number
	char description[21]; // Description of max 10 characters

};


/*
* gets the address of the struct article as a parameter and print the article's information
* 
* @function Print()
* @param a struct pointer
* @return none
* 
* declare the function Print()
*/
void Print(struct Article* article);

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
	// initiate a struct Article article1 with the content of Article Number, Quantity Number and Description
	struct Article article1 = {12345, 100, "article hello word"};

	// call the Print function with the address of struct Article
	Print(&article1);
    
    return 0;// return 0 to end program

}

/*
* gets the address of the struct article as a parameter and print the article's information
*
* @function Print()
* @param a struct pointer
* @return none
*
* implementing of  the function Print
*/
void Print(struct Article* article)
{
	printf("The article information: \n\n"); 
	printf("Article Number: %u \n", article->article_Number); // print the struct Article's Article Number
	printf("Quantity: %u \n", article->quantity);// print the struct Article's Quantity Number
	printf("Description: %s \n", article->description);// print the struct Article's Description

}