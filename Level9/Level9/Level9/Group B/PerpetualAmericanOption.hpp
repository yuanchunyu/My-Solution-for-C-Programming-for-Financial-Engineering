
/*
* Level_9 Group B:
* Header file for PerpetualAmericanOption class.
*
* @file PerpetualAmericanOption.hpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/

#ifndef PERPETUALAMERICANOPTION_HPP //checks whether the PERPETUALAMERICANOPTION_HPP has been defined
#define PERPETUALAMERICANOPTION_HPP//define PERPETUALAMERICANOPTION_HPP

#include "Option.hpp" //header file for Option class
#include <string> //library for using string
#include <vector> //library for using vector
using namespace std; //namespace declaration for using std

//PerpetualAmericanOption classs declaration, derived from Option
class PerpetualAmericanOption : public Option
{
	//private members
private:
	double CallPrice() const; // Price of call
	double PutPrice() const; // Price of put
	void Init(); // Initialise all default values
	void Copy(const PerpetualAmericanOption& source); // Copy all values

	//public members
public:
	double K; // Strike price
	double sig; // volatility
	double r; // Risk free interest rate
	double U; // Current price of the underlying asset
	double b; // Cost of carry

	//public functionality
public:
	PerpetualAmericanOption(); // Default constructor
	PerpetualAmericanOption(const PerpetualAmericanOption& source); // Copy constructor
	PerpetualAmericanOption(const string& optionType); // Constructor with option type
	virtual ~PerpetualAmericanOption(); // Destructor

	// Assignment operator
	PerpetualAmericanOption& operator = (const PerpetualAmericanOption& source);

	// Functions that calculate option price and sensitivities
	double PriceWithS(double newU) const; // Using underlying price as argument
};



// Global Functions
double PerpetualCall(double K, double sig, double r, double U, double b);
double PerpetualPut(double K, double sig, double r, double U, double b);

#endif