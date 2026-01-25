// Section 19 Challenge 2 Automated Grader

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdexcept>

void print_header()
{
	std::cout << std::setw(20) << std::left << "Student" << "Score" << std::endl;
	std::cout << "---------------------------\n";
}

int main()
{
	std::fstream file{};
	char character{};
	std::string filename{ "../responses.txt" };
	std::string answer_key{};
	std::string name{};
	std::string response{};
	int running_sum{ 0 };
	int total_students{ 0 };
	double average_score{ 0.0 };

	try
	{
		file.open(filename);
		if (!file.is_open())
		{
			throw std::runtime_error("Failed to open the file: " + filename);
			system("pause>0");
			return 1;
		}

		file >> answer_key;
		print_header();

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

	if (file.is_open()) file.close();
	system("pause>0");
	return 0;
}