/*
* Level_7 Exercise 3:
* Test program for STL Algorithms
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/17/2021
*
*/


#include "Functor.hpp" //header file for Functor
#include <algorithm>  // library for using algorithm such a count_if
#include <vector>    // library for vector
#include <iostream>  // Standard Input / Output Streams Library

using namespace std;  //namespace declaration for using std



// Global function checking the input is less than a flag value.
bool lessThanTwo(const double val)
{
	double limit = 2; //flag value
	return val < limit; //check the val with the flag value and return the boolean result
}
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
	//define a vector
	vector <double>vector1;
	vector1.push_back(1.1); //add 1.1 to vector
	vector1.push_back(3.1);//add 3.1 to vector
	vector1.push_back(2.1);//add 2.1 to vector
	vector1.push_back(3.1);//add 3.1 to vector

	cout << "\nAfter insert elements to the vector container: \nUse index operator to access the element and print\n " << endl;
	//for loop,iterate to access the elementand print
	for (int i = 0; i < vector1.size(); i++)
	{
		cout << vector1[i] << " , "; //Use index operator to access the element and print
	}
	cout << "\n"; //new line
	//Practice count_if using iterators and global fuction
	cout<<"\nPractice count_if using iterators and global fuction, less than 2"<<endl;
	// call count_if algorithm function with start and end iterator and a global function small_flag_Value
	cout << count_if(vector1.begin(), vector1.end(), lessThanTwo) << endl;

	//create Funcor<double> object with 5 as the flag value
	Functor<double> functor(5);
	cout << "\nPractice count_if using iterators and functor with flag value 5 " << endl;
	cout << count_if(vector1.begin(), vector1.end(), functor) << endl;

	//create Funcor<double> object using default constructor
	Functor<double>  functor1;
	cout << "\nPractice count_if using iterators and functor  " << endl;
	cout << count_if(vector1.begin(), vector1.end(), functor1) << endl;
	//create Funcor<double> object with 5 as the flag value
	Functor<double>  functor2(3);
	cout << "\nPractice count_if using iterators and functor with flag value 3 " << endl;
	cout << count_if(vector1.begin(), vector1.end(), functor2) << endl;



	return 0; //return 0 to end this program
}