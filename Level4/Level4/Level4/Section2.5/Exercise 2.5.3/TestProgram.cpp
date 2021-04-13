/*
* Level_4 Exercise 2.5.3:
* Test program for Array Class
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/13/2021
*
*/
#include "Array.hpp" // Header file for Array class
#include "Point.hpp" // Header file for Point class
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
	//create a Array object with default constructor 
	Array* array = new Array();

	//Test the Size() function in array
	std::cout << "Test the Size() function:\n" << std::endl;
	//call Size() in array to get size and print
	std::cout << "Size: " << array->Size()<< std::endl;


	//create a new Array object with 3 size and assign it to array
	array= new Array(3);

	// Test [] operator for writing.
	(*array)[0] = Point(5, 5);//create a new point(5,5) and assign it to the first element in the inside array 
	(*array)[1] = Point(1.0, 6.5); //create a new point(1.0,6.5) and assign it to the second element in the inside array 
	(*array)[2] = Point(1.0, 7.5); //create a new point(1.0, 7.5) and assign it to the third element in the inside array
	
	// Test [] operator for reading.
	//read the first element and print 
	std::cout << "First element: " << (*array)[0] << std::endl;
	//read the second element and print 
	std::cout << "Second element: " << (*array)[1] << std::endl;
	//read the third element and print 
	std::cout << "Third element: " << (*array)[2] << std::endl;
	
	//Test GetElement() function
	std::cout << "\nTest GetElement() function :\n" << std::endl;
	std::cout << "Iterate the inside array and GetElement() function "<< std::endl;
	for (int i = 0;i < array->Size();i++)//iterate the for loop
	{
		std::cout << i<<" element: "<<array->GetElement(i) << std::endl;//GetElement() function to get ith element and print
	}

	//Test the GetElement() function to call out-bound index
	std::cout << "\nTest the GetElement() function to call out-bound index :" << std::endl;
	std::cout << "Call -1th element case: " << array->GetElement(-1) << std::endl;

	//create a new point object(5,15)
	Point p1(5, 15);

	//Test SetElement() function
	std::cout << "Before test SetElement(), the first element" << std::endl;
	std::cout << array->GetElement(0) << std::endl; //call GetElement(0) to get first point description adn print
	array->SetElement(0, p1); //set first element to point p1
	std::cout << "After called SetElement(), the first element" << std::endl; 
	std::cout << array->GetElement(0) << std::endl; //call GetElement(0) to get first point description adn print

	//Test [] operator for writing
	std::cout << "Before test [] operator for writing, the second element" << std::endl;
	std::cout << (*array)[1] << std::endl; //use [] operator to read second element 
	(*array)[1]= p1;               // use [] operator to set second point to p1
	std::cout << "After test [] operator for writing, the first element" << std::endl;
	std::cout << (*array)[1] << std::endl;  //use [] operator to read second element 

	

	return 0; // return 0 to end program
}