/*
* Level_4 Exercise 2.5.3:
* Header file for Array Class
*
*
* @file Array.hpp
* @author Chunyu Yuan
* @version 1.0 02/13/2021
*
*/

#ifndef ARRAY_HPP //checks whether the ARRAY_HPP has been defined
#define ARRAY_HPP //define ARRAY_HPP

#include "Point.hpp" //header file for point class
//Array Class declaration
class Array
{
	//private members
private: 
	Point* m_data; // dynamic C array of Point objects
	int size; //the size of the array

	//public functionality
public:
	Array();                                //default constructor

	Array(int new_size);                    //constructor with a size argument
	Array(const Array& new_array);          // copy constructor

	~Array();                               //destructor

	Array& operator = (const Array& new_array);  //assignment operator

	const int& Size() const;                    //  returns the size of the array               

	void SetElement(int index, const Point& p);   // sets an element at index of the array
	const Point& GetElement(int index)const;      // return the element by reference at index of the array
	
	// Return a reference of point so the [] operator can be used for both readingand writing points
	Point& operator [] (int index);   

	// Return a reference of point so the const [] operator can be used for only reading  points
	const Point& operator [] (int index) const;

};

 
#endif// end of if statement for ARRAY_HPP