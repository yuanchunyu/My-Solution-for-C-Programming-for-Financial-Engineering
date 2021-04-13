

/*
* Level_6 Exercise 4.2b.5:
* Header file for Stack class
*
* add StackFullException to push
* add StackEmptyException to pop
*
* @file Stack.hpp
* @author Chunyu Yuan
* @version 1.1 02/16/2021
*
*/



#ifndef STACK_HPP //checks whether the STACK_HPP has been defined
#define STACK_HPP  //define STACK_HPP

#include "Array.hpp"                 //Header file for Array class

using namespace Chunyu::Containers; //namespace  Chunyu::Containers using declaration

template<typename T> class Stack//Stack template Class declaration
{

	//private members
private:
	int m_current;   //current index
	Array<T> array; //Array object

	//public functionality
public:
	Stack();                              // default constructor
	Stack(int new_size);         //  constructor with size argument
	Stack(const Stack<T>& source);   //copy constructor
	~Stack();                           //destructor


	void Push(const T& element);      //push function

	T& Pop();                        //pop function

	Stack<T>& operator = (const Stack<T>& source);   //assignment operator







};

// to avoid adding include source file anywhere
#ifndef STACK_CPP
#include "Stack.cpp"
#endif

#endif //end if statement of STACK_HPP
