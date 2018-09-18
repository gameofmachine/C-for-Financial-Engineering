#include"array.h"
#include<iostream>
using namespace XIANGZOU;
void main()
{
	Containers::Array a(10);
	//cout << a[10] << endl; //runtime error occurs

	try
	{
		cout << a[10] << endl;
	}
	catch (int err)
	{
		if (err == -1) cout << "index out of bound" << endl;
	}
}
