#ifndef Array_CPP
#define Array_CPP
#include "array.h"
#include"ArrayException.h"
#include"OutOfBoundsException.h"

template<typename T>
int Array<T>::default_size = 5;
template<typename T>
Array<T>::Array() :m_size(default_size), m_data(new T[default_size]) {}
template<typename T>
Array<T>::Array(int size) :m_size(size), m_data(new T[size]) {}

template<typename T>
Array<T>::Array(const Array<T> & a)
{
	m_size = a.m_size;
	m_data = new T[a.m_size];
	for (int i = 0; i < m_size; ++i)
	{
		m_data[i] = a.m_data[i];
	}

}
template<typename T>
Array<T>::~Array()
{
	delete[] m_data;
	cout << "bye Array~" << endl;
}
template<typename T>
Array<T>& Array<T>::operator=(const Array<T> & source)
{
	if (this != &source)
	{
		delete[]m_data;
		m_size = source.m_size;
		m_data = new T[source.m_size];
		for (int i = 0; i < m_size; ++i)
		{
			m_data[i] = source.m_data[i];
		}
		return *this;
	}
	else
		return *this;
}
template<typename T>
int Array<T>::Size() const
{
	return m_size;
}
template<typename T>
void Array<T>::SetElement(int index, const T& np)
{
	if (index >= m_size || index < 0) throw OutOfBoundsException(index);
	m_data[index] = np;
}
template<typename T>
T& Array<T>::GetElement(int index) const
{
	if (index >= m_size || index < 0) throw OutOfBoundsException(index);
	return m_data[index];

}
template<typename T>
T& Array<T>::operator[](int index)
{
	if (index >= m_size || index < 0) throw OutOfBoundsException(index);
	return m_data[index];
}
template<typename T>
const T& Array<T>::operator[](int index) const
{
	if (index >= m_size || index < 0) throw OutOfBoundsException(index);
	return m_data[index];
}

template<typename T>
int Array<T>::DefaultSize() 
{
	return default_size;
}

template<typename T>
void Array<T>::DefaultSize(int newsize)
{
	default_size = newsize;
}

#endif // !ARRAY_CPP