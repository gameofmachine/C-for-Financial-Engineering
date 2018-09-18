#pragma once
#ifndef POINT_H //Avoid multiple inclusion
#define POINT_H
#include<iostream>
#include"shape.h"
using namespace std;
namespace XIANGZOU
{
	namespace CAD
	{
		class Point :public Shape
		{
		private:
			//Data members,private
			double m_x;
			double m_y;
		public:
			//Member functions,public
			Point();
			explicit Point(double x);
			Point(double x, double y);
			Point(const Point&p);
			virtual ~Point();


			double X() const;
			double Y() const;

			void X(double newx);
			void Y(double newy);

			string ToString() const;
			void Draw() const;

			double Distance() const;
			double Distance(const Point &p) const;

			Point operator - () const;
			Point operator *(double factor) const;
			Point operator +(const Point& p) const;
			bool operator ==(const Point& p) const;
			Point& operator = (const Point& source);
			Point& operator *=(double factor);

			friend ostream& operator << (ostream & os, const Point & p);
		};
	}
}
//ostream& operator << (ostream & os, const Point & p);
#endif // !POINT_H



