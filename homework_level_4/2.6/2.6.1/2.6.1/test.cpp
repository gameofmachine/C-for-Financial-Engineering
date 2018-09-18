#include"point.h"
#include"line.h"
#include"circle.h"
#include"array.h"

void main()
{
	//full namespace for Point class
	XIANGZOU::CAD::Point p1(1, 1);
	XIANGZOU::CAD::Point p2(2, 2);
	cout << p1<<p2;

	//using declaration for Line
	using XIANGZOU::CAD::Line;
	cout << Line(p1, p2);

	//using declaration for a complete namespace
	using namespace XIANGZOU::Containers;
	Array a(2);
	a[0] = XIANGZOU::CAD::Point(3, 3);
	cout << a[0];

	//use alias
	namespace XZC = XIANGZOU::CAD;
	using XZC::Circle;
	cout << Circle(p1, 1);



}