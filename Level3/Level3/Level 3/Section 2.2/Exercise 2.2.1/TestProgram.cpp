/*
* Level_3 Exercise 2.2.1:
* Test program for point class
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/08/2021
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
	std::cout <<"Point's x coordinate: "<< point.GetX() << std::endl; //Print the point X coordinate using the get x function

	std::cout << "\nCall GetY() function" << std::endl; // remind user calling GetY() function
	std::cout << "Point's y coordinate: " << point.GetY() << std::endl;//Print the point X coordinate using the get y function



	return 0;// return 0 to end program
}