/*
* Level_3 Exercise 2.3.5:
* test program for Line class
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/09/2021
*
*/
#include "Line.hpp"  // Header file for line class
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
	
	double x, y;  //declare x and y for start-point's x coordinate and y coordinate

	std::cout << "Please input start point x coordinate:" << std::endl; //remind user to input x coordinate for start point
	std::cin >> x; //promote user to input x coordinate for start point

	std::cout << "Please input start point y coordinate:" << std::endl;//remind user to input y coordinate for start point
	std::cin >> y;//promote user to input y coordinate for start point

	Point startPoint(x, y); //create start point with input x and y

	std::cout << "Start point information: " << startPoint.ToString() <<std::endl; //print the start point description



	std::cout << "Please input end point x coordinate:" << std::endl;//remind user to input new x coordinate for endpoint
	std::cin >> x; //promote user to input new x coordinate for endpoint

	std::cout << "Please input end point y coordinate:" << std::endl;//remind user to input new y coordinate for endpoint
	std::cin >> y;//promote user to input new y coordinate for endpoint

	Point endPoint(x,y);//create end point with new input x and y

	std::cout << "End point information: " << endPoint.ToString() << std::endl; //print the end point description

	Line line = Line(startPoint, endPoint); //create line object with startpoint and endpoint

	std::cout << "Call Line ToString() function:  " <<  std::endl; //remind user to call ToString() function

	// call ToString() function to get description of the line and print
	std::cout << "Line information: " << line.ToString() << std::endl; 
	
	//remind user to call Line getter function for startpoint
	std::cout << "Call Line getter function for startpoint:  " << std::endl;
	
	// call startP()function to get startpoint's description of the line and print
	std::cout << "Start point information: " << line.startP().ToString() << std::endl;

	//remind user to call Line getter function for endpoint
	std::cout << "Call Line getter function for endtpoint:  " << std::endl;
	
	// call endP() function to get endpoint's description of the line and print
	std::cout << "End point information: " << line.endP().ToString() << std::endl;


	//create a new line object using default constructor
	Line line1;
	// call ToString() function to get description of the line and print
	std::cout << "Line information: " << line1.ToString() << std::endl;

	// create new startpoint and endpoint for test setter in lin class
	Point newSP (0, 0); //new startpoint
	Point newEP (1, 1);//new endpoint

	//call and test setter function for startpoint
	std::cout << "\nCall Line setter function for startpoint:  " << std::endl;
	line1.startP(newSP);

	//call and test setter function for endpoint
	std::cout << "\nCall Line setter function for endtpoint:  " << std::endl;
	line1.endP(newEP);

	//test if the line's description is updated by call ToString() of line1
	std::cout << "\nCall Line ToString() function:  " << std::endl;
	std::cout << "\nNew line information: " << line1.ToString() << std::endl;

	//call anf test the Length() to calculate line1's length
	std::cout << "\nCall Line Length function :  " << std::endl;
	std::cout << "\nLine length: " << line1.Length() << std::endl;


	



	return 0;// return 0 to end program
}