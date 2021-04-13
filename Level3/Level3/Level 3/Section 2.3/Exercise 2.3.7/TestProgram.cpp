/*
* Level_3 Exercise 2.3.7:
* test program for Points in two dimensions
*
* use for testing new point class with inline functions
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.6 02/09/2021
*
*/
#include "Point.hpp" // Header file for point class
#include <iostream> // Standard Input / Output Streams Library

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
	Point point;  // declare a point object
	double x, y;  // declare two double value x and y for X coordinate and Y coordinate 

	std::cout << "Please input point x coordinate:" << std::endl; // remind user to input X coordinate
	std::cin >> x;//promote user input value and assign value to x

	std::cout << "Please input point y coordinate:" << std::endl; // remind user to input Y coordinate
	std::cin >> y;//promote user input value and assign value to y

	std::cout << "\nCall X() function to set x" << std::endl;// remind user to call X() function to set x
	point.X(x); //call X() function to set x

	std::cout << "\nCall Y() function to set y" << std::endl;// remind user to call Y() function to set y
	point.Y(y);//call Y() function to set y

	std::cout << "Call ToString()" << std::endl; //remind user calling ToString function
	std::cout << point.ToString() << std::endl;  // print the point information 

	std::cout << "\nCall X() function to get x" << std::endl; // remind user to call X() function to get x
	std::cout << "Point's x coordinate: " << point.X() << std::endl;//call X() function to get x and print

	std::cout << "\nCall Y() function" << std::endl;// remind user to call Y() function to get y
	std::cout << "Point's y coordinate: " << point.Y() << std::endl;//call Y() function to get y and print


	// remind user to Distance() function to calculate the distance to origin Point(0,0)
	std::cout << "\nCall Distance() to check distance from origin " << std::endl;
	//call the Distance() function to calculate the distance to origin Point(0,0) and print
	std::cout << "\nThe distance between " << point.ToString() << " and origin Point(0,0): "
	<< point.Distance() << std::endl;



	//Point point1; //create another Point object point1 using the default constructor
	double x1, y1; // declare another double value x and y for X coordinate and Y coordinate 

	std::cout << "Please input point1 x coordinate:" << std::endl;// remind user to input new X coordinate
	std::cin >> x1; //promote user to input new x

	std::cout << "Please input point1 y coordinate:" << std::endl;// remind user to input new Y coordinate
	std::cin >> y1;//promote user to input new y


	//point1.SetX(x1); //Set new X coordinate entered by the user using the X setter function
	//point1.SetY(y1);//Set new Y coordinate entered by the user using the Y setter function
	Point point1(x1, y1); //create another Point object point1 with x1 and y1

	std::cout << "\nCall Distance(Point p) " << std::endl; //remind calling Distance(Point p) function 


	// pritn point and point1 description, call Distance(Point p) function to calculate the distance between point1 and point, and print 
	std::cout << "\nThe distance between" << point.ToString() << " and " << point1.ToString() << " : " << point.Distance(point1) << std::endl;



	return 0;// return 0 to end program
}







