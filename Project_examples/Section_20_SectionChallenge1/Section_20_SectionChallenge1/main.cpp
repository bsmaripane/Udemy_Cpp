// Section 20 Section Challenge 1

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

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

	std::cout.boolalpha;
	std::cout << IsPalindrome("Deque") << std::endl;
	std::cout << IsPalindrome("A Santa at NASA") << std::endl;

	system("pause");
	return 0;
}