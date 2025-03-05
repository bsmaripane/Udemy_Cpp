// Conditional Operator

#include <iostream>

using namespace std;

int main() {
	int num{};

	cout << "Enter an integer value: ";
	cin >> num;

	// regular if else statement
	if (num % 2 == 0)
		cout << num << " is even number" << endl;
	else
		cout << num << " is old number" << endl;

	// Conditional Operator
	//(num % 2 == 2) ? cout << num << " is even" << endl : cout << num << " is old" << endl;

	cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

	/******************************************************************************************/

	int num1{}, num2{};

	cout << "Enter two integer values separated by space: ";
	cin >> num1>> num2;

	if (num1 != num2) {
		cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
		cout << endl << num1 << " is " << ((num1 > num2) ? "greater than " : "less then ") << num2 << endl;
	}
	else {
		cout << "The numbers are the same" << endl;
	}

	return 0;
}