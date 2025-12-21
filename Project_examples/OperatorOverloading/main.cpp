#include <iostream>
#include <string>
#include <cstring>
#include "MyString.h"

int main()
{
	MyString empty;
	MyString larry("Larry");
	MyString moe("Moe");
	MyString stooge{ larry };
	MyString stoogies;

	std::cout << std::boolalpha << std::endl;
	empty.display();
	larry.display();
	stooge.display();

	// Overloading the Assignment Operator (copy)
	MyString a{ "Tomorrow" };
	//MyString b;
	a.display();
	//b.display();
	//b = a;		// copy assignment: b.operator=(a)
	//a.display();
	//b.display();
	//b = "This is a test";	// b.operator=("This is a text");

	a.display();
	//b.display();

	// Overloading the Assignment Operator (move)
	MyString d{ "Today" };
	d.display();
	d = MyString{ "December" };
	d.display();
	d = "Tuesday";
	d.display();

	std::cout << (a == d ? "string a is the same as d" : "string a nd d are not the same.") << std::endl;

	// Some of the operator
	std::cout << (larry == moe) << std::endl;
	std::cout << (larry == stooge) << std::endl;

	larry.display();
	MyString larry2 = -larry;
	larry2.display();

	MyString stooges = larry + "Moe";
	MyString two_stooges = moe + " " + "Larry";
	two_stooges.display();
	MyString three_stooges = moe + " " + larry + " " + "Curly";
	three_stooges.display();

	std::cin.get();
	return 0;
}