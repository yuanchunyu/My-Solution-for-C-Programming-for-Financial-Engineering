/*
* Level_5 Exercise 3.4.2:
* Header file for Shape Class
*
* Create a hierarchy of related classes using base- and derived classes
*
* @file Shape.hpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/

#ifndef SHAPE_HPP //checks whether the SHAPE_HPP has been defined
#define SHAPE_HPP //define SHAPE_HPP

#include<iostream> // Standard Input / Output Streams Library

//Shape Class declaration
class Shape
{
	//private members
private:
	int m_id; //shape id

	//public functionality
public:
	Shape();                           //default constrcutor
	Shape(int m_id);                   // constructor

	Shape(const Shape& shape);         //copy constructor

	virtual ~Shape();                 //destructor

	const int& ID() const;              //receive the id of the shape
	std::string ToString() const;         //return the id as string

	Shape& operator = (const Shape& source);     ///assignment operator 
	

};





#endif // end of if statement for SHAPE_HPP