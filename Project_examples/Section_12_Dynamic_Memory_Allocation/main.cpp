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

	/*******************************************************************/

	size_t size{};
	double* temp_ptr{ nullptr };

	cout << "How many temps: ";
	cin >> size;

	temp_ptr = new double[size];	// allocate double on the heap

	cout << "Allocated memory of temp_ptr: " << temp_ptr << endl;

	/******************************************************************/
	// using new[] to allocate storage for an array

	int* array_ptr{ nullptr };
	int arr_size{};

	cout << "How big do you want the array? ";
	cin >> arr_size;

	array_ptr = new int[arr_size];	// allocate array on the heap

	cout << "Allocated memory od the array_ptr: " << array_ptr << endl;

	delete[] array_ptr;			// frees allocated array storage

	return 0;
}