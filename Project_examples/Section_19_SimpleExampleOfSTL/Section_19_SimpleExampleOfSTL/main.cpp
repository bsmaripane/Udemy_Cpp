// Section 20 A simple example

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> oddNumers{ 7,3,9,1,5 };

	// sort a vector
	std::sort(oddNumers.begin(), oddNumers.end());
	for (auto elem : oddNumers)
		std::cout << elem << " ";

	system("pause>0");
	return 0;
}