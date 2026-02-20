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

void find_test()
{
	std::cout << "\n================================\n";
	std::vector<int>vec{ 1,2,3,4,5 };
	auto loc = std::find(std::begin(vec), std::end(vec), 1);

	if (loc != std::end(vec))
		std::cout << "Found the number: " << *loc << std::endl;
	else
		std::cout << "Coundn't find the number" << std::endl;

	std::list<Person> players{
		{"Lesego", 12},
		{"Kganya", 3},
		{"Belicia", 5}
	};

	auto loc1 = std::find(players.begin(), players.end(), Person{ "Kganya", 3 });
	std::cout << ((loc1 != players.end()) ? "Found Kganya" : "Kganya not found") << std::endl;
}

void count_test()
{
	std::cout << "\n================================\n";
	std::vector<int>vec{ 0,1,2,3,4,5,3,2,1,2 };

	int num = std::count(vec.begin(), vec.end(), 2);
	std::cout << num << " occurrences found" << std::endl;
}

int main()
{
	find_test();
	count_test();

	std::cout << std::endl;
	system("pause");
	return 0;
}