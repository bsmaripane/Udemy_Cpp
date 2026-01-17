// Stream Manipulators - floating point

#include <iostream>
#include <iomanip>

int main()
{
	double num{ 123456789.987654321 };

	std::cout << "num: " << num << std::endl;

	std::cout << std::setprecision(4) << std::fixed << std::showpos;
	std::cout << "num: " << num << std::endl;

	system("pause>0");
	return 0;
}