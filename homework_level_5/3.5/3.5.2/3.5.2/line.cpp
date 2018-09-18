#include "line.h"
#include<sstream>
#include<cmath>
namespace XIANGZOU
{
	namespace CAD
	{
		//Line::Line()
		//{
			//startpoint = Point(0.0, 0.0);
			//endpoint = Point(0.0, 0.0);

		//} // default constructor before colon syntax
		Line::Line() :Shape(), startpoint(0.0, 0.0), endpoint(0.0, 0.0){}
		
		Line::Line(const Point & a, const Point & b):Shape(),startpoint(a),endpoint(b){}

		Line::Line(const Line & l): Shape(l),startpoint(l.startpoint), endpoint(l.endpoint) {}

		Line::~Line()
		{
			//cout << "bye line" << endl;
		}

		Line & Line::operator=(const Line & source)
		{
			if (&source != this)
			{
				Shape::operator=(source);
				startpoint = source.startpoint;
				endpoint = source.endpoint;
				return *this;
			}
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
			std::string s = Shape::ToString();
			std::stringstream linestring;
			linestring << "Startpoint is " << startpoint <<","<<"Endpoint is " << endpoint<<","<<s;
			return linestring.str();
		}

		double Line::Length() const
		{
			double length = startpoint.Distance(endpoint);
			return length;
		}

		//ostream & operator<<(ostream & os, const Line & l)
		//{
			//os << l.ToString();
			//return os;
		//}

		ostream & operator<<(ostream & os, const Line & l)
		{
			os << "Startpoint is " << l.startpoint <<
				"Endpoint is " << l.endpoint;
			return os;
		}
	}
}