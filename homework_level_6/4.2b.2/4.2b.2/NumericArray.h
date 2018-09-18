#pragma once
#ifndef NUMERICARRAY_H
#define NUMERICARRAY_H

#include"array.h"
#include<iostream>
using namespace std;

template<typename T>
class NumericArray :public Array<T>
{
public:
	NumericArray();
	NumericArray(int size);
	NumericArray(const NumericArray<T>& a);
	~NumericArray(); 

	NumericArray<T> operator=(const NumericArray<T>& source);
	NumericArray<T> operator+(const NumericArray<T>& a) const;
	NumericArray<T> operator*(const T& factor) const;
	T DotProduct(const NumericArray<T>& a) const;


};
#endif // !NUMERICARRAY_H

