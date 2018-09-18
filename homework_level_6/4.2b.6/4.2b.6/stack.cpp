#ifndef STACK_CPP
#define STACK_CPP

#include"stack.h"
#include"array.cpp"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include"StackException.h"


template<typename T,int size>
Stack<T,size>::Stack(): m_current(0),Array(size)
{
}

template<typename T,int size>
Stack<T,size>::Stack(const Stack & a):m_current(a.m_current),Array(a.Array)
{
}
template<typename T,int size>
Stack<T,size>::~Stack()
{
}
template<typename T,int size>
Stack<T,size>& Stack<T,size>::operator=(const Stack<T,size>& source)
{
	if (this != source)
	{
		m_current = source.m_current;
		Array = source.Array;
		return *this;
	}
	return *this;
}
template<typename T,int size>
void Stack<T,size>::Push(const T & newelement)
{
	try
	{
		Array[m_current] = newelement;
	}
	catch (ArrayException&)
	{
		throw StackFullException();
	}
	m_current++;
}
template<typename T,int size>
T Stack<T,size>::Pop()
{	
	T pop;
	try
	{
		pop=Array[m_current - 1];
	}
	catch (ArrayException&)
	{
		throw StackEmptyException();
		m_current = 0;
	}
	m_current--;
	return pop;

}
#endif // !STACK_CPP
