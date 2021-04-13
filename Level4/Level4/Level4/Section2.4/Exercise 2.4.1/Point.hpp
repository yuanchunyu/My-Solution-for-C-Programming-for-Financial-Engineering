/*
* Level_4 Exercise 2.4.1:
* Header file for Point Class
*
* add a few operators to the Point class
* the original header file is 1.6 version which is the same as the header file in exercise 2.3.7
*
* @file Point.hpp
* @author Chunyu Yuan
* @version 1.7 02/10/2021
*
*/



#ifndef POINT_HPP //checks whether the POINT_HPP has been defined
#define POINT_HPP //define POINT_HPP

#include <iostream> // Standard Input / Output Streams Library

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
	Point(const Point& point);                //copy Constructor
	~Point();   // Destructor

	//Selectors

	double X() const;                      // Access the x value
	double Y() const;                      // Access the y value

	// Modifiers

	void X(const double& newX) { m_x = newX; };        //default inline function to set the x value
	void Y(const double& newY) { m_x = newY; };        //default inline function to set the y value


	std::string ToString() const;          //ToString() that returns a string description of the point


	//double DistanceOrigin() const;         // Calculate the distance to the origin (0, 0)
	double Distance() const;                 // Calculate the distance to the origin (0, 0)

	//double Distance(Point p) const;        // Calculate the distance between two points
	double Distance(const Point& p) const; // The input point is changed by reference and calculate the distance between two points	



	Point operator - () const; // Negate the coordinates.
	Point operator * (double factor) const; // Scale the coordinates.
	Point operator + (const Point& p) const; // Add coordinates.
	bool operator == (const Point& p) const; // Equally compare operator.
	Point& operator = (const Point& source); // Assignment operator.
	Point& operator *= (double factor); // Scale the coordinates & assign

	
};

// normal inline function for x getter
inline double Point::X() const
{
	return m_x;
}
// normal inline function for y getter
inline double Point::Y() const
{
	return m_y;
}
#endif// end of if statement for POINT_HPP