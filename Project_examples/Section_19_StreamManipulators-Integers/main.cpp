// Section 19: Stream Manipulators - Integers

#include <iostream>
#include <format>

int main()
{
	// Formatting integer types - setting base
	int num{ 255 };
	int num1{ -255 };

	std::cout << "std::showbase, std::showpos and std::uppercase" << std::showbase << std::showpos << std::uppercase;
	std::cout << "std::dec : 255 is " << std::dec << num << std::endl;
	std::cout << "std::dec : 255 is " << std::dec << num1 << std::endl;
	std::cout << "std::hex : 255 is " << std::hex << num << std::endl;
	std::cout << "std::hex : 255 is " << std::hex << num1 << std::endl;
	std::cout << "std::oct : 255 is " << std::oct << num << std::endl;
	std::cout << "std::oct : 255 is " << std::oct << num1 << std::endl;

	system("pause");
	return 0;
}