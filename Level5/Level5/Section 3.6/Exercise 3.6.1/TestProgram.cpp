/*
* Level_5 Exercise 3.6.1:
* Test program for Exception Handling: out of array
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/

#include "Point.hpp"  // Header file for point class
#include "Array.hpp"  //header file for Array Class
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

	Array array(3); //declare a Array object with size value is 3 

	//Test index operator 
	cout << "Test  index operator throw -1 if the index was too small or too big. " << endl;
	//Test index operator throw -1 if the index was  too big.
	try
	{
		cout << array[4] << endl;   //try to access 4th element in the Array object
	}
	catch (int error)   //catch error
	{
		//error message
		cout << "The index is too big which is beyond the array size" << endl;
	}

	//Test index operator throw -1 if the index was  too small.
	try
	{
		cout << array[-10] << endl; //try to access -10th element in the Array object
	}
	catch (int error)  //catch error
	{
		//error message
		cout << "The index is too small which is beyond the array size" << endl;
	}



	//Test GetElement() 
	cout << "\nTest  GetElement() throw -1 if the index was too small or too big. " << endl;
	//Test GetElement() throw -1 if the index was  too big
	try
	{
		array.GetElement(10);  //try to access 10th element in the Array object
	}
	catch (int error)//catch error
	{
		//error message
		cout << "The get index is too big which is beyond the array size" << endl;
	}

	//Test GetElement() throw -1 if the index was  too small
	try
	{
		array.GetElement(-10); //try to access -10th element in the Array object
	}
	catch (int error) //catch error
	{
		//error message
		cout << "The get index is too small which is beyond the array size" << endl;
	}




	//Test SetElement() 
	cout << "\nTest  SetElement()  throw -1 if the index was too small or too big. " << endl;
	//Test SetElement() throw -1 if the index was  too big
	try
	{
		array.SetElement(10, Point(1, 1)); //try to assign new point to 10th element in the Array object
	}
	catch (int error)//catch error
	{
		//error message
		cout << "The set index is too big which is beyond the array size" << endl;
	}

	//Test SetElement() throw -1 if the index was  too small
	try
	{
		array.SetElement(-10, Point(1, 1)); //try to assign new point to -10th element in the Array object
	}
	catch (int error)//catch error
	{
		//error message
		cout << "The set index is too small which is beyond the array size" << endl;
	}


	return 0;//return 0 to end program 

}