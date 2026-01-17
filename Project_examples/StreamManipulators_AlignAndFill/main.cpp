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

	// Filling Fixed width - setw(10) and right 
	std::cout << "-- Filling fixed width - setfill -------------" << std::endl;
	std::cout << std::setfill('*');
	std::cout << "Setw(10): " << std::setw(10) << num1 
							  << std::setfill('-' ) << std::setw(10) << std::right << name
							  << std::setw(15) << std::right << name << std::endl;

	system("pause>0");
	return 0;
}