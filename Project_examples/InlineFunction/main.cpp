// Inline function

#include <iostream>

using namespace std;

inline int add_numbers(int a, int b)	// definition
{
	return a + b;
}

int main()
{
	int result{ 0 };

	cout << "Result: " << result << endl;

	result = add_numbers(100, 200);		// call

	cout << "Result: " << result << endl;

	return 0;
}