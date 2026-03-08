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

	std::pair<std::string, std::string> pair1{ "Maxine", "Maripane" };
	fullName.insert(pair1);
	fullName.insert(std::make_pair("Semape", "Maswi"));

	fullName["Licia"] = "Teacher";
	fullName["Licia"] = "Graduate";
	fullName.at("Licia") = "My Wife";

	fullName.erase("Maxine");
	if (fullName.find("Semape") != fullName.end())
		std::cout << "Found Semape!" << std::endl;

	auto it = fullName.find("Lesego");
	if (it != fullName.end())
		fullName.erase(it);

	system("pause");
	return 0;
}