//  experiment with the exponential and Poisson distributions
//
//
/*
* Level_8 Exercise 5:
* Test program for experimenting with the exponential and Poisson distributions
*
* work with exponential distribution instead of normal distribution
* Poisson distribution instead of gamma distribution
*
* @file TestNormalDistribution.cpp
* @author Chunyu Yuan
* @version 1.0 02/22/2021
*
*/


#include <boost/math/distributions/normal.hpp> //header file for using normal distributions
#include <boost/math/distributions/gamma.hpp>//header file for using gamma distributions
#include <boost/math/distributions.hpp> // For non-member functions of distributions

#include <vector> //library for using vector
#include <iostream> // Standard Input / Output Streams Library
using namespace std;


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
	// Don't forget to tell compiler which namespace
	using namespace boost::math;


	// Distributional properties
	double x = 10.25;
	double scaleParameter = 0.5;
	exponential_distribution<> myExponential(scaleParameter);
	// Choose precision
	cout.precision(10); // Number of values behind the comma

	// properties
	cout << "\n***Exponential distribution: \n";
	cout << "pdf: " << pdf(myExponential, x) << endl;
	cout << "cdf: " << cdf(myExponential, x) << endl;
	cout << "mean: " << mean(myExponential) << endl;
	cout << "variance: " << variance(myExponential) << endl;
	cout << "median: " << median(myExponential) << endl;
	cout << "mode: " << mode(myExponential) << endl;
	cout << "kurtosis excess: " << kurtosis_excess(myExponential) << endl;
	cout << "kurtosis: " << kurtosis(myExponential) << endl;
	cout << "skewness: " << skewness(myExponential) << endl;
	cout << "characteristic function: " << chf(myExponential, x) << endl;
	cout << "hazard: " << hazard(myExponential, x) << endl;

	// Gamma distribution
//	double alpha = 3.0; // Shape parameter, k
	//double beta = 0.5;	// Scale parameter, theta
//	gamma_distribution<double> myGamma(alpha, beta);

	//Passion distribution
	double mean1 = 3.0;
	poisson_distribution<double> myPoisson(mean1);

	double val = 13.0;
	cout << "\n***Poisson distribution: \n";
	cout << "pdf: " << pdf(myPoisson, val) << endl;
	cout << "cdf: " << cdf(myPoisson, val) << endl;
	cout << "mean: " << mean(myPoisson) << endl;
	cout << "variance: " << variance(myPoisson) << endl;
	cout << "median: " << median(myPoisson) << endl;
	cout << "mode: " << mode(myPoisson) << endl;
	cout << "kurtosis excess: " << kurtosis_excess(myPoisson) << endl;
	cout << "kurtosis: " << kurtosis(myPoisson) << endl;
	cout << "skewness: " << skewness(myPoisson) << endl;
	cout << "characteristic function: " << chf(myPoisson, val) << endl;
	cout << "hazard: " << hazard(myPoisson, val) << endl;
	cout << "\n\n " << endl;
	vector<double> pdfList;
	vector<double> cdfList;

	double start = 0.0;
	double end = 10.0;
	long N = 30;		// Number of subdivisions

	val = 0.0;
	double h = (end - start) / double(N);

	for (long j = 1; j <= N; ++j)
	{
		pdfList.push_back(pdf(myPoisson, val));
		cdfList.push_back(cdf(myPoisson, val));

		val += h;
	}

	for (long j = 0; j < pdfList.size(); ++j)
	{
		cout << pdfList[j] << ", ";

	}

	cout << "***" << endl;

	for (long j = 0; j < cdfList.size(); ++j)
	{
		cout << cdfList[j] << ", ";

	}

	return 0;
}