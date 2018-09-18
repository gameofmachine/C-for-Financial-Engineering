#pragma once
#ifndef STACKEXCEPTION_H
#define STACKEXCEPTION_H
#include<sstream>

class StackException
{
public:
	StackException() {};
	~StackException() {};

	virtual std::string GetMessage() = 0;
};

class StackFullException :public StackException
{
public:
	StackFullException() :StackException()
	{

	}
	~StackFullException()
	{

	}

	std::string GetMessage()
	{
		std::stringstream os;
		os << "Stack is Full";
		return os.str();
	}
};

class StackEmptyException :public StackException
{
public:
	StackEmptyException() :StackException()
	{

	}
	~StackEmptyException()
	{

	}

	std::string GetMessage()
	{
		std::stringstream os;
		os << "Stack is Empty";
		return os.str();
	}
};
#endif // !STACKEXCEPTION

