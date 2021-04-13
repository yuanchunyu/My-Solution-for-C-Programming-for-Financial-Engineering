/*
* Level_9 Group B:
* Test program file for the exact solutions of PerpetualAmericanOption options.
*
*
* @file TestPerpetualAmericanOption.cpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/
#include "OptionExtras.hpp" //header file for OptionExtras class
#include "PerpetualAmericanOption.hpp" //header file for PerpetualAmericanOption class
#include <iostream> // Standard Input / Output Streams Library
#include <vector> //library for vector
#include <fstream> //library for using file stream
using namespace std; //namespace declaration for using std

/*
* Cost of carry factor b must be included in formulae depending on the
* derivative type. These are used in the generalised Black-Scholes formula.
* If r is the risk-free interest and q is the continuous dividend yield then
* the cost-of-carry b per derivative type is:
*
* • b = r is the Black–Scholes stock option model.
* • b = r - q is the Mortonmodelwithcontinuousdividendyieldq.
* • b = 0 is the Black–Scholes futures option model.
* • b = r - R is the GarmanandKohlhagencurrencyoptionmodel, whereRistheforeignrisk - freeinterest rate.
*/
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
	ofstream fout("result.txt");

	//////////  Option prices  //////////
	//Test the data with K = 100, sig = 0.1, r = 0.1, b = 0.02, S = 110 (check C = 18.5035, P = 3.03106).
	cout << "B.b)Test the data with K = 100, sig = 0.1, r = 0.1, b = 0.02, S = 110 (check C = 18.5035, P = 3.03106).\n" << endl;
	fout << "B.b)Test the data with K = 100, sig = 0.1, r = 0.1, b = 0.02, S = 110 (check C = 18.5035, P = 3.03106).\n" << endl;

	double K = 100, sig = 0.1, r = 0.1, U = 110, b = 0.02;
	cout << "\nK: " << K << " sig: " << sig << " r: " << r << " b: " << b << " S: " << U << endl;

	fout << "K: " << K << " sig: " << sig << " r: " << r << " b: " << b << " S: " << U << endl;

	
	vector<double> vecU = GenerateMeshArray(10, 50, 41);
	

	// Use global functions.
	cout << "S = " << U << ", C( call option price ) = " << PerpetualCall(K, sig, r, U, b) << ", P( put option price ) = " << PerpetualPut(K, sig, r, U, b) << endl;
	fout << "S = " << U << ", C( call option price ) = " << PerpetualCall(K, sig, r, U, b) << ", P( put option price ) = " << PerpetualPut(K, sig, r, U, b) << endl;

	// Use instances of PerpetualAmericanOption class.
	PerpetualAmericanOption perpetualOption;
	perpetualOption.K = K;
	perpetualOption.sig = sig;
	perpetualOption.r = r;
	perpetualOption.U = U;
	perpetualOption.b = b;
	
	cout << "S = " << U << ", C( call option price ) = " << perpetualOption.Price() << endl;
	fout << "S = " << U << ", C( call option price ) = " << perpetualOption.Price() << endl;
	perpetualOption.toggle();
	cout << "S = " << U << ", P( put option price ) = " << perpetualOption.Price() << endl;
	fout << "S = " << U << ", P( put option price ) = " << perpetualOption.Price() << endl;
	perpetualOption.toggle();

	// B.c)
	// Compute prices for a range of underlying value
	cout << "\nB.c) Compute prices for a range of underlying value\n" << endl;
	fout << "\nB.c) Compute prices for a range of underlying value\n" << endl;

	vector<double> vecC1, vecP1;
	for (int j = 0; j < vecU.size(); j++)
	{
		vecC1.push_back(perpetualOption.PriceWithS(vecU[j]));
		perpetualOption.toggle();
		vecP1.push_back(perpetualOption.PriceWithS(vecU[j]));
		perpetualOption.toggle();
	}

	for (int j = 0; j < vecC1.size(); j++)
	{
		cout << "S = " << vecU[j] << ", C( call option price ) = " << vecC1[j] << ", P( put option price ) = " << vecP1[j] << endl;
		fout << "S = " << vecU[j] << ", C( call option price ) = " << vecC1[j] << ", P( put option price ) = " << vecP1[j] << endl;
	}

	fout << flush;
	fout.close();

	return 0;
}