// Do while loop

#include <iostream>

using namespace std;

int main() {
	int number{};

	do {
		cout << "Enter an integer value between 1 and 5: ";
		cin >> number;
	} while (number <= 1 || number >= 5);
	cout << "Thank you!" << endl;

	/******************************************************************************/

	char selection{};

	do {
		double width{};
		double height{};

		cout << "Enter width and height seperated by a space: ";
		cin >> width >> height;

		double area{ width * height };

		cout << "The area is " << area << endl;

		cout << "Calculate anothor? (Y/N): ";
		cin >> selection;

	} while (selection == 'Y' || selection == 'y');

	/******************************************************************************/

	char answer{};

	do {
		cout << endl << "====================================================" << endl
			<< "1. Do this" << endl
			<< "2. Do that" << endl
			<< "3. Do something else" << endl
			<< "Q. Quite" << endl << endl
			<< "Enter your selection: ";
		cin >> answer;

		cout << endl;

		if (answer == '1') cout << "You chose 1 - do this" << endl;
		else if (answer == '2') cout << "You chose 2 - do that" << endl;
		else if (answer == '3') cout << "You chose 3 - do something else" << endl;
		else if (answer == 'Q' || answer == 'q') cout << "Quite... Goodbye" << endl;
		else cout << "Unknow option... try again!" << endl;
	} while (answer != 'q' && answer != 'Q');

	return 0;
}