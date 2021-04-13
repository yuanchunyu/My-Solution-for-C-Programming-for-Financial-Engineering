/*
* Level_9 Group A:
* Source file for EuropeanOption Class
*
*
* @file EuropeanOption.cpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/


#include "EuropeanOption.hpp"// header file for EuropeanOption class
#include "OptionExtras.hpp" //header file for OptionExtras methods

#include <cmath> //library for using math
#include <iostream> // Standard Input / Output Streams Library

using namespace std;//namespace declaration for using std


// Price of call
double EuropeanOption::CallPrice() const
{ 

	return call_price(T, K, sig, r, U, b);
}

// Price of put
double EuropeanOption::PutPrice() const
{ 

	return put_price(T, K, sig, r, U, b);
}


// Delta of call
double EuropeanOption::CallDelta() const
{ 

	return call_delta(T, K, sig, r, U, b);
}


// Delta of put
double EuropeanOption::PutDelta() const
{ 

	return put_delta(T, K, sig, r, U, b);
}

// Gamma of call
double EuropeanOption::CallGamma() const
{ 

	return call_gamma(T, K, sig, r, U, b);
}

// Gamma of put
double EuropeanOption::PutGamma() const
{ 

	return put_gamma(T, K, sig, r, U, b);
}

// Vega of call
double EuropeanOption::CallVega() const
{ 

	return call_vega(T, K, sig, r, U, b);
}

// Vega of put
double EuropeanOption::PutVega() const
{ 

	return put_vega(T, K, sig, r, U, b);
}

// Theta of call
double EuropeanOption::CallTheta() const
{ 

	return call_theta(T, K, sig, r, U, b);
}

// Theta of put
double EuropeanOption::PutTheta() const
{ 

	return put_theta(T, K, sig, r, U, b);
}

// Initialise all default values
void EuropeanOption::Init()
{ 
	//option type is "Call"
	Option::Init();
	T = 0.25;
	K = 65;
	sig = 0.30;
	r = 0.08;
	U = 60;
	b = r;
}

// Copy all values
void EuropeanOption::Copy(const EuropeanOption& source)
{ 

	Option::Copy(source);
	T = source.T;
	K = source.K;
	sig = source.sig;
	r = source.r;
	U = source.U;
	b = source.b;
}

// Default constructor
EuropeanOption::EuropeanOption() : Option()
{ 

	Init();
}

// Copy constructor
EuropeanOption::EuropeanOption(const EuropeanOption& source) : Option(source)
{

	Copy(source);
}

// Constructor with option type
EuropeanOption::EuropeanOption(const string& newOptionType) : Option(newOptionType)
{ 
	
	Init();
}



// Destructor
EuropeanOption::~EuropeanOption()
{ 
}

EuropeanOption& EuropeanOption::operator = (const EuropeanOption& source)
{ // Assignment operator

	Option::operator = (source); //copy source option type

	if (this == &source)// check if source  is the same as this object
	{
		return *this; //if same return directly
	}

	//assign source member to this object
	optionType = source.optionType;
	T = source.T;
	K = source.K;
	sig = source.sig;
	r = source.r;
	U = source.U;
	b = source.b;

	return *this; //return this object
}

// Use put-call parity to calculate put price
double EuropeanOption::CallToPut(double c) const
{ 

	return c + K * exp(-r * T) - U;
}
// Use put-call parity to calculate call price
double EuropeanOption::PutToCall(double p) const
{

	return p + U - K * exp(-r * T);
}
// Use underlying price as argument
double EuropeanOption::PriceWithS(double newU) const
{
	if (optionType == "Call")
	{
		return call_price(T, K, sig, r, newU, b);
	}
	else
	{
		return put_price(T, K, sig, r, newU, b);
	}
}
//// Use expiry time as argument
double EuropeanOption::PriceWithT(double newT) const
{
	if (optionType == "Call")
	{
		return call_price(newT, K, sig, r, U, b);
	}
	else
	{
		return put_price(newT, K, sig, r, U, b);
	}
}
// Use volatility as argument
double EuropeanOption::PriceWithSig(double newSig) const
{
	if (optionType == "Call")
	{
		return call_price(T, K, newSig, r, U, b);
	}
	else
	{
		return put_price(T, K, newSig, r, U, b);
	}
}
// Use any paramenters as argument
double  EuropeanOption::PriceWithAny(double newT, double newK, double newsig, double newr, double newU, double newb) const
{
	if (optionType == "Call")
	{
		return call_price(newT, newK, newsig, newr, newU, newb);
	}
	else
	{
		return put_price(newT, newK, newsig, newr, newU, newb);
	}
}
// Use divided differences to calculate Delta
double EuropeanOption::DeltaDiff(double U, double h) const
{
	return (PriceWithS(U + h) - PriceWithS(U - h)) / (2.0 * h);
}
// Use divided differences to calculate Gamma
double EuropeanOption::GammaDiff(double U, double h) const
{
	return (PriceWithS(U + h) - 2.0 * PriceWithS(U) + PriceWithS(U - h)) / (h * h);
}

