#include<iostream>
#include<list>
#include<vector>
#include<map>
using namespace std;
void main()
{
	//test of list
	list<double> list1;

	double a[10] = { 5.3,1.1,1.2,1.4,1.5,2.1,2.2,5.5,10.0,12.9 };

	for (int i=0;i<10;++i)
	{
		list1.push_back(a[i]);
	}
	cout <<"first element:"<< list1.front() <<'\n'<< "last element: "<<list1.back() << endl;
	
	//test of vector
	vector<double> vec1 = { 1.8,7.6,9.8 };
	vec1.push_back(10.2);
	vec1.push_back(20.1);
	for (unsigned int i = 0; i < vec1.size(); ++i)
	{
		cout << vec1[i] << endl;
	}

	//test of map
	map<string, double> map1;
	string str[5] = { "0","1","2","3","4" };
	for (int i = 0; i < 5; ++i)
	{
		map1[str[i]] = i + 0.1;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << map1[str[i]] << endl;
	}
}