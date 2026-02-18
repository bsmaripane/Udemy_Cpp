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

	// Stateless lambda expressions

	const int n{ 3 };
	int nums[n]{ 10,20,30 };

	auto sum = [](int nums[], int n)
		{
			int sum{ 0 };
			for (int i{ 0 }; i < n; i++)
				sum += nums[i];
			return sum;
		};

	std::cout << sum(nums, 3) << std::endl;

	system("pause");
	return 0;
}