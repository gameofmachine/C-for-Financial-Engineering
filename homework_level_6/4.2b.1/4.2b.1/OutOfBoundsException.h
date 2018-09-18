#pragma once
#ifndef OUTOFBOUNDSEXCEPTION_H
#define OUTOFBOUNDSEXCEPTION_H

#include"ArrayException.h"
#include<sstream>

class OutOfBoundsException :public ArrayException
{
private:
	int m_index;
public:
	OutOfBoundsException(){}
	OutOfBoundsException(int a):m_index(a){}
	std::string GetMessage()
	{
		std::stringstream os;
		os << "the given index is out of bound";
		return os.str();
	}
};

#endif // !OUTOFBOUNDSEXCEPTION_H

