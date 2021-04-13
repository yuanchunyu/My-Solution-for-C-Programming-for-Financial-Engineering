/*
* Level_6 Exercise 4.2b.2:
* Header file for NumericArraySizeException Class
*
* the same file as Level_5 Exercise 3.6.2
*
* @file OutOfBoundsException.hpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/

#ifndef NUMERICARRAYSIZEEXCEPTION_HPP //checks whether the NUMERICARRAYSIZEEXCEPTION_HPP has been defined
#define NUMERICARRAYSIZEEXCEPTION_HPP  //define NUMERICARRAYSIZEEXCEPTION_HPP

#include "ArrayException.hpp" //header file  for ArrayException
#include <sstream>     // library that provides templates and types that enable interoperation between stream buffers and string objects

//NumericArraySizeException Class declaration, derived from ArrayException
class NumericArraySizeException :public ArrayException
{
	//private members
private:
	int  array_size1; //array1 size
	int  array_size2; //array2 size

	//public functionality
public:
	//default constructor, default array1 size is 0, default array2 size is 1
	NumericArraySizeException() :ArrayException(),array_size1(0), array_size2(1) // Colon syntax
	{

	}

	//constructor with argument that array1 size and array2 size arguments
	NumericArraySizeException(const int& new_size1, const int& new_size2) : ArrayException(), array_size1(new_size1), array_size2(new_size2)
	{

	}

	//copy constructor
	NumericArraySizeException(const NumericArraySizeException& new_exc) :ArrayException(new_exc), array_size1(new_exc.array_size1), array_size2(new_exc.array_size2)
	{

	}

	//destructor
	~NumericArraySizeException()
	{

	}

	//Override the GetMessage()
	std::string GetMessage() const
	{
		std::stringstream stream1, stream2; // declares two stringstream objects
		stream1 << array_size1;  // put array1 size integer value to string buffer
		stream2 << array_size2;  //put array2 size integer value to string buffer

		std::string str;       //declare a string that represents message
		//get size string and append to the message string
		str = "Array1's size(" + stream1.str() + ") does't match  Array2's size(" + stream2.str() + ")";

		return str; //return message string
	}




};


#endif//end if statement of  NUMERICARRAYSIZEEXCEPTION_HPP
