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


	double X();
	double Y();

	void X(double newx);
	void Y(double newy);

	string ToString();

	double Distance();
	double Distance(const Point &p);

};
#endif // !POINT_H





