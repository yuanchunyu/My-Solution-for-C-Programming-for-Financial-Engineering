/*
* Level_4 Exercise 2.4.1:
* test program for operators in Point class, Line class and Circle
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/09/2021
*
*/
#include "Line.hpp"   // Header file for line class
#include "Circle.hpp" // Header file for circle class
#include "Point.hpp"  // Header file for point class
#include <iostream>// Standard Input / Output Streams Library
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

	// create one point object 
	Point p1(1, 2);

	//print the point's description
	std::cout << p1.ToString() << std::endl;

	//test  Point operator - () const which Negate the coordinates
	std::cout << "After Test Point operator - () const\n" << std::endl;
	Point p2 = - p1; // use operator - to Negate the coordinates of p1 to create a new point p2
	std::cout << p2.ToString()<< std::endl; //print point p2 description

	//test  Point operator * (double factor) const to scale the coordinates.
	std::cout << "Test Point operator * (double factor) const \n" << std::endl;
	Point p3 = p1 * 2.0; //Scale the coordinates 2 times to create a new point p3
	std::cout << p3.ToString() << std::endl;  //print point p3 description

	//test  Point operator + (const Point & p) to add coordinates
	std::cout << "Test Point operator + (const Point & p) const\n" << std::endl;
	Point p4 = p1 + p2; // add point p1 and point p2 coordinates together to create point p4
	std::cout << p4.ToString() << std::endl;//print point p4 description


	//Test Point bool operator == (const Point & p)
	std::cout << "Test Point bool operator == (const Point & p) const\n" << std::endl;
	
	std::cout << (p1 == p1) << std::endl; // test (p1 == p1) result
	std::cout << (p1 == p2) << std::endl;// test (p1 == p2) result

	//Test Point& operator = (const Point & source): p1 = p2
	std::cout << "Test Point& operator = (const Point & source): p1 = p2\n" << std::endl;
	std::cout <<"Before p1 = p2, p1's description:\n"<< p1.ToString() << std::endl;
	p1 = p2; //test operator = to assign p2 to p1
	std::cout << "After p1 = p2, p1's description:\n" << p1.ToString() << std::endl;
	
	//Test Point& operator *= (double factor) to scale the coordinates & assign.
	std::cout << "Test Point& operator *= (double factor)\n" << std::endl;
	p1 *= 4.0; //scale p1's coordinate 4 times
	std::cout << p1.ToString() << std::endl; //print p1's description


	//Test chain p1 = p2*=4
	std::cout << "Test chain p1 = p2*=4\n" << std::endl;
	//before p1 = p2 *= 4, check and print p1 and p2 descriptions
	std::cout << "Before chain p1 = p2*=4:\n" << std::endl;
	std::cout << "p1 description:" << p1.ToString() << std::endl;
	std::cout << "p2 description:" << p2.ToString() << std::endl;
	p1 = p2 *= 4; //chain using = and *= operators

	//After p1 = p2 *= 4, check and print p1 and p2 descriptions
	std::cout << "After chain p1 = p2*=4:\n" << std::endl;
	std::cout << "p1 description:"<< p1.ToString() << std::endl;
	std::cout << "p2 description:" << p2.ToString() << std::endl;



	//Test the line assignment operator: l1 =l2
	std::cout << "Test the line assignment operator: l1 =l2\n" << std::endl;
	//create two line objects l1, l2
	Line l1(Point(0, 0), Point(1, 1)); 
	Line l2(Point(10, 0), Point(1, 1));

	//before line assignment,check and print line l1 description
	std::cout << "Before using line assignment operator: l1 =l2\n" << std::endl;
	std::cout << "l1 description: "<< l1.ToString() << std::endl;

	l1 = l2; //assignment operator to assign line l2 to line l1

	//after line assignment, check and print line l1 description
	std::cout << "After using line assignment operator: l1 =l2\n" << std::endl;
	std::cout << "l1 description: " << l1.ToString() << std::endl;

	//Test the circle assignment operator: c1 =c2
	std::cout << "Test the circle assignment operator: c1 =c2\n" << std::endl;
	//create two circle objects l1, l2
	Circle c1(Point(0, 0), 1); 
	Circle c2(Point(0, 2), 10);

	//before circle assignment,check and print circle c1 description
	std::cout << "Before using the circle assignment operator: c1 =c2\n" << std::endl;
	std::cout << "c1 description: " << c1.ToString() << std::endl;

	c1 = c2;//assignment operator to assign circle l2 to circle l1

	//after circle assignment,check and print circle c1 description
	std::cout << "After using the circle assignment operator: c1 =c2\n" << std::endl;
	std::cout << "c1 description: " << c1.ToString() << std::endl;



	return 0;// return 0 to end program
}