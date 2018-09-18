#include"point.h"
void main()
{
	Point** pp;
	pp = new Point*[3];

	*pp = new Point(1, 1);
	*(pp + 1) = new Point(2, 2);
	*(pp + 2) = new Point(3, 3);

	for (int i = 0; i < 3; ++i)
		cout << **(pp + i);

	for (int i = 0; i < 3; ++i)
		delete[] pp[i];	//delete each point

	delete[] pp;	//delete the array
}