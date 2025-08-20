// Recursive function of the factorial

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long number)
{
	if (number == 0)
		return 1;
	return number * factorial(number - 1);
}

int main()
{
	cout << factorial(8) << endl;

	return 0;
}