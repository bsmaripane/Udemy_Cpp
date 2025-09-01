// Section 12 Passing a Pointers to functions

#include <iostream>

using namespace std;

void double_data(int* int_ptr)
{
	*int_ptr *= 2;
}

int main()
{
	int value{ 30 };
	int* int_ptr{ nullptr };

	cout << "Value: " << value << endl;
	cout << "\n________________________________\n";

	int_ptr = &value;
	double_data(int_ptr);

	cout << "Value: " << value << endl;

	return 0;
}