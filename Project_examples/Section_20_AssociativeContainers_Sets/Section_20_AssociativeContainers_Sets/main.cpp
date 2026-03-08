// Section 20 
// Associative Containers - Sets

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

class Person
{
	friend std::ostream &operator<<(std::ostream &os, const Person &person)
	{
		os << person.name << " : " << person.age;
		return os;
	}
	std::string name;
	int age;
public:
	Person() : name("Unknown"), age(0) {}
	Person(std::string name, int age)
		: name(name)
	{
		if (age <= 0)
			throw std::invalid_argument("Error: age must be greater than 0!\n");
		else
			this->age = age;
	}

	bool operator==(const Person& rhs) const
	{
		return (this->name == rhs.name && this->age == rhs.age);
	}
};

template<typename T>
void display(const std::set<T>& aSet)
{
	std::cout << "[ ";
	for (const auto& elem : aSet)
		std::cout << elem << " ";
	std::cout << "]" << std::endl;
}

int main()
{

	system("pause");
	return 0;
}