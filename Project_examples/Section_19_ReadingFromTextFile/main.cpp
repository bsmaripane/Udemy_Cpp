// Section 19 Reading from a Text File

#include <iostream>
#include <fstream>
#include <string> // Add this include for std::getline and std::string

int main()
{
	std::ifstream in_file{ "../myfile.txt" };		// open file
	std::string line{};

	if (!in_file)	// check if a file is open
	{
		std::cerr << "File open error" << std::endl;
		system("pause>0");
		return 1;	// exit the program (main)
	}

	while (!in_file.eof())	// while not at the end
	{
		std::getline(in_file, line);	// read a line
		std::cout << line << std::endl;	// display the line
	}
	in_file.close();	// close the file

	system("pause>0");
	return 0;
}