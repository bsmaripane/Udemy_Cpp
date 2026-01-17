// Stream Manipulators - floating point

#include <iostream>
#include <iomanip>

int main()
{
	double num{ 1234.5678 };

	std::cout << "num: " << num << std::endl;

	std::cout << "num: " << std::fixed << std::setprecision(4) << num << std::endl;

	system("pause>0");
	return 0;
}