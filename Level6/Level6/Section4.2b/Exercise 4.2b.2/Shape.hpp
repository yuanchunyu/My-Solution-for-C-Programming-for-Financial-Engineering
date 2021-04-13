/*
* Level_6 Exercise 4.2b.2:
* Header file for Shape Class
*
* Same file as Level_5 Exercise 3.5.5
*
* @file Shape.hpp
* @author Chunyu Yuan
* @version 1.5 02/14/2021
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
	virtual std::string ToString() const;// Polymorphic ToString() Function

	virtual void Draw() const = 0;      // Draw() function,pure virtual member function
	Shape& operator = (const Shape& source);     //assignment operator 
	void Print() const;                        //print function 


};

#endif // end of if statement for SHAPE_HPP