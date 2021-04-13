/*
* Level_4 Exercise 2.5.2:
* Test file for Creating Array of Pointers
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/13/2021
*
*/

#include "Point.hpp"  // Header file for point class
#include <iostream>// Standard Input / Output Streams Library


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
	

	


	//Create an array of Point pointers with 3 elements on the heap
	Point** points_arr =new Point*[3];

	//Use default constructor to create the Objects
	for (int i = 0; i < 3;i++)//iterate the for loop 
	{
		points_arr[i] = new Point( );//initize each element using default constructor


	}

	//Use other constructor to create the Objects
	for (int i = 0; i < 3;i++)//iterate the for loop 
	{
		points_arr[i] = new Point(i,i);//initize each element using  constructor
			
	}

	//Iterate the array and print each point in the array.
	for (int i = 0; i < 3;i++)
	{
		std::cout << *points_arr[i] << std::endl; //print each point element description

	}

	//Iterate the array and delete each point in the array.
	for (int i = 0; i < 3;i++)
	{
		delete points_arr[i]; //delete point


	}

	//delete the point array
	delete[] points_arr;

	


	return 0;// return 0 to end program
}