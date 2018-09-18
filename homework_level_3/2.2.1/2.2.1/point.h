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
	~Point();


	double GetX();
	double GetY();

	void SetX(double newx);
	void SetY(double newy);
	
	string ToString();

};
#endif // !POINT_H



