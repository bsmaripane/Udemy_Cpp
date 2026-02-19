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

void Test1() 
{
	std::cout << "\n=====================================================\n";
	std::vector<int>nums1{ 1,2,3,4,5 };
	auto it = nums1.begin();	// point to 1
	std::cout << *it << std::endl;

	it++;	// point to 2
	std::cout << *it << std::endl;

	it += 2;	// point to 4
	std::cout << *it << std::endl;

	it -= 2;	// point to 2
	std::cout << *it << std::endl;

	it = nums1.end() - 1;	// point to 5
	std::cout << *it << std::endl;
}