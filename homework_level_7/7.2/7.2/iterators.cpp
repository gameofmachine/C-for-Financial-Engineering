#include<iostream>
#include<list>
#include<vector>
#include<map>
using namespace std;

template<typename T>
double sum(const typename T & source)
{
	typename T::const_iterator i;
	double result = 0.0;
	for (i = source.begin(); i != source.end(); ++i)
	{
		result += *i;
	}
	return result;
}

template<typename T1,typename T2>
double sum(const typename map<T1, T2>& map1)
{
	typename map<T1, T2>::const_iterator i;
	double result = 0.0;
	for (i = map1.begin(); i != map1.end(); ++i)
	{
		result += (*i).second;
	}
	return result;
}



template<typename T>
double sum(const typename T::const_iterator& start, const typename T::const_iterator& end)
{
	double result = 0.0;
	typename T::const_iterator i;
	for (i = start; i != end; ++i)
	{
		result += *i;
	}
	return result;
}


template<typename T1, typename T2>
double sum(const typename map<T1, T2>::const_iterator& start,const typename  map<T1, T2>::const_iterator& end)
{
	typename map<T1, T2>::const_iterator i;
	double result = 0.0;
	for (i = start; i != end; ++i)
	{
		result += (*i).second;
	}
	return result;
}

void main()
{
	//test of list
	list<double> list1;

	double a[10] = { 5.3,1.1,1.2,1.4,1.5,2.1,2.2,5.5,10.0,12.9 };

	for (int i = 0; i<10; ++i)
	{
		list1.push_back(a[i]);
	}
	cout << sum(list1) << endl;
	cout<<sum<list<double>>(list1.begin(), list1.end()) << endl;
	//test of vector
	vector<double> vec1 = { 1.8,7.6,9.8 };
	vec1.push_back(10.2);
	vec1.push_back(20.1);
	cout << sum(vec1) << endl;
	cout<<sum<vector<double>>(vec1.begin(), vec1.end()) << endl;

	//test of map
	map<string, double> map1;
	string str[5] = { "0","1","2","3","4" };
	for (int i = 0; i < 5; ++i)
	{
		map1[str[i]] = i + 0.1;
	}
	cout << sum(map1) << endl;
	cout<<sum<string, double>(map1.begin(), map1.end()) << endl;
}

