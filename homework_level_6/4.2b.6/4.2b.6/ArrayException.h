#pragma once
#ifndef ARRAYEXCEPTION_H
#define ARRAYEXCEPTION_H
#include<sstream>


class ArrayException
{
public:
	ArrayException()
	{
	}
	~ArrayException()
	{
	}
	virtual std::string GetMessage()=0;
};

#endif // !ARRAYEXCEPTION_H

