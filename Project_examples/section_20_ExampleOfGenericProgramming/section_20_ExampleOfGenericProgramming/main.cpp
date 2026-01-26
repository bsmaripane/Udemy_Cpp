// Section 20 Example of generic programming
// Using macros

#include <iostream>

// Macros
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(a) a*a

int main()
{
	int num1{ 4 };
	int num2{ 7 };
	double numX{ 1.79 };
	double numY{ 1.89 };

	std::cout << "Maximum number between " << num1 << " and " << num2 << " is " << MAX(num1, num2) << std::endl;
	std::cout << "Maximum number between " << numX << " and " << numY << " is " << MAX(numX, numY) << std::endl;

	std::cout << "Square of " << num2 << " is " << SQUARE(num2) << std::endl;
	std::cout << "Square of " << numX << " is " << SQUARE(numX) << std::endl;
	std::cout << "Square of 5" << " is " << SQUARE(5) << std::endl;
	std::cout << "100 / Square of 5" << " is " << 100/SQUARE(5) << std::endl;
	std::cout << "100 / (Square of 5)" << " is " << 100/(SQUARE(5)) << std::endl;

	system("pause");
	return 0;
}