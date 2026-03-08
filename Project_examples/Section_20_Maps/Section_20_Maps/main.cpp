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
		{"Lesego", "Maripane"}
	};

	system("pause");
	return 0;
}