/*
* Level_6 Exercise 4.2b.1:
* Header file for OUTIFBOUNDSEXCEPTION Class
*
* the same file as Level_5 Exercise 3.6.2
*
* @file OutOfBoundsException.hpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/


#ifndef OUTIFBOUNDSEXCEPTION_HPP //checks whether the OUTIFBOUNDSEXCEPTION_HPP has been defined
#define OUTIFBOUNDSEXCEPTION_HPP //define OUTIFBOUNDSEXCEPTION_HPP

#include "ArrayException.hpp"  //header for base class ArrayException
#include <sstream>  // library that provides templates and types that enable interoperation between stream buffers and string objects

//OutOfBoundsException Class declaration, derived from ArrayException
class OutOfBoundsException :public ArrayException
{
	//private members
private:
	int  err_index; //error index

	//public functionality
public:
	//default constructor, error index is -1
	OutOfBoundsException() :ArrayException(),err_index(-1)// Colon syntax
	{

	}

	//constructor with argument that error index is new_err
	OutOfBoundsException(int new_err) :ArrayException(),err_index(new_err) // Colon syntax
	{

	}

	//copy constructor, copy error index of new_exc 
	OutOfBoundsException(const OutOfBoundsException& new_exc) :ArrayException(new_exc),err_index(new_exc.err_index) // Colon syntax
	{

	}

	//destructor
	~OutOfBoundsException()
	{

	}


	//Override the GetMessage()
	std::string GetMessage() const
	{
		std::stringstream stream; // declares one stringstream objects
		stream << err_index;  //put error index integer value to string buffer

		std::string str;    //declare a string value which represents error message
		str = stream.str() + "  is out of bounds."; //get the index string from the string buffer and append to error message str

		return str; //return error message string
	}




};


#endif// end of if statement for OUTIFBOUNDSEXCEPTION_HPP 
