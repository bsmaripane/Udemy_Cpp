// Formal vs Actual parameters
#include <iostream>

void param_test(int formal)		// formal is a copy of actual
{
	std::cout << "Memory address: " << & formal << std::endl;
	std::cout << "Formal as copy of actuial: " << formal << std::endl;
	std::cout << "Memory address: " << &formal << std::endl;
	formal = 100;
	std::cout << "Formal changed local copy: " << formal << std::endl;
	std::cout << "Memory address: " << & formal << std::endl;
}

int main()
{
	int actual{ 50 };

	std::cout << "Actual value: " << actual << std::endl;
	std::cout << "Memory address: " << & actual << std::endl;

	param_test(actual);		// pass in the actual value to param_test
	std::cout << "Actual value: " << actual << std::endl;
	std::cout << "Memory address: " << & actual << std::endl;

	return 0;
}