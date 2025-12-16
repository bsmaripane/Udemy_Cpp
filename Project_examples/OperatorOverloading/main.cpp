#include <iostream>
#include <string>
#include "MyString.h"

int main()
{
	MyString empty;
	MyString larry("Larry");
	MyString stooge{ larry };
	MyString stoogies;

	empty.display();
	larry.display();
	stooge.display();

	// Overloading the Assignment Operator (copy)
	MyString a{ "Tomorrow" };
	MyString b;
	b = a;		// copy assignment: b.operator=(a)
	b = "This is a test";	// b.operator=("This is a text");



	std::cin.get();
	return 0;
}