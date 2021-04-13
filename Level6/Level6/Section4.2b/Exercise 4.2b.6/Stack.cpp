
/*
* Level_6 Exercise 4.2b.6:
* Source file for Stack class
*
* Change the Stack class so that it uses a value template argument to set the stack size
*
* @file Stack.cpp
* @author Chunyu Yuan
* @version 1.2 02/16/2021
*
*/

#ifndef STACK_CPP //checks whether the STACK_CPP has been defined
#define STACK_CPP //define STACK_CPP

#include "Stack.hpp"                     //header file for Stack class
#include "ArrayException.hpp"        //header file for ArrayException class                    
#include <iostream> // Standard Input / Output Streams Library
#include "StackFullException.hpp" //header file for StackFullException class
#include "StackEmptyException.hpp" //header file for StackEmptyException class

template <typename T, int size> 
Stack<T,size>::Stack() : m_current(0), array(size)  //default constructor
{

}


template <typename T, int size>
Stack<T,size>::Stack(const Stack<T,size>& source) :m_current(source.new_current), Array<T>(source.array) //copy constructor
{

}

template <typename T, int size>
Stack<T,size>::~Stack()             //destructor
{

}

template <typename T, int size>
void Stack<T,size>::Push(const T& element)
{
	//std::cout << m_current << std::endl;

	try
	{
		array[m_current] = element;//store the element at the current position
		m_current++; //Increment the current position afterwards
	}
	catch (const ArrayException& e) //catch array exception
	{
		throw StackFullException();//throw stack full exception
	}

}

template <typename T, int size>
T& Stack<T,size>::Pop()     //pop function
{

	try
	{
		//decrements the current position
		m_current--;
		//returns the element at that position
		return array[m_current];
	}
	catch (const ArrayException& e) //catch array exception
	{
		m_current = 0;    //set the current index back to 0
		throw StackEmptyException();//throw empty exception
	}


}
template <typename T, int size>
Stack<T,size>& Stack<T,size>::operator = (const Stack<T,size>& source) //assignment operator
{
	if (this == &source)  // check if source is the same as this stack object
	{
		return (*this);  //return itself
	}
	else
	{
		m_current(source.m_current); //copy source current index
		array(source.array);  //copy source Array
		return (*this);  // return this object
	}
}



#endif //end if statement of STACK_CPP