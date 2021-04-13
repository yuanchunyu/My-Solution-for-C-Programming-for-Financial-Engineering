/*
* Level_4 Exercise 2.5.1:
* Test file for Dynamically Creating Objects
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
	
	//create Point objects on the heap with new using the default constructor
	Point* p1 = new Point();
	//create Point objects on the heap with new using the constructor
	Point* p2 = new Point(1,2);
	//create Point objects on the heap with new using the copy constructor
	//assign it to pointer (Point*)	variables p3
	Point* p3 = new Point(*p2);

	std::cout << "Call Distance():" << std::endl;
	//call the Distance() function on the pointers 
	std::cout << p1->Distance(*p2) << std::endl;

	std::cout << "\nSend the Point pointers to cout:" << std::endl;
	//send the Point pointers to cout
	std::cout << *p1 << " "<< *p2 <<" "<< *p3 << std::endl;

	// delete the Point objects created with new
	delete p1;
	delete p2;
	delete p3;

	//declare int value size for the array
	int size;

	//remind user to input the size for the array
	std::cout << "Please input the array size:\n " << std::endl;
	std::cin >> size; //promote the user to input the size 

	//Point points_arr[size]; //error

	//for creating the points array on the heap using new, this step can only use the default constructor
	Point* points_arr =new Point[size];

	//Use default constructor to create the Objects
	for (int i = 0; i < size;i++) //for loop, from the first element to the last element in the array
	{
		//initize separately point element using default constructor
		points_arr[i] = Point();
		//check each point element description after default constructor 
		std::cout << "Point index " << i << " " << points_arr[i] << std::endl;

	}

	//Yes I can use other constructor for the object created
	//Use other constructor than default constructor to create the Objects
	for (int i = 0; i < size;i++) //for loop, from the first element to the last element in the array
	{
		//initize point element using constructor, both of x and y are i value
		points_arr[i] = Point(i,i);
		//check each point element description after constructor 
		std::cout << "Point index " << i << " " << points_arr[i] << std::endl;

	}

	//delete array
	delete[] points_arr;


	return 0;// return 0 to end program
}