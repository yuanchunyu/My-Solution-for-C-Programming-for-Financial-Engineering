/*
* Level_3 Exercise 2.3.6:
* test program for Circle class
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/09/2021
*
*/
#include "Circle.hpp"// Header file for Circle class
#include "Point.hpp" // Header file for point class
#include <iostream>// Standard Input / Output Streams Library

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
	
	double x, y,radius;   //declare three double value for centre point' x and y coordinate and radius

	std::cout << "Please input centre point x coordinate:" << std::endl; //remind user to input the x coordinate
	std::cin >> x;   // promote user to input x coordinate

	std::cout << "Please input centre point y coordinate:" << std::endl; //remind user to input the y coordinate
	std::cin >> y;// promote user to input y coordinate

	std::cout << "Please input radius :" << std::endl; //remind user to input the radius
	std::cin >> radius; //promote to input radius

	Circle circle(Point(x, y), radius);  //create circle object with new centre point which has user's input x and y,  and input radius 
	
	std::cout << "Test Circle ToString(): "  << std::endl;   //remind user calling ToString()
	std::cout << "Circle information: " << circle.ToString() <<std::endl;// call ToString() to get circle description and print 



	Point tempP1(0,0);// create a new centre point 

	std::cout << "\nTest Circle setter CentrePoint(Point(0,0)): " << std::endl;//remind user testing setter centre-point function
	circle.CentrePoint(tempP1);// use setter function to set the new centre point

	//check  circle desctription after setting new centrepoint
	std::cout << "Circle description: " << circle.ToString() << std::endl;

	std::cout << "\nTest Circle getter CentrePoint(): " << std::endl;//remind user testing getter centre-point function
	Point tempP2(circle.CentrePoint());  //create a new point and copy the returned centrepoint information from calling getter function
	std::cout << "Circle Centre Point information: " << tempP2.ToString() << std::endl; //print centre point desctiption

	//remind user testing setter radius function
	std::cout << "\nTest Circle setter Radius(1): " << std::endl;
	circle.Radius(1.0); //use setter to set new radius
	std::cout << "Circle Radius information: " << circle.ToString() << std::endl; //get and print circle description 


	//remind user testing getter radius function
	std::cout << "\nTest Circle getter Radius(): " << std::endl;
	std::cout << "Circle Radius information: " << circle.Radius() << std::endl; //get and print circle radius 


	//remind user testing Diameter() function
	std::cout << "\nTest Circle Diameter(): " << std::endl;
	std::cout << "Circle Diameter information: " << circle.Diameter() << std::endl; //get and print diameter of circle

	//remind user testing Area() function
	std::cout << "\nTest Circle Area(): " << std::endl;
	std::cout << "Circle Area information: " << circle.Area() << std::endl;//get and print area of circle

	//remind user testing Circumference() function
	std::cout << "\nTest Circle Circumference(): " << std::endl;
	std::cout << "Circle Circumference information: " << circle.Circumference() << std::endl; // get and print circumference of circle



	return 0; // return 0 to end program
}