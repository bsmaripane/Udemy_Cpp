// Section 20 STL Algorithm
#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
	std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,0 };
	auto loc = std::find(vec.begin(), vec.end(), 3);

	if (loc != vec.end())
		std::cout << *loc << std::endl;

	system("pause");
	return 0;
}