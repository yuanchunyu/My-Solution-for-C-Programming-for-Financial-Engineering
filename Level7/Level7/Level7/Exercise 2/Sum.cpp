
/*
* Level_ 7 Exercise 2:
* Source file for Sum() function
*
*
* @file Sum.cpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/

#ifndef SUM_CPP //checks whether the SUM_CPP has been defined
#define SUM_CPP //define SUM_CPP

#include "Sum.hpp"        //header file for sum functions 
#include<iostream>       // Standard Input / Output Streams Library

template <typename T>
double Sum(const T& container)    // calculate sum of the elements in a container
{
	double sum = 0.0;     //declare a double that represents sum

	typename T::const_iterator i;  //declare the iterator 

	//for loop, iterate to access the element
	for (i = container.begin(); i != container.end();i++)
	{
		sum += (*i); // plus the element to sum

	}

	return sum; //return sum result


}


template <typename  T>
double Sum(const typename T::const_iterator& iterator_start, const typename T::const_iterator& iterator_end)//calculate the sum between two iterators
{

		double sum = 0.0;  //declare a double that represents sum

		typename T::const_iterator i;  //declare the iterator 

		//for loop, iterate to access the elements
		for (i = iterator_start; i != iterator_end;i++)
		{
			sum += (*i); // plus the element to sum

		}

		return sum;//return sum result


	
}

template <typename  T1, typename  T2>
double Sum(const map<T1, T2>& map1)  // calculate sum of the elements in a map
{
	double sum = 0.0; //declare a double that represents sum

	typename map<T1, T2>::const_iterator i; //declare the iterator of map

	//for loop, iterate to access the elements value
	for (i = map1.begin(); i != map1.end();i++)
	{
		sum += (*i).second;// plus the element value to sum

	}

	return sum;//return sum result
}


template <typename  T1, typename  T2> //calculate the sum between two map iterators
double Sum( const typename  map<T1, T2>::const_iterator& map_iterator_start, const  typename  map<T1, T2>::const_iterator& map_iterator_end)
{
	double sum = 0.0; //declare a double that represents sum

	typename map<T1, T2>::const_iterator i;  //declare the iterator of map

	//for loop, iterate to access the elements value
	for (i = map_iterator_start; i != map_iterator_end;i++)
	{
		sum += (*i).second; // plus the element value to sum

	

	}

	return sum; //return sum result
}

#endif //end if statement of Sum_CPP


