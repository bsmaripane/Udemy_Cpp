// Section 20 Iterators

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void  display(const std::vector<int>& vec)
{
	std::cout << "[";
	for (auto const &i : vec)
	{
		std::cout << i << " ";
	}
	std::cout << "]" << std::endl;
}