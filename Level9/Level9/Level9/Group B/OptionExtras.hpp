/*
* Level_9 Group B:
* Header file for OptionExtras methods
*
* option operation function, reference to OptionExtras.cpp in the cource example code
*
* @file OptionExtras.hpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/
#include <vector> //library for using vector
using namespace std;//namespace declaration for using std

#ifndef OPTIONEXTRAS_HPP //checks whether the OPTIONEXTRAS_HPP has been defined
#define OPTIONEXTRAS_HPP//define OPTIONEXTRAS_HPP

//A simple mesher on a 1d domain
vector<double> GenerateMeshArray(double begin, double end, int n);

//price of call with T,K,sig, r, U, b
double call_price(double T, double K, double sig, double r, double U, double b);

//price of put with T,K,sig, r, U, b
double put_price(double T, double K, double sig, double r, double U, double b);

// delta of call with T,K,sig, r, U, b
double call_delta(double T, double K, double sig, double r, double U, double b);

//delta of put with T,K,sig, r, U, b
double put_delta(double T, double K, double sig, double r, double U, double b);

//gamma of call with T,K,sig, r, U, b
double call_gamma(double T, double K, double sig, double r, double U, double b);

//gamma of put with T,K,sig, r, U, b
double put_gamma(double T, double K, double sig, double r, double U, double b);

//vega of call with T,K,sig, r, U, b
double call_vega(double T, double K, double sig, double r, double U, double b);

//vega of put with T,K,sig, r, U, b
double put_vega(double T, double K, double sig, double r, double U, double b);

//theta of call with T,K,sig, r, U, b
double call_theta(double T, double K, double sig, double r, double U, double b);

//theta of put with T,K,sig, r, U, b
double put_theta(double T, double K, double sig, double r, double U, double b);
#endif // end if statement of OPTIONEXTRAS_HPP