

/*
* Level_7 Exercise 2:
* Test program for STL Iterators
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/

#include "Sum.hpp"  //header file for Sum functions

#include <iostream> // Standard Input / Output Streams Library
#include <list> //library for list
#include <iterator>//library for iterator
#include <vector> //library for vector
#include <map> //library for map

using namespace std; //namespace declaration for using std
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
	//Test STL Iterator for list
	cout << "Test STL Iterator for list:" << endl;

	//create list 
	list<double> list1;

	
	list1.push_back(1.5); //  Adds 1.5 to the list
	list1.push_back(2.5); //  Adds 2.5 to the list
	list1.push_back(1.5);//  Adds 1.5 to the list
	list1.push_back(2.5);//  Adds 2.5 to the list


	//create a list iterator 
	list<double>::iterator it;

	cout << "\nAfter push back, the list container: " << endl;
	//for loop, to access each element and print
	for (it = list1.begin();it != list1.end();it++)
	{
		cout << *it << " ";// print the element in the list container
	}
	//Test function Sum() with container argument for list
	cout << "\nTest function Sum() with container argument for list" << endl;
	cout << Sum(list1) << endl; //call function Sum() with container argument

	list<double>::const_iterator ite_start = list1.begin(); // an iterator pointing to the first element in list
	list<double>::const_iterator ite_end = list1.end(); //iterator pointing to the past-the-end element in the list
	
    //Test function Sum() with two iterator for list
	cout << "\nTest function Sum() with two iterator argument for list" << endl;
	cout << Sum<list<double>>(ite_start, ite_end) << endl; //call function Sum() with two iterator

	list1.clear();//Removes all elements from the list container
	cout << "\n"; //new line

	//Test STL Iterator for victor
	cout << "Test STL Iterator for victor:" << endl;

	//create vector
	vector<double> vector1;

	vector1.push_back(3.5); //  Adds 3.5 to the vector
	vector1.push_back(1.5); //  Adds 1.5 to the vector
	vector1.push_back(1.5);//  Adds 1.5 to the vector
	vector1.push_back(3.5);//  Adds 3.5 to the vector

	//create a vector iterator 
	vector<double>::iterator it1;

	cout << "\nAfter push back, the vector container: " << endl;
	//for loop, to access each element and print
	for (it1 = vector1.begin();it1 != vector1.end();it1++)
	{
		cout << *it1 << " ";// print the element in the vector container
	}
	//Test function Sum() with container argument for vector
	cout << "\nTest function Sum() with container argument for vector" << endl;
	cout << Sum(vector1) << endl;//call function Sum() with container argument

	vector<double>::const_iterator ite3_start = vector1.begin(); // an iterator pointing to the first element in vector
	vector<double>::const_iterator ite4_end = vector1.end(); //iterator pointing to the past-the-end element in the vector
	

	//Test function Sum() with two iterator for vector
	cout << "\nTest function Sum() with two iterator argument for vector" << endl;
	cout << Sum<vector<double>>(ite3_start, ite4_end) << endl; //call function Sum() with two iterator
	vector1.clear();//Removes all elements from the list container
	cout << "\n"; //new line

	//Test STL Iterator for map
	cout << "Test STL Iterator for map:" << endl;
	//create map
	map<string,double> map1;

	map1["hello1"] = 4.5; //key "hello1" Cooresponding to val 4.5
	map1["hello2"] = 1.5;//key "hello2" Cooresponding to val 1.5
	map1["hello3"] = 1.5;//key "hello3" Cooresponding to val 1.5
	map1["hello4"] = 4.5; //key "hello4" Cooresponding to val 4.5

	cout << "\nAfter inserted, the map container: " << endl;
	//for loop, to access each element and print
	//for loop iterate to access the key and cooresponed val
	for (map<string, double>::const_iterator i = map1.begin();i != map1.end();i++)
	{
		//print key and cooresponed val
		cout << "Map key: " << (*i).first << " Map value : " << (*i).second << endl;
	}

	//Test function Sum() with container for map
	cout << "\nTest function Sum() with container for map" << endl;
	cout << Sum(map1) << endl;//call function Sum() with container

	//Test function Sum() with two iterator for vector
	cout << "\nTest function Sum() with two iterator argument for map" << endl;
	map<string, double>::const_iterator ite5_start = map1.begin();// an iterator pointing to the first element in map
	map<string, double>::const_iterator ite6_end = map1.end();//iterator pointing to the past-the-end element in the map
	

	//call function Sum() with two iterator
	cout << Sum<string, double>(ite5_start, ite6_end) << endl;




	return 0;//return 0 to end program
}