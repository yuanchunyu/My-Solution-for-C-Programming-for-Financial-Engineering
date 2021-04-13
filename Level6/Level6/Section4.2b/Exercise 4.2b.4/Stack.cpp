
/*
* Level_6 Exercise 4.2b.4:
* Source file for Stack class
*
* 
* @file Stack.cpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/

#ifndef STACK_CPP //checks whether the STACK_CPP has been defined
#define STACK_CPP //define STACK_CPP

#include "Stack.hpp"                     //header file for Stack class
#include "OutOfBoundsException.hpp"        //header file for OutOfBoundsException class                    
#include <iostream> // Standard Input / Output Streams Library

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
	
	if (m_current == (*this).array.Size())    //check if current embedded array is full
	{
		throw OutOfBoundsException(m_current);   //if full throw exception
	}
	else 
	{
		
		array[m_current] = element;           //store the element at the current position
		

		m_current = m_current + 1;           //Increment the current position afterwards
	
	}
}

template<typename T>
T& Stack<T>::Pop() 
{
	if (m_current  ==0 )            //check if current array is empty which means curren index is 0
	{
		throw OutOfBoundsException(m_current ); //throw empty exception
	}
	else
	{
		m_current = m_current - 1;                   //decrements the current position
		return array[m_current];   //returns the element at that position
	
		

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
		m_current==(source.m_current);    //copy source current index
		array=(source.array);             //copy source Array
		return (*this);              // return this object
	}
}




#endif //end if statement of STACK_CPP