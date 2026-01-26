// Section 19 Writing to a Text File

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string inFileName{};
	std::string outFileName{};
	std::ofstream outFile{outFileName};
	std::ifstream inFile{inFileName};

	try
	{
		if (!outFile)
		{
			std::cerr << "Failed to open/create: " << outFileName << std::endl;
			system("pause>0");
			return 1;
		}

		if (!outFile)
		{
			std::cerr << "Failed to open: " << inFileName << std::endl;
			system("pause>0");
			return 1;
		}

		std::string line{};
		while (std::getline(inFile, line))
			outFile << line << std::endl;
		
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