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

	system("pause");
	return 0;
}