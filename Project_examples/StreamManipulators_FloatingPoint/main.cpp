// Stream Manipulators - floating point
// Scientific, setprecision, fixed, showpoint, showpos, uppercase

#include <iostream>
#include <iomanip>

int main()
{
	double num1{ 123456789.987654321 };
	double num2{ 1234.5678 };
	double num3{ 1234.0 };

	// using default settings
	std::cout << "--- Defaults -----------------------------------" << std::endl;
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	std::cout << "num3: " << num3 << std::endl;

	// Display using precision 3, fixed and scientific notation -  display capital 'E' in scientific
	std::cout << std::setprecision(3) << std::scientific << std::uppercase;
	std::cout << "--- Precision 3 - scientific - uppercase --------" << std::endl;
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	std::cout << "num3: " << num3 << std::endl;

	system("pause>0");
	return 0;
}