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

	bool operator<(const Person& rhs) const
	{
		return std::tie(name, age) < std::tie(rhs.name, rhs.age);
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

void Test1()
{
	// Sets
	std::cout << "\nTest1 ===================================\n";

	std::set<int> set1{ 1,4,3,5,2 };
	display(set1);

	set1 = { 1,2,3,1,1,2,2,3,3,4,5 };
	display(set1);

	set1.insert(0);
	set1.insert(10);

	display(set1);

	std::cout << ((set1.count(10)) ? "10 is in the set" : "10 is NOT in the set") << std::endl;

	auto it = set1.find(5);

	if (it != set1.end()) std::cout << "Found: " << *it << std::endl;

	set1.clear();
	display(set1);
}

void Test2()
{
	std::cout << "\nTest2 ===================================\n";

	std::set<Person> favoritePeople
	{
		{"Lesego", 12},
		{"Felicia", 29},
		{"Maashele", 53},
		{"Kganya", 4}
	};
	display(favoritePeople);

	favoritePeople.emplace("Belicia", 5);
	display(favoritePeople);

	favoritePeople.emplace("Belmy", 5);
	display(favoritePeople);

	auto it = favoritePeople.find(Person{"Felicia", 29});
	if (it != favoritePeople.end()) favoritePeople.erase(it);
	display(favoritePeople);

	it = favoritePeople.find(Person{ "XXX", 4 });
	if (it != favoritePeople.end()) favoritePeople.erase(it);
	display(favoritePeople);
}

int main()
{
	Test1();
	Test2();

	system("pause");
	return 0;
}