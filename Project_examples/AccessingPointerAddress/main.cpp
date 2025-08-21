// Section 12 Accessing Pointer Address

#include <iostream>

using namespace std;

int main()
{
	int num{ 10 };

	cout << "Value of num is: " << num << endl;
	cout << "sizeof of num is: " << sizeof(num) << " bytes" << endl;
	cout << "Address of num is: " << &num << endl;

	int* p{-0};

	cout << "Value of p is: " << p << endl;	// garbage
	cout << "Address p is: " << &p << endl;
	cout << "sizeof of p is: " << sizeof(p) << " bytes" << endl;
	p = nullptr;	// set p to point nowhere
	cout << "Value of p is: " << p << endl;

	return 0;
}