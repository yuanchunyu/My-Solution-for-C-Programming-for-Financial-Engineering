
/*
* Level_6 Exercise 4.2b.6:
* smae file as  Level_6 Exercise 4.2b.5
*
*
* @file StackEmptyException.hpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/
#ifndef STACKEMPTYEXCEPTION_HPP //checks whether the STACKEMPTYEXCEPTION_HPP has been defined
#define STACKEMPTYEXCEPTION_HPP //define STACKEMPTYEXCEPTION_HPP

#include "StackException.hpp" //header file for base class StackException
#include <string>  //library to use std::string

//derived class  StackEmptyException declaration
class StackEmptyException : public StackException
{

	//private members
private:

	//public functionality
public:
	//default constructor
	StackEmptyException() :StackException()
	{

	}

	//copy constructor
	StackEmptyException(const StackEmptyException& error) :StackException(error)
	{

	}
	//destructor
	~StackEmptyException()
	{

	}

	//Override the GetMessage() of base class 
	std::string GetMessage() const
	{
		//return error for stack empty exception
		return "The Stack is empty......";
	}



};

#endif //end if statement of  STACKEMPTYEXCEPTION_HPP
