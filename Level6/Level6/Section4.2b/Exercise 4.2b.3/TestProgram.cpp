
/*
* Level_6 Exercise 4.2b.3:
* Test program for Point Array (concrete inheritance)
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/15/2021
*
*/


#include "PointArray.hpp" //header file for PointArray class
#include "Point.hpp" // Header file for point class
#include <iostream> // Standard Input / Output Streams Library
#include "ArrayException.hpp" //header file for ArrayException

using namespace std;//namespace declaration for using std
using namespace Chunyu::CAD; //namespace declaration for using Chunyu::CAD
using namespace Chunyu::Containers; //namespace  Chunyu::Containers using declaration



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

	// Test PointArray default constructor.
	cout<<"Test PointArray default constructor:"<<endl;
	PointArray array1; //create a new  PointArray object array
	cout << "The array default size is " << array1.DefaultSize() << endl;


	// Test PointArray constructor with size is 3.
	cout << "Test PointArray constructor:" << endl;
	PointArray array2(3); //create a new  PointArray object array2 with size is 3
	cout << "The array size is " << array2.Size() << endl;

	// Test PointArray [] operator
	cout << "Test PointArray [] operator:" << endl;
	try
	{
		array2[0] = Point(0, 2);  //create point object and assign it to first element of array2
	}
	catch (ArrayException& error)//catch index exception
	{
		cout << error.GetMessage() << endl; //get the element and print
	}

	cout << array2[0] << endl; //get the element and print

    // Test PointArray SetElement()
	cout << "Test PointArray SetElement():" << endl;
	try
	{
		array2[1] = Point(0, 3);  //create point object and assign it to second element of array2
		array2[2] = Point(3, 2); //create point object and assign it to third element of array2
	}
	catch (ArrayException& error)//catch index exception
	{
		cout << error.GetMessage() << endl; //get the element and print
	}
	cout << array2[1] << endl; //get the element and print
	cout << array2[2] << endl; //get the element and print

	// Test PointArray GetElement()
	cout << "Test PointArray GetElement():" << endl;
	try
	{
		cout << array2.GetElement(2) << endl;//get second element and print
	}
	catch (ArrayException& error) //catch index exception
	{
		cout << error.GetMessage() << endl; //get the element and print
	}
	

	// Test PointArray Length()
	cout << "Test PointArray Length() (3 size ):" << endl;

	double result = array2.Length(); // call Length() and assign result to a double value 

	cout << "The calculated length is " << result << endl;


	cout << "Test PointArray Length() (1 size ):" << endl;
	PointArray array3(1);                            //create a new PointArray object array3 with 1 size 
	cout << "The array size is " << array3.Size() << endl; //check the size of new PointArray  array3

	//create new point and assign to first element of array3
	array3[0] = Point(0, 2);

	
	result = array3.Length();// call Length() and assign result to a double value 

	cout << "The calculated length is " << result << endl; //print result




	return 0; //return 0 to end the program

}