/*
* Level_5 Exercise 3.4.2:
* Test program for creating Shape Base Class
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

	Shape s; // Create shape.
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.
	cout << s.ToString() << endl; // Print shape.
	cout << p.ToString() << endl; // Print point.
	cout << l.ToString() << endl; // Print line
	cout << "Shape ID: " << s.ID() << endl; // ID of the shape.

	cout << "Point ID: " << p.ID() << endl; // ID of the point. Does this work?     works
	cout << "Line ID: " << l.ID() << endl; // ID of the line. Does this work?       works

	Shape* sp; // Create pointer to a shape variable.
	sp = &p; // Point in a shape variable. Possible?                                 Yes
	cout << sp->ToString() << endl; // What is printed?                              Only print the ID

	// Create and copy Point p to new point.
	Point p2;
	p2 = p;
	cout << p2 << ", " << p2.ID() << endl; // Is the ID copied if you do not call
	                                       // the base class assignment in point?   
	                                       //  If not call the base class assignment, the ID will not be copied
	                                       //  If call the base class assignment, the ID will  be copied
	

	return 0;//return 0 to end program 
}