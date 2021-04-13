/*
* Level_3 Exercise 2.2.1:
* Header file for Points in two dimensions
*
* @file Point.hpp
* @author Chunyu Yuan
* @version 1.0 02/08/2021
*
*/

#ifndef Point_HPP //checks whether the Point_HPP has been defined
#define Point_HPP //define Point_HPP

#include <iostream>// Standard Input / Output Streams Library

//point Class declaration
class Point
{
	//private members
private:
	double m_x; // X coordinate
	double m_y; // Y coordinate

	//public functionality
public:
	// Constructors and destructor
	Point();								// Default constructor
	Point(double newX, double newY);		// constructor with x coordinate and y coordinate

	~Point(); // Destructor

	//Selectors
	double GetX() const;					// Access the x value
	double GetY() const;					// Access the y value

	// Modifiers
	void SetX(double newX);                // Set the x value
	void SetY(double newY);                // Set the y value

	std::string ToString() const;          //ToString() that returns a string description of the point


	
};

#endif // end of if statement for Point_HPP