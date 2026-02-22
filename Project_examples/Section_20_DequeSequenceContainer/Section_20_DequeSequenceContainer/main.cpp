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

	system("pause");
	return 0;
}