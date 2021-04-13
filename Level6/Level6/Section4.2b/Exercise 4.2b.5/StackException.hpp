/*
* Level_6 Exercise 4.2b.5:
* Header file for StackException base class
*
*
* @file StackException.hpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/

#ifndef STACKEXCEPTION_HPP//checks whether the STACKEXCEPTION_HPP has been defined
#define STACKEXCEPTION_HPP //define  STACKEXCEPTION_HPP

#include <string>  //library to use std::string

//base class StackException declaration
class StackException
{


	//privte member
private:
	
	//public functionality
public:
	//default constructor
	StackException()
	{

	}

	//copy constructor
	StackException(const StackException& a)
	{

	}

	//destructor
	virtual ~StackException()
	{

	}
	//abstract GetMessage() function
	virtual std::string GetMessage() const = 0;





};

#endif //end if statement STACKEXCEPTION_HPP
