#include "line.h"
#include<sstream>
#include<cmath>

Line::Line()
{
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
	//cout << "bye line" << endl;
}

Line & Line::operator=(const Line & source)
{
	if (&source != this)
	{
		startpoint = source.startpoint;
		endpoint = source.endpoint;
		return *this;
	}
	else
		return *this;
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
		"Endpoint is " << endpoint.ToString() << endl;
	return linestring.str();
}

double Line::Length() const
{
	double length = startpoint.Distance(endpoint);
	return length;
}

ostream & operator<<(ostream & os, const Line & l)
{
	os << l.ToString();
	return os;
}
