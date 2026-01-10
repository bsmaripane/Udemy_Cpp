// Section 17: Smart pointers

#include <iostream>
#include <memory>

int main()
{
	// unique_ptr - creating, initialising and using
	std::unique_ptr<int> ptr1{ new int{100} };
	std::cout << *ptr1 << std::endl;

	*ptr1 = 200;

	std::cout << *ptr1 << std::endl;

	std::cin.get();
	return 0;
}