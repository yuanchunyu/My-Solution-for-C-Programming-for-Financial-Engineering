/*
* Level_5 Exercise 3.5.5:
* Source file for Point Class
*
* same file as Level_5 Exercise 3.5.4
*
* @file Point.cpp
* @author Chunyu Yuan
* @version 1.15 02/13/2021
*
*/

#include "Point.hpp"  // Header file for point class
#include <sstream>    // library that provides templates and types that enable interoperation between stream buffers and string objects
#include <cmath>      // library that declares a set of functions to compute common mathematical operations and transformations
#include <iostream>   // Standard Input / Output Streams Library
#include "Shape.hpp"  // Header file for Shape class


// own namesace Chunyu
namespace Chunyu
{
	//CAD namespace 
	namespace CAD
	{
		// Default constructor : x = y =0.0
		Point::Point() : Shape(), m_x(0), m_y(0)// Colon syntax
		{
			//std::cout << "Calling Default constructor\n";

		}

		// Constructor Initialize using newX and newY
		Point::Point(double newX, double newY) :Shape(), m_x(newX), m_y(newY)// Colon syntax
		{
			//std::cout << "Calling constructor Initialize using newX and newY\n";
		}

		//copy constructor
		Point::Point(const Point& p) :Shape(), m_x(p.m_x), m_y(p.m_y)// Colon syntax
		{
			//std::cout << "Calling copy constructor \n";
		}

		Point::Point(double xyval) : Shape(), m_x(xyval), m_y(xyval)//constructor with one double value, set both x and y to this value
		{

		}


		// Destructor
		Point::~Point()
		{
			//std::cout << "Calling Destructor, See you my point..\n";
			//std::cout << "See you my point..\n";
		}

		//return the description of the point
		std::string Point::ToString() const
		{

			std::stringstream m_x_str, m_y_str; // declares two stringstream objects

			m_x_str << m_x;   // put x double to string buffer
			m_y_str << m_y;   // put y double to string buffer

			std::string str;  // declares description string

			std::string s = Shape::ToString();  //call the ToString() method of the Shape base class
			str = "\nPoint information: \n"; //initize string
			str += s + '\n';   //append ID string to the description
			str += "\"Point(" + m_x_str.str() + "," + m_y_str.str() + ")\""; // append description string that recieved x and y string from string buffer

			return str; //return description string
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

			result = std::sqrt((m_x - p.m_x) * (m_x - p.m_x) + (m_y - p.m_y) * (m_y - p.m_y));//calculate the distance between two points and assign the result

			return result; //return the result

		}

		// Negate the coordinates
		Point Point::operator - () const
		{
			return Point(-m_x, -m_y);// Negate the x and y coordinates
		}



		// Scale the coordinates.
		Point Point::operator * (double factor) const
		{
			return Point(factor * m_x, factor * m_y); //Scale the x and y coordinates.
		}


		// Add coordinates.
		Point Point::operator + (const Point& p) const
		{
			Point result;                   //declare a new point object
			result.m_x = m_x + p.m_x;       //new point's x coordinate equals current x plus new x
			result.m_y = m_y + p.m_y;       //new point's y coordinate equals current y plus new y

			return result;                  //return new point
		}


		// Equally compare operator.
		bool Point::operator == (const Point& p) const
		{
			return m_x == p.m_x && m_y == p.m_y; //check if the new point's coordinates equal current point's coordinates
		}

		// Assignment operator
		Point& Point::operator = (const Point& source)
		{
			std::cout << "Calling Assignment operator\n";
			// Avoid doing assign to myself
			if (this == &source)   //check if the address is the same
				return *this;      // if address same, directly return itself

			Shape::operator =(source); //call the assignment operator of the Shape base	class

			m_x = source.m_x;     //assign new point's x coordinate to current x coordinate
			m_y = source.m_y;     //assign new point's y coordinate to current y coordinate

			return *this;         //return itself to end assigning

		}


		// Scale the coordinates & assign.
		Point& Point::operator *= (double factor)
		{
			m_x = factor * m_x;          // factor current x coordinate   
			m_y = factor * m_y;          // factor current y coordinate  

			return *this;           //return itself to end assigning
		}

		// Send to ostream.
		std::ostream& operator << (std::ostream& os, const Point& p)
		{
			//access private member of point and send them to the os argument
			os << "\"Point(" << p.m_x << "," << p.m_y << ")\"";
			return os;  //return ostream argument
		}

		//override Draw() from Shape class in Point class
		void Point::Draw() const
		{
			std::cout << "Draw Points" << std::endl;
			std::cout << (*this) << "\n" << std::endl;//print point description 

		}
	}
}

