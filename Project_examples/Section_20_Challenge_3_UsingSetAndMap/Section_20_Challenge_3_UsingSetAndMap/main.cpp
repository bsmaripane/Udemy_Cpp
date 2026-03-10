// Section 20
// Challenge 3 Using std::set and std::map

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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
void display_words(std::map<std::string, std::set<int>> &map)
{
	std::cout << std::setw(12) << std::left << "\nWord" << "Occurrences" << std::endl;
	std::cout << "==========================================" << std::endl;
	
	for (auto pair : map)
	{
		std::cout << std::setw(12) << std::left << pair.first << std::left << "[ ";

		for (auto num : pair.second)
			std::cout << num << " ";

		std::cout << "]" << std::endl;
	}
}

// Method to removes periods, commas, semicolons and colons in a string and returns the clean version
std::string clean_string(const std::string& string)
{
	std::string result;

	for (char character : string)
	{
		if (character == '.' || character == ',' || character == ':' || character == ';')
			continue;
		else
			result += character;
	}

	return result;
}

// Part1 process the file and builds a map of words and
//		 the number of times they occur in the file
void part1()
{
	std::cout << "\nPart One ----------------------------------------------------\n";

	std::map<std::string, int> words;
	std::string line;
	std::string word;
	std::ifstream in_file{ "../words.txt" };

	if (in_file)
	{
		while (std::getline(in_file, line))
		{
			std::stringstream ss(line);

			while (ss >> word)
			{
				word = clean_string(word);
				words[word]++;	// increment the count for the word in the map
			}
		}

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