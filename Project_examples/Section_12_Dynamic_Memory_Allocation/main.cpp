// Section 12 Dynamic Memory Allocation
// using new to allocate storage

#include <iostream>

using namespace std;

int main()
{
	int* int_ptr{ nullptr };

	int_ptr = new int;	// allocate an integer on the heap

	cout << "int_ptr is: " << int_ptr << endl;
	cout << "*int_ptr is: " << *int_ptr << endl;

	*int_ptr = 100;

	cout << "*int_ptr after assigning 100 is " << *int_ptr << endl;

	// using delete to deallocate storage

	delete int_ptr;		// frees the allocated storage

	return 0;
}