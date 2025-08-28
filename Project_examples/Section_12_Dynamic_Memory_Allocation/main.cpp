// Section 12 Dynamic Memory Allocation
// using new to allocate storage

#include <iostream>

using namespace std;

int main()
{
	int* int_ptr{ nullptr };

	int_ptr = new int;

	cout << "int_ptr is: " << int_ptr << endl;
	cout << "*int_ptr is: " << *int_ptr << endl;

	*int_ptr = 100;

	cout << "*int_ptr after assigning 100 is " << *int_ptr << endl;

	return 0;
}