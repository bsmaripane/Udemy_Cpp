// Section 17: Smart pointers

#include <iostream>
#include <memory>
#include "../Inheritance_DerivingClass/Account.h"
#include "../Inheritance_DerivingClass/Account.cpp"

int main()
{
	// unique_ptr - creating, initialising and using
	std::unique_ptr<int> ptr1{ new int{100} };
	std::cout << *ptr1 << std::endl;

	*ptr1 = 200;

	std::cout << *ptr1 << std::endl;

	// Some other useful methods
	std::cout << ptr1.get() << std::endl;

	ptr1.reset();	// ptr1 is now nullptr

	if (ptr1)
		std::cout << *ptr1 << std::endl;
	else
		std::cout << "ptr1 is nullptr" << std::endl;

	// user defined classes
	std::unique_ptr<Account> p1{ new Account{"Belicia"} };
	std::cout << *p1 << std::endl;

	p1->deposit(1000);
	std::cout << *p1 << std::endl;

	p1->withdraw(500);
	std::cout << *p1 << std::endl;

	std::cin.get();
	return 0;
}