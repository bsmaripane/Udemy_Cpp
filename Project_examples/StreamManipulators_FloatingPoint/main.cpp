// Stream Manipulators - floating point

#include <iostream>
#include <iomanip>

int main()
{
	double num{ 12.34 };

	std::cout << "num: " << num << std::endl;

	std::cout << std::showpoint;
	std::cout << "num: " << num << std::endl;

	system("pause>0");
	return 0;
}