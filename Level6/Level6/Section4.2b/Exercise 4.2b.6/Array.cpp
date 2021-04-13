/*
* Level_6 Exercise 4.2b.6:
* Source file for Array Class
*
* same file as  Level_6 Exercise 4.2b.1
*
* @file Array.cpp
* @author Chunyu Yuan
* @version 1.5 02/15/2021
*
*/

#include "Array.hpp"   //Header file for Array class
#include "OutOfBoundsException.hpp" //Header file for OutOfBoundsException class
#include <iostream> // Standard Input / Output Streams Library

#ifndef Array_CPP    //checks whether the ARRAY_CPP has been defined
#define Array_CPP    //define ARRAY_CPP 


namespace Chunyu // own namespace Chunyu
{
	namespace Containers //Containers namespace 
	{
		template <typename T>
		int Array<T>::defaultSize = 10; //Initialise defaultvalue to 10


		//default constructor with the template of type T,default size is 10
		template <typename T>
		Array<T>::Array() : m_data(new T[10]), size(defaultSize) // Colon syntax
		{

		}

		// constructor with a size argument,  template of type T
		template <typename T>
		Array<T>::Array(int new_size)
		{
			m_data = new T[new_size]; //create a new type T object array that allocates new_size elements and assign it to m_data
			size = new_size; //assign new_size to private member size
		}
		//copy constructor , template of type T
		template <typename T>
		Array<T>::Array(const Array<T>& new_array)
		{
			m_data = new T[new_array.size]; //create a new type T objects array that has the same size as new_array
			//iterate the array 
			for (int i = 0;i < new_array.size;i++)
			{
				m_data[i] = new_array.m_data[i]; // assign each element data in the m_data of new_array to this m_data at index i
			}

			size = new_array.size; //assign the size of new_array to this size
			defaultSize = new_array.defaultSize; //copy defaultsize

		}

		//destructor for array class
		template <typename T>
		Array<T>::~Array()
		{

			delete[] m_data; // delete the member element array m_data
		//	std::cout << "Bye, my Array......\n";

		}

		//assignment operator
		template <typename T>
		Array<T>& Array<T>::operator = (const Array<T>& new_array)
		{
			if (this == &new_array)// check if new_array  is the same as this Array object
			{
				return *this; //if same, return itself
			}
			//delete m_data before new, avoid memory leak 
			delete[] m_data;

			//create a new array that has the same size as the array in Object Array new_array
			m_data = new T[new_array.size];

			//iterate the for loop and assign each data to this Array Object
			for (int i = 0;i < new_array.size;i++)
			{
				m_data[i] = new_array.m_data[i]; //assign each element in m_data of Array object new_array to this Object at index i 
			}

			size = new_array.size; //copy size 
			defaultSize = new_array.defaultSize;//copy defaultSize

			return *this; //return this Object
		}

		// returns the size of the array.
		template <typename T>
		const int& Array<T>::Size() const
		{
			return size;
		}


		template <typename T>
		const int& Array<T>::DefaultSize()  //get defaultSize
		{
			return defaultSize;
		}

		template <typename T>
		void Array<T>::DefaultSize(int new_size)  //set array size
		{
			defaultSize = new_size;
		}


		//set p as the index-th element in array m_data
		template <typename T>
		void Array<T>::SetElement(int index, const T& p)
		{
			if (index < size && index >= 0) // check if the index is in the bound of m_data array
			{
				m_data[index] = p; //assign p as the index-th element in the array  m_data
			}
			else //if out of bounds, throw OutOfBoundsException object
			{
				throw  OutOfBoundsException(index);
			}
		}

		//return the element by reference at index of array  m_data
		template <typename T>
		const T& Array<T>::GetElement(int index)const
		{
			if (index >= 0 && index < size)//check index is in the bound of  array  m_data
			{
				return m_data[index]; // return the element by reference at index
			}
			else
			{
				throw  OutOfBoundsException(index); //the index is out of bounds, throw OutOfBoundsException object
			}
		}


		// [] operator, Return a reference so the [] operator can be used for both reading and writing elements
		template <typename T>
		T& Array<T>::operator [] (int index)
		{
			if (index >= 0 && index < size) //check index is in the bound of m_data array
			{
				return m_data[index]; // return the element by reference at index
			}
			else
			{
				throw  OutOfBoundsException(index);  //the index is out of bounds, throw OutOfBoundsException object
			}
		}


		// [] operator, Return a reference so the const [] operator can be used for only reading elements
		template <typename T>
		const T& Array<T>::operator [] (int index) const
		{
			if (index >= 0 && index < size) //check index is in the bound of m_data array
			{
				return m_data[index]; // return the element by reference at index
			}
			else
			{
				return m_data[0]; //the index is out of bounds, throw OutOfBoundsException object
			}
		}
	}
}

#endif //end if statement of  Array_CPP





