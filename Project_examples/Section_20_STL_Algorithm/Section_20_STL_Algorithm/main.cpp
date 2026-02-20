// Section 20 STL Algorithm
#include <iostream>
#include <algorithm>
#include <vector>


void Square(int x)
{
	std::cout << x * x << " ";
}


int main()
{
	std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,0 };
	auto loc = std::find(vec.begin(), vec.end(), 3);

	if (loc != vec.end())
		std::cout << *loc << std::endl;

	// for_each - using a regular functioon

	std::for_each(vec.begin(), vec.end(), Square);
	std::cout<< std::endl;

	// for_each - using a lambda expression
	std::for_each(vec.begin(), vec.end(), [](int x) {std::cout << x * x << " "; });
	std::cout << std::endl;

	system("pause");
	return 0;
}