#include"array.h"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include<iostream>
using namespace XIANGZOU;
void main()
{
	Containers::Array a(10);

	try
	{
		cout << a[10] << endl;
	}
	catch (Containers::ArrayException& err)
	{
		cout << err.GetMessage() << endl;
	}
}
