/*
* Level_6 Exercise 4.2b.2:
* Source file for NumericArray Class
*
* template class called NumericArray and derive it from the Array class using generic inheritance.
*
* @file NumericArray.hpp
* @author Chunyu Yuan
* @version 1.0 02/15/2021
*
*/

#ifndef NUMERICARRAY_CPP    //checks whether the NUMERICARRAY_CPP  has been defined
#define NUMERICARRAY_CPP       //define NUMERICARRAY_CPP
#include "NumericArray.hpp"             //header file for NumericArray class
#include "NumericArraySizeException.hpp"  // header file for NumericArraySizeException

template <typename T>
NumericArray<T>::NumericArray(): Array<T>() // default constructor 
{

}

template <typename T>
NumericArray<T>::NumericArray( int size) : Array<T>(size) //constructor with size argument
{
}

template <typename T>
NumericArray<T>::NumericArray(const NumericArray<T>& new_numericArray): Array<T>(new_numericArray) // copy constructor
{

}

template <typename T>
NumericArray<T>::~NumericArray()//destructor
{
	//std::cout << "Bye my NumericArray......" << std::endl;
}

template <typename T>
const double& NumericArray<T>::DotProduct(const NumericArray<T>& new_array) const// function to calculate the dot product
{
	if ((*this).Size() != new_array.Size())      //check if the size of two arrays are same
	{
		throw NumericArraySizeException((*this).Size(), new_array.Size()); //if not throw a NumericArraySize Exception
	}
	else
	{
		double sum = 0;                             // declare double sum to save the dot product

		for (int i = 0;i < (*this).Size();i++)  // for loop, iterate to access each index
		{
			sum += (*this)[i] * new_array[i]; // add the product result of each same index element in  two arrays

		}
		return sum; // return the result

	}


}

template <typename T>
NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& new_array)// assignment operator
{

	if (this == &new_array)         // check if new_array  is the same as this NumericArray object
	{
		return *this;              //if same, directly return itself
	}
	else
	{
		Array<T>::operator = (new_array);// call the base class Array assignment operator
		return *this;      // return this object
	}


}

template <typename T>
NumericArray<T> NumericArray<T>::operator * (double factor) const //operator * to scale the elements of the numeric array by a factor
{
	NumericArray<T> temp(*this);  //copy itself to a new NumericArray<T> class

	for (int i = 0;i < temp.Size();i++) //for loop to iterate to scale the elements
	{
		temp[i] *= factor;   // each element multiple the factor
	}
	return temp;    //return the new NumericArray<T> class
}

template <typename T>
NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& new_array) const //operator + to add the elements of two numeric arrays
{
	if ((*this).Size() != new_array.Size())    //check if the size of two arrays are same
	{
		throw NumericArraySizeException((*this).Size(), new_array.Size());  // if not same , throw  NumericArraySize Exception
	}
	else
	{
		NumericArray<T> temp(*this); // copy itself to a new NumericArray<T> object

		for (int i = 0;i < temp.Size();i++)  // for loop, iterate to access each index
		{
			temp[i] = temp[i] + new_array[i];       //add the elements of two numeric arrays
		}
		return temp;                    //return the new  NumericArray<T> object
	}
}


#endif // !NUMERICARRAY_CPP
