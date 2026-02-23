// Section 20 Sequence Containers - Deque

#include <iostream>
#include <deque>

int main()
{
	// Initialisation and assignment
	std::deque<int> d{ 1,2,3,4,5 };
	std::deque<int> d1(10, 100);	// ten 100s

	std::deque<std::string> stooges
	{
		std::string{"Belmy"},
		"Maswi",
		std::string("Maripane")
	};

	d = { 2,4,6,8,10 };

	// deque common methods
	std::cout << d.size() << std::endl;
	std::cout << d.max_size() << std::endl;

	std::cout << d.at(0) << std::endl;
	std::cout << d[1] << std::endl;

	std::cout << d.front() << std::endl;
	std::cout << d.back() << std::endl;

	system("pause");
	return 0;
}