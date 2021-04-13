
/*
* Level_5 Exercise 3.5.1:
* Source file for Shape Class
*
* Polymorphic ToString() Function
*
* @file Shape.cpp
* @author Chunyu Yuan
* @version 1.1 02/14/2021
*
*/

#include "Shape.hpp" //header file for Shape Class
#include "stdlib.h"  // library for using rand() to get a random number
#include <sstream>   // library that provides templates and types that enable interoperation between stream buffers and string objects

//Default constructor
Shape::Shape() :m_id(rand()) //Colon syntax, assign a random number to id member, the random is in range between 0 and RAND_MAX
{

}
//constructor with id argument
Shape::Shape(int new_id) : m_id(new_id) //Colon syntax
{

}


// copy constructor, copy the id member
Shape::Shape(const Shape& shape) : m_id(shape.m_id) //Colon syntax
{

}

//destructor
Shape::~Shape()
{
	std::cout << "Bye my shape...." << std::endl;//remind the status of using destructor
}

//receive the id member 
const int& Shape::ID() const
{
	return m_id;
}

//return the id as string 
std::string Shape::ToString() const
{
	std::stringstream m_id_str;  // declares one stringstream objects

	m_id_str << m_id;            //put id integer value to string buffer

	std::string str;             // declare a string value 
	str = "ID: " + m_id_str.str(); //get the id string from the string buffer and assign it to str

	return str;                  //return the id string 

}

//assignment operator
Shape& Shape::operator = (const Shape& source)
{
	if (this == &source)  //check if the address is the same
		return *this;     //if same, return itself 

	m_id = source.m_id; //copy the id member of source 


	return *this; //return itself to end assignment
}