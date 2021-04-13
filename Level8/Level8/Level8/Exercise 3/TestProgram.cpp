/*
* Level_8 Exercise 3:
* Test program for variant
*
*
* @file TestProgram.cpp
* @author Chunyu Yuan
* @version 1.0 02/22/2021
*
*/






#include "Point.hpp" //header file for Array class
#include "Line.hpp"  // header file for Line class
#include "Circle.hpp" // header file for circle class
#include <iostream> // Standard Input / Output Streams Library
#include "boost/variant.hpp" //header file for using variant
#include "Visitor.hpp" // header file for Visitor class


using namespace std; //namespace declaration for using std
using namespace Chunyu::CAD;//namespace declaration for using Chunyu::CAD



// Typedef for boost::variant stores one value that can be of one of the types Point, Line, Circle
typedef boost::variant<Point, Line, Circle> ShapeType;



/*
* 
* function that ask the user what kind of shape to create and
* returns variant ShapeType
* 
* @function choice_shape()
* @param none
* @return ShapeType
* 
*/

ShapeType choice_shape()
{
	//create a variant ShapeType shape
	ShapeType shape;

	//reminder user to input the shape choice
	cout << "What kind of shape do you want to create? " << endl;
	cout << "Please choose the shape: (p)Point (l)Line (c)Circle" << endl;

	//create a char to save the choice
	char answer;

	//promote use to input the choice
	cin >> answer;

	//print the user's choice
	cout <<"Your choice: "<< answer << endl;

	// switch to assign the variant ShapeType based on user's choice
	switch (answer)
	{
		//(p)Point choice
	case 'p':
		shape = Point(); //create a point object and assign it to variant ShapeType
		cout << "You choose Point successfully!" << endl;//reminder message
		break; //jump out of switch

		//(l)Line choice
	case 'l':
		shape = Line();//create a line object and assign it to variant ShapeType
		cout << "You choose Line successfully!" << endl;//reminder message
		break;//jump out of switch

		//(c)Circle choice
	case 'c':
		shape = Circle();//create a circle object and assign it to variant ShapeType
		cout << "You choose Circle successfully!" << endl;//reminder message
		break;//jump out of switch

		//default choice
	default:
		cout << "You didn't choose any shape. Default shape is Point" << endl;//reminder message
		
		break;//jump out of switch
	}


	return shape;//return the variant ShapeType
}




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
	
	//call funciton choice_shape(), get the variant ShapeType and assign it to shape(new created variant ShapeType)
	ShapeType shape = choice_shape();

	//print the variant information 
	cout << "\nVariant information " << endl;
	cout << shape << endl;


	try
	{
		//try to assign the variant to a Line variable by using the global boost : get<T>() function
		Line line = boost::get<Line>(shape);
	}
	catch (boost::bad_get& error)//error that variant didn’t contain a line
	{
		//error message
		cout << "Error: " << error.what() << endl;
		cout << "Your variant didn't contain a line" << endl;
	}


	
	//Create avisitor for moving the shape
	Visitor visitor(-10.0, 10.0);


	//create a point object and assign it to variant ShapeType shape1
	ShapeType shape1 = Point();

	//create a line object and assign it to variant ShapeType shape2
	ShapeType shape2 = Line();

	//create a circle object and assign it to variant ShapeType shape3
	ShapeType shape3 = Circle();

	cout << "\nBefore moving, the varriants information:" << endl;
	cout <<"Variant 1 information \n"<< shape1 << endl;
	cout << "\nVariant 2 information \n"<< shape2 << endl;
	cout << "\nVariant 3 information \n" << shape3 << endl;

	//use the boost::apply_visitor(visitor, variant) global function to move the shape
	//move shape1
	boost::apply_visitor(visitor, shape1);
	//move shape2
	boost::apply_visitor(visitor, shape2);
	//move shape3
	boost::apply_visitor(visitor, shape3);

	cout << "\nAfter moving, the varriants information:" << endl;
	cout << "Variant 1 information \n" << shape1 << endl;
	cout << "\nVariant 2 information \n" << shape2 << endl;
	cout << "\nVariant 3 information \n" << shape3 << endl;


	return 0;//return 0 to end program 
}