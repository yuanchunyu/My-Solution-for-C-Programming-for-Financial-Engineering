/*
* Level_6 Exercise 4.2b.2:
* Header file for NumericArray Class
*
*  template class called NumericArray and derive it from the Array class using generic inheritance.
* 
* @file NumericArray.hpp
* @author Chunyu Yuan
* @version 1.0 02/15/2021
*
*/


#ifndef NUMERICARRAY_HPP //checks whether the NUMERICARRAY_HPP has been defined
#define NUMERICARRAY_HPP //define NUMERICARRAY_HPP 
#include "Array.hpp"   //header file for base class Array

using namespace Chunyu::Containers; //namespace  Chunyu::Containers using declaration

template <typename T>
class NumericArray : public Array<T>// derived from base class Array
{
	//private members
private:

	//public functionality
public:
	NumericArray(); //default constructor

	NumericArray(int new_size);   // constructor with new_size argument 

	NumericArray(const NumericArray<T>& new_numericArray); // copy constructor

	virtual ~NumericArray();    // destructor

	const double& DotProduct(const NumericArray<T>& new_array) const; //function to calculate dot product and return 

	NumericArray<T>& operator = (const NumericArray<T>& new_array);// assignment operator

	NumericArray<T> operator * (double factor) const;  //scale the elements of the numeric array by a factor
	NumericArray<T> operator + (const NumericArray<T>& new_array) const; //add the elements of two numeric arrays



};
// to avoid adding include source file anywhere
#ifndef NUMERICARRAY_CPP
#include "NumericArray.cpp"
#endif // !NUMERICARRAY_CPP


#endif // end if statement of NUMERICARRAY_HPP
