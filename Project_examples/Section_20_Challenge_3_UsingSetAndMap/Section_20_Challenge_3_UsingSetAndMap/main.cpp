// Section 20
// Challenge 3 Using std::set and std::map

#include <iostream>
#include <fstream>
#include <set>
#include <map>

void display_words(std::map<std::string, std::set<int>> map)
{
	std::cout << "Display the map of <std::string, std::set<int>>" << std::endl;
}

void part1()
{
	std::cout << "\nPart One ----------------------------------------------------\n";
}

// Part2 process the file and builds a map of words and
//		 a set of line numbers in which the word appears
void part2()
{
	std::cout << "\nPart Two ----------------------------------------------------\n";

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

int main()
{
	std::cout << "Section 20 Challenge 3 Using std::set and std::map\n==================================================\n\n";

	part1();
	part2();

	system("pause");
	return 0;
}