// Section 20 
// Map

#include <iostream>
#include <map>
#include <set>

void display(const std::map<std::string, std::set<int>>& aMap)
{
	std::cout << "[ ";
	for (const auto &elem : aMap)
	{
		std::cout << elem.first << ":[";
		for (const auto& set_elem : elem.second)
			std::cout << set_elem << " ";
		std::cout << "] ";
	}
	std::cout << "]" << std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1, T2>& aMap)
{
	std::cout << "[ ";
	for (const auto& elem : aMap)
		std::cout << elem.first << ":" << elem.second << " ";
	std::cout << "] " << std::endl;
}

void test1()
{
	std::cout << "\nTest1 =======================================\n";

	std::map<std::string, int> map
	{
		{"Lesego", 13},
		{"Maxine", 30},
		{"Semape", 31}
	};
	display(map);

	map.insert(std::pair<std::string, int>{"Kganya", 5});
	display(map);

	map["Maashele"] = 54;
	display(map);

	map["Maashele"] += 6;
	display(map);

	map.erase("Semape");
	display(map);

	std::cout << "Count for Kganya: " << map.count("Kganya") << std::endl;
	std::cout << "Count for Lesego: " << map.count("Lesego") << std::endl;

	map.clear();
	display(map);
}

void test2()
{
	std::cout << "\nTest2 =======================================\n";

	std::map<std::string, std::set<int>> grades
	{
		{"Felicia", {97, 89, 58, 78}},
		{"Belmy", {89, 91, 92, 88}},
		{"Lesego", {89,99, 89, 85, 95} }
	};
	display(grades);

	grades["Belmy"].insert(75);
	display(grades);

	auto it = grades.find("Feilicia");
	if (it != grades.end())
		it->second.insert(77);
	display(grades);
}

int main()
{
	test1();
	test2();

	system("pause");
	return 0;
}