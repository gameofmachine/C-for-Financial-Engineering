#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>

#include <iostream>
#include <string>
using namespace std;

void print(const boost::tuple<string,int,int>& person)
{
	cout << "Name: " << person.get<0>() <<
		"\nAge: " << person.get<1>() <<
		"\nLength: " << person.get<2>() << endl;
}
void main()
{
	typedef boost::tuple<string,int,int> Person;

	//some person instances
	Person person1(string("Bob"), 11, 3);
	Person person2(string("Ad"), 20, 2);

	//print the instances
	print(person1);
	print(person2);

	//Bob grows older
	person1.get<1>() += 1;
	print(person1);
	print(person2);
}