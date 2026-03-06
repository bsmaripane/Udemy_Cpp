// Section 20 Section Challenge 1

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iomanip>

bool IsPalindrome(const std::string& str)
{
	std::deque<char> charDeque;

	// Add characters to the deque
	for (char ch : str)
		if (std::isalpha(ch)) // Consider only alphabetic characters
			charDeque.push_back(std::tolower(ch)); // Convert to lowercase
	
	// Check for palindrome
	while (charDeque.size() > 1)
	{
		if (charDeque.front() != charDeque.back())
			return false; // Not a palindrome
		
		charDeque.pop_front();
		charDeque.pop_back();
	}

	return true; // It's a palindrome
}

int main()
{
	std::cout << "Section 20 Section Challenge 1 Deque\n\n";

	std::vector<std::string> test_strings{ "a", "aa", "Aa", "aba", "aBBa", "abbcbba", "ab", "abc", "radar", "bob", "ana", "avid diva", "Amore, Roma", "A Toyata's a toyota", "A Santa at NASA",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a panlindromw", "palindrome"};

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String\n====================================\n";
	std::cout << std::setw(8) << std::left << IsPalindrome("Deque") << "Deque" << std::endl;

	for (size_t i{0}; i < test_strings.size(); i++)
		std::cout << std::setw(8) << std::left << IsPalindrome(test_strings.at(i)) << test_strings.at(i) << std::endl;

	system("pause");
	return 0;
}