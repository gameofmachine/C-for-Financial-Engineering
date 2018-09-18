#ifndef STACK_CPP
#define STACK_CPP

#include"stack.h"
#include"array.cpp"
#include"ArrayException.h"
#include"OutOfBoundsException.h"

template<typename T>
inline Stack<T>::Stack():m_current(0),Array()
{
}
template<typename T>
Stack<T>::Stack(int size):m_current(0),Array(size)
{
}
template<typename T>
Stack<T>::Stack(const Stack & a):m_current(a.m_current),Array(a.Array)
{
}
template<typename T>
Stack<T>::~Stack()
{
}
template<typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& source)
{
	if (this != source)
	{
		m_current = source.m_current;
		Array = source.Array;
		return *this;
	}
	return *this;
}
template<typename T>
void Stack<T>::Push(const T & newelement)
{
	Array[m_current] = newelement;
	m_current++;
}
template<typename T>
T Stack<T>::Pop()
{
	T pop;
	pop=Array[m_current - 1];
	m_current--;
	return pop;
}
#endif // !STACK_CPP
