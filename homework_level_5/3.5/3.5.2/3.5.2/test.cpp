//#include"shape.h"
#include"point.h"
#include"line.h"
#include"circle.h"
#include<sstream>
using namespace XIANGZOU::CAD;
void main()
{
	Shape* sp;
	Point pt(1, 1);
	sp = &pt;
	cout << sp->ToString();

	Line l;
	Shape* sl;
	sl = &l;
	cout << sl->ToString();

	Circle c;
	Shape* sc;
	sc = &c;
	cout << sc->ToString();

	//Shape ID was printed with point ,line and circle
}
