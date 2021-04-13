/*
* Level_8 Exercise 2:
* Test program for Tuple
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/22/2021
*
*/


#include "boost//tuple/tuple.hpp"//header file for using tuple
#include "boost/tuple/tuple_io.hpp" // header file for using tuples with streams
#include <string> //library for suing string
#include <iostream> // Standard Input / Output Streams Library

using namespace std;//namespace declaration for using std


// typedef Person as a tuple composed of name, age and length
typedef boost::tuple<string, int, double> Person;

/*
* print person's information 
* 
* @function pring_Person_information()
* @author Chunyu Yuan
* @param reference of Person which is a tuple composed of name, age and length
* @return none
* @version 1.0 02/22/2021
* 
* 
*/
void pring_Person_information(const Person& person) 
{
	//print person information 
	cout << "\nPerson information:" << endl;
	// get the first value reference in the tuple and print, it is the person name
	cout << "Name: " << person.get<0>() << endl; 
	// get the second value reference in the tuple and print, it is the person age
	cout << "Age: " << person.get<1>() << endl;
	// get the third value reference in the tuple and print, it is the person length
	cout<< "Length: " << person.get<2>() <<"\n"<< endl;
}

/*
* Controls operation of the program
* Return type of main() expects an int
*
* @function main()
* @param none
* @return 0
*/int main()
{
	//Creating tuples using Tuple constructor with appropriate arguments
	// Create person1 using Tuple constructor with name string "Chunyu1", age is 11, length is 173.5
	Person preson1 = boost::make_tuple(string("Chunyu1"), 11, 173.5);
	// Create person1 using Tuple constructor with name string "Chunyu2", age is 12, length is 178.5
	Person preson2 = boost::make_tuple(string("Chunyu2"), 12, 178.5);
	// Create person1 using Tuple constructor with name string "Chunyu3", age is 13, length is 183.5
	Person preson3 = boost::make_tuple(string("Chunyu3"), 13, 183.5);
	cout << "Get Person informaiton\n" << endl;

	cout << "*****Person1 informaiton*****" << endl;
	//call funciton pring_Person_information to get person1 informaiton
	pring_Person_information(preson1);

	cout << "*****Person2 informaiton*****" << endl;
	//call funciton pring_Person_information to get person2 informaiton
	pring_Person_information(preson2);

	cout << "*****Person3 informaiton*****" << endl;
	//call funciton pring_Person_information to get person3 informaiton
	pring_Person_information(preson3);

	
	// Increment 10 to the age of person3.
	preson3.get<1>() += 10;
	cout << "After increasing 10 to the age of person3, get person3 informaiton\n" << endl;
	cout << "*****Person3 informaiton*****" << endl;
	//call funciton pring_Person_information to get person3 informaiton
	pring_Person_information(preson3);


	return 0;// return 0 to end program
}