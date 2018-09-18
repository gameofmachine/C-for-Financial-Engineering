#include"shape.h"
#include"point.h"
#include"line.h"
#include"circle.h"
#include<sstream>
using namespace XIANGZOU::CAD;
void main()
{
	Point pt(1, 1);
	pt.Print();
	Line l(Point(0, 0), pt);
	l.Print();

	//It prints the right information even when point and line do not have the Print() function
}
