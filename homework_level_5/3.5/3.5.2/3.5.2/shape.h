#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
#include<stdlib.h>
using namespace std;
namespace XIANGZOU
{
	namespace CAD
	{
		class Shape
		{
		private:
			int m_id;
		public:
			Shape();
			Shape(const Shape& s);
			virtual ~Shape();

			Shape& operator = (const Shape & source);

			virtual string ToString() const;
			int ID() const;
		};
	}
}
#endif // !SHAPE_H
