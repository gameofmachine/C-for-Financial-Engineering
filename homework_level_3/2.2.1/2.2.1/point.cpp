#include"point.h"
#include<sstream>


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
	pointstring << "Point" << "(" << m_x << "," << m_y << ")" << endl;
	return pointstring.str();
}

void main()
{
	double a, b;
	cin >> a >> b;
	Point pt;
	pt.SetX(a);
	pt.SetY(b);
	cout << pt.ToString() << endl;
	cout << "The x coordinates is " << pt.GetX() << endl;
	cout << "The y coordinates is " << pt.GetY() << endl;
}
