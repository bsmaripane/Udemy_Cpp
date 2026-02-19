// Using iterators - vector

#include <iostream>
#include <iterator>
#include <vector>


int main()
{
	std::vector<int> vec{ 1,2,3,4,5,6 };

	std::vector<int>::iterator it = vec.begin();

	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << " ";
	}

	system("pause");
	return 0;
}