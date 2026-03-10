// Section 20
// Challenge 3 Using std::set and std::map

#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <iomanip>

// Used for Part1: Display the word and count from the std::map<std::string, int>
void display_words(std::map<std::string, int> &map)
{
	std::cout << std::setw(12) << std::left << "\nWord" << std::setw(7) << std::right << "Count" << std::endl;
	std::cout << "================================" << std::endl;
	for (auto pair : map)
		std::cout << std::setw(12) << std::left << pair.first << std::setw(7) << std::right << pair.second << std::endl;
}

// Used for Part2: Display the word and count from the std::map<std::string, std::set<int>>
void display_words(std::map<std::string, std::set<int>> map)
{
	std::cout << "Display the map of <std::string, std::set<int>>" << std::endl;
}

// Part1 process the file and builds a map of words and
//		 the number of times they occur in the file
void part1()
{
	std::cout << "\nPart One ----------------------------------------------------\n";

	std::map<std::string, std::set<int>> words;
	std::string line;
	std::string word;
	std::ifstream in_file{ "../words.txt" };

	if (in_file)
	{
		// Implement code

		in_file.close();
		display_words(words);
	}
	else
		std::cout << "\nError opening input file!\n";
}

// Part2 process the file and builds a map of words and
//		 a set of line numbers in which the word appears
void part2()
{
	std::cout << "\nPart Two ----------------------------------------------------\n";

	std::map<std::string, int> words;
	std::string line;
	std::string word;
	std::ifstream in_file{ "../words.txt" };

	if (in_file)
	{
		// Implement code

		in_file.close();
		display_words(words);
	}
	else
		std::cout << "\nError opening input file!\n";
}

int main()
{
	std::cout << "Section 20 Challenge 3 Using std::set and std::map\n==================================================\n\n";

	part1();
	part2();

	std::cout << std::endl;
	system("pause");
	return 0;
}