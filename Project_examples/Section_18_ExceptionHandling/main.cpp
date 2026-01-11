#include <iostream>


int main()
{
	int numerator{}, denominator{};
	double result{};

	std::cout << "Enter a numerator: ";
	std::cin >> numerator;

	std::cout << "Enter a denominator: ";
	std::cin >> denominator;

	// Exception handling for divide by zero
	try
	{
		if (denominator == 0)
			throw 0;
		else
		{
			result = static_cast<double>(numerator) / denominator;
			std::cout << "Result: " << result << std::endl;
		}
	}
	catch (int& ex)
	{
		std::cerr << "Error - you can't divide by zero" << std::endl;
	}

	

	std::cout << "\n\t= = = = = = End of Program = = = = = =";
	//std::cin.get();
	system("pause");
	return 0;
}