/*
* Level_6 Exercise 4.2b.5:
* Test program for Layering Exceptions
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/16/2021
*
*/


#include "Stack.hpp"     //header file for Stack class
#include <iostream> // Standard Input / Output Streams Library
#include "StackException.hpp" //header file for StackException
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

	Stack<int>stack(10);   //create 10 size stack class object 

	//Test Push function 
	cout << "Test Stack Push function " << endl;
	try
	{
		//for loop, iterate to push integer
		for (int i = 0;i < 10;i++)
		{
			stack.Push(i);                    //push i to stack
			cout << "Push: " << i << endl;   //print pushed i value
		}
	}
	catch (StackException& error) //catch stack exception, if full
	{
		//error message
		cout <<  error.GetMessage()  << endl;
	}

	//Test Stack Push function when embedded array is full
	cout << "\nTest Stack Push function when embedded array is full \n" << endl;
	cout << "\nTest StackFullException when embedded array is empty \n" << endl;
	try
	{

		stack.Push(10); // push 10 to stack

	}
	catch (StackException& error)//catch stack exception, if full
	{
		//error message
		cout << error.GetMessage() << endl;
	}


	//Test Stack Pop function 
	cout << "\nTest Stack Pop function  \n" << endl;
	try
	{
		//for loop , iterate to pop the value from the stack
		for (int i = 0;i < 10;i++)
		{
			// pop value from the stack and print the pop value
			cout << "Pop: " << stack.Pop() << endl;
		}
	}
	catch (StackException& error)//catch stack exception, if empty
	{
		//error message
		cout << error.GetMessage() << endl;
	}

	//Test Stack Pop function when embedded array is empty
	cout << "\nTest Stack Pop function when embedded array is empty \n" << endl;
	cout << "\nTest StackEmptyException when embedded array is empty \n" << endl;
	try
	{

		// pop value from the stack and print the pop value
		cout << "Pop: " << stack.Pop() << endl;

	}
	catch (StackException& error) //catch stack exception, if empty
	{
		//error message
		cout << error.GetMessage() << endl;
	}


	return 0;//return 0 to end program

}