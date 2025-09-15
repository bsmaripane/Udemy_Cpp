// Section 12 Challenge

/*********************************************************************************************************************
 * A C++ function named apply_all that expects two arrays of integers and their sizes and dynamically allocates a new
 * array of integers whose size is the product of the 2 array sizes.
 * 
 * The function should loop through the second array and multiple each element across each element of array 1 and 
 * store the product in the newly created array.
 * 
 * The function should return a pointer to the newly allocated array.
 * 
 * A print function that expects a pointer to an array of integers and its size and display the elements in the array.
 * 
**********************************************************************************************************************/

#include <iostream>

using namespace std;

int* apply_all(int array1[], size_t array1_size, int array2[], size_t array2_size);
void print(int* array_ptr, size_t array_size);

int main()
{
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	cout << "Array1: ";
	print(array1, array1_size);

	cout << "Array2: ";
	print(array2, array2_size);

	int* results{ apply_all(array1, array1_size, array2, array2_size) };
	constexpr size_t results_size(array1_size * array2_size);

	cout << "Results: ";
	print(results, results_size);

	cin.get();
	return 0;
}

int* apply_all(int array1[], size_t array1_size, int array2[], size_t array2_size)
{
	size_t size{ array1_size * array2_size };
	size_t index{ 0 };
	int* new_array{ new int[size] {} };	// Declares a pointer and then allocates a dynamic array of size integers and initialised to zero
	
	for (size_t i{ 0 }; i < array2_size; ++i)		// loop over array2
		for (size_t j{ 0 }; j < array1_size; ++j)	// loop over array1
			new_array[index++] = array2[i] * array1[j];	// assign product of array2 and array 1 to new_array

	return new_array;
}

void print(int* array_ptr, size_t array_size)
{
	cout << "[";
	for (size_t i{ 0 }; i < array_size; ++i)	// loop over array
		cout << array_ptr[i] << " ";			// print array element
	cout << "]" << endl;
}