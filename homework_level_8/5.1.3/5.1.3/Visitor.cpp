#include "Visitor.h"

Visitor::Visitor(): boost::static_visitor<void>()
{
	m_x = 0.0;
	m_y = 0.0;
}

Visitor::Visitor(const Visitor & source): boost::static_visitor<void>(source)
{
	m_x = source.m_x;
	m_y = source.m_y;
}

Visitor::Visitor(double x, double y): boost::static_visitor<void>()
{
	m_x = x;
	m_y = y;
}

Visitor::~Visitor()
{
}

Visitor & Visitor::operator=(const Visitor & source)
{
	if (this == &source)
	{
		return *this;
	}
	boost::static_visitor<void>::operator=(source);
	m_x = source.m_x;
	m_y = source.m_y;

	return *this;
}

void Visitor::operator()(Point & p) const
{
	p.X(p.X() + m_x);
	p.Y(p.Y() + m_y);
}

void Visitor::operator()(Line & line) const
{
	Point p1 = line.P1();
	Point p2 = line.P2();

	p1.X(p1.X() + m_x);
	p2.X(p2.X() + m_x);
	p1.Y(p1.Y() + m_y);
	p2.Y(p2.Y() + m_y);

	line.P1(p1);
	line.P2(p2);
}

void Visitor::operator()(Circle & circle) const
{
	Point p = circle.CenterPoint();
	p.X(p.X() + m_x);
	p.Y(p.Y() + m_y);

	circle.CenterPoint(p);
}
