#include"array.cpp"
#include"point.h"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include"ArraySizeException.h"
#include"PointArray.h"
#include<iostream>

void main()
{
	PointArray pa1;
	PointArray pa2(10);
	for (int i = 0; i < pa1.Size();++i)
	{
		pa1[i] = Point(i, i);
	}
	PointArray pa3(pa1);
	cout << pa2.Size() << endl;//size of pa2 is 10
	cout << pa1.Size() << endl;//size of pa1 is 5, the default size
	cout << pa1.Length() << endl;//total length between Point(i,i) i=0 to 4 is 5.65685

	pa2 = pa1;
	cout << pa2.Size() <<'\n'<< pa2.Length() << endl;//assignment operator test

}
