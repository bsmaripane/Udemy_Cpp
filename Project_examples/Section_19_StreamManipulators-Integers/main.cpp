// Section 19: Stream Manipulators - Integers

#include <iostream>
#include <format>

int main()
{
	// Formatting integer types - setting base
	int num{ 255 };

	std::cout << "std::dec : 255 is " << std::dec << num << std::endl;
	std::cout << "std::hex : 255 is " << std::hex << num << std::endl;
	std::cout << "std::oct : 255 is " << std::oct << num << std::endl;

	system("pause");
	return 0;
}