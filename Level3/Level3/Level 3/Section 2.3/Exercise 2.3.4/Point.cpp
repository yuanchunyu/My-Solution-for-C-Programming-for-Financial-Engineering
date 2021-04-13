/*
* Level_3 Exercise 2.3.4:
* Source file for Points in two dimensions
*
* test const
*
* @file Point.cpp
* @author Chunyu Yuan
* @version 1.5 02/09/2021
*
*/

#include "Point.hpp"  // Header file for point class
#include <sstream>    // library that provides templates and types that enable interoperation between stream buffers and string objects
#include <cmath>      // library that declares a set of functions to compute common mathematical operations and transformations
#include <iostream>// Standard Input / Output Streams Library

// Default constructor : x = y =0.0;
Point::Point() : m_x(0), m_y(0) // Colon syntax
{
	std::cout << "Calling Default constructor\n";

}

// Constructor Initialize using newX and newY
Point::Point(double newX, double newY) : m_x(newX), m_y(newY)// Colon syntax
{
	std::cout << "Calling constructor Initialize using newX and newY\n";
}

//copy constructor
Point::Point(const Point& point) :m_x(point.m_x), m_y(point.m_y)// Colon syntax
{
	std::cout << "Calling copy constructor \n";
}

// Destructor
Point::~Point()
{
	std::cout << "Calling Destructor\n";
	std::cout << "See you my point..\n";
}



//Selectors
// Access the x value
double Point::X() const
{
	return m_x;
}

// Access the y value
double Point::Y() const
{
	return m_y;
}

// Modifiers
// Set the x value
void Point::X(double newX)
{
	m_x = newX;
}
// Set the y value
void Point::Y(double newY)
{
	m_y = newY;
}

//return the description of the point
std::string Point::ToString() const
{
	std::stringstream m_x_str, m_y_str; // declares two stringstream objects

	m_x_str << m_x;   // put x double to string buffer
	m_y_str << m_y;   // put y double to string buffer

	std::string str;  // declares description string
	str = "\"Point(" + m_x_str.str() + "," + m_y_str.str() + ")\""; // description string contains recieved x and y string from string buffer

	return str;  //return description string
}

// function to calculate the distance to the origin (0, 0)
double Point::Distance() const
{
	double result;//declare a double value for saving the distance

	result = std::sqrt((m_x - 0.0) * (m_x - 0.0) + (m_y - 0.0) * (m_y - 0.0));//calculating the distance to the origin (0, 0) and assign the result

	return result;// return the calculated distance

}

// function to calculate the distance between two points
double Point::Distance(const Point& p) const
{
	double result; //declare a double value for saving the distance

	result = std::sqrt((m_x - p.X()) * (m_x - p.X()) + (m_y - p.Y()) * (m_y - p.Y()));//calculate the distance between two points and assign the result

	return result; //return the result

}