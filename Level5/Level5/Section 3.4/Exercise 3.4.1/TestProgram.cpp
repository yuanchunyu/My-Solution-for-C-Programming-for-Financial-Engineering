/*
* Level_5 Exercise 3.4.1:
* Test program for that colon syntax can improve the performance of constructors
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/13/2021
*
*/
#include "Point.hpp"  // Header file for point class
#include "Line.hpp"   // Header file for line class
#include "Circle.hpp" //header file for circle class

#include <iostream>// Standard Input / Output Streams Library


using namespace std; // namespace std declaration 
using namespace Chunyu::CAD;// namespace Chunyu::CAD declaration 
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

	Line l;
/*
* without using colon syntax for constructor in Line class
* call 4 times constructors (2 times default constructors, 2 times other constructor)
* call 4 times destructors
* call 2 times assignment 
* 
* using colon syntax for constructor in Line class
* call 2 times constructors (2 times other constructors)
* call 2 times destructors
* call 0 times assignment 
* 
* Yes. Compared to without using colon syntax, the number of point constructor,
* destructor and assignment calls less than before 
* 
*/

	
	 
	return 0; //return 0 to end program 
}