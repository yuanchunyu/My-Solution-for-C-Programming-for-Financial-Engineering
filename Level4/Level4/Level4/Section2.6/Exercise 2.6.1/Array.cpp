/*
* Level_4 Exercise 2.6.1:
* Source file for Array Class
*
* put Array class in namespace: Chunyu::Containers
*
* @file Array.cpp
* @author Chunyu Yuan
* @version 1.2 02/13/2021
*
*/
#include "Array.hpp"   //Header file for Array class
#include "Point.hpp"  // Header file for point class

namespace Chunyu // own namespace Chunyu
{
	namespace Containers //Containers namespace 
	{
		// default constructor that allocates 10 elements
		Array::Array() : m_data(new CAD::Point[10]), size(10)
		{

		}

		// constructor with a size argument
		Array::Array(int new_size)
		{
			m_data = new CAD::Point[new_size];  //create a new point array that allocates new_size elements and assign it to m_data
			size = new_size;   //assign new_size to private member size
		}

		//copy constructor
		Array::Array(const Array& new_array)
		{
			m_data = new CAD::Point[new_array.size];//create a new point array that has the same size as new_array

			//iterate the array 
			for (int i = 0;i < new_array.size;i++)
			{
				m_data[i] = new_array.m_data[i]; // assign each element data in the m_data of new_array to this m_data at index i int he 
			}

			size = new_array.size; //assign the size of new_array to this size
		}

		//destructor for array class
		Array::~Array()
		{

			delete[] m_data;// delete the member element array m_data

		}

		//assignment operator
		Array& Array::operator = (const Array& new_array)
		{
			if (this == &new_array)// check if new_array  is the same as this Array object
			{
				return *this; //if same, return itself
			}
			//create a new array that has the same size as the array in Object Array new_array
			m_data = new CAD::Point[new_array.size];
			for (int i = 0;i < new_array.size;i++) //iterate the for loop and assign each data to this Array Object
			{
				m_data[i] = new_array.m_data[i]; //assign each element in m_data of Array object new_array to this Object at index i 
			}

			return *this; //return this Object
		}


		// returns the size of the array.
		const int& Array::Size() const
		{
			return size;
		}

		//set p as the index-th element in array m_data
		void Array::SetElement(int index, const CAD::Point& p)
		{
			if (index < size && index >= 0) // check if the index is in the bound of m_data array
			{
				m_data[index] = p; //assign p as the index-th element in the array  m_data
			}

			//if out of bounds, ignore the "set"
		}

		//return the element by reference at index of array  m_data
		const CAD::Point& Array::GetElement(int index)const
		{
			if (index >= 0 && index < size) //check index is in the bound of  array  m_data
			{
				return m_data[index];  // return the element by reference at index
			}
			else
			{
				return m_data[0];  //the index is out of bounds, return the first element
			}
		}

		// [] operator, Return a reference so the [] operator can be used for both reading and writing elements
		CAD::Point& Array::operator [] (int index)
		{
			if (index >= 0 && index < size) //check index is in the bound of m_data array
			{
				return m_data[index]; // return the element by reference at index
			}
			else
			{
				return m_data[0];//the index is out of bounds, return the first element
			}
		}

		// [] operator, Return a reference so the const [] operator can be used for only reading elements
		const CAD::Point& Array::operator [] (int index) const
		{
			if (index >= 0 && index < size) //check index is in the bound of m_data array
			{
				return m_data[index]; // return the element by reference at index
			}
			else
			{
				return m_data[0];  //the index is out of bounds, return the first element
			}
		}
	}
}





