// Section 20 Sets

#include <iostream>
#include <set>

int main()
{
	std::set<int> set1{ 1,2,3,4,5 };
	std::set<std::string> stooges
	{
		std::string{"Lesego"},
		"Maxine",
		std::string{"Belmy"}
	};

	std::cout << "set1.size(): " << set1.size() << std::endl;
	std::cout << "stooges.size(): " << stooges.size() << std::endl;
	std::cout << "set1.max_size(): " << set1.max_size() << std::endl;
	std::cout << "stooges.max_size(): " << stooges.max_size() << std::endl;

	set1.insert(9);
	stooges.insert("Today");

	std::cout << "set1.size(): " << set1.size() << std::endl;
	std::cout << "stooges.size(): " << stooges.size() << std::endl;

	set1.erase(3);

	auto it = set1.find(9);

	if (it != set1.end())
		set1.erase(it);

	system("pause");
	return 0;
}