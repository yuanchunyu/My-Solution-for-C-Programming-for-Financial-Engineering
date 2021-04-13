
/*
* Level_7 Exercise 2:
* Header file for Sum() function
*
*
* @file Sum.hpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/


#ifndef SUM_HPP //checks whether the SUM_HPP has been defined
#define SUM_HPP //define  SUM_HPP

#include <map>  //library for map container

using namespace std; //namespace declaration for using std

template <typename T> 
double Sum(const T& container);// declare function sum() with container argument


template <typename T1, typename T2>
double Sum(const map<T1, T2>&map ); // declare function sum() with map container argument


template <typename T>
double Sum(const typename T::const_iterator& iterator_start, const typename T::const_iterator& iterator_end);// declare function sum() with two iterators arguments

template <typename T1, typename T2> //// declare function sum() with two map iterators arguments
double Sum(const typename  map<T1, T2>::const_iterator& map_iterator1, const  typename  map<T1, T2>::const_iterator& map_iterator2);

// to avoid adding include source file anywhere
#ifndef SUM_CPP
#include "Sum.cpp"

#endif

#endif //end if statement of SUM_HPP
