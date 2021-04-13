
/*
* Level_9 Group A:
* Test program file for the exact solutions of European options.
*
*
* @file TestEuropeanOption.cpp
* @author Chunyu Yuan
* @version 1.0 02/28/2021
*
*/
#include "OptionExtras.hpp" //header file for OptionExtras methods
#include "EuropeanOption.hpp" // header file for EuropeanOption class
#include <boost/tuple/tuple.hpp> // header file for using tuple
#include <boost/tuple/tuple_io.hpp>// header file for using tuple io
#include <iostream>  // Standard Input / Output Streams Library
#include <vector> //library for using vector
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

//type define FiveParams as a tuple has 5 doubl
typedef boost::tuple<double, double, double, double, double> FiveParams;
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
	// Store Batch 1 to Batch 4 data in a vector.
	//declare a vector 
	vector<FiveParams> vecBatch;
/*Spot:  108
Strike : 120
r = 4.5 %
T = 1.45
sig = .51
b = 0*/
	//Batch 1: T = 0.25, K = 65, sig = 0.30, r = 0.08, S = 60 (then C = 2.13337, P = 5.84628)
	vecBatch.push_back(boost::make_tuple(1.45, 120, 0.51, 0.045,108));

	//Batch 2: T = 1.0, K = 100, sig = 0.2, r = 0.0, S = 100 (then C = 7.96557, P = 7.96557)
	//vecBatch.push_back(boost::make_tuple(1.0, 100.0, 0.2, 0.0, 100.0));

	//Batch 3: T = 1.0, K = 10, sig = 0.50, r = 0.12, S = 5 (C = 0.204058, P = 4.07326).
	//vecBatch.push_back(boost::make_tuple(1.0, 10.0, 0.50, 0.12, 5.0));

	//Batch 4: T = 30.0, K = 100.0, sig = 0.30, r = 0.08, S = 100.0 (C = 92.17570, P = 1.24750)
//	vecBatch.push_back(boost::make_tuple(30.0, 100.0, 0.30, 0.08, 100.0));

	//open a file for writing and saving the results
	ofstream fout("results.txt");
	
	
	//  Option prices (stock option, b = r by default) 
	/*	
	double T; // Expiry time
	double K; // Strike price
	double sig; // volatility
	double r; // Risk free interest rate
	double U; // Current price of the underlying asset
	double b; // Cost of carry
	*/
	double T, K, sig, r, U, b;

	//C: call option price; P: put option price
	double C, P;

	//mesh size 
	int n = 41;
	
	vector<double> vecU = GenerateMeshArray(10.0, 50.0, n);
	vector<double> vecT = GenerateMeshArray(0.1, 1.0, n);
	vector<double> vecSig = GenerateMeshArray(0.1, 1.0, n);

	for (int i = 0; i < vecBatch.size(); i++)
	{
		// A.1.a)
		// Use option  functions.
		cout << "Batch " <<i + 1<<" \n"<< endl;
		cout << "A.1.a) Use option  functions" << endl;
		fout<< "Batch " << i + 1 << " \n" << endl;
		fout << "A.1.a) Use option  functions" << endl;

		T = vecBatch[i].get<0>();
		K = vecBatch[i].get<1>();
		sig = vecBatch[i].get<2>();
		r = vecBatch[i].get<3>();
		U = vecBatch[i].get<4>();
		b = r;

		C = call_price(T, K, sig, r, U, b);
		P = put_price(T, K, sig, r, U, b);
		cout << "Batch " << i + 1 << ": C( call option price ) = " << C << ", P( put option price ) = " << P << endl;
		fout << "Batch " << i + 1 << ": C( call option price ) = " << C << ", P( put option price ) = " << P << endl;

		// Use instances of EuropeanOption class with default constructor.
		
		cout << "\nA.1.a) Use EuropeanOption class  functions" << endl;
	
		fout << "\nA.1.a) Use EuropeanOption class   functions" << endl;
		EuropeanOption option0;
		option0.T = T;
		option0.K = K;
		option0.sig = sig;
		option0.r = r;
		option0.U = U;
		option0.b = b;
		cout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option0.Price() << endl;
		fout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option0.Price() << endl;
		option0.toggle();
		cout << "P( put option price ) = " << option0.Price() << endl;
		fout << "P( put option price ) = " << option0.Price() << endl;

		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.b). Use put-call parity" << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.b). Use put-call parity" << endl;
		// A.1.b)
		// Use put-call parity.
		cout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option0.PutToCall(option0.Price()) << endl;
		fout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option0.PutToCall(option0.Price()) << endl;
		option0.toggle();
		cout << "P( put option price ) = " << option0.CallToPut(option0.Price()) << endl;
		fout << "P( put option price ) = " << option0.CallToPut(option0.Price()) << endl;
		//create EuropeanOption object
		EuropeanOption option1;
		option1.T = T;
		option1.K = K;
		option1.sig = sig;
		option1.r = r;
		option1.U = U;
		option1.b = b;
		// A.1.c)
		// Use constructor with EuropeanOptionData and calculate option price as a function of underlying price.


		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.c). Use constructor with EuropeanOptionData and calculate option price as a function of underlying price." << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.c). Use constructor with EuropeanOptionData and calculate option price as a function of underlying price." << endl;
		
		cout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option1.PriceWithS(U) << endl;
		fout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option1.PriceWithS(U) << endl;
		option1.toggle();
		cout << "P( put option price ) = " << option1.PriceWithS(U) << endl;
		fout << "P( put option price ) = " << option1.PriceWithS(U) << endl;
		option1.toggle();

		// A.1.c)
		// Compute prices for a range of underlying value.

		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.c). Compute prices for a range of underlying value." << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.c). Compute prices for a range of underlying value." << endl;

		//create two vector, one is to save call result, one is to save put result
		vector<double> vecC1, vecP1;
		for (int j = 0; j < vecU.size(); j++)
		{
			vecC1.push_back(option1.PriceWithS(vecU[j]));

			option1.toggle();//change the option type

			vecP1.push_back(option1.PriceWithS(vecU[j]));
			option1.toggle();
		}
		for (int j = 0; j < vecC1.size(); j++)
		{
			cout << "Batch " << i + 1 << ": S = " << vecU[j] << ", C( call option price ) = " << vecC1[j] << ", P( put option price ) = " << vecP1[j] << endl;
			fout << "Batch " << i + 1 << ": S = " << vecU[j] << ", C( call option price ) = " << vecC1[j] << ", P( put option price ) = " << vecP1[j] << endl;
		}

		// A.1.d)
		// Use constructor with EuropeanOptionData and calculate option price as a function of expiry time.
		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.d). Use constructor with EuropeanOptionData and calculate option price as a function of expiry time." << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.d). Use constructor with EuropeanOptionData and calculate option price as a function of expiry time." << endl;
	
		EuropeanOption option2(option1);
		cout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option2.PriceWithT(T) << endl;
		fout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option2.PriceWithT(T) << endl;
		option2.toggle();
		cout << "P( put option price ) = " << option2.PriceWithT(T) << endl;
		fout << "P( put option price ) = " << option2.PriceWithT(T) << endl;
		option2.toggle();

		// Compute prices for a range of expiry time.
		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.d). Compute prices for a range of expiry time." << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.d). Compute prices for a range of expiry time." << endl;

		//create two vector, one is to save call result, one is to save put result
		vector<double> vecC2, vecP2;
		for (int j = 0; j < vecT.size(); j++)
		{
			vecC2.push_back(option2.PriceWithT(vecT[j]));
			option2.toggle();
			vecP2.push_back(option2.PriceWithT(vecT[j]));
			option2.toggle();
		}

		for (int j = 0; j < vecC2.size(); j++)
		{
			cout << "Batch " << i + 1 << ": T = " << vecT[j] << ", C( call option price ) = " << vecC2[j] << ", P( put option price ) = " << vecP2[j] << endl;
			fout << "Batch " << i + 1 << ": T = " << vecT[j] << ", C( call option price ) = " << vecC2[j] << ", P( put option price ) = " << vecP2[j] << endl;
		}
		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.d).Use constructor with EuropeanOptionData and calculate option price as a function of volatility" << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.d). Use constructor with EuropeanOptionData and calculate option price as a function of volatility" << endl;

		// Use constructor with EuropeanOptionData and calculate option price as a function of volatility.
		EuropeanOption option3(option1);
		cout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option3.PriceWithSig(sig) << endl;
		fout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option3.PriceWithSig(sig) << endl;
		option3.toggle();
		cout << "P( put option price ) = " << option3.PriceWithSig(sig) << endl;
		fout << "P( put option price ) = " << option3.PriceWithSig(sig) << endl;
		option3.toggle();

		// Compute prices for a range of volatility.
		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.d).Compute prices for a range of volatility." << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.d). Compute prices for a range of volatility." << endl;

		vector<double> vecC3, vecP3;
		for (int j = 0; j < vecSig.size(); j++)
		{
			vecC3.push_back(option3.PriceWithSig(vecSig[j]));
			option3.toggle();
			vecP3.push_back(option3.PriceWithSig(vecSig[j]));
			option3.toggle();
		}

		for (int j = 0; j < vecC3.size(); j++)
		{
			cout << "Batch " << i + 1 << ": sig = " << vecSig[j] << ", C( call option price ) = " << vecC3[j] << ", P( put option price ) = " << vecP3[j] << endl;
			fout << "Batch " << i + 1 << ": sig = " << vecSig[j] << ", C( call option price ) = " << vecC3[j] << ", P( put option price ) = " << vecP3[j] << endl;
		}

		// Compute prices using any parameters.
		cout << "\n\nBatch " << i + 1 << " \n" << endl;
		cout << "A.1.d).Use constructor with EuropeanOption and calculate option price as a function of using any parameters" << endl;
		fout << "\n\nBatch " << i + 1 << " \n" << endl;
		fout << "A.1.d). Use constructor with EuropeanOption and calculate option price as a function of using any parameters" << endl;

		// Use constructor with EuropeanOptionData and calculate option price as a function of any parameters
	
		cout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option3.PriceWithAny( T,  K, sig,  r,  U, b) << endl;
		fout << "Batch " << i + 1 << ":" << endl << "C( call option price ) = " << option3.PriceWithAny(T, K, sig, r, U, b) << endl;
		option3.toggle();
		cout << "P( put option price ) = " << option3.PriceWithAny(T, K, sig, r, U, b) << endl;
		fout << "P( put option price ) = " << option3.PriceWithAny(T, K, sig, r, U, b) << endl;
		option3.toggle();

		cout << endl;
		fout << endl;
	}
	
	//  Option sensitivities (stock option, b = r by default)  
	T = 0.5;
	K = 100;
	sig = 0.36;
	r = 0.1;
	U = 105;
	b = 0.0;

	// A.2.a)
	// Use options functions.

	cout << "\n\nA.2.a)." << endl;
	fout << "\n\nA.2.a)." << endl;

	cout << "Delta of Call = " << call_delta(T, K, sig, r, U, b) << ", Delta of Put = " << put_delta(T, K, sig, r, U, b) << endl;
	fout << "Delta of Call = " << call_delta(T, K, sig, r, U, b) << ", Delta of Put = " << put_delta(T, K, sig, r, U, b) << endl;
	cout << "Gamma of Call = " << call_gamma(T, K, sig, r, U, b) << ", Gamma of Put = " << put_gamma(T, K, sig, r, U, b) << endl;
	fout << "Gamma of Call = " << call_gamma(T, K, sig, r, U, b) << ", Gamma of Put = " << put_gamma(T, K, sig, r, U, b) << endl;
	cout << endl;
	fout << endl;

	// Use instances of EuropeanOption class.
	EuropeanOption futureOption;
	futureOption.T = T;
	futureOption.K = K;
	futureOption.sig = sig;
	futureOption.r = r;
	futureOption.U = U;
	futureOption.b = b;
	cout << "Delta of Call = " << futureOption.Delta() << endl;
	fout << "Delta of Call = " << futureOption.Delta() << endl;
	cout << "Gamma of Call = " << futureOption.Gamma() << endl;
	fout << "Gamma of Call = " << futureOption.Gamma() << endl;
	futureOption.toggle();
	cout << "Delta of Put = " << futureOption.Delta() << endl;
	fout << "Delta of Put = " << futureOption.Delta() << endl;
	cout << "Gamma of Put = " << futureOption.Gamma() << endl;
	fout << "Gamma of Put = " << futureOption.Gamma() << endl;
	futureOption.toggle();
	cout << endl;
	fout << endl;

	// A.2.b)
	// Compute Delta for a range of underlying values.	
	cout << "\n\nA.2.b). Compute Delta for a range of underlying values." << endl;
	fout << "\n\nA.2.b). Compute Delta for a range of underlying values." << endl;
	vector<double> vecCDelta, vecPDelta;
	for (int i = 0; i < vecU.size(); i++)
	{
		futureOption.U = vecU[i];
		vecCDelta.push_back(futureOption.Delta());
		futureOption.toggle();
		vecPDelta.push_back(futureOption.Delta());
		futureOption.toggle();
	}
	
	for (int i = 0; i < vecCDelta.size(); i++)
	{
		cout << "S = " << vecU[i] << ", Delta of Call = " << vecCDelta[i] << ", Delta of Put = " << vecPDelta[i] << endl;
		fout << "S = " << vecU[i] << ", Delta of Call = " << vecCDelta[i] << ", Delta of Put = " << vecPDelta[i] << endl;
	}
	cout << endl;
	fout << endl;

	// A.2.c)
	// Use divided differences for A.2.a)
	cout << "\n\nA.2.c). Use divided differences for A.2.a)" << endl;
	fout << "\n\nA.2.c). Use divided differences for A.2.a)" << endl;
	vector<double> vecH = GenerateMeshArray(0.001, 1, n);
	for (int i = 0; i < vecH.size(); i++)
	{
		cout << "S = " << U << ", h = " << vecH[i] << ", Delta of Call = " << futureOption.DeltaDiff(U, vecH[i]) << endl;
		fout << "S = " << U << ", h = " << vecH[i] << ", Delta of Call = " << futureOption.DeltaDiff(U, vecH[i]) << endl;
		futureOption.toggle();
		cout << "S = " << U << ", h = " << vecH[i] << ", Delta of Put = " << futureOption.DeltaDiff(U, vecH[i]) << endl;
		fout << "S = " << U << ", h = " << vecH[i] << ", Delta of Put = " << futureOption.DeltaDiff(U, vecH[i]) << endl;
		futureOption.toggle();
	}

	for (int i = 0; i < vecH.size(); i++)
	{
		cout << "S = " << U << ", h = " << vecH[i] << ", Gamma of Call = " << futureOption.GammaDiff(U, vecH[i]) << endl;
		fout << "S = " << U << ", h = " << vecH[i] << ", Gamma of Call = " << futureOption.GammaDiff(U, vecH[i]) << endl;
		futureOption.toggle();
		cout << "S = " << U << ", h = " << vecH[i] << ", Gamma of Put = " << futureOption.GammaDiff(U, vecH[i]) << endl;
		fout << "S = " << U << ", h = " << vecH[i] << ", Gamma of Put = " << futureOption.GammaDiff(U, vecH[i]) << endl;
		futureOption.toggle();
	}

	// Use divided differences for A.2.b)
	cout << "\n\nA.2.c). Use divided differences for A.2.b)" << endl;
	fout << "\n\nA.2.c). Use divided differences for A.2.b)" << endl;
	vector<double> vecCDelta1, vecPDelta1;
	for (int i = 0; i < vecU.size(); i++)
	{
		for (int j = 0; j < vecH.size(); j++)
		{
			vecCDelta1.push_back(futureOption.DeltaDiff(vecU[i], vecH[j]));
			futureOption.toggle();
			vecPDelta1.push_back(futureOption.DeltaDiff(vecU[i], vecH[j]));
			futureOption.toggle();

			cout << "S = " << vecU[i] << ", h = " << vecH[j] << ", Delta of Call = " << vecCDelta1[i + j] << ", Delta of Put = " << vecPDelta1[i + j] << endl;
			fout << "S = " << vecU[i] << ", h = " << vecH[j] << ", Delta of Call = " << vecCDelta1[i + j] << ", Delta of Put = " << vecPDelta1[i + j] << endl;
		}
	}

	fout << flush;
	fout.close();



	return 0;//return 0 to end this program

}