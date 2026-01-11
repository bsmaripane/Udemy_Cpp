// Section 19: Stream Manipulators - Integers

#include <iostream>

int main()
{
	// Formatting integer types - setting base
	int num{ 255 };
	int num1{ -255 };

	std::cout << "std::showbase, std::showpos and std::uppercase" << std::showbase << std::showpos << std::uppercase << std::endl;
	std::cout << "std::dec : 255 is " << std::dec << num << std::endl;
	std::cout << "std::dec : 255 is " << std::dec << num1 << std::endl;
	std::cout << "std::hex : 255 is " << std::hex << num << std::endl;
	std::cout << "std::hex : 255 is " << std::hex << num1 << std::endl;
	std::cout << "std::oct : 255 is " << std::oct << num << std::endl;
	std::cout << "std::oct : 255 is " << std::oct << num1 << std::endl;

	// Set using setf
	std::cout.setf(std::ios::showbase);
	std::cout.setf(std::ios::uppercase);
	std::cout.setf(std::ios::showpos);

	// Reset to defaults
	std::cout << std::resetiosflags(std::ios::basefield);
	std::cout << std::resetiosflags(std::ios::showbase);
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::resetiosflags(std::ios::uppercase);

	system("pause");
	return 0;
}