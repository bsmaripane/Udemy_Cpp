#include <iostream>


double calculate_avg(int sum, int total)
{
	if (total == 0)
		throw 0;
	return static_cast<double>(sum) / total;
}

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

	// Catching an exception thrown from a function
	double average{};

	try
	{
		average = calculate_avg((67+79+91+59+54), 500);
		std::cout << "Average: " << average << std::endl;
	}
	catch (int& ex)
	{
		std::cerr << "Division by zero is not allowed" << std::endl;
	}

	std::cout << "\n\t= = = = = = End of Program = = = = = =";
	//std::cin.get();
	system("pause");
	return 0;
}