// Section 19 Writing to a Text File

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string fileName{}; 
	std::ofstream outFile{};
	std::ifstream inFile{};

	try
	{
		if (!outFile)
		{
			std::cerr << "Failed to open/create: " << fileName << std::endl;
			system("pause>0");
			return 1;
		}

		if (!outFile)
		{
			std::cerr << "Failed to open: " << fileName << std::endl;
			system("pause>0");
			return 1;
		}
	}
	catch (std::exception& ex)
	{
		std::cerr << "Exception error: " << ex.what() << std::endl;
	}

	if (outFile.is_open()) outFile.close();
	if (inFile.is_open()) inFile.close();
	system("pause>0");
	return 0;
}