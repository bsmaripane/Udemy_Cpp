// Section 21 Lambda Expression

#include <iostream>

int main()
{
	auto word = []() { std::cout << "Hello Lambda Expression" << std::endl; };

	word();

	system("pause");
	return 0;
}