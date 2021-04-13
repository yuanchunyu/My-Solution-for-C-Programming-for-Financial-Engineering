/*
* Level_5 Exercise 3.5.4:
* Test program for Abstract Functions Draw() function
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
	Shape* shapes[10];   //declare a shape array with 10 elements
	shapes[0] = new Line;   //create a Line object and assign it to first element of this shape array
	shapes[1] = new Point;  //create a Point object and assign it to second element of this shape array
	shapes[2] = new Circle; //create a circle object and assign it to third element of this shape array
	shapes[3] = new Line(Point(0,0),Point(0,0)); //create a Line object and assign it to third element of this shape array
	shapes[4] = new Point(1,1);            //create a Point object and assign it to 4th element of this shape array
	shapes[5] = new Circle(Point(0,0),10); //create a circle object and assign it to 5th element of this shape array
	shapes[6] = new Circle(Point(10, 0), 100); //create a circle object and assign it to 6th element of this shape array
	shapes[7] = new Line(Point(1, 1), Point(0, 0)); //create a Line object and assign it to 7th element of this shape array
	shapes[8] = new Circle(Point(10, 0), 10); //create a circle object and assign it to 8th element of this shape array
	shapes[9] = new Line(Point(1.0, 2.5), Point(3.4, 5.2)); //create a Line object and assign it to 9th element of this shape array

	//for loop, iterate to tes the Draw() function
	for (int i = 0; i != 10; i++) shapes[i]->Draw();

	//for loop, iterate to delete elements 
	for (int i = 0; i != 10; i++) delete shapes[i];

	
	return 0; //return 0 to end program 
}