
/*
* Level_6 Exercise 4.2b.3:
* Header file for Array Class
*
* same file as  Level_6 Exercise 4.2b.1
* @file Array.hpp
* @author Chunyu Yuan
* @version 1.5 02/15/2021
*
*/


#ifndef ARRAY_HPP //checks whether the ARRAY_HPP has been defined
#define ARRAY_HPP //define ARRAY_HPP

// own namespace Chunyu
namespace Chunyu
{
	namespace Containers //Containers namespace 
	{
		//declare the Array class as a template of type T
		template <typename T > class Array
		{
			//private members
		private:
			T* m_data; // dynamic C array of type T objects
			int size; //the size of the array
			static int defaultSize; //static data member default size 

			//public functionality
		public:
			Array();                                //default constructor

			Array(int new_size);              //constructor with a size argument
			Array(const Array<T>& new_array);         // copy constructor

			virtual ~Array();                                  //destructor

			Array<T>& operator = (const Array<T>& new_array); //assignment operator

			const int& Size() const;                    //  returns the size of the array  

			const static int& DefaultSize();         //returns the default size of the array  
			static void DefaultSize(int newSize);     //set the array size

			void SetElement(int index, const T& p);    // sets an element at index of the array
			const T& GetElement(int index)const;        // return the element by reference at index of the array
			T& operator [] (int index);                 //  Return a reference of type T object so the[] operator can be used for both readingand writing T object
			const T& operator [] (int index) const;    // Return a reference of type T object so the const [] operator can be used for only reading  T object

		};
	}
}


//the client can keep including the header file for template classes instead of the source file
// ensures that there is no chance of a linker error, in case there were not include guards in the cpp itself
#ifndef Array_cpp // Must be the same name as in source file #define
#include "Array.cpp"
#endif// end of if statement for Array_cpp



#endif // end of if statement for ARRAY_HPP