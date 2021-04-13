/*
* Level_5 Exercise 3.5.1:
* Header file for Circle class
* smae file as Level_5 Exercise 3.4.2:
*
* @file Circle.hpp
* @author Chunyu Yuan
* @version 1.5 02/14/2021
*
*/
#ifndef CIRCLE_HPP //checks whether the CIRCLE_HPP has been defined
#define CIRCLE_HPP //define CIRCLE_HPP
#include "Point.hpp" //header file for point class
#include "Shape.hpp" //header file for point class

namespace Chunyu   // own namespace Chunyu
{
	//CAD namespace 
	namespace CAD
	{
		class Circle :public Shape //derived from Shape class
		{

			//private members
		private:
			Point centrePoint;  //centre Point of the circle
			double m_radius;    // radius of the circle

			//public functionality
		public:
			Circle();                                                     //default constructor
			Circle(const Point& newCentreP, const double& newRadius);     //constructor with centre point and radius
			Circle(const Circle& circle);                                 //copy constructor
			~Circle();                                                   //destructor

			//Selectors
			const Point& CentrePoint() const;                                  //access centre point
			double Radius() const;                                     //access radius


			// Modifiers
			void CentrePoint(const Point& newCentreP);                //set centre point
			void Radius(const double& newRadius);                     // set radius

			double Diameter() const;                                  //calculate and return diameter of the circle
			double Area() const;                                      //calculate and return area of the circle
			double Circumference() const;                             //calculate and return circumference of the circle
			std::string ToString() const;                            //return the descriptionof this circle

			Circle& operator =  (const Circle& c);                  // Assignment operator.

		};
		std::ostream& operator << (std::ostream& os, const Circle& c);// Send to ostream.
	}

}



#endif// end of if statement for CIRCLE_HPP

