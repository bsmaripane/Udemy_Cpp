// Section 20 Priority Queue

#include <iostream>
#include <queue>

class Person
{
	friend std::ostream& operator<<(std::ostream& os, const Person& person)
	{
		os << person.name << ":" << person.age;
		return os;
	}
	std::string name;
	int age;
public:
	Person() : name("Unknown"), age(0) {}
	Person(std::string name, int age)
		: name(name)
	{
		if (age < 0)
			std::cerr << "Error: age cannot be a negative integer!" << std::endl;
		else
			this->age = age;
	}

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
	std::cout << "Section 20 Priority Queue\n\n";


	std::cout << std::endl;
	system("pause");
	return 0;
}