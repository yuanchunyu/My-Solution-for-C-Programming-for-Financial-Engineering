/*
* Level_5 Exercise 3.5.5:
* Test program for Template Method Pattern
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

	Shape* shapes[3];                //declare a shape array with 3 elements
	shapes[0] = new Circle(Point(0,0),1);         //create a Circle object and assign it to first element of this shape array
	shapes[1] = new Point(10, 1);           //create a Point object and assign it to second element of this shape array
	shapes[2] = new Line(Point(0, 0), Point(0, 1));           //create a Line object and assign it to third element of this shape array

	//Test Print() funciton
	//for loop , iterate to test each shape element Print() function 
	for (int i = 0; i != 3; i++) 
	{ 
		cout << "Test Shape " << i << " Print() funciton " << endl;
		shapes[i]->Print(); //call Print() function in the Shape 
		cout << "\n";
	}
	
	//for loop, iterate to delete elements 
	for (int i = 0; i != 3; i++)
	{
		delete shapes[i];
	}
	
	return 0;//return 0 to end program 
}