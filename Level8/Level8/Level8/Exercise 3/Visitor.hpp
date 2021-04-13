/*
* Level_8 Exercise 3:
* Header file for Visitor Class
*
* variant visitor that moves the shapes
* 
* @file Visitor.hpp
* @author Chunyu Yuan
* @version 1.0 02/22/2021
*
*/

#ifndef VISITOR_HPP //checks whether the VISITOR_HPP has been defined
#define VISITOR_HPP //define VISITOR_HPP

#include<iostream> // Standard Input / Output Streams Library
#include <boost/variant/static_visitor.hpp>
#include "Point.hpp" //header file for Array class
#include "Line.hpp"  // header file for Line class
#include "Circle.hpp" // header file for circle class

using namespace Chunyu::CAD;//namespace declaration for using Chunyu::CAD

//Visitor Class declaration
class Visitor : public boost::static_visitor<void>
{
	//private members
private:
	double m_dx; //x-coordinates
	double m_dy;  //y-coordinates

	//public functionality
public:

	Visitor(); // Default constructor

	Visitor(const Visitor& source); // Copy constructor

	Visitor(double new_x, double new_y); // Constructor with x- and y-coordinates argument

	~Visitor(); // Destructor

	
	Visitor& operator = (const Visitor& source); // Assignment operator

	void operator () (Point& p) const; // () operator for Point,visit a point
	void operator () (Line& l) const; // () operator for Line, visit a line
	void operator () (Circle& c) const; // () operator for Circle, visit a circle



};

#endif // end of if statement for VISITOR_HPP