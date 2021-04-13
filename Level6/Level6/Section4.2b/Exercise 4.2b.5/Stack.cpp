

/*
* Level_6 Exercise 4.2b.5:
* Source file for Stack class
*
* add StackFullException to push
* add StackEmptyException to pop
* 
* @file Stack.cpp
* @author Chunyu Yuan
* @version 1.1 02/16/2021
*
*/

#ifndef STACK_CPP //checks whether the STACK_CPP has been defined
#define STACK_CPP //define STACK_CPP

#include "Stack.hpp"                     //header file for Stack class
#include "ArrayException.hpp"        //header file for ArrayException class                    
#include <iostream> // Standard Input / Output Streams Library
#include "StackFullException.hpp" //header file for StackFullException class
#include "StackEmptyException.hpp" //header file for StackEmptyException class
template<typename T>
Stack<T>::Stack() : m_current(0), array() //default constructor
{

}

template<typename T>
Stack<T>::Stack(int new_size) :m_current(0), array(new_size) //constructor with size argument
{

}



template<typename T>
Stack<T>::Stack(const Stack<T>& source) :m_current(source.new_current), Array<T>(source.array)//copy constructor
{

}

template<typename T>
Stack<T>::~Stack() //destructor
{

}

//store the element at the current position in the
//embedded array.Increment the current position afterwards
template<typename T>
void Stack<T>::Push(const T& element)
{


    try
	{
		array[m_current] = element;//store the element at the current position
        m_current++; //Increment the current position afterwards
	}
	catch(const ArrayException& e) //catch array exception
	{
		throw StackFullException();//throw stack full exception
	}
	
}

template<typename T>
T& Stack<T>::Pop() //pop function 
{
    try
	{
        //decrements the current position
		m_current--;
        //returns the element at that position
		return array[m_current];
	}
	catch(const ArrayException& e) //catch array exception
	{
		m_current = 0;    //set the current index back to 0
		throw StackEmptyException();//throw empty exception
	}

}
template<typename T>
Stack<T>& Stack<T>::operator = (const Stack<T>& source)  //assignment operator
{
	if (this == &source)       // check if source is the same as this stack object
	{
		return (*this);      //return itself
	}
	else
	{
		m_current(source.m_current);    //copy source current index
		array(source.array);             //copy source Array
		return (*this);              // return this object
	}
}


#endif //end if statement of STACK_CPP
