
/*
* Level_9 Group A:
* Source file for Option Class
*
* Base class for European options
* 
* @file Option.cpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/
#include "Option.hpp" //header file for option class
#include <iostream> // Standard Input / Output Streams Library
using namespace std;//namespace declaration for using std


// Initialise all default values
void Option::Init()
{ 
	// the default optionType is string call
	optionType = "Call";
}

// Copy all values
void Option::Copy(const Option& source)
{ 

	optionType = source.optionType;
}

// Default constructor
Option::Option()
{ 
	//call Init() to construct
	Init();
}

// Copy constructor
Option::Option(const Option& source)
{ 

	optionType = source.optionType;
}

// Constructor with option type
Option::Option(const string& newOptionType)
{ 

	
	optionType = newOptionType;
}

// Destructor
Option::~Option()
{ 
}

// Assignment operator
Option& Option::operator = (const Option& source)
{ 

	if (this == &source)// check if source  is the same as this object
	{
		return *this; // if same, return directly
	}

	optionType = source.optionType;//assign option type of source 

	return *this; //returnthis object
}

// Functions that calculate option prices 
double Option::Price() const
{
	if (optionType == "Call") //if the option type is "Call"
	{
		return CallPrice(); //call function CallPrice to get the result
	}
	else//if the option type is "Put"
	{
		return PutPrice();//call function PutPrice to get the result
	}
}

// Functions that calculate delta sensitivities
double Option::Delta() const
{
	if (optionType == "Call")//if the option type is "Call"
	{
		return CallDelta();//call function CallDelta to get the result
	}
	else//if the option type is "Put"
	{
		return PutDelta();//call function PutDelta to get the result
	}
}
// Functions that calculate gamma sensitivities
double Option::Gamma() const
{
	if (optionType == "Call")//if the option type is "Call"
	{
		return CallGamma();//call function CallGamma to get the result
	}
	else//if the option type is "Put"
	{
		return PutGamma();//call function PutGamma to get the result
	}
}
// Functions that calculate vega sensitivities
double Option::Vega() const
{
	if (optionType == "Call")//if the option type is "Call"
	{
		return CallVega();//call function CallVega to get the result
	}
	else//if the option type is "Put"
	{
		return PutVega();//call function PutVega to get the result
	}
}
// Functions that calculate theta sensitivities
double Option::Theta() const
{
	if (optionType == "Call")//if the option type is "Call"
	{
		return CallTheta();//call function CallTheta to get the result
	}
	else//if the option type is "Put"
	{
		return PutTheta();//call function PutTheta to get the result
	}
}

// Modifier functions to change option type
void Option::toggle()
{

	optionType = ((optionType == "Call") ? "Put" : "Call");
}
double Option::CallDelta() const // Delta of call
{
	cout << "Not define " << endl;
	return 0;
}
double Option::PutDelta() const // Delta of put
{
	cout << "Not define " << endl;
	return 0;
}
double Option::CallGamma() const // Gamma of call
{
	cout << "Not define " << endl;
	return 0;
}
double Option::PutGamma() const // Gamma of put
{
	cout << "Not define " << endl;
	return 0;
}
double Option::CallVega() const // Vega of call
{
	cout << "Not define " << endl;
	return 0;
}
double Option::PutVega()const  // Vega of put
{
	cout << "Not define " << endl;
	return 0;
}
double Option::CallTheta() const // Theta of call
{
	cout << "Not define " << endl;
	return 0;
}
double Option::PutTheta() const // Theta of put
{
	cout << "Not define " << endl;
	return 0;
}