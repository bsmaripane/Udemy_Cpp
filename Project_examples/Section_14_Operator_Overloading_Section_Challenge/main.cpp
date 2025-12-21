#include <iostream>
#include "Mystring.h"

int main()
{
	std::cout << std::boolalpha << std::endl;
	Mystring fname{ "Belmy" };
	Mystring lname{ "Maswi" };

	std::cout << (fname == lname) << std::endl;
	std::cout << (fname != lname) << std::endl;

	lname = "Maripane";
	std::cout << (fname == lname) << std::endl;
	std::cout << (fname != lname) << std::endl;
	std::cout << (fname < lname) << std::endl;
	std::cout << (fname > lname) << std::endl;

	Mystring name{ "Lesego" };
	name = -name;
	std::cout << name << std::endl;

	name = name + " Thato";
	std::cout << name << std::endl;

	name += " Maripane";
	std::cout << name << std::endl;

	Mystring name2{ "Felicia" };
	name2 = (name2 + " ") * 3;
	std::cout << name2 << std::endl;

	Mystring name3{ "Maxine" };
	name2 *= 5;
	std::cout << name3 << std::endl;

	++fname;
	std::cout << fname << std::endl;

	fname = -fname;
	std::cout << fname << std::endl;

	Mystring result;
	result = ++fname;
	std::cout << fname << std::endl << result << std::endl;

	fname = "Semape";
	fname++;
	std::cout << fname << std::endl;

	fname = -fname;
	std::cout << fname << std::endl;
	result = fname++;
	std::cout << fname << std::endl << result << std::endl;

	std::cin.get();
	return 0;
}