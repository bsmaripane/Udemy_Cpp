// Section 20 Section Challenge
// Stack and Queue challenge

#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <cctype>
#include <iomanip>

bool is_palindrome(const std::string& string)
{
	// Implement - use a stack and a queue to solve the problem
	return false;
}

int main()
{
	std::cout << "Section 20: Stack and Queue challenge\n\n";

	std::vector<std::string> test_strings{ "a", "aa", "Aa", "aba", "aBBa", "abbcbba", "ab", "abc", "radar", "bob",
		"ana", "avid diva", "Amore, Roma", "A Toyata's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a panlindromw", "palindrome" };

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String\n====================================\n";
	for (size_t i{ 0 }; i < test_strings.size(); i++)
		std::cout << std::setw(8) << std::left << is_palindrome(test_strings.at(i)) << test_strings.at(i) << std::endl;

	std::cout << std::endl;
	system("pause");
	return 0;
}