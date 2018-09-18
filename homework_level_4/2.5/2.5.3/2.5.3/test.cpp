#include"point.h"
#include"array.h"
void main()
{
	Array a1;//default constructor
	Array a2(3);

	//test operator[]
	a2[0] = Point(1, 1);
	a2[1] = Point(2, 2);
	a2[2] = Point(3, 3);
	a2[3] = Point(4, 4);//index out of range
	//notice 4>size=3, so a2[4] return to the first element, so we assign point(4,4) to the first element
	a1 = a2;//assignment operator

	cout << a1[0] << a1[1] << a1[2];//==a2[0],a2[1],a2[2]

	cout <<"a1 size is " <<a1.Size() << endl;//test the Size()
	Point newp(10, 10);
	
	cout << a2.GetElement(1) << endl;
	a2.SetElement(1, newp);
	cout << a2.GetElement(1) << endl;	//Test GetElement and SetElement Function

	Array a3(a2);
	cout << a3[0] << a3[1] << a3[2];	//copy constructor

	const Array a4(a1);
	cout << a4[0] << a4[1] << a4[2];	//test const [] operator
}