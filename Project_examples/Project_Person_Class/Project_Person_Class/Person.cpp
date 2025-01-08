#include "Person.h"
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

istream& operator >> (istream& inf, Person& p)
{
	inf >> p.name >> p.age;
	return inf;
}

Person::Person() : name(""), age(0) {}

Person::~Person() {}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}
