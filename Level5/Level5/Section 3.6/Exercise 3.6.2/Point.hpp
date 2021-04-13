/*
* Level_5 Exercise 3.6.2:
* Header file for Point Class
*
* same file as Level_5 Exercise 3.5.4
*
* @file Point.hpp
* @author Chunyu Yuan
* @version 1.15 02/14/2021
*
*/




#ifndef POINT_HPP //checks whether the POINT_HPP has been defined
#define POINT_HPP //define POINT_HPP

#include <iostream> // Standard Input / Output Streams Library
#include "Shape.hpp" //header file for Shape class

namespace Chunyu   // own namespace Chunyu
{
	//CAD namespace 
	namespace CAD
	{
		//point Class declaration
		class Point :public Shape //derived from Shape class
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
			//Point(double newPara);
			explicit Point(double xyval);             //  explicit constructor with one double value argument  
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

			void Draw() const;  //Draw() function, override it in Point class

			Point operator - () const; // Negate the coordinates.
			Point operator * (double factor) const; // Scale the coordinates.
			Point operator + (const Point& p) const; // Add coordinates.
			bool operator == (const Point& p) const; // Equally compare operator.
			Point& operator = (const Point& source); // Assignment operator.
			Point& operator *= (double factor); // Scale the coordinates & assign

			friend std::ostream& operator << (std::ostream& os, const Point& p); // Send to ostream.

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
	}
}



#endif // end of if statement for POINT_HPP