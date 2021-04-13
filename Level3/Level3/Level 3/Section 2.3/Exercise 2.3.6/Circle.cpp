/*
* Level_3 Exercise 2.3.6:
* Source file for Circle class
*
*
* @file Circle.hpp
* @author Chunyu Yuan
* @version 1.0 02/09/2021
*
*/



#define _USE_MATH_DEFINES   //using the constant for PI named M_PI in Microsoft�s version of the math library

#include "Circle.hpp"      //header file for circle class
#include <cmath>           // library that declares a set of functions to compute common mathematical operations and transformations 
#include <sstream>         // library that provides templates and types that enable interoperation between stream buffers and string objects

// Default constructor, set the centre point to 0, 0 and radius to 0
Circle::Circle(): centrePoint(0,0), m_radius(0)
{

}

//Constructor Initialize using new centre Point and new  radius
Circle::Circle(const Point& newCentreP, const double& newRadius)
{
	centrePoint = newCentreP;
	m_radius = newRadius;
}

//copy constructor
Circle::Circle(const Circle& circle)
{
	centrePoint = circle.centrePoint;
	m_radius = circle.m_radius;
}

// Destructor
Circle::~Circle()
{
	std::cout << "Bye my circle...\n";
}

//Selectors
// Access the centre point
Point Circle::CentrePoint() const
{
	return centrePoint;

}

// Access the radius
double Circle::Radius()const
{
	return m_radius;
}

// Modifiers
// Set the cenre point
void Circle::CentrePoint(const Point& newCentreP)
{
	centrePoint = newCentreP;
}

//Set the radius
void Circle::Radius(const double& newRadius)
{
	m_radius = newRadius;
}


//calculate and return diameter of the circle
double Circle::Diameter() const
{
	return 2 * m_radius; //diameter equals 2 times radius
}

//calculate and return area of the circle
double Circle::Area() const
{
	return M_PI * m_radius * m_radius; //area formular: PI * radius * radius 
}


//calculate and return circumference of the circle
double Circle::Circumference() const
{
	return M_PI * m_radius * 2;            //circumference formular: PI * radius * 2
}

//return the description of the circle
std::string Circle::ToString() const
{
	std::string str;                       //  declares description string for this circle
	std::stringstream m_radius_str;        // declares one stringstream object
	m_radius_str << m_radius;              //put radius double value to string buffer
	str = "Circle information: \n";
	str = str + "Circle Centrepoint: " + centrePoint.ToString() + '\n'; // description string contains centre point description
	str = str + "Circle Radius: " + m_radius_str.str() + '\n'; // description string contains radius string from string buffer

	return str;// return description string for this circle
}
