#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "MyString.h"

int main()
{
	MyString larry{ "Larry" };
	larry.display();

	larry = -larry;

	std::cout << std::boolalpha << std::endl;
	MyString moe{ "Moe" };
	MyString stooge{ larry };

	std::cout << (larry == moe) << std::endl;
	std::cout << (larry == stooge) << std::endl;

	MyString stooges{ larry + "Moe" };
	stooges.display();

	MyString two_stooges = moe + " " + "Larry";
	two_stooges.display();
	MyString three_stooges = moe + " " + "Curly";
	three_stooges.display();

	// Test the overload the insertion and extraction
	MyString curly;

	std::cout << "Enter the third stooge's first name: ";
	std::cin >> curly;

	std::cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << std::endl;
	std::cout << std::endl << "Enter the three stooges names separated by a space: ";
	std::cin >> larry >> moe >> curly;

	std::cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << std::endl;

	std::cin.get();
	return 0;
}