// Stream Manipulators - floating point

#include <iostream>
#include <iomanip>

int main()
{
	double num{ 12.34 };

	std::cout << "num: " << num << std::endl;

	// returning to general settings
	std::cout.setf(std::ios::scientific | std::ios::fixed);
	std::cout << "num: " << num << std::endl;
	std::cout.unsetf(std::ios::scientific | std::ios::fixed);
	std::cout << "num: " << num << std::endl;

	system("pause>0");
	return 0;
}