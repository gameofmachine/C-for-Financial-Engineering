#pragma once
#ifndef ARRAYEXCEPTION_H
#define ARRAYEXCEPTION_H
#include<sstream>

namespace XIANGZOU
{
	namespace Containers
	{
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
	}
}
#endif // !ARRAYEXCEPTION_H

