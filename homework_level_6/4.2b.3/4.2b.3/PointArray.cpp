#include "PointArray.h"
#include"point.h"

PointArray::PointArray():Array(){}

PointArray::PointArray(int i): Array(i){}


PointArray::PointArray(const PointArray & a): Array(a){}


PointArray::~PointArray(){}


PointArray& PointArray::operator=(const PointArray & source)
{
	if (this != &source)
	{
		Array<Point>::operator=(source);
		return *this;
	}
	return *this;
}

double PointArray::Length() const
{
	double length = 0.0;
	for (int i = 0; i < (Array<Point>::Size() - 1); ++i)
	{
		length += Array<Point>::operator[](i).Distance(Array<Point>::operator[](i + 1));
	}
	return length;
}
