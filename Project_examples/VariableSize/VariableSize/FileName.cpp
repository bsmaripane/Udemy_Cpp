/*
* ## Using the sizeof operator
* The sizeof operator:
*	> determines the size in bytes of a type or variabl
* 
* 
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of double: " << sizeof(float) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of nsigned" < , sizeof(unsigned) << endl;
	cout << "Size of long int:" << sizeof(long) << endl;
	cout << "Size of long long int: " << sizeof(long long) << endl;
	cout << "Size of long double: " << sizeof(long double) << endl;

	return 0;
}