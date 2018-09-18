#include"array.cpp"
#include"point.h"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include<iostream>

void main()
{
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;

	cout << intArray1.DefaultSize() << endl;	//5
	cout << intArray2.DefaultSize() << endl;	//5
	cout << doubleArray.DefaultSize() << endl;	//5

	intArray1.DefaultSize(15);

	cout << intArray1.DefaultSize() << endl;	//15
	cout << intArray2.DefaultSize() << endl;	//15
	cout << doubleArray.DefaultSize() << endl;	//5

	//After we change default size in intArray1 to 15, all default sizes in Array<int> class are 15
	//default size in other template remains unchanged

}
