#include"array.cpp"
#include"stack.cpp"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include<iostream>

void main()
{
	Stack<int> s1(3);//test of normal constructor
	//test of Push()
	for(int i=0;i<10;++i)
	{
		try
		{
			s1.Push(i);
		}
		catch (ArrayException& err)
		{
			cout << err.GetMessage() << endl;
		}
	}
	
	Stack<int> s2 = s1;//test of = operator
	Stack<int> s3(s1);//test of copy constructor
	cout << "Test of Pop()" << endl;
	for (int i = 0; i < 5; ++i)
	{
		try
		{
			cout << s1.Pop() << endl;
		}
		catch (ArrayException& err)
		{
			cout << err.GetMessage() << endl;
		}
	}
}
