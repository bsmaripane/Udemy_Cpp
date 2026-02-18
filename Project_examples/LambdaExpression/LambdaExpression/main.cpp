// Section 21 Lambda Expression

#include <iostream>

int main()
{
	auto word = []() { std::cout << "Hello Lambda Expression" << std::endl; };

	word();

	// Returning a value from a lambda expression
	auto product = [](int x, int y) -> int { return x * y; };

	std::cout << product(4, 5) << std::endl;

	auto module = [](int a, int b) { return a % b; };

	std::cout << module(9, 5) << std::endl;

	system("pause");
	return 0;
}