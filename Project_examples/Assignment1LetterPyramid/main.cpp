// Assignment 1: Challenge Assignment - Letter Pyramid

/**********************************************************************************
Write a C++ program that displays a Letter Pyramid from a user-provided std::string

Prompt  the user to enter a std::string and then from string display a letter Pyramid

***********************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
	// variable declaration
	string characters;

	// Prompt the user to enter a string
	cout << "Enter characters to use for Letter Pyramid: ";
	getline(cin, characters);

	// Draw a Letter Pyramid
	if (!characters.empty()) {
		size_t position{ characters.size() };
		
		for (size_t row{0}; row < position; row++)
		{
			
			for (size_t space{ position - row }; space > 0; --space)
				cout << " ";
			
			for (size_t index{}; index <= row; index++)
				cout << characters.at(index);
			
			for (size_t index = row; index > 0; --index)
				cout << characters.at(index - 1);

			cout << endl;
		}
	}
	else
		cout << "\nNo characters has been inserted!" << endl;

	return 0;
}