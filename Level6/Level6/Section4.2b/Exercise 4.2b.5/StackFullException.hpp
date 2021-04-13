
/*
* Level_6 Exercise 4.2b.5:
* Header file for StackFullException class derived from StackException base class
*
*
* @file StackFullException.hpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/


#ifndef STACKFULLEXCEPTION_HPP //checks whether the STACKFULLEXCEPTION_HPP has been defined
#define STACKFULLEXCEPTION_HPP //define STACKFULLEXCEPTION_HPP

#include "StackException.hpp"  //header file for base class StackException
#include <string>  //library to use std::string

//derived class  StackFullException declaration
class StackFullException : public StackException
{
	//private memebers
private:

	//public functionality
public:

	//default constructor
	StackFullException():StackException()
	{

	}

	//copy constructor
	StackFullException(const StackFullException& error):StackException(error)
	{

	}
	//destructor
	~StackFullException()
	{

	}
	//Override the GetMessage() of base class 
	std::string GetMessage() const
	{
		//return error for stack full exception
		return "The Stack is full......";
	}



};

#endif  //end if statement of STACKFULLEXCEPTION_HPP
