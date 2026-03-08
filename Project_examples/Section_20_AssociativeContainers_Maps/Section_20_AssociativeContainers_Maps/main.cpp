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

int main()
{


	system("pause");
	return 0;
}