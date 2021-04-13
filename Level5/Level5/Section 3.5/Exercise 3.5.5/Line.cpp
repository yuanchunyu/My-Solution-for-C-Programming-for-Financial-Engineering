/*
* Level_5 Exercise 3.5.5:
* Source file for Line class
*
* same file as Level_5 Exercise 3.5.4
*
* @file Line.cpp
* @author Chunyu Yuan
* @version 1.6 02/14/2021
*
*/
#include "Line.hpp" // Header file for line class
#include "Point.hpp"  // Header file for point class
#include "Shape.hpp" //header file for line class
#include <sstream>  // library that provides templates and types that enable interoperation between stream buffers and string objects
#include <cmath>    // library that declares a set of functions to compute common mathematical operations and transformations
#include <iostream>// Standard Input / Output Streams Library



namespace Chunyu // own namespace Chunyu
{
	namespace CAD //CAD namespace
	{
		// Default constructor, set the points to 0, 0
		Line::Line() : Shape(), startPoint(0, 0), endPoint(0, 0) // Colon syntax!
		{
			//startPoint = Point(0, 0);
			//endPoint = Point(0, 0);
		}

		//Constructor Initialize using new startPoint and new  endPoint
		Line::Line(const Point& newStartP, const Point& newEndP) :Shape(), startPoint(newStartP), endPoint(newEndP)// Colon syntax!
		{
			//startPoint = newStartP;
			//endPoint = newEndP;

		}

		//copy constructor
		Line::Line(const Line& line) :Shape(), startPoint(line.startPoint), endPoint(line.endPoint)// Colon syntax!
		{
			//startPoint = line.startPoint;
			//endPoint = line.endPoint;

		}

		// Destructor
		Line::~Line()
		{

			//	std::cout << "See you my line.\n";
		}


		//Selectors
		// Access the start-point
		const Point& Line::startP() const
		{
			return startPoint;
		}

		// Access the end-point
		const Point& Line::endP() const
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
			std::cout << "Call Line ToString()" << std::endl;
			std::string str; //  declares description string
			std::string s = Shape::ToString(); //call the ToString() method of the Shape base class

			str = "Line information: \n";//initize string
			str += s + '\n'; // append id string to Line description
			str = str + "Start point: " + startPoint.ToString() + '\n'; //startpoint's description and add it to line's description string
			str = str + "End point: " + endPoint.ToString() + '\n';//endpoint's description and add it to line's description string

			return str; //return line description string


		}

		//calculate the line's length and return 
		double Line::Length() const
		{
			double result = startPoint.Distance(endPoint); //use the distance  function on the startpoint to calculate the length of this line
			return result; //return result
		}

		// Assignment operator
		Line& Line::operator =  (const Line& c)
		{
			// Avoid doing assign to myself
			if (this == &c) //check if the address is the same
			{
				return *this; // if address same, directly return itself
			}

			Shape::operator =(c);      //call the assignment operator of the Shape base	class
			startPoint = c.startPoint; //assign new line's start point to current start point
			endPoint = c.endPoint;      //assign new line's end point to current end point

			return *this; //return itself to end assigning

		}
		// Send to ostream.
		std::ostream& operator << (std::ostream& os, const Line& l)
		{
			//access private member of line and send them to the os argument
			os << "Line information: \n" << "Start point: " << l.startPoint << '\n' << "End point: " << l.endPoint << '\n';
			return os;  //return ostream argument
		}
		//override Draw() from Shape class in Line class
		void Line::Draw() const
		{
			std::cout << "Draw lines" << std::endl;
			std::cout << (*this) << "\n" << std::endl; //print line description 
		}
	}
}

