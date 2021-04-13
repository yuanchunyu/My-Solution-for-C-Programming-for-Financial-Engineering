/*
* Level_3 Exercise 2.3.6:
* Header file for Circle class
*
*
* @file Circle.hpp
* @author Chunyu Yuan
* @version 1.0 02/09/2021
*
*/

#ifndef CIRCLE_HPP //checks whether the CIRCLE_HPP has been defined
#define CIRCLE_HPP //define CIRCLE_HPP
#include "Point.hpp" //header file for point class

//circle class
class Circle
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
	Point CentrePoint() const;                                  //access centre point
	double Radius() const;                                     //access radius


	// Modifiers
	void CentrePoint(const Point& newCentreP) ;                //set centre point
	void Radius(const double& newRadius) ;                     // set radius

	double Diameter() const;                                  //calculate and return diameter of the circle
	double Area() const;                                      //calculate and return area of the circle
	double Circumference() const;                             //calculate and return circumference of the circle
	std::string ToString() const;                            //return the descriptionof this circle

};

#endif // end of if statement for Point_HPP

