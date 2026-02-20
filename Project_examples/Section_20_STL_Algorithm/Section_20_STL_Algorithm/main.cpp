// Section 20 STL Algorithm
#include <iostream>
#include <algorithm>
#include <vector>

struct Square_Functor
{
	void operator() (int x)
	{
		std::cout << x * x << " ";
	}
};

int main()
{
	std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,0 };
	auto loc = std::find(vec.begin(), vec.end(), 3);

	if (loc != vec.end())
		std::cout << *loc << std::endl;

	// for_each - using a functor


	system("pause");
	return 0;
}