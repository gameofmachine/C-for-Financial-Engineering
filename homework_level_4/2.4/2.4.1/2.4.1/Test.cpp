#include"point.h"
#include"line.h"
#include"circle.h"
#include<sstream>
void main()
{
	//Check point class
	Point p1(3, 4), p2(5, 7);
	Point p3 = -p1;
	cout << p3.ToString();
	Point p4 = p1 * 2;
	cout << p4.ToString();
	Point p5 = p1 + p2;
	cout << p5.ToString();
	cout << (p1 == p2) << endl;
	p1 = p2;
	cout << p1.ToString();
	p1 *= 2;// notice that p1 now have the same value as p2 (5,7)
	cout << p1.ToString();

	//check line class
	Line l1(p2, p1), l2(p3, p4);
	cout << l1.ToString() << l2.ToString();
	l1 = l2;
	cout << "After assignment" << endl << l1.ToString() << l2.ToString();

	//check circle class
	Circle c1(p1, 1), c2(p2, 2);
	cout << c1.Tostring() << c2.Tostring();
	c1 = c1;//self-assignment
	cout << "After assignment" << endl << c1.Tostring() << c2.Tostring();
}