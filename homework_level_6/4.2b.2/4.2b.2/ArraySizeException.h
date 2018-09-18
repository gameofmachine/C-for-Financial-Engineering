#pragma once
#ifndef ARRAYSIZEEXCEPTION_H
#define ARRAYSIZEEXCEPTION_H

#include"ArrayException.h"
#include<sstream>

class ArraySizeException:public ArrayException
{
public:
	ArraySizeException():ArrayException()
	{
	}
	~ArraySizeException()
	{
	}

	std::string GetMessage()
	{
		std::stringstream os;
		os << "the size of two arrays not equal";
		return os.str();
	}

};
#endif // !ARRAYSIZEEXCEPTION_H
