/*
* Level_5 Exercise 3.6.2:
* Header file for ArrayException Class
*
* create an exception hierarchy with an ArrayException base class
*
* @file ArrayException.hpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/

#ifndef ARRAYEXCEPTION_HPP //checks whether the ARRAYEXCEPTION_HPP  has been defined
#define ARRAYEXCEPTION_HPP //define ARRAYEXCEPTION_HPP 
//#include <string>
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

