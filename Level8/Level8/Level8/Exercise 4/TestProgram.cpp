/*
* Level_8 Exercise 4:
* Test program for Random Number Generation
* 
* simulate dice throwing
* use functionality in Random library
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/22/2021
*
*/



#include "boost/random.hpp" //header file
#include <map> //library for using map
#include <iostream> // Standard Input / Output Streams Library

using namespace std;//namespace declaration for using std

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
	// Throwing dice.
	// Mersenne Twister.
	boost::random::mt19937 myRng;

	// Set the seed.
	myRng.seed(static_cast<boost::uint32_t> (std::time(0)));

	// Uniform in range [1,6]
	boost::random::uniform_int_distribution<int> six(1, 6);

	map<int, long> statistics; // Structure to hold outcome + frequencies
	int outcome;    // Current outcome

	int num = 1000000; //large number of trials

	cout << "How many trials? " << num << endl << endl;

	//for loop to simulate running dices 
	for (int i = 0; i < num; i++)
	{
		outcome = six(myRng); //randomly get one integer in the range[1,6]
		statistics[outcome]+=1;//update the relevant output frequencies
	}
	//for loop to print the result
	for (int i = 1; i <= 6; i++)
	{
		//print relevant trial frequencies statistics results
		cout << "Trial " << i << " has " << (double)statistics[i] / (double)num * 100 << "% outcomes" << endl;
	}


	return 0;//return 0 to end the program
}