#include"shape.h"
#include"point.h"
#include"line.h"
#include"circle.h"
#include<sstream>
using namespace XIANGZOU::CAD;
void main()
{
	Shape* shapes[3];
	shapes[0] = new Shape;
	shapes[1] = new Point;
	shapes[2] = new Line;
	for (int i = 0; i != 3; ++i)
	{
		delete shapes[i];	//only shape destructor was called
	}

	//after the destructor is declared virtual in the Shape class,the proper destructors are called
}
