#include "shape.h"
#include<sstream>
Shape::Shape() :m_id(rand()){}

Shape::Shape(const Shape & s) : m_id(s.m_id){}
Shape::~Shape()
{
	//cout << "Shape destructor" << endl;
}

Shape& Shape::operator=(const Shape& source)
{
	if (&source != this)
	{
		m_id = source.m_id;
		return *this;
	}
	return *this;
}

string Shape::ToString() const
{
	stringstream a;
	a << "ShapeID:" << m_id << endl;
	return a.str();
}

int Shape::ID() const
{
	return m_id;
}
void Shape::Print() const
{
	cout << ToString();
}
