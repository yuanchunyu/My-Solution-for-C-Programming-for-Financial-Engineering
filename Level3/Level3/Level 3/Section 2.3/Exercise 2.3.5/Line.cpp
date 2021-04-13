/*
* Level_3 Exercise 2.3.5:
* Source file for Line class
*
*
* @file Line.cpp
* @author Chunyu Yuan
* @version 1.0 02/09/2021
*
*/

#include "Line.hpp" // Header file for line class
#include "Point.hpp"  // Header file for point class
#include <sstream>  // library that provides templates and types that enable interoperation between stream buffers and string objects
#include <cmath>    // library that declares a set of functions to compute common mathematical operations and transformations
#include <iostream>// Standard Input / Output Streams Library

// Default constructor, set the points to 0, 0
Line::Line() : startPoint(0,0), endPoint(0,0) // Colon syntax!!!!!!!!
{

}

//Constructor Initialize using new startPoint and new  endPoint
Line::Line(const Point& newStartP, const Point& newEndP)
{
	startPoint = newStartP;
	endPoint = newEndP;

}


//copy constructor
Line::Line(const Line& line)
{
	startPoint = line.startPoint;
	endPoint = line.endPoint;

}

// Destructor
Line::~Line()
{

	std::cout << "See you my line.\n";
}


//Selectors
// Access the start-point
Point Line::startP() const
{
	return startPoint;
}

// Access the end-point
Point Line::endP() const
{
	return endPoint;
}


// Modifiers
// Set the start-point
void Line::startP(const Point& newStartP)
{
	startPoint = newStartP;
}

// Set the end-point
void Line::endP(const Point& newEndP)
{
	endPoint = newEndP;
}


//return the description of the line
std::string Line::ToString() const
{
	std::string str;  //  declares description string
	str = "Line information: \n";
	str = str + "Start point: " + startPoint.ToString()+'\n'; //startpoint's description and add it to line's description string
	str = str + "End point: " + endPoint.ToString() + '\n';//endpoint's description and add it to line's description string

	return str; //return line description string

	
}

//calculate the line's length and return 
double Line::Length() const
{
	double result = startPoint.Distance(endPoint); //use the distance  function on the startpoint to calculate the length of this line
	return result; //return result
}
