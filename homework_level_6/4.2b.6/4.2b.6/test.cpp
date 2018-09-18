#include"array.cpp"
#include"stack.cpp"
#include"ArrayException.h"
#include"OutOfBoundsException.h"
#include"StackException.h"
#include<iostream>

void main()
{
	Stack<int,3> s1;
	for(int i=0;i<10;++i)
	{
		try
		{
			s1.Push(i);
		}
		catch (StackException& err)
		{
			cout << err.GetMessage() << endl;
		}
	}
	
	Stack<int,3> s2 = s1;//test of = operator
	//Stack<int,4> s2 = s1 not suitable
	Stack<int,3> s3(s1);//test of copy constructor
	cout << "Test of Pop()" << endl;
	for (int i = 0; i < 5; ++i)
	{
		try
		{
			cout << s1.Pop() << endl;
		}
		catch (StackException& err)
		{
			cout << err.GetMessage() << endl;
		}
	}
}
