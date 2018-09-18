#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
#include"point.h"
using namespace std;

namespace XIANGZOU
{
	namespace Containers
	{
		class Array
		{
		private:
			CAD::Point* m_data;
			int m_size;
		public:
			Array();
			Array(int size);
			Array(const Array& a);
			virtual ~Array();

			Array operator =(const Array& source);

			int Size() const;
			void SetElement(int index, const CAD::Point& np);
			CAD::Point& GetElement(int index);
			CAD::Point& operator [](int index);

			const CAD::Point& operator[](int index) const;

		};
	}
}
#endif // !ARRAY_H
