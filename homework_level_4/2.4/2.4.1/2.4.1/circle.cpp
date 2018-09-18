#define _USE_MATH_DEFINES
#include "circle.h"
#include<cmath>
#include<sstream>
Circle::Circle()
{
	center.X(0); center.Y(0);
	m_radius = 0;
}

Circle::Circle(const Point & a, const double & r)
{
	center = a;
	m_radius = r;
}

Circle::Circle(const Circle & O)
{
	center = O.center;
	m_radius = O.m_radius;
}

Circle::~Circle()
{
	//cout << "bye circle" << endl;
}

Circle & Circle::operator=(const Circle & source)
{
	if (&source != this)
	{
		center = source.center;
		m_radius = source.m_radius;
		return *this;
	}
	else
		return *this;
}

Point Circle::CenterPoint() const
{
	return center;
}

double Circle::Radius() const
{
	return m_radius;
}

void Circle::CenterPoint(const Point & pt)
{
	center = pt;
}

void Circle::Radius(const double & r)
{
	m_radius = r;
}

double Circle::Diameter() const
{
	double d = 2 * m_radius;
	return d;
}

double Circle::Area() const
{
	double area = M_PI*m_radius*m_radius;
	return area;
}

double Circle::Circumference() const
{
	double circum = 2 * M_PI*m_radius;
	return circum;
}

string Circle::Tostring()
{
	stringstream circlestring;
	circlestring << "The center point is" << center.ToString() << "the radius is " << m_radius << endl;
	return circlestring.str();
}
