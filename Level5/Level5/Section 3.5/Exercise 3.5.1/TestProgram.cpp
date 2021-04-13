/*
* Level_5 Exercise 3.5.1:
* Test program for Polymorphic ToString() Function
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/

#include "Point.hpp"  // Header file for point class
#include "Line.hpp"   // Header file for line class
#include "Circle.hpp" //header file for circle class
#include "Shape.hpp" //header file for Shape class
#include <iostream>// Standard Input / Output Streams Library


using namespace std; //namespace declaration for using std
using namespace Chunyu::CAD; //namespace declaration for using Chunyu::CAD

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

	
	cout << "Test Shape class ToString():" << endl;
	Shape* s =new Shape(); // Create shape.
	cout << (*s).ToString() << endl; // Print shape.

	cout << "\nTest the ToString() function of Point called when use a Shape* that contains a Point :" << endl;
	Shape* s1 =new Point (10, 20); // Create point.
	cout << (*s1).ToString() << endl; // Print point.

	cout << "\nTest the ToString() function of Line called when use a Shape* that contains a Line :" << endl;
	Shape* s2 = new Line(Point(1, 2), Point(3, 4)); // Create line startpoint (1,2) and endpoint(3,4)
	cout << (*s2).ToString() << endl; // Print line

	cout << "\nTest the ToString() function of Circle called when use a Shape* that contains a Circle :" << endl;
	Shape* s3 = new Circle(Point(1, 2), 3); // Create circle with centrepoint (1,2) and radius is 3
	cout << (*s3).ToString() << endl; // Print Circle
	

	
	return 0;//return 0 to end program 
}