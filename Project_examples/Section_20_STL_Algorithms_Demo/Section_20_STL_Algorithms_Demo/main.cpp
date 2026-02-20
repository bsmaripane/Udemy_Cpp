// Section 20 STL Algorithms Demo

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

class Person
{
	std::string name;
	int age;
public:
	Person() = default;
	Person(std::string name, int age) : name(name), age(age) {}
	bool operator<(const Person& rhs) const
	{
		return this->age < rhs.age;
	}
	bool operator==(const Person& rhs) const
	{
		return (this->name == rhs.name && this->age == rhs.age);
	}
};

int main()
{


	std::cout << std::endl;
	system("pause");
	return 0;
}