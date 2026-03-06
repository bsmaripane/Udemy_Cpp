// Section 20 
// std::list - initialisation and assignment

#include <iostream>
#include <list>

int main()
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

	// common methods
	std::cout << "list1.size() : " << list1.size() << std::endl;
	std::cout << "list1.max_size() : " << list1.max_size() << std::endl;

	std::cout << "list1.front() : " << list1.front() << std::endl;
	std::cout << "list1.bact() : " << list1.back() << std::endl;

	system("pause");
	return 0;
}