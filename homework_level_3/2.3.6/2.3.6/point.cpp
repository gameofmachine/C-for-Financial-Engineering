#include"point.h"
#include<sstream>
#include<cmath>


Point::Point()
{
	m_x = 0;
	m_y = 0;
}

Point::Point(const Point & pt)
{
	m_x = pt.m_x;
	m_y = pt.m_y;
}

Point::Point(double x, double y)
{
	m_x = x;
	m_y = y;
}

Point::~Point()
{
	cout << "bye point" << endl;
}

double Point::X() const
{
	return m_x;
}

double Point::Y() const
{
	return m_y;
}


void Point::X(double newx)
{
	m_x = newx;
}

void Point::Y(double newy)
{
	m_y = newy;
}

string Point::ToString() const
{
	std::stringstream pointstring;
	pointstring << "Point" << '(' << m_x << ',' << m_y << ')' << endl;
	return pointstring.str();
}

double Point::Distance() const
{
	double distto0 = std::sqrt(m_x*m_x + m_y*m_y);
	return distto0;
}

double Point::Distance(const Point &p) const
{
	double disttop = std::sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
	return disttop;
}

