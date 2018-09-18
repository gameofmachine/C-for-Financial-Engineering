#pragma once
#ifndef POINTARRAY_H
#define POINTARRAY_H

#include"array.cpp"
#include"point.h"
#include<iostream>

class PointArray :public Array<Point>
{
public:
	PointArray();
	PointArray(int i);
	PointArray(const PointArray& a);
	virtual ~PointArray();

	PointArray& operator=(const PointArray& source);

	double Length() const;
};
#endif // !POINTARRAY_H

