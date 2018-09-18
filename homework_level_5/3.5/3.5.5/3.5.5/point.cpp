#include"point.h"
#include<sstream>
namespace XIANGZOU
{
	namespace CAD
	{
		Point::Point():Shape(),m_x(0.0),m_y(0.0)
		{
			//cout << "default constructor" << endl;
		}
		Point::Point(double x):Shape(),m_x(x),m_y(x)
		{
			//cout << "constructor takes x" << endl;
		}
		Point::Point(double x, double y):Shape(),m_x(x),m_y(y)
		{
			//cout << "constructor takes x and y" << endl;
		}
		Point::Point(const Point&p):Shape(p),m_x(p.m_x),m_y(p.m_y)
		{
			//cout << "copy constructor" << endl;
		}
		Point::~Point()
		{
			//cout << "Point destructor" << endl;
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
			std::string s = Shape::ToString();
			std::stringstream pointstring;
			pointstring << "Point" << "(" << m_x << "," << m_y << ")" <<","<< s;
			return pointstring.str();
		}

		void Point::Draw() const
		{
			cout << "This point is " << "(" << m_x << "," << m_y << ")" << endl;
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
			return Point(m_x*factor, m_y*factor);
		}

		Point Point::operator+(const Point & p) const
		{
			return Point(m_x + p.m_x, m_y + p.m_y);
		}

		bool Point::operator==(const Point & p) const
		{
			return m_x == p.m_x&&m_y == p.m_y;
		}

		Point & Point::operator=(const Point & source)
		{
			//cout << "assignment operator was used" << endl;
			if (&source != this)
			{
				Shape::operator=(source);
				m_x = source.m_x;
				m_y = source.m_y;
				return *this;
			}
				return *this;
		}

		Point & Point::operator*=(double factor)
		{
			m_x = m_x*factor;
			m_y = m_y*factor;
			return *this;
		}

		//ostream & operator<<(ostream & os, const Point & p)
		//{
			//os << p.ToString();
			//return os;
		//}

		ostream & operator<<(ostream & os, const Point & p)
		{
			os << " Point" << "(" << p.m_x << "," << p.m_y << ")";
			return os;
		}
	}
}