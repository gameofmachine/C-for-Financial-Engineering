#pragma once
#ifndef STACK_H
#define STACK_H
#include<iostream>
#include"array.cpp"
template<typename T>
class Stack
{
private:
	int m_current;
	Array<T> Array;
public:

	Stack();
	Stack(int size);
	Stack(const Stack& a);
	virtual ~Stack();

	Stack<T>& operator=(const Stack<T>& source);

	void Push(const T& newelement);
	T Pop();
};
#endif // !STACK_H

