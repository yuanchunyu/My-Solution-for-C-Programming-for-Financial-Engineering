/*
* Level_8 Exercise 3:
* Source file for Visitor Class
*
* variant visitor that moves the shapes
*
* @file Visitor.cpp
* @author Chunyu Yuan
* @version 1.0 02/22/2021
*
*/


#include<iostream> // Standard Input / Output Streams Library
#include <boost/variant/static_visitor.hpp>
#include "Point.hpp" //header file for Array class
#include "Line.hpp"  // header file for Line class
#include "Circle.hpp" // header file for circle class
#include "Visitor.hpp"

using namespace Chunyu::CAD;//namespace declaration for using Chunyu::CAD


// Default constructor
Visitor::Visitor(): boost::static_visitor<void>(),m_dx(0), m_dy(0) //colon syntax
{

}

// Copy constructor
Visitor::Visitor(const Visitor& source): boost::static_visitor<void>(),m_dx(source.m_dx), m_dy(source.m_dy)
{

}

// Constructor with x- and y-coordinates argument
Visitor::Visitor(double new_x, double new_y):boost::static_visitor<void>(), m_dx(new_x), m_dy(new_y)
{

}

// Destructor
Visitor::~Visitor()
{

}

// Assignment operator
Visitor& Visitor::operator = (const Visitor& source)
{
	if (this == &source)  //check if the address is the same
		return *this;     //if same, return itself 
	//copy source x coordinate and assign this visitor
	m_dx = source.m_dx;
	//copy source y coordinate and assign this visitor
	m_dy = source.m_dy;

	return *this; //return this visitor
}

// () operator for Point,visit a point
void Visitor::operator () (Point& p) const
{
	p.X(p.X() + m_dx); //move the point's x coordinate m_dx
	p.Y(p.Y() + m_dy); // move the point's y coordinate m_dy
}

// () operator for Line, visit a line
void Visitor::operator () (Line& l) const
{
	//get line's start point and assign to tempory point p1
	Point p1 = l.startP();
	//get line's end point and assign to tempory point p2
	Point p2 = l.endP();

	//move the point p1's x coordinate m_dx
	p1.X(p1.X() + m_dx);
	//move the point p1's y coordinate m_dy
	p1.Y(p1.Y() + m_dy);
	//move the point p2's x coordinate m_dx
	p2.X(p2.X() + m_dx);
	//move the point p2's y coordinate m_dy
	p2.Y(p2.Y() + m_dy);

	//set line's start point to p1
	l.startP(p1);
	//set line's end point to p2
	l.endP(p2);
}

// () operator for Circle, visit a circle
void Visitor::operator () (Circle& c) const
{
	//get circle's centre point and assign to tempory point p1
	Point p1 = c.CentrePoint();

	//move the point p1's x coordinate m_dx
	p1.X(p1.X() + m_dx);
	//move the point p1's y coordinate m_dy
	p1.Y(p1.Y() + m_dy);

	//set ircle centre point
	c.CentrePoint(p1);
}





