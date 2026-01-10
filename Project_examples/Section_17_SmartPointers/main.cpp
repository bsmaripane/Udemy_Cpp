// Section 17: Smart pointers

#include <iostream>
#include <memory>
#include <vector>
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

	// unique pointers - vectors and move
	std::vector<std::unique_ptr<int>> vec;
	std::unique_ptr<int> ptr2{ new int{30} };

	//vec.push_back(ptr2);	// Error - copy not allowed

	vec.push_back(std::move(ptr2));

	//std::cout << *ptr2 << std::endl;

	for (const auto& p : vec)
		std::cout << *p << " ";

	// unique_ptr - make_unique (from C++14)
	std::unique_ptr<int> ptr3 = std::make_unique<int>(100);
	std::unique_ptr<Account> ptr4 = std::make_unique<Account>("Maxine", 5000);

	auto ptr5 = std::make_unique<Account>("Felicia", 3600);

	std::cout << *ptr3 << std::endl;
	std::cout << *ptr4 << std::endl;
	std::cout << *ptr5 << std::endl;

	// shared_ptr - creating, initialising and using
	std::shared_ptr<int> ptr6{ new int {29} };
	std::cout << "\nShared Pointer\n" << *ptr6 << std::endl;

	*ptr6 = 30;

	std::cout << *ptr6 << std::endl;

	//  some other useful methods
	std::cout << ptr6.use_count() << std::endl;

	std::shared_ptr<int> ptr7{ ptr6 };
	std::cout << ptr6.use_count() << std::endl;
	std::cout << ptr6 << std::endl;
	std::cout << ptr7 << std::endl;

	ptr6.reset();
	std::cout << ptr6.use_count() << std::endl;
	std::cout << ptr7.use_count() << std::endl;

	// shared-ptr - user defined classes
	std::shared_ptr<Account> acc{ new Account{"Lesego", 257.78} };
	std::cout << *acc << std::endl;

	acc->deposit(273);
	std::cout << *acc << std::endl;

	acc->withdraw(375);
	std::cout << *acc << std::endl;

	// shared_ptr - vectors and move
	std::vector<std::shared_ptr<int>> vec2;
	std::shared_ptr<int> ptr{ new int{100} };
	// Ok - copy IS allowed
	vec2.push_back(ptr);
	vec2.push_back(ptr);
	vec2.push_back(ptr);

	std::cout << ptr.use_count() << std::endl;
	for (const auto& p : vec2)
		std::cout << *p << " ";

	std::cin.get();
	return 0;
}