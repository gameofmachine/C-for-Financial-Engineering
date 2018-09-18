#include"point.h"
#include<sstream>


Point::Point()
{
	m_x = 0;
	m_y = 0;
}
Point::Point(double x, double y)
{
	m_x = x;
	m_y = y;
}
Point::Point(const Point&p)
{
	m_x = p.m_x;
	m_y = p.m_y;
}
Point::~Point()
{
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
	pointstring << "Point" << "(" << m_x << "," << m_y << ")" << endl;
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

Point Point::operator-() const
{
	return Point(-m_x, -m_y);
}

Point Point::operator*(double factor) const
{
	return Point(m_x*factor,m_y*factor);
}

Point Point::operator+(const Point & p) const
{
	return Point(m_x+p.m_x,m_y+p.m_y);
}

bool Point::operator==(const Point & p) const
{
	return m_x==p.m_x&&m_y==p.m_y;
}

Point & Point::operator=(const Point & source)
{
	if (&source != this)
	{
		m_x = source.m_x;
		m_y = source.m_y;
		return *this;
	}
	else
	return *this;
}

Point & Point::operator*=(double factor)
{
	m_x = m_x*factor;
	m_y = m_y*factor;
	return *this;
}

ostream & operator<<(ostream & os, const Point & p)
{
	os << p.ToString();
	return os;
}
