/*
* Level_6 Exercise 4.2b.1:
* Test program for Static Variable for Array Default Size
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/14/2021
*
*/

#include "Array.hpp" //header file for Array class
#include <iostream> // Standard Input / Output Streams Library

using namespace std; //namespace declaration for using std
using namespace Chunyu::Containers; //namespace declaration for using Chunyu::Containers
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
	//create Array object intArray1 ,the typename is int
	Array<int> intArray1;
	//create Array object intArray2 ,the typename is int
	Array<int> intArray2;
	//create Array object doubleArray ,the typename is double
	Array<double> doubleArray;

	//get defaultsize of intArray1 and print
	cout << intArray1.DefaultSize() << endl;   //10

	//get defaultsize of intArray2 and print
	cout << intArray2.DefaultSize() << endl;   //10

	//get defaultsize of doubleArray and print
	cout << doubleArray.DefaultSize() << endl;  //10

	//set intArray1 defaultsize to 15
	intArray1.DefaultSize(15);                   //set the default size is 15

	//get defaultsize of intArray1 and print
	cout << intArray1.DefaultSize() << endl;   //15
	//get defaultsize of intArray2 and print
	cout << intArray2.DefaultSize() << endl;   //15
	//get defaultsize of doubleArray and print
	cout << doubleArray.DefaultSize() << endl;  //10

	//reason is that intArray1 and intArray2 has the same class Array<int>. When change the static data member 
	//defaultSize to 15, all the same class Array<int>'s defaultSize will be changd. So intArray1 and intArray2 have the
	//same defaultSize, doubleArray's class is Array<double> which is different from Array<int>, so its defaultSize still 10

	return 0;//return 0 to end program 

}