// While loop

#include <iostream>

using namespace std;

int main() {

	int i{ 1 };

	while (i <= 5) {
		cout << i << endl;
		++i;
	}

	/**********************************************************************************/

	int j{ 1 };

	while (j <= 10) {
		if (j % 2 == 0)
			cout << j << endl;
		++j;
	}

	/*********************************************************************************/

	int scores[]{ 69, 85, 65, 68, 92, 50 };
	int index{};

	while (index < 6) {
		cout << scores[index] << " ";
		++index;
	}

	/*********************************************************************************/

	int number{};

	cout << "Enter an integer value less than 100: ";
	cin >> number;

	while (number >= 100) {
		cout << "Enter an integer value less than 100: ";
		cin >> number;
	}
	cout << "Thank you!" << endl;

	/********************************************************************************/

	int num{};

	cout << "Enter an integer value between 1 and 5: ";
	cin >> num;

	while (num <= 1 || num >= 5) {
		cout << "Enter an integer value between 1 and 5: ";
		cin >> num;
	}
	cout << "Thank you!" << endl;

	/*********************************************************************************/

	bool done{ false };
	int value{};

	while (!done) {
		cout << "Enter an integer between 1 and 10: ";
		cin >> value;

		if (value <= 1 || value >= 10)
			cout << "Out of range, try again" << endl;
		else {
			cout << "Thank you!" << endl;
			done = true;
		}
	}

	/************************************************************************************/

	int positiveNum{};

	cout << "Enter a positive integer value: ";
	cin >> positiveNum;

	if (positiveNum < 0) cout << "Error: Invalid entry!" << endl;
	else {
		cout << "Start the countdown!" << endl;

		while (positiveNum > 0) {
			cout << positiveNum << endl;
			--positiveNum;
		}
		cout << "Blastoff" << endl;
	}

	/************************************************************************************/

	int countup{};

	cout << "Enter a positive integer to count up to: ";
	cin >> countup;

	int ref{};

	while (countup >= ref) {
		cout << ref << " ";
		++ref;
	}

	/*************************************************************************************/



	return 0;
}