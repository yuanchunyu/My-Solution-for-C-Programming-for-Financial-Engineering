/*
* Level_6 Exercise 4.2b.2:
* Header file for ArrayException Class
*
* same file as Level_5 Exercise 3.6.2
*
* @file ArrayException.hpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/

#ifndef ARRAYEXCEPTION_HPP //checks whether the ARRAYEXCEPTION_HPP  has been defined
#define ARRAYEXCEPTION_HPP //define ARRAYEXCEPTION_HPP 
#include <string> //library to use std::string

//ArrayException Class declaration
class ArrayException
{

	//private members
private:

	//public functionality
public:

	//default construcotr
	ArrayException()
	{

	}


	//copy construcotr
	ArrayException(const ArrayException& a)
	{

	}

	//destructor
	virtual ~ArrayException()
	{

	}

	//abstract GetMessage() function
	virtual std::string GetMessage() const = 0;
};
#endif // end of if statement for ARRAYEXCEPTION_HPP


