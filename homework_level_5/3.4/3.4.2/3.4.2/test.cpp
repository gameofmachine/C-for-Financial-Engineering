#include"point.h"
#include"line.h"
#include"shape.h"
#include"circle.h"
#include<sstream>
using namespace XIANGZOU::CAD;
void main()
{
	Shape s;//create shape
	Point p(10, 20);//create point
	Line l(Point(1, 2), Point(3, 4));//create line
	
	cout << s.ToString() << endl;//print shape
	cout << p.ToString() << endl; //print point
	cout << l.ToString() << endl;//print line

	cout << "Shape ID:" << s.ID() << endl;//ID of the shape
	cout << "Point ID:" << p.ID() << endl;//ID of the point, it works
	cout << "Line ID:" << l.ID() << endl;//ID of the line, it works

	Shape* sp;//create a pointer to shape variable
	sp = &p;//point in a shape variable, it's possible
	cout << sp->ToString() << endl;//ID:18467

	Point p2;
	p2 = p;
	cout << p2 << ", " << p2.ID() << endl;//yes, the id was copied

}