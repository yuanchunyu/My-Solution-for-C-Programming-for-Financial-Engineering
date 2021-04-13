/*
* Level_8 Exercise 1:
* Test program for smart pointers
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/22/2021
*
*/

#include "boost/shared_ptr.hpp" // header file for using smart pointer

#include "Array.hpp" // header file for Array class
#include "Shape.hpp"  // header file for Shape class
#include "Point.hpp" //header file for Array class
#include "Line.hpp"  // header file for Line class
#include "Circle.hpp" // header file for circle class
#include <iostream> // Standard Input / Output Streams Library
#include "ArrayException.hpp"//Header file for ArrayException class



using namespace std; //namespace declaration for using std
using namespace Chunyu::CAD;//namespace declaration for using Chunyu::CAD
using namespace Chunyu::Containers; //namespace declaration for using Chunyu::Containers

// Typedef for a shared pointer to shape and
// a typedef for an array with shapes stored as shared pointers. 
typedef boost::shared_ptr<Shape> ShapePtr;
typedef Array<ShapePtr> ShapeArray;

/*
* Controls operation of the program
* Return type of main() expects an int
*
* @function main()
* @param none
* @return 0
*/

int main()
{


	//inside scope 1
	{
		//create ShapeArray with 3 size
		ShapeArray shape_array(3);
		
		//inside scope 2
		{

			try
			{
				//create a shared pointer to point(1,1) and assign it to first element of shape_array
				shape_array[0] = ShapePtr(new Point(1,1));;
				// create a shared pointer to line(start point (1,1), end point(1,10)) and assign it to second element of shape_array
				shape_array[1] = ShapePtr(new Line(Point(1, 1), Point(1, 10)));
				// create a shared pointer to circle(centre point(1,1), radius is 10) and assign it to third element of shape_array
				shape_array[2] = ShapePtr(new Circle(Point(1, 1), 10));
				
			}
			catch (ArrayException& error)// catch ArrayException error
			{
				//error message
				cout << error.GetMessage() << endl;
			}

			//for loop, iterate to check each member shape description  
			for (int i = 0; i < shape_array.Size(); i++)
			{
				try
				{
					shape_array[i]->Print(); // print the description
				}
				catch (ArrayException& error) // catch ArrayException error
				{
					//error message
					cout << error.GetMessage() << endl;
				}
			}

			//check current reference count for each member 
			cout << "Reference count:" << endl;

			//for loop, iterate to check each member reference count 
			for (int i = 0; i < shape_array.Size(); i++)
			{
				try
				{
					cout<<shape_array[i].use_count()<<endl;// get the member 's reference count and print
				}
				catch (ArrayException& error)// catch ArrayException error
				{
					//error message
					cout << error.GetMessage() << endl;
				}
			}
			//inside scope 3
			{
				// declare ShapePtr p1,l1,c1
				ShapePtr p1;
				ShapePtr l1;
				ShapePtr c1;

				try
				{
					// assign first member of shape_array  to p1
					p1 = shape_array[0];
					// assign second member of shape_array  to l1
					l1 = shape_array[1];
					// assign third member of shape_array  to c1
					c1 = shape_array[2];
				}
				catch (ArrayException& error)// catch ArrayException error
				{
					//error message
					cout << error.GetMessage() << endl;
				}

				//check reference count
				cout << "Reference count:" << endl;
				//for loop, iterate to check each member reference count 
				for (int i = 0; i < 3; i++)
				{
					try
					{
						cout << shape_array[i].use_count() << endl;// get the member 's reference count and print
					}
					catch (ArrayException& error)// catch ArrayException error
					{
						//error message
						cout << error.GetMessage() << endl;
					}
				}
			}
		}

		cout << "Out above scope, reference count:" << endl;
		//for loop, iterate to check each member reference count 
		for (int i = 0; i < 3; i++)
		{
			try
			{
				cout << shape_array[i].use_count() << endl;// get the member 's reference count and print
			}
			catch (ArrayException& error)// catch ArrayException error
			{
				//error message
				cout << error.GetMessage() << endl;
			}
		}
	}


	return 0;//return 0 to end program 
}