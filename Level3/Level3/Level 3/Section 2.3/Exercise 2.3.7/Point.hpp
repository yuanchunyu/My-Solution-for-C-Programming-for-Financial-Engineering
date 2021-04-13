/*
* Level_3 Exercise 2.3.7:
* header file for Points in two dimensions
*
* make the setters and getters of the Point class inline functions
*
* @file Point.hpp
* @author Chunyu Yuan
* @version 1.6 02/09/2021
*
*/


#ifndef Point_HPP //checks whether the Point_HPP has been defined
#define Point_HPP //define Point_HPP

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
#endif// end of if statement for Point_HPP