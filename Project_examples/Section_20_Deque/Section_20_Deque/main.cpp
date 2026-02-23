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

void test1()
{
	std::cout << "\nTest1 =========================================\n";

	std::deque<int>d{ 1,2,3,4,5 };
	display(d);

	d = { 2,4,6,8 };
	display(d);

	std::deque<int> d1(10, 100);	// ten 100s in the deque
	display(d1);

	d[0] = 100;
	d.at(1) = 200;
	display(d);
}

int main()
{
	test1();

	system("pause");
	return 0;
}