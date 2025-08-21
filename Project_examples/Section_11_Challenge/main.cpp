// Section 11 Function Challenge

/*********************************************************************************************************************
	Challenge is to modularise solution to the Section 9 challenge by refactoring solution so that it uses functions.

	Few hints:
	- Create functions for each major function
	- Keep the functions small
	- Remember the Boss/Worker analogy
	- Keep the vector declaration in the main function and pass the vector object to any function that requires it.

	DO NOT move the vector object outside the main and make it a global variable

	- Start by defining a function that displays the menu
	- Define a function that reads the selection from the user and returns it in uppercase
	- Create function for each menu option
	- Create functions that display the list of numbers, calculates the mean and so forth

*********************************************************************************************************************/

#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

// Function Prototype
void displayMenu();
char readSelection();
void printNumbers(vector<int>& vecList);
void selected_choice(vector<int>& list, char selection);

int main() {
	vector<int> numbers{ 1, 2, 7, 5, 3, 6, 9, 8, 4 };
	char choice{};

	do {
		displayMenu();
		choice = readSelection();
		selected_choice(numbers, choice);

	} while (choice != 'Q');

	return 0;
}

// Function Definitions
void displayMenu()
{
	cout << endl << "Select an option from the below menu:" << endl
		<< "P - Print numbers" << endl
		<< "A - Add a number no duplicate" << endl
		<< "M - Display mean of the numbers" << endl
		<< "S - Display the smallest numbe" << endl
		<< "L - Display the largeest number" << endl
		<< "F - Find a number in a list" << endl
		<< "C - Clear the list" << endl
		<< "R - Replace the number" << endl
		<< "Q - Quit" << endl << endl
		<< "Enter your choice : ";
}

char readSelection()
{
	char selection{ 'Q' };
	cin >> selection;
	cout << endl;

	return toupper(selection);
}

void selected_choice(vector<int>& list, char selection) {
	switch (selection) {
	case 'P':
		printNumbers(list);
		break;
	case 'A':
	{
		int num{};
		bool isFound{ false };

		cout << "Enter integer value to add to the list: ";
		cin >> num;

		for (auto number : list)
			if (number == num)
				isFound = true;

		if (isFound)
			cout << num << " is already in the list" << endl;
		else {
			list.push_back(num);
			cout << num << " added" << endl;
		}
		break;
	}
	case 'M':
		if (list.empty())
			cout << "Unable to calculate the mean - no data" << endl;
		else {
			double average{};
			int sum{};

			for (auto number : list)
				sum += number;

			average = static_cast<double>(sum) / list.size();

			cout << "The average is " << average << endl;
		}
		break;
	case 'S':
		if (list.empty())
			cout << "Unable to determine the smallest number - list is empty" << endl;
		else {
			int smallest{ list.at(0) };

			for (auto number : list) {
				if (number < smallest)
					smallest = number;
			}

			cout << "The smallest is " << smallest << endl;
		}
		break;
	case 'L':
		if (list.empty())
			cout << "Unable to determine the largest number - list is empty" << endl;
		else {
			int largest{ list.at(0) };

			for (auto number : list) {
				if (number > largest)
					largest = number;
			}

			cout << "The largest is " << largest << endl;
		}
		break;
	case 'F':
		if (list.empty())
			cout << "Unable to find any number - list is empty" << endl;
		else {
			int number;

			cout << "Enter number to find: ";
			cin >> number;

			for (size_t i{}; i < list.size(); ++i) {
				if (number == list.at(i))
					cout << number << " is at position in the list " << i + 1 << endl;
				else
					cout << number << " is not found in the list." << endl;
			}
		}
		break;
	case 'C':
		list.clear();
		cout << "The list is cleared" << endl;
		break;
	case 'R':
	{
		if (list.empty())
			cout << "Unable to replace any value - list is empty" << endl;
		else {
			int number{};
			int new_number{};
			bool isFound{ false };

			cout << "Enter integer value to replace: ";
			cin >> number;

			for (size_t i{}; i < list.size(); ++i) {
				if (list.at(i) == number) {
					cout << "Enter a new integer value: ";
					cin >> new_number;
					isFound = true;
				}

			}

			if (isFound)
				cout << number << " is replaced by " << new_number << endl;
			else
				cout << number << " is not found" << endl;
		}
		break;
	}
	case 'Q':
		cout << "Goodbye" << endl;
		break;
	default:
		cout << "Unknown selection, please try again!" << endl;
		break;
	}
}

void printNumbers(vector<int>& vecList)
{
	if (vecList.empty())
		cout << "[] - the list is empty" << endl;
	else
	{
		cout << "[";
		for (auto number : vecList)
			cout << number << " ";
		cout << "]" << endl;
	}
}