/*
* Level_4 Exercise 2.4.4:
* Header file for Line class
*
* move the << operator of Line inside the class definition and declare it as friend
*
* @file Line.hpp
* @author Chunyu Yuan
* @version 1.3 02/13/2021
*
*/

#ifndef LINE_HPP  //checks whether the LINE_HPP  has been defined
#define LINE_HPP  //define LINE_HPP
#include "Point.hpp"  // Header file for point class

//Line Class declaration
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
	const Point& startP() const;                                    //access start-point
	const Point& endP() const;                                      //access end-point


	// Modifiers
	void startP(const Point& newStartP);                     // set start-point
	void endP(const Point& newEndP);                         // set end-point

	std::string ToString() const;                            //ToString() that returns a string description of the line
	double Length() const;                                   //returns the length of the line

	Line& operator =  (const Line& c);                       // Assignment operator.

	friend std::ostream& operator << (std::ostream& os, const Line& l);// Send to ostream.
	


};





#endif  // end of if statement for LINE_HPP