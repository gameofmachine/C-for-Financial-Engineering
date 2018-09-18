#include"shape.h"
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
	cout << sp->ToString() << endl;//Shape ID was printed, no point information 
	//after declaring the ToString() in Shape class virtual, the point ToString() was called
}
