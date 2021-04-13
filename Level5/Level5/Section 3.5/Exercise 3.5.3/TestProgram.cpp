/*
* Level_5 Exercise 3.5.3:
* Test program for Virtual Destructors
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

	Shape* shapes[3];              //declare a shape array with 3 elements
	shapes[0] = new Shape;         //create a shape object and assign to first member of shape array
	shapes[1] = new Point;        //create a point object and assign to second member of shape array
	shapes[2] = new Line;            //create a line object and assign to third member of shape array

	//Test for Virtual Destructors
	//for loop to iterate to delete the shape array members
	for (int i = 0; i != 3; i++) delete shapes[i];

	//without the destructor is declared virtual in the base class, only call shape distructors
	//After the destructor is declared virtual in the base class, now I will see the line and point distructor called

    
	//Test for circle destructor called when delete shape value
	Shape* shapes1=new Circle;// create a circleobject and assign to a Shape* variable
	delete shapes1;   //delete Shape* variable to check if circle destructor called

	return 0; //return 0 to end program 
}