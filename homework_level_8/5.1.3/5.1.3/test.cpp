#include "point.h"
#include "line.h"
#include "circle.h"
#include "Visitor.h"
#include <boost\variant.hpp>
#include <iostream>
#include <string>
using namespace std;

typedef boost::variant<Point, Line, Circle> Shapetype;
Shapetype Create()
{
	Shapetype shape;

	// ask the user to choose shape
	cout << "what do you want to creat?\n" << "a. Point   b.Line    c.Circle" << endl;
	char choice;
	cin >> choice;

	//different situations
	switch (choice)
	{
		case 'a':
			shape = Point();
			break;
		case 'b':
			shape = Line();
			break;
		case 'c':
			shape = Circle();
			break;
		default:
			break;
	}
	return shape;
}

void main()
{
	using boost::variant;
	Shapetype result = Create();
	cout << result << endl;
	
	try
	{
		Line l = boost::get<Line>(result);
	}
	catch (boost::bad_get& err)
	{
		cout << "Error: " << err.what() << endl;
	}

	// move the shape
	Visitor v(1.0, 1.0);
	boost::apply_visitor(v, result);
	cout << result << endl;
}