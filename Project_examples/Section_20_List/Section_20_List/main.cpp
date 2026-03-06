// Section 20 
// std::list - initialisation and assignment

#include <iostream>
#include <list>

int amin()
{
	std::list<int> list1{ 1,2,3,4,5 };
	std::list<int> list2(10, 100);

	std::list<std::string> stooges
	{
		std::string{"Felicia"},
		"Maxine",
		std::string{"Curly"}
	};

	list1 = { 2,4,6,8,10 };

	system("pause");
	return 0;
}