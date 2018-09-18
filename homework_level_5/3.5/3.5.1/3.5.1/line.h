#pragma once
#ifndef LINE_H
#define LINE_H
#include"point.h"
using namespace std;

namespace XIANGZOU
{
	namespace CAD
	{
		class Line:public Shape
		{
		private:
			//Data Member, private
			Point startpoint;
			Point endpoint;
		public:
			//member function,public
			Line();//default constructor
			Line(const Point &a, const Point &b);//constructor
			Line(const Line &l);//copy constructor
			virtual ~Line();//destructor

			Line& operator =(const Line& source);

			Point P1() const;//getter startpoint function,const
			Point P2() const;//getter endpoint function, const

			void P1(const Point& p);//startpoint modifier
			void P2(const Point &p);//endpoint modifier

			string ToString() const;
			double Length() const;

			friend ostream& operator << (ostream & os, const Line & l);
		};
	}
}
//ostream& operator << (ostream & os, const Line & l);
#endif // !LINE_H


