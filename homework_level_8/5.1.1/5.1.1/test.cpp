#include <boost/shared_array.hpp>
#include "point.h"
#include "circle.h"
#include "line.h"
#include "array.cpp"
#include <iostream>

void main()
{
	typedef boost::shared_ptr<Shape> Shapeptr;
	typedef Array<Shapeptr> ShapeArray;

	
	Shapeptr ptr1(new Point(1.0, 1.0));
	Shapeptr ptr2(new Line(Point(1.0, 1.0), Point(2.0, 2.0)));
	Shapeptr ptr3(new Circle(Point(0.0, 0.0), 1.0));

	const int size = 3;

	{
		//Array of Shape
		ShapeArray arrayofshape(size);
		arrayofshape[0] = ptr1;
		arrayofshape[1] = ptr2;
		arrayofshape[2] = ptr3;

		//print the array
		for (int i = 0; i < size; ++i)
		{
			cout << arrayofshape[i]->ToString() << endl;
		}

		// use count of the pointer
		cout << ptr1.use_count() << endl;
		cout << ptr2.use_count() << endl;
		cout << ptr3.use_count() << endl;
	}

	//out of scope, then count the use
	cout << ptr1.use_count() << endl;
	cout << ptr2.use_count() << endl;
	cout << ptr3.use_count() << endl;
}