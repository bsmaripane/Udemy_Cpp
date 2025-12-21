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

	std::cin.get();
	return 0;
}