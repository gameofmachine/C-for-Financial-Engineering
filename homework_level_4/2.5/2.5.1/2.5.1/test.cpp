#include"point.h"
#include<sstream>
void main()
{
	Point* pt1;
	Point* pt2;
	Point* pt3;
	pt1 = new Point; //Default constructor
	pt2 = new Point(1, 1); //constructor with coordinates
	pt3 = new Point(*pt1);	//copy constructor

	cout << pt1->Distance() << endl;
	cout << pt2->Distance() << endl;
	cout << pt3->Distance() << endl;
	cout << *pt1;
	cout << *pt2;
	cout << *pt3;

	delete pt1;
	delete pt2;
	delete pt3;

	int N;
	cout << "Please enter the size" << endl;
	cin >> N;
	//Point pp[N];//error expresion must have a constant value
	Point* pp;
	pp = new Point[N];//can only use default constructor
	cout << *pp;// output the first element of the array, Point(0,0)
	delete[] pp;//N points are destructed
}