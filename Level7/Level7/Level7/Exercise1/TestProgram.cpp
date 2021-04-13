/*
* Level_7 Exercise 1
* Test program for STL Containers
*
* Create a list of doubles and add some data. Use the front() and back() functions to
* access the first and last element.
* 
* Create a vector of doubles and add some data. Then use the index operator to access
* some elements. Also make the vector grow.
* 
* Create a map that maps strings to doubles. Fill the map and access elements using the
* square bracket operator
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/17/2021
*
*/

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

	//Practice list 
	cout << "Practice list" << endl;

	list <double> list1;//create list 
	
	//for loop, add three value to the list
	cout << "\nAdd three value to the list" << endl;
	for (int i = 0;i < 3;i++)
	{
		list1.push_back(i+0.5); //  Adds a new element at the end of the list container,
		
	}
	//create a list iterator 
	list<double>::iterator it;
	
	cout << "\nAfter push back, the list container: " << endl;
	//for loop, to access each element and print
	for (it=list1.begin();it != list1.end();it++)
	{
		cout << *it << " ";// print the element in the list container
	}
	cout << "\n"; //new line
	//use the front() funciton to access the first element and print 
	cout << "The fist element of the list is :" << list1.front() << endl;
	//use the back() funciton to access the last element and print 
	cout << "The last element of the list is :" << list1.back() << endl;

	//for loop, add three value  to the list again
	cout << "\nAdd three value to the list again" << endl;
	for (int i = 0;i < 3;i++)
	{
		list1.push_front(i+0.5);//  Adds a new element at the first of the list container,

	}
	cout << "\nAfter push front to the list container: " << endl;
	//for loop, to access each element and print
	for (it = list1.begin();it != list1.end();it++)
	{
		cout << *it << " ";// print the element in the list container
	}
	cout << "\n"; //new line
	//use the front() funciton to access the first element and print 
	cout << "The fist element of the list is :" << list1.front() << endl;
	//use the back() funciton to access the last element and print 
	cout << "The last element of the list is :" << list1.back() << endl;
	list1.clear();//Removes all elements from the list container
	cout << "\n"; //new line






	// Practice vector
	cout << "Practice vector" << endl;

	vector<double> vector1;        //Create vector with ints
	vector1.reserve(1);            //Reserce space for 1 element 

	//check the number of elements and print
	cout <<"\nvector size is : "<< vector1.size() << endl;
	// cehck the vector's capacity and print 
	cout << "vector capacity is : " << vector1.capacity() << endl;

	//for loop, add 7 element to the vector
	for (int i = 0; i < 7; i++)
	{
		vector1.push_back(i + 0.5); //insert element to vector
	}

	cout << "\nAfter insert elements to the vector container: \nUse index operator to access the element and print " << endl;
	//for loop,iterate to access the elementand print
	for (int i = 0; i < vector1.size(); i++)
	{
		cout << vector1[i] << ","; //Use index operator to access the element and print
	}
	//check the number of elements and print
	cout << "\nAfter insert elements : "  << endl;
	//check current size
	cout << "\nvector current size is : " << vector1.size() << endl;
	//check current capacity
	cout << "vector current capacity is : " << vector1.capacity() << endl;

	cout << "\nChange first element of vector to 100.5 : "  << endl;
	//use index operator to access the first element and ressign it to 100.5 
	vector1[0] = 100.5;
	cout << "\nAfter changing first element of vector to 100.5 : \nUse index operator to access first element and print " << endl;
	//use index operator to access the first element and print
	cout << vector1[0] << endl;
	

	vector1.clear();//Removes all elements from the vector container

	cout << "\n"; //new line


	// Practice map
	cout << "Practice map" << endl;
	//create map with key: const string, val:double
	map <const string, double>map1;
	map1["test1"] = 123.5; //key "test1" Cooresponding to val 123.5
	map1["test2"] = 124.5;//key "test2" Cooresponding to val 124.5


	//for loop iterate to access the key and cooresponed val
	for (map<string,double>::const_iterator i = map1.begin();i != map1.end();i++)
	{
		//print key and cooresponed val
		cout <<"Map key: "<< (*i).first << " , value : "<< (*i).second << endl;
	}

	map1.clear();//Removes all elements from the map container





	return 0; //return 0 to end program
}