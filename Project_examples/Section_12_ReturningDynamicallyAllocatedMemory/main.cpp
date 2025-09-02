// Returing dynamically allocated memory

#include <iostream>

using namespace std;

int* create_array(size_t size, int init_value = 0)
{
	int* new_storage{ nullptr };

	new_storage = new int[size];

	for (rsize_t i{ 0 }; i < size; ++i)
		*(new_storage + i) = init_value;

	return new_storage;
}


int main()
{
	int* my_array;		// will be allocated by the function

	my_array = create_array(10, 7);	// create the array

	for (size_t i{}; i < 10; ++i)
		cout << *(my_array + i) << " ";
	cout << endl;

	delete[] my_array;	// free the storage

	cin.get();
	//return 0;
}