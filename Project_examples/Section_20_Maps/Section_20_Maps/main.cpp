// Section 20 Maps

#include <iostream>
#include <map>

int main()
{
	std::map<std::string, int> map1
	{
		{"Felicia", 29},
		{"Lesego", 12},
		{"Kganya", 4}
	};
	std::map<std::string, std::string> fullName
	{
		{"Felicia", "van der Merwe"},
		{"Belmy", "Maripane"},
		{"Lesego", "Maripane"},
		{"Maashele", "Maripane"},
		{"Kganya", "Maripane"},
		{"Tracy", "Maripane"}
	};

	std::cout << "map1.size(): " << map1.size() << std::endl;
	std::cout << "fullName.size(): " << fullName.size() << std::endl;
	std::cout << "map1.max_size(): " << map1.max_size() << std::endl;
	std::cout << "fullName.max_size(): " << fullName.max_size() << std::endl;

	system("pause");
	return 0;
}