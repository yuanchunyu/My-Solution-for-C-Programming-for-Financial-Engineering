/*
* Level_6 Exercise 4.2a.1:
* Test program for Templated Array Class
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/

#include "Point.hpp" // Header file for point class
#include "Line.hpp" // Header file for line class
#include "Circle.hpp"// Header file for circle class
#include "Array.hpp"  //header file for Array Class
#include "ArrayException.hpp" //header file for ArrayException Class
#include <iostream> // Standard Input / Output Streams Library


using namespace std; //namespace declaration for using std
using namespace Chunyu::CAD; //namespace declaration for using Chunyu::CAD
using namespace Chunyu::Containers; //namespace declaration for using Chunyu::Containers
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
	//Test  Array<Point>:
	cout << "\nTest Array<Point>:\n" << endl;
	Array<Point> array(3);  //declare a Array object with size value is 3 , typename is point 

	//for loop, iterate to create a new point and assign to the element member in Array Object
	for (int i = 0;i < 3;i++) {
		try
		{
			array[i] = Point(i, i); //create new point and assign it to element member
		}
		catch (ArrayException& error)
		{
			cout << error.GetMessage() << endl;//error message
		}
	}

	//for loop, iterate to get element member in Array Object and print
	for (int i = 0;i < 3;i++) {
		try
		{

			cout << array[i] << endl; //get point element and print
		}
		catch (ArrayException& error)
		{
			cout << error.GetMessage() << endl;//error message
		}
	}


	//Test  Array<Line>:
	cout << "\nTest Array<Line>:\n" << endl;

	Array<Line> array1(3);  //declare a Array object with size value is 3 , typename is Line 
	//for loop, iterate to create a new Line object and assign to the element member in Array Object
	for (int i = 0;i < 3;i++) {
		try {

			array1[i] = Line(Point(i, i), Point(1, 1));//create new Line and assign it to element member
		}
		catch (ArrayException& error)
		{
			cout << error.GetMessage() << endl;//error message
		}
	}

	//for loop, iterate to get element member in Array Object and print
	for (int i = 0;i < 3;i++) {
		try
		{
			cout << array1[i] << endl; //get line lement and print
		}
		catch (ArrayException& error)
		{
			cout << error.GetMessage() << endl;//error message
		}
	}

	//Test  Array<Circle>:
	cout << "\nTest Array<Circle>:\n" << endl;

	Array<Circle> array2(3);  //declare a Array object with size value is 3 , typename is Circle

	//for loop, iterate to create a new Circle object and assign to the element member in Array Object
	for (int i = 0;i < 3;i++) {
		try
		{
			array2[i] = Circle(Point(i, i), i); //create new Circle and assign it to element member
		}
		catch (ArrayException& error)
		{
			cout << error.GetMessage() << endl;//error message
		}
	}

	//for loop, iterate to get element member in Array Object and print
	for (int i = 0;i < 3;i++) {
		try
		{
			cout << array2[i] << endl; //get circle and print
		}
		catch (ArrayException& error)
		{

			cout << error.GetMessage() << endl;//error message
		}
	}


	return 0; //return 0 to end program 

}