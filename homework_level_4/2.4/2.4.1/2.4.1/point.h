#pragma once
#include<iostream>
using namespace std;
#ifndef POINT_H //Avoid multiple inclusion
#define POINT_H
class Point
{
private:
	//Data members,private
	double m_x;
	double m_y;
public:
	//Member functions,public
	Point();
	Point(double x, double y);
	Point(const Point&p);
	virtual ~Point();


	double X() const;
	double Y() const;

	void X(double newx);
	void Y(double newy);

	string ToString() const;

	double Distance() const;
	double Distance(const Point &p) const;

	Point operator - () const;
	Point operator *(double factor) const;
	Point operator +(const Point& p) const;
	bool operator ==(const Point& p) const;
	Point& operator = (const Point& source);
	Point& operator *=(double factor);


};
#endif // !POINT_H



