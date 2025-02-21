// If Statement
#include <iostream>

using namespace std;

int main() {
	int num{};
	const int MIN{ 10 };
	const int MAX{ 100 };

	cout << "Enter a number between " << MIN << " and " << MAX << " : ";
	cin >> num;

	if (num >= MIN) {
		cout << endl << "================If statement 1==================" << endl;
		cout << num << " is greater than or equal to " << MIN << endl;

		int diff(num - MIN);

		cout << num << " is " << diff << " greater than " << MIN << endl;
	}

	if (num <= MAX) {
		cout << endl << "================If statement 2==================" << endl;
		cout << num << " is less than or equal to " << MAX << endl;

		int diff(MAX - num);

		cout << num << " is " << diff << " less than or equal to " << MAX << endl;
	}

	/****************************************************************************
	* If statement of two expressions with logic operators
	*****************************************************************************/

	if (num >= MIN && num <= MAX) {
		cout << endl << "================If statement 3==================" << endl;
		cout << num << " is in range " << MIN << " and " << MAX << endl;
		cout << "This means statement 1 and 2 must also be displayed." << endl;
	}

	if (num == MIN || num == MAX) {
		cout << endl << "================If statement 4==================" << endl;
		cout << num << " is right on a boundary" << endl;
		cout << "This means all 4 statements display" << endl;
	}

	if (num < MIN || num > MAX) {
		cout << endl << "================If statement 5==================" << endl;
		cout << num << " is out of range " << MIN << " and " << MAX << endl;
		cout << "This means non of the 4 statement will display!" << endl;
	}

	return 0;
}