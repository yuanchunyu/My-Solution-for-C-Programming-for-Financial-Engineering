/*
* Level_9 Group A:
* Header file for EuropeanOption Class
*
*
* @file EuropeanOption.hpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/


#ifndef EUROPEANOPTION_HPP//checks whether the EUROPEANOPTION_HPP has been defined
#define EUROPEANOPTION_HPP//define EUROPEANOPTION_HPP

#include "Option.hpp" //header file from Option base class
#include <string> // library for using string
#include <vector> //library for using vector
using namespace std;//namespace declaration for using std

//EuropeanOption class declaration, derived from Option class
class EuropeanOption : public Option
{
	//private functionality
private:
	double CallPrice() const; // Price of call
	double PutPrice() const; // Price of put
	double CallDelta() const; // Delta of call
	double PutDelta() const; // Delta of put
	double CallGamma() const; // Gamma of call
	double PutGamma() const; // Gamma of put
	double CallVega() const; // Vega of call
	double PutVega() const; // Vega of put
	double CallTheta() const; // Theta of call
	double PutTheta() const; // Theta of put
	void Init(); // Initialise all default values
	void Copy(const EuropeanOption& source); // Copy all values

	//public members
public:
	double T; // Expiry time
	double K; // Strike price
	double sig; // volatility
	double r; // Risk free interest rate
	double U; // Current price of the underlying asset
	double b; // Cost of carry
	
	//public functionality
public:
	EuropeanOption(); // Default constructor
	EuropeanOption(const EuropeanOption& source); // Copy constructor
	EuropeanOption(const  string& newOptionType); // Constructor with option type
	virtual ~EuropeanOption(); // Destructor

	// Member operator overloading
	EuropeanOption& operator = (const EuropeanOption& source);

	// Additional Functions that calculate option price and sensitivities
	double CallToPut(double c) const; // Use put-call parity to calculate put price
	double PutToCall(double p) const; // Use put-call parity to calculate call price
	double PriceWithS(double newU) const; // Use underlying price as argument
	double PriceWithT(double newT) const; // Use expiry time as argument
	double PriceWithSig(double newSig) const; // Use volatility as argument
	double PriceWithAny(double T, double K, double sig, double r, double U, double b) const; // Use any parmeters as argument
	double DeltaDiff(double U, double h) const; // Use divided differences to calculate Delta
	double GammaDiff(double U, double h) const; // Use divided differences to calculate Gamma
};




#endif// end if statement of EUROPEANOPTION_HPP