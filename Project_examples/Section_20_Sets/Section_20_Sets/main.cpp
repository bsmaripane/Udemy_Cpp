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

	system("pause");
	return 0;
}