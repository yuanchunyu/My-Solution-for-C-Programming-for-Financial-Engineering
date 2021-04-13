/*
* Level_4 Exercise 2.4.4:
* Test file for Point Class ad Line Class
*
* move the << operator of Point and Line inside the class definition and declare it as friend
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.10 02/13/2021
*
*/

#include "Point.hpp"  // Header file for point class
#include "Line.hpp" // Header file for line class
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
	

	// create one point object p1
	Point p1(1, 2);

	//test << operator for printing Point
	std::cout << "Test << operator for printing Point\n" << std::endl;
	std::cout << p1 << std::endl; //test << for point

	// create another point object p2
	Point p2(2, 2);

	//create one line object with p1 as the startpoint and p2 as the endpoint
	Line line(p1, p2);

	//test << operator for printing line
	std::cout << "\nTest << operator for printing Line\n" << std::endl;
	std::cout << line << std::endl;//test << for line


	return 0; // return 0 to end program
}