/*
* Level_3 Exercise 2.2.2:
* Test program for Points in two dimensions
* Adding distance functions to the Point class
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.1 02/09/2021
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
	double x, y; // declare two double value x and y for X coordinate and Y coordinate 

	std::cout << "Please input point x coordinate:" << std::endl; // remind user to input X coordinate
	std::cin >> x; //promote user input value and assign value to x

	std::cout << "Please input point y coordinate:" << std::endl;// remind user to input Y coordinate
	std::cin >> y;//promote user input value and assign value to y

	Point point; //create a Point object using the default constructor

	point.SetX(x); //Set the X coordinate entered by the user using the X setter function
	point.SetY(y); //Set the Y coordinate entered by the user using the Y setter function

	std::cout << "\nCall ToString()" << std::endl;  //remind user calling ToString function
	std::cout << point.ToString() << std::endl; // print the point information 

	std::cout << "\nCall GetX() function" << std::endl; //remind user calling GetX() function
	std::cout << "Point's x coordinate: " << point.GetX() << std::endl; //Print the point X coordinate using the get x function

	std::cout << "\nCall GetY() function" << std::endl; // remind user calling GetY() function
	std::cout << "Point's y coordinate: " << point.GetY() << std::endl;//Print the point X coordinate using the get y function


	
	std::cout << "\nCall DistanceOrigin() " << std::endl;//remind user calling DistanceOrigin() function

	std::cout << "\nThe distance between "<<point.ToString()<<" and origin Point(0,0): " 
	<< point.DistanceOrigin() << std::endl;   //call DistanceOrigin() function to calculate the distance to the origin (0, 0) and print


	Point point1; //create another Point object point1 using the default constructor
	double x1, y1; // declare another double value x and y for X coordinate and Y coordinate 

	std::cout << "Please input point1 x coordinate:" << std::endl;// remind user to input new X coordinate
	std::cin >> x1; //promote user to input new x

	std::cout << "Please input point1 y coordinate:" << std::endl;// remind user to input new Y coordinate
	std::cin >> y1;//promote user to input new y

	point1.SetX(x1); //Set new X coordinate entered by the user using the X setter function
	point1.SetY(y1);//Set new Y coordinate entered by the user using the Y setter function

	std::cout << "\nCall Distance(Point p) " << std::endl; //remind calling Distance(Point p) function 


	// pritn point and point1 description, call Distance(Point p) function to calculate the distance between point1 and point, and print 
	std::cout << "\nThe distance between" <<point.ToString()<<" and "<<point1.ToString()<<" : "	<< point.Distance(point1) << std::endl;



	return 0;// return 0 to end program
}