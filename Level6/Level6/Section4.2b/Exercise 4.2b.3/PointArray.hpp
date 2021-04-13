/*
* Level_6 Exercise 4.2b.3:
* Header file for PointArray Class
*
* create a PointArray which is derived from Array with the template argument set to Point.
* Create a regular class called PointArray which is derived from Array. The template
* argument given to Array is Point.
* Create inherited, create proper constructors, destructor and assignment
* operator and call the base class where appropriate.
* Now we can add functionality Length() function that returns the total length between the points in the array
*
* @file PointArray.hpp
* @author Chunyu Yuan
* @version 1.0 02/15/2021
*
*/

#ifndef POINTARRAY_HPP //checks whether the POINTARRAY_HPP has been defined
#define POINTARRAY_HPP //define POINTARRAY_HPP

#include "Array.hpp" //header file for base class Array
#include "Point.hpp"//header file for Point class



using namespace Chunyu::CAD; //namespace  Chunyu::CAD using declaration

// own namespace Chunyu
namespace Chunyu
{
	namespace Containers //Containers namespace 
	{
		class PointArray : public Array<Point> // derived from base class Array
		{
			//private members
		private:

			//public functionality
		public:
			PointArray();                       //default constructor
			PointArray(int size);                    // constructor with new_size argument 
			PointArray(const PointArray& source);   // copy constructor
			~PointArray();                           //desructor

			const double& Length() const;              // returns the total length between the points in the array.

			PointArray& operator = (const PointArray& source); //assignment operator


		};
	}
}



#endif // end if statement of POINTARRAY_HPP