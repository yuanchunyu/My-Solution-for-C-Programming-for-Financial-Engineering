/*
* Level_9 Group B:
* Source file for PerpetualAmericanOption class.
*
* @file PerpetualAmericanOption.cpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/

#include "PerpetualAmericanOption.hpp" //header file for PerpetualAmericanOption
#include "OptionExtras.hpp"// header file for OptionExtra method 
#include <string> //library for using string
#include <vector> // library for using vector
using namespace std; //namespace declaration for using std


// Price of call
double PerpetualAmericanOption::CallPrice() const
{ 

	return ::PerpetualCall(K, sig, r, U, b);
}

// Price of put
double PerpetualAmericanOption::PutPrice() const
{ 

	return ::PerpetualPut(K, sig, r, U, b);
}

// Initialise all default values
void PerpetualAmericanOption::Init()
{ 

	Option::Init();
	K = 100;
	sig = 0.1;
	r = 0.1;
	U = 110;
	b = r;
}
// Copy all values
void PerpetualAmericanOption::Copy(const PerpetualAmericanOption& source)
{ 

	Option::Copy(source);
	K = source.K;
	sig = source.sig;
	r = source.r;
	U = source.U;
	b = source.b;
}
// Default constructor
PerpetualAmericanOption::PerpetualAmericanOption() : Option()
{ 

	Init();
}
// Copy constructor
PerpetualAmericanOption::PerpetualAmericanOption(const PerpetualAmericanOption& source) : Option(source)
{ 

	Copy(source);
}
// Constructor with option type
PerpetualAmericanOption::PerpetualAmericanOption(const string& optionType) : Option(optionType)
{ 

	Init();
}


// Destructor
PerpetualAmericanOption::~PerpetualAmericanOption()
{ 
}

// Assignment operator
PerpetualAmericanOption& PerpetualAmericanOption::operator = (const PerpetualAmericanOption& source)
{ 

	Option::operator = (source);

	if (this == &source) //check if source is the same as this object 
	{
		return *this; // if same , directly return 
	}

	//assign the source member
	Option::Copy(source);
	K = source.K;
	sig = source.sig;
	r = source.r;
	U = source.U;
	b = source.b;

	return *this; //return this object
}
// Using underlying price as argument
double PerpetualAmericanOption::PriceWithS(double newU) const
{

	if (optionType == "Call")
	{
		return ::PerpetualCall(K, sig, r, newU, b);
	}
	else
	{
		return ::PerpetualPut(K, sig, r, newU, b);
	}
}

// Global Functions Perpetual price of call
//reference by TestPerpetualAmericanOption.hpp example code in the course

double PerpetualCall(double K, double sig, double r, double U, double b)
{
	double sig2 = sig * sig;
	double fac = b / sig2 - 0.5;
	fac *= fac;
	double y1 = 0.5 - b / sig2 + sqrt(fac + 2.0 * r / sig2);
	
	if (y1 == 1.0)
	{
		return U;
	}

	double fac2 = ((y1 - 1.0) * U) / (y1 * K);
	double c = K * pow(fac2, y1) / (y1 - 1.0);

	return c;
}
// Global Functions Perpetual price of put
//reference by TestPerpetualAmericanOption.hpp example code in the course
double PerpetualPut(double K, double sig, double r, double U, double b)
{
	double sig2 = sig * sig;
	double fac = b / sig2 - 0.5;
	fac *= fac;
	double y2 = 0.5 - b / sig2 - sqrt(fac + 2.0 * r / sig2);

	if (y2 == 0.0)
	{
		return U;
	}

	double fac2 = ((y2 - 1.0) * U) / (y2 * K);
	double p = K * pow(fac2, y2) / (1.0 - y2);

	return p;
}