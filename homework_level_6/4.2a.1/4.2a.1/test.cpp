#include"array.cpp"
#include"point.h"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include<iostream>

void main()
{
	int size = 3;
	Array<Point> pt1(size);
	Array<Point> pt2(size);
	Array<Point> pt3(pt1);//copy constructor
	cout << pt3.Size() << endl;//Size() function

	pt1[0] = Point(1.0, 1.0);
	pt1[1] = Point(2.0, 2.0);
	pt1[2] = Point(3.0, 3.0);

	//assignment operator
	pt2 = pt1;
	cout << pt2[0] << pt2[1] << pt2[2] << endl;//[]operator
	//GetElement() function
	cout << "Elements: " << pt1.GetElement(0) << pt1.GetElement(1) << pt1.GetElement(2) << endl;

	pt1.SetElement(0, Point(-1.0, -1.0));
	cout << pt1[0] << endl;//SetElement() function

	const Array<Point> pt4(pt1);
	cout << pt4[0] << pt4[1] << pt4[2] << endl;//[]operator for const
}
