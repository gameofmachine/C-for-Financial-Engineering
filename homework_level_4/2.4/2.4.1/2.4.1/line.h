#pragma once
#include"point.h"
using namespace std;

#ifndef LINE_H
#define LINE_H
class Line
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
	~Line();//destructor

	Line& operator =(const Line& source);

	Point P1() const;//getter startpoint function,const
	Point P2() const;//getter endpoint function, const

	void P1(const Point& p);//startpoint modifier
	void P2(const Point &p);//endpoint modifier

	string ToString() const;
	double Length() const;

};

#endif // !LINE_H


