#include"array.cpp"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include"ArraySizeException.h"
#include"NumericArray.cpp"
#include<iostream>

void main()
{
	NumericArray<int> intArray(3);
	cout << "The size of intArray is " << intArray.Size() << endl;
	for (int i = 0; i < 3; ++i)
	{
		intArray[i] = i+1;
	}
	//test of = operator
	NumericArray<int> intArraycopy = intArray;
	for (int i = 0; i < 3; ++i)
	{
		cout << intArraycopy[i] << endl;
	}
	//test of * operator
	NumericArray<int> intArray2 = intArray * 2;
	for (int i = 0; i < 3; ++i)
	{
		cout << intArray2[i] << endl;
	}
	//test of + operator
	NumericArray<int> intArray3(3);
	intArray3= intArray2 + intArray;
	for (int i = 0; i < 3; ++i)
	{
		cout << intArray3[i] << endl;
	}
	//test of DotProduct()
	int dotP;
	dotP = intArray3.DotProduct(intArray2);
	cout << dotP << endl;
	//test of the exception
	NumericArray<int> intArray4(4);

	try
	{
		NumericArray<int> intArray5 = intArray + intArray4;
	}
	catch (ArrayException& err)
	{
		cout << err.GetMessage() << endl;
	}
	try
	{
		int dotP2= intArray4.DotProduct(intArray);
	}
	catch (ArrayException& err)
	{
		cout << err.GetMessage() << endl;
	}
}
