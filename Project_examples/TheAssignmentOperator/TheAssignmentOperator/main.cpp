#include <iostream>
using namespace std;;

int main()
{
	// initialization
	int number1{ 10 };
	int number2{ 20 };

	// Assign 100 to number1
	number1 = 100;
	
	cout << "number1 is " << number1 << endl;
	cout << "number2 is " << number2 << endl;
	
	// assign number2 value to number1 
	number1 = number2;

	cout << "number1 is " << number1 << endl;
	cout << "number2 is " << number2 << endl;

	// Assign a 1000 to number1 and number2
	number1 = number2 = 1000;

	cout << "number1 is " << number1 << endl;
	cout << "number2 is " << number2 << endl;

	return 0;
}