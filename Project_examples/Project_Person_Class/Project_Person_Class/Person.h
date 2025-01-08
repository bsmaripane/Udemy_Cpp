#ifndef Person_h
#define  Person_h
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class Person
{
public:
	friend istream& operator >> (istream& inf, Person& p);
	Person();
	~Person();
	string getName();
	int getAge();

private:
	string name;
	int age;
};
#endif
