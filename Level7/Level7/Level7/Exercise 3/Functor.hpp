/*
* Level_7 Exercise 3:
* Header file for Functor.hpp
*
*
* @file Functor.hpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/


#ifndef FUNCTOR_HPP //checks whether the FUNCTOR_HPP has been defined
#define FUNCTOR_HPP //define FUNCTOR_HPP

//Funcor template class decalration
template <typename T>
class Functor
{
	 //private members
private:

	T value; //falg value

	//public functionality
public:
	//default constructor
	Functor();
	//constructor with new flag value argument
	Functor(const T new_value);
	//copy constructor
	Functor(const Functor& source);
	//destructor
	~Functor();
	//assignment operator
	Functor& operator = (const Functor& source);
	// round operator
	bool operator () (const T temp) const;



};

// to avoid adding include source file anywhere
#ifndef FUNCTOR_CPP
#include "Functor.cpp"
#endif

#endif //end if statement of FUNCTOR_HPP