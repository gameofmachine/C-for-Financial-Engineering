#pragma once
#include<iostream>
#include"point.h"
using namespace std;
#ifndef ARRAY_H
#define ARRAY_H
class Array
{
private:
	Point* m_data;
	int m_size;
public:
	Array();
	Array(int size);
	Array(const Array& a);
	~Array();

	Array operator =(const Array& source);

	int Size();
	void SetElement(int index, const Point& np);
	Point& GetElement(int index);
	Point& operator [](int index);

	const Point& operator[](int index) const;

};
#endif // !ARRAY_H
