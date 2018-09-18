#pragma once
#ifndef STACK_H
#define STACK_H
#include<iostream>
#include"array.cpp"
template<typename T, int size>
class Stack
{
private:
	int m_current;
	Array<T> Array;
public:

	Stack();
	Stack(const Stack<T,size>& a);
	virtual ~Stack();

	Stack<T,size>& operator=(const Stack<T,size>& source);

	void Push(const T& newelement);
	T Pop();
};
#endif // !STACK_H

