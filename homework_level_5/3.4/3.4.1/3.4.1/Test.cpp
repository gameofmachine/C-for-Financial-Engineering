#include"point.h"
#include"line.h"
#include"circle.h"
#include"array.h"

void main()
{
	XIANGZOU::CAD::Line l;
	//two default constructor calls, two calls for constructor takes x and y
	//two assignment operator was called
	//four destructor calls before colon syntax
	//After colon syntax, two constructor calls, two destructor calls, no assignment operator
	//so they are less than before
}