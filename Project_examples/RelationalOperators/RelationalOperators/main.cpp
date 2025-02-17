// Relational Operator
#include <iostream>

using namespace std;

int main() {
	int num1{}, num2{};

	cout << boolalpha;

	cout << "Enter 2 integer values separated by a space : ";
	cin >> num1 >> num2;

	cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
	cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
	cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
	cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

	const int LOWER{ 10 };
	const int UPPER{ 20 };

	cout << endl << "Enter an integer value that is greater than " << LOWER << " : ";
	cin >> num1;

	cout << endl << num1 << " > " << LOWER << " is " << (num1 > LOWER) << endl;
	
	cout << endl << "Enter an integer value that is less than or equal to " << UPPER << " : ";
	cin >> num1;

	cout << endl << num1 << " <= " << UPPER << " is " << (num1 <= UPPER) << endl;

	return 0;
}