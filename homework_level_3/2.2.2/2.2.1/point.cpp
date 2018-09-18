#include"point.h"
#include<sstream>
#include<cmath>


Point::Point()
{
	m_x = 0;
	m_y = 0;
}

Point::~Point()
{
}

double Point::GetX()
{
	return m_x;
}

double Point::GetY()
{
	return m_y;
}
	

void Point::SetX(double newx)
{
	m_x = newx;
}

void Point::SetY(double newy)
{
	m_y = newy;
}

string Point::ToString()
{
	std::stringstream pointstring;
	pointstring << "Point" << '(' << m_x << ',' << m_y << ')' << endl;
	return pointstring.str();
}

double Point::DistanceOrigin()
{
	double distto0 = std::sqrt(m_x*m_x + m_y*m_y);
	return distto0;
}

double Point::Distance(Point p)
{
	double disttop = std::sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
	return disttop;
}

void main()
{
	double a, b,px,py;
	cin >> a >> b;
	Point pt, p;
	pt.SetX(a);
	pt.SetY(b); //pt is (a,b)
	cout << pt.ToString() << endl;
	cout << "The x coordinates is " << pt.GetX() << endl;
	cout << "The y coordinates is " << pt.GetY() << endl;
	cout << pt.DistanceOrigin() << endl;
	cin >> px >> py;
	p.SetX(px);
	p.SetY(py); //p is (px,py)
	cout << pt.Distance(p) << endl;
}
