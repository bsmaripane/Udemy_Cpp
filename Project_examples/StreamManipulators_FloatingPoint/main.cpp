// Stream Manipulators - floating point

#include <iostream>
#include <iomanip>

int main()
{
	double num{ 123456789.987654321 };

	std::cout << "num: " << num << std::endl;

	std::cout << "num: " << std::fixed << std::setprecision(4) << std::scientific << std::uppercase << num << std::endl;

	system("pause>0");
	return 0;
}