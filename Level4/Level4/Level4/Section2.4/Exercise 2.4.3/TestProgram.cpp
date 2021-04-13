/*
* Level_4 Exercise 2.4.3:
* Test file for Point Class
*
* adding  explicit constructor
* prevent the usage of constructors are implicit conversion operators
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.9 02/13/2021
*
*/

#include "Point.hpp"  // Header file for point class
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
	/*Point p(1.0, 1.0);
	* if (p == 1.0) 
	* 	std::cout << "Equal!" << std::endl;
	* else 
	* 	std::cout << "Not equal" << std::endl;*/

	//error for above code  Point constructor with the single double argument is implicitly used to
	//convert the number in the if statement to a Point object

	//create a point object
	Point p(1.0, 1.0);

	//test new constructor explicit Point(double value)
	if (p == (Point)1.0) //explicit convert double 1.0 to a point and check if it equals to point p 
		std::cout << "Equal!" << std::endl;
	else 
		std::cout << "Not equal" << std::endl;

	//result for ablove is Equal!
	

	


	return 0;// return 0 to end program
}