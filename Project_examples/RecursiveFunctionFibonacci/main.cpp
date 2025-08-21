// Recursive function for Fibonacci

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long number)
{				    
	if (number <= 1)
		return number;   
	return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
	cout << fibonacci(8) << endl;
	cout << fibonacci(20) << endl;
	cout << fibonacci(35) << endl;
	cout << fibonacci(45) << endl;
	cout << fibonacci(85) << endl;

	return 0;
}