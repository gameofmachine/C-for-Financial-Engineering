#include"shape.h"
#include"point.h"
#include"line.h"
#include"circle.h"
#include<sstream>
using namespace XIANGZOU::CAD;
void main()
{
	Shape* shapes[6];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Circle;
	shapes[3] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));
	shapes[4] = new Point(0.1, 1.0);
	shapes[5] = new Circle(Point(1.0, 1.0), 2.0);

	for (int i=0; i != 6; ++i) shapes[i]->Draw();
	for (int i=0; i != 6; ++i) delete shapes[i];
	//Shape sp;//cannot insantiate abstract class
}
