#ifndef NUMERICARRAY_CPP
#define NUMERICARRAY_CPP

#include"NumericArray.h"
#include"ArrayException.h"
#include"ArraySizeException.h"
#include<iostream>
using namespace std;
template<typename T>
NumericArray<T>::NumericArray():Array(){}

template<typename T>
NumericArray<T>::NumericArray(int size):Array(size){}

template<typename T>
NumericArray<T>::NumericArray(const NumericArray<T>& a):Array(a){}

template<typename T>
NumericArray<T>::~NumericArray(){}

template<typename T>
NumericArray<T> NumericArray<T>::operator=(const NumericArray<T>& source)
{
	if (this != &source)
	{
		Array<T>::operator=(source);
		return *this;
	}
	return *this;
}

template<typename T>
NumericArray<T> NumericArray<T>::operator+(const NumericArray<T>& a) const
{
	if (this->Size() == a.Size())
	{
		NumericArray<T> result(*this);
		for (int i = 0; i < result.Size(); ++i)
		{
			result[i]+= a[i];
		}
		return result;
	}
	throw ArraySizeException();

}

template<typename T>
NumericArray<T> NumericArray<T>::operator*(const T& factor) const
{
	NumericArray<T> result(*this);
	for (int i = 0; i < result.Size(); ++i)
	{
		result[i] *= factor;
	}
	return result;
}

template<typename T>
T NumericArray<T>::DotProduct(const NumericArray<T>& a) const
{
	if (this->Size() == a.Size())
	{
		T result = 0;
		for (int i = 0; i <this->Size(); ++i)
		{
			result += (Array::operator[](i) * a[i]);
		}
		return result;
	}
	throw ArraySizeException();
}




#endif // !NUMERICARRAY_CPP
