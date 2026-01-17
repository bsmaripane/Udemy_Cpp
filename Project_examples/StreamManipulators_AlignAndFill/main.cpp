// Stream Manipulator

#include <iostream>
#include <iomanip>

int main()
{
	double num1{ 1234.5678 };
	std::string name{ "Belicia" };

	// Default
	std::cout << "-- Defaults ----------------------------------" << std::endl;
	std::cout << "Default: " << num1 << name << std::endl;

	// Using setw(10)
	std::cout << "-- Setw(10) ----------------------------------" << std::endl;
	std::cout << "Setw(10): " << std::setw(10) << num1 << name << std::endl;

	system("pause>0");
	return 0;
}