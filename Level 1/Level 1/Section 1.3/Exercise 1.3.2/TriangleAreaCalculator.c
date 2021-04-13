/*
* Level_1 Exercise 1.3.2: program to promote user to input base and height to calculate the
* surface area of the triangle with one 90 degree angle
*
* @file TriangleAreaCalculator.c
* @author Chunyu Yuan
* @version 1.0 11/27/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O


/*
* Declare a function
* Function to promote the user to input base and height
* print the calculated surface area
*
* @function calculator()
* @param none
* @return none
*/
void calculator(void);



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


	calculator(); // call function calculator

	return 0;

}




void calculator()
{
	float base, height, surface; // declare the base height and surface

	printf("Please input base :\n"); // remind user to input the base

	scanf_s("%f", &base);            // promote the user to input base

	printf("Please input height :\n"); //remind user to input the height 

	scanf_s("%f", &height);  // promote the user to input height


	printf("Your inputs' base and height : %f and %f \n", base, height);// print the base and height which user inputed

	surface = base * height / 2; // calculate the triangle surface area

	printf("The surface area result of the triangle is %f ", surface); // print the calculate area result

}