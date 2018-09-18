#include "line.h"
#include<sstream>
#include<cmath>

Line::Line()
{
	startpoint.X(0);
	startpoint.Y(0);
	endpoint.X(0);
	endpoint.Y(0);
}

Line::Line(const Point & a, const Point & b)
{
	startpoint = a;
	endpoint = b;
}

Line::Line(const Line & l)
{
	startpoint = l.startpoint;
	endpoint = l.endpoint;
}

Line::~Line()
{
	cout << "bye line" << endl;
}

Point Line::P1() const
{
	return startpoint;
}

Point Line::P2() const
{
	return endpoint;
}

void Line::P1(const Point& p)
{
	startpoint = p;
}

void Line::P2(const Point& p)
{
	endpoint = p;
}

string Line::ToString() const
{
	std::stringstream linestring;
	linestring << "Startpoint is " << startpoint.ToString() <<
		"endpoint is " << endpoint.ToString() << endl;
	return linestring.str();
}

double Line::Length() const
{
	double length = startpoint.Distance(endpoint);
	return length;
}

void main()
{
	Line l;
	cout << l.Length()<<endl;
}

