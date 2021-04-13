/*
* Level_3 Exercise 2.3.5:
* Header file for Line class 
*
*
* @file Line.hpp
* @author Chunyu Yuan
* @version 1.0 02/09/2021
*
*/
#ifndef LINE_HPP  //checks whether the LINE_HPP  has been defined
#define LINE_HPP  //define LINE_HPP
#include "Point.hpp"  // Header file for point class


//Line Class
class Line
{

	//private members
private: 
	Point startPoint; //start-point
	Point endPoint;   //end-point 

	//public functionality
public:
	//Constructors and destructor
	Line();                                                  //default constructor
	Line(const Point& newStartP, const Point& newEndP);      //constructor with start-point and end-point 
	Line(const Line& line);                                  //copy constructor
	~Line();                                                 //destructor

	//Selectors
	Point startP() const;                                    //access start-point
	Point endP() const;                                      //access end-point


	// Modifiers
	void startP(const Point& newStartP);                     // set start-point
	void endP(const Point& newEndP);                         // set end-point

	std::string ToString() const;                            //ToString() that returns a string description of the line
	double Length() const;                                   //returns the length of the line






};



#endif // end of if statement for Point_HPP