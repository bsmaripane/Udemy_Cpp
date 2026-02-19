// Using iterators - vector

#include <iostream>
#include <iterator>
#include <vector>
#include <set>


int main()
{
	std::vector<int> vec{ 1,2,3,4,5,6 };

	std::vector<int>::iterator it = vec.begin();

	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// Iterate string of characters
	std::set<char> surname{ 'M','A','R','I','P','A','N','E' };
	auto iter = surname.begin();

	while (iter != surname.end())
	{
		std::cout << *iter << std::endl;
		++iter;
	}

	// Reverse iterators
	std::vector<int> vec2{ 1,2,3,4,5,6 };
	std::vector<int>::reverse_iterator rit = vec2.rbegin(); // Use a different variable name

	while (rit != vec2.rend())
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}