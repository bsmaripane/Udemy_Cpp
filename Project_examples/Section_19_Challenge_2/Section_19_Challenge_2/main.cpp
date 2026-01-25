// Section 19 Challenge 2 Automated Grader

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

int main()
{
	std::fstream file{};
	char character{};
	std::string filename{ "../responses.txt" };

	try
	{
		file.open(filename);
		if (!file.is_open())
		{
			throw std::runtime_error("Failed to open the file: " + filename);
			system("pause>0");
			return 1;
		}

		while (file.get(character))
		{
			std::cout << character;
		}
		std::cout << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}

	system("pause>0");
	return 0;
}