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
	Point(const Point& pt);//a copy constructor
	Point(double x, double y); //a constructor
	~Point();


	double X() const;
	double Y() const;

	void X(double newx);
	void Y(double newy);

	string ToString() const;

	double Distance() const;
	double Distance(const Point &p) const;

};
#endif // !POINT_H








