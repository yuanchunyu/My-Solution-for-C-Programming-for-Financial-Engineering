/*
* Level_6 Exercise 4.2b.2:
* Test program for  Numeric Array (generic inheritance)
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/


#include "NumericArray.hpp" //header file for NumericArray class
#include "Point.hpp" // Header file for point class
#include <iostream> // Standard Input / Output Streams Library
#include "ArrayException.hpp" //header file for ArrayException Class


using namespace std; //namespace declaration for using std
using namespace Chunyu::CAD; //namespace declaration for using Chunyu::CAD
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

	// Test default constructor.
	cout << "Test NumericArray default constructor : "  << endl;

	NumericArray<int> array0; //declare a NumbericArray<int> object array0
	//get the size of array0 and print
	cout << "NumericArray0: " << endl << "size = " << array0.Size() << endl;



	// Test constructor with size as input.
	cout << "\nTest NumericArray constructor with size as input : " << endl;
	NumericArray<int> array1(2);   //declare a NumbericArray<int> object array1 with 2 size
	array1[0] = 1;                 // assign 1 to first of element in array1
	array1[1] = 2;                 // assign 2 to second of element in array1

	//access the element value and print
	cout << "NumericArray1: " << endl << array1[0] << "," << array1[1] << endl;

	// Test copy constructor.
	cout << "\nTest NumericArray copy constructor : " << endl;
	NumericArray<int> array2(array1);           // create a new NumbericArray<int> object array2 and copy array1 
	//access the elements value in array2 and print
	cout << "NumericArray2 elements: " << endl << array2[0] << "," << array2[1] << endl;

	// Test DefaultSize.
	cout << "\nTest NumericArray DefaultSize: " << endl;
	NumericArray<int> array3(3);  // create a new NumbericArray<int> object array3 with size is 3
	//get the default size and print
	cout << "NumericArray3 default size: " <<array3.DefaultSize()<< endl; 


	// Test assignment operator.
	cout << "\nTest NumericArray assignment operator: " << endl;
	NumericArray<int> array4 = array1; // create a new NumbericArray<int> object array4 and assign array1 to array4
	cout << "NumericArray4: " << endl;

	//for loop to iterate access the elements in array4 and print
	for (int i = 0; i < array4.Size(); i++)
	{
		cout << array4[i] << endl; //access the elements in array4 and print
	}

	// Test * operator.
	cout << "\nTest NumericArray  * operator: " << endl;
	//create a new NumbericArray<int> object array5 and scale array2 3 times and assign  to array5
	NumericArray<int> array5 = array2 * 3;
	cout << "NumericArray5: " << endl;
	//for loop to iterate access the elements in array5 and print
	for (int i = 0; i < array5.Size(); i++)
	{
		cout << array5[i] << endl;//access the elements in array5 and print
	}

	// Test + operator and case with incompatible size.
	cout << "\nTest NumericArray   + operator and case with incompatible size: " << endl;
	cout << "\n(1)Test NumericArray   + operator and case with same size: " << endl;
	// create a new NumbericArray<int> object array6 with size is 2
	NumericArray<int> array6(2);
	try
	{
		array6 = array1 + array2;//plus array1 and array2, assign  the new NumbericArray<int> object to array6
	}
	catch (ArrayException& ex)//catch size exception  
	{
		cout << ex.GetMessage() << endl; //error message 
	}

	cout << "NumericArray6: " << endl;
	//for loop and iterate to accesss the element and print
	for (int i = 0; i < array6.Size(); i++)
	{
		cout << array6[i] << endl; //accesss the element and print
	}

	cout << "\n(2)Test NumericArray   + operator and case with different size: " << endl;
	NumericArray<int> array7;         //create new NumericArray<int> object array7
	cout << "NumericArray7: " << endl;

	try
	{
		array7 = array1 + array3; // plus array1 that size is 2 and array3 that size is 3, assign result to array7
	}
	catch (ArrayException& ex)// catch size exception 
	{
		cout << ex.GetMessage() << endl; //error message
	}

	// Test dot product and case with incompatible size.
	cout << "\nTest NumericArray   dotproduct and case with incompatible size: " << endl;
	cout << "\n(1)Test NumericArray   dotproduct and case with same size: " << endl;
	double dot_product8;          // create a double dot_product8 for the result of dot product
	cout << "dot_product8: " << endl;
	
	try
	{
		dot_product8 = array1.DotProduct(array2);//  call DotProduct to calculate the dot  product of array1 and array2
	}
	catch (ArrayException& ex)   //catch size exception
	{
		cout << ex.GetMessage() << endl; //error message
	}
	cout <<"The dot product of array1 and array2" <<dot_product8 << endl;          //

	double dot_product9;             // create a double dot_product9 for the new result of dot product   
	cout << "\n(2)Test NumericArray   dotproduct and case with different size: " << endl;
	cout << "dot_product9: " << endl;

	try
	{
		//  call DotProduct to calculate the dot  product of array1 that size is 2 and array3 that size is 3
		dot_product9 = array1.DotProduct(array3);
	}
	catch (ArrayException& ex)          //catch size exception
	{
		cout << ex.GetMessage() << endl; //error message
	}



	cout << "\nTest creating a numeric array with Point objects" << endl;
	NumericArray<Point> array8(2);     //create a new NumericArray<Point> object array8 with size is 2

	//for loop to iterate to create new point object and assign to element 
	for (int i = 0;i < 2;i++)   
	{
		array8[i] = Point(i, i);//create new point object and assign to element 
	}

	//for loop to iterate to access element and print
	for (int i = 0;i < 2;i++)
	{
		cout<<array8[i] <<endl; // print each element
	}


	cout << "\nTest NumericArray<Point>  * operator: " << endl;

	
	
	NumericArray<Point> array9= array8 * 2; // create a new NumericArray<Point> object and scale it 2 times

	//for loop and iterate to access the element
	for (int i = 0;i < 2;i++)
	{
		cout << array9[i] << endl; // get the element and print
	}
	
	cout << "\nTest NumericArray<Point>  + operator: " << endl;

	NumericArray<Point> array10(2);// create a new NumericArray<Point> object array10 and its size is 2

	//for loop and iterate to create point object and assign it to the element
	for (int i = 0;i < 2;i++)
	{
		array10[i] = Point(10, 10); //create point object and assign it to the element
	}

	//create a new NumericArray<Point> array11
	NumericArray<Point> array11;
	try
	{
		array11 = array9 + array10; // plus array9 and array10, then assign to array11
	}
	catch (ArrayException& ex)    // catch size different exception
	{
		cout << ex.GetMessage() << endl; // error message
	}
	 
	//for loop and iterate to access the element
	for (int i = 0;i < 2;i++)
	{
		cout << array11[i]  << endl; // get element and print
	}

//	int res = array8.DotProduct(array9) ;

	/*	try
	{
	 res = array8.DotProduct(array9) ;
	}
	catch (ArrayException& ex)
	{
		cout << ex.GetMessage() << endl;
	}
	*/

	//since the point didn't exist the Point Point::operator * (const Point& p) const
	//NumbericArray<Point> cannot use DotProduct()


	//So we can create point numberic array, however, DotProduct() is not working for the point


	return 0; //return 0 to end program

}