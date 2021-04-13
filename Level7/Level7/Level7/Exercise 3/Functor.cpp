
/*
* Level_7 Exercise 3:
* Source file for Functor.hpp
*
*
* @file Functor.cpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/
#ifndef FUNCTOR_CPP//checks whether the FUNCTOR_CPP has been defined
#define FUNCTOR_CPP //define FUNCTOR_CPP


#include "Functor.hpp" //header file for Functor
#include <iostream> // Standard Input / Output Streams Library

template<typename T>
Functor<T>::Functor(): value(0) //default constructor
{
	//reminder user the flag value is 0
	std::cout << "Default flag value is 0" << std::endl;
}

template<typename T>
Functor<T>::Functor(const T new_value):value(new_value)//constructor with flag value argument
{

}

template<typename T>
Functor<T>::Functor(const Functor<T>& source):value(source.value) //copy constructor
{

}

template<typename T>
Functor<T>::~Functor() //destructor
{

}

template<typename T>
Functor<T>& Functor<T>::operator = (const Functor<T>& source) //assignment operator
{
	if (this == &source) // check if source  is the same as this Functor
	{
		return (*this); // if same, return itself directly
	}

	value = source.value;  // assign flag value in source to this value
	return *this;   //return this project
}

template<typename T>
bool Functor<T>::operator () (const T temp) const // () operator
{
	return temp < value;   //check if the temp is less than the flag value
}



#endif//end if statement of FUNCTOR_CPP