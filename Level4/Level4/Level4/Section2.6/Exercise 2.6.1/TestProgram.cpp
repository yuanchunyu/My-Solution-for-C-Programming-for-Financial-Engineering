/*
* Level_4 Exercise 2.6.1:
* Test program for Namespace
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/13/2021
*
*/
#include "Point.hpp"  // Header file for point class
#include "Line.hpp"   // Header file for line class
#include "Circle.hpp" //header file for circle class
#include "Array.hpp"   //Header file for Array class

#include <iostream>// Standard Input / Output Streams Library

using namespace std; //using declaration for std

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
	//Test full namespace for Point class
	cout<<"Test full namespace for Point class"<<endl;
	Chunyu::CAD::Point p1(1, 2); //create point object (1,2)
	cout << p1 << endl; //print point description

	//Test using declaration for using a single class (Line).
	cout << "Test using declaration for using a single class (Line)" << endl;
	using namespace Chunyu::CAD;
	Line l1(p1, p1); //create line object with startpoint p1 and endpoint p1
	//print line description 
	cout << l1 << endl;

	cout << "Test declaration for a complete namespace (Containers)" << endl;
	//Test declaration for a complete namespace (Containers)
	using namespace Chunyu::Containers;
	//create Array object with 1 size 
	Array array(1);
	//set first element to p1
	array[0] = p1;
    //call GetElement(0) to get first element 
	cout <<"First element is "<< array.GetElement(0) << endl;


	//Test using the Circle class by creating a shorter alias 
	cout << "Test using the Circle class by creating a shorter alias " << endl;
	namespace CCAD = Chunyu::CAD;
	// create a circle with centerpoint is p1, radius is 2
	CCAD::Circle c1(p1, 2);
    // print circle description 
	cout << c1 << endl;





	

	return 0; // return 0 to end program
}