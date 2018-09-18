#include<iostream>
#include<vector>
#include<algorithm>
#include"FunctionObject.h"
using namespace std;

bool lessthan(double input)
{
	const double limit = 5.0;
	return input < limit;
}

void main()
{
	vector<double> vec;
	for (int i = 0; i < 10; ++i)
	{
		vec.push_back(i + 0.5);
	}

	int result1 = count_if(vec.begin(), vec.end(), lessthan);
	cout << result1 << endl;

	double limit = 5;
	int result2 = count_if(vec.begin(), vec.end(), FunctionObject<double>(limit));
	cout << result2 << endl;
}