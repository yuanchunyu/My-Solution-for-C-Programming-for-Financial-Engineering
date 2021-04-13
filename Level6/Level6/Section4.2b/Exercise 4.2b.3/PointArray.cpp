/*
* Level_6 Exercise 4.2b.3:
* Source file for PointArray Class
*
* create a PointArray which is derived from Array with the template argument set to Point.
* Create a regular class called PointArray which is derived from Array. The template
* argument given to Array is Point.
* Create inherited, create proper constructors, destructor and assignment
* operator and call the base class where appropriate.
* Now we can add functionality Length() function that returns the total length between the points in the array
*
* @file PointArray.cpp
* @author Chunyu Yuan
* @version 1.0 02/15/2021
*
*/

#ifndef POINTARRAY_CPP //checks whether the POINTARRAY_CPP   has been defined
#define POINTARRAY_CPP   //define POINTARRAY_CPP 
#include "PointArray.hpp" //header file for PointArray
#include <iostream>   // Standard Input / Output Streams Library
using namespace std; //namespace std using declaration 


using namespace Chunyu::CAD; //namespace  Chunyu::CAD using declaration

// own namespace Chunyu
namespace Chunyu
{
	namespace Containers //Containers namespace 
	{

		PointArray::PointArray() : Array<Point>()  //default constructor
		{

		}



		PointArray::PointArray(int size) :Array<Point>(size) //constructor with size argument
		{

		}
		
		PointArray::PointArray(const PointArray& source) : Array<Point>(source) // copy constructor
		{

		}
	

		PointArray::~PointArray()  //destructor
		{

		}
		

		const double& PointArray::Length() const     // returns the total length between the points in the array.
		{

			double sum = 0;  //declare a double value for calculated length result

			if ((*this).Size() < 2) // check the size of point array
			{
				//the number of point is less than 2 so that it cannot calculate the length, print a message
				cout << "The array size is less than 2, which cannot calculate length." << endl;
				return sum;  //directly return 0
			}

			//for loop to iterate to access point
			for (int i = 0;i < (*this).Size() - 1;i++)
			{
				sum += (*this)[i].Distance((*this)[i + 1]);// calculate the length: plus the length of the current point and next point 
			}

			return sum; //return the length result

		}

		
		PointArray& PointArray::operator = (const PointArray& source) //assignment operator
		{
			if (this == &source)  // check if source  is the same as this PointArray< object
			{
				return *this;  //if same, return itself
			}

			Array<Point>::operator =(source); // call the base class Array assignment operator
			return *this;                 //return this object
		}
	}
}

#endif   //end if statement of POINTARRAY_CPP