/*
* Level_9 Group A:
* Header file for Option Class
*
* Base class for options
*
* @file Option.hpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/

#ifndef OPTION_HPP//checks whether the OPTION_HPP has been defined
#define OPTION_HPP // define OPTION_HPP

#include <string> //library for using string

// class option declaration 
class Option
{

	//private functities
private:
	virtual double CallPrice() const = 0; // Price of call
	virtual double PutPrice() const = 0; // Price of put
	virtual double CallDelta() const ; // Delta of call
	virtual double PutDelta() const ; // Delta of put
	virtual double CallGamma() const ; // Gamma of call
	virtual double PutGamma() const ; // Gamma of put
	virtual double CallVega() const ; // Vega of call
	virtual double PutVega() const ; // Vega of put
	virtual double CallTheta() const ; // Theta of call
	virtual double PutTheta() const ; // Theta of put


     //public member
public:

	std::string  optionType; // Option type, call or put

	//public functities
public:

	virtual void Init(); // Initialise all default values
	virtual void Copy(const Option& source); // Copy all values
	
	Option(); // Default constructor
	Option(const std::string& optionType); // Constructor with option type
	Option(const Option& source); // Copy constructor
	virtual ~Option(); // Destructor

	// assignment operator
	Option& operator = (const Option& source);

	// Functions that calculate option price and sensitivities
	double Price() const;
	double Delta() const;
	double Gamma() const;
	double Vega() const;
	double Theta() const;

	// Modifier functions
	void toggle(); // Change option type
};



#endif//end if statement of OPTION_HPP