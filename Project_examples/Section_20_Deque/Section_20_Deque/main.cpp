// Section 20 Deque

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

template <class T>
void display(const std::deque<T>& d)
{
	std::cout << "[";
	for (const auto& elem : d)
		std::cout << elem << " ";
	std::cout << "]" << std::endl;
}

int main()
{

	system("pause");
	return 0;
}