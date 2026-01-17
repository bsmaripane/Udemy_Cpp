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

	// Show '+' symbol for positive numbers
	std::cout << std::setprecision(3) << std::fixed << std::showpoint;
	std::cout << "--- Precision 3 - fixed - showpos -------------" << std::endl;
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	std::cout << "num3: " << num3 << std::endl;

	// Back to defaults
	std::cout.unsetf(std::ios::scientific | std::ios::fixed);
	std::cout << std::resetiosflags(std::ios::showpos);

	// Show trailing zeros up to precision 10
	std::cout << std::setprecision(3) << std::fixed << std::showpoint;
	std::cout << "--- Precision 10 - showpoint ---------------" << std::endl;
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	std::cout << "num3: " << num3 << std::endl;

	system("pause>0");
	return 0;
}