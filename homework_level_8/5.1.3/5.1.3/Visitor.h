#pragma once
#ifndef VISITOR_H
#define VISITOR_H

#include <boost\variant\static_visitor.hpp>
#include "point.h"
#include "line.h"
#include "circle.h"

class Visitor : public boost::static_visitor<void>
{
private:
	double m_x;
	double m_y;

public:
	Visitor();
	Visitor(const Visitor& source);
	Visitor(double x, double y);
	~Visitor();

	Visitor& operator= (const Visitor& source);
	void operator ()(Point& p) const;
	void operator ()(Line& line) const;
	void operator ()(Circle& circle) const;


};



#endif