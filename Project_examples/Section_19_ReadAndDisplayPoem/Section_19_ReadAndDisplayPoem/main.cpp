// Section 19 Read and Display Shakespeare Sonnet 19 poem using getline

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream in_file;
	char c;

	try
	{
		in_file.open("../poem.txt");
		if (!in_file.is_open())
		{
			throw std::ios_base::failure("Failed to open the file.");
			system("pause>0");
			return 1;
		}

		while (in_file.get(c))
		{
			std::cout << c;
		}
		std::cout << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}

	if (in_file.is_open()) in_file.close();
	system("pause>0");
	return 0;
}