// Section 19 Read and Display Shakespeare Sonnet 19 poem using getline

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream in_file;

	try
	{
		in_file.open("../poem.txt");
	}
	catch (const std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
		if (!in_file.is_open())
		{
			throw std::ios_base::failure("Failed to open the file.");
			system("pause>0");
			return 1;
		}
	}

	if (in_file.is_open()) in_file.close();
	system("pause>0");
	return 0;
}