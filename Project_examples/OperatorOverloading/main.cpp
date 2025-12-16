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
	a.display();
	b.display();
	b = a;		// copy assignment: b.operator=(a)
	a.display();
	b.display();
	b = "This is a test";	// b.operator=("This is a text");

	a.display();
	b.display();

	std::cin.get();
	return 0;
}