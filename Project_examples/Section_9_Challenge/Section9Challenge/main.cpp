// Section 9 Challenge

/*********************************************************************************************************************
	This challenge is about using a collection (list) of integers and allowing the user to select options from a 
	menu perform operations on the list
	
	Program should display a menu options to the user as follows:
		P - Print numbers
		A - Add a number
		M - Display mean of the numbers
		S - Display the smallest numbe
		L - Display the largeest number
		Q - Quit

		Enter your choice: 

	The program should only accept valid choices from the user, both upper and lower cases selections should be allowed.
	If an illegal choice is made, program should display; 'Unknown selection, please try again' and the menu options should
	be displayed again.

	if the user enters 'P' or 'p', program should display all of the elements (int) in the list
	if the list is empty program should display '[] - the list is empty'
	if the list is not empty then all the list element should be displayed inside the square brackets separated by a space

	if the user enters 'A' or 'a' then program should prompt the user for an integer to add to the list
	which will add to the list and then display it was added.
	Duplicate list entries are OK

	If the user enters 'M' or 'm' program should calculate the mean or average of the elements in the list and display it
	If the list empty program should display; 'Unable to calculate the mean - no data'

	if the user enters 'S' or 's' program should display the smallest element in the list, 'The smallest number is 1'
	If the list is empty program should display; 'Unable to determine the smallest number - list is empty'

	if the user enters 'L' or 'l' program should display the largest number in the list; 'The largest number is 5'
	If the lst is empty program should display; Unable to determine the largest number - list is empty'

	If user enters 'Q' ot 'q' program should display; ' Goodby' and terminate the program



*********************************************************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void selected_choice(vector<int> &list, char selection);

int main() {
	vector<int> numbers {1, 2, 7, 5, 3, 6, 9, 8, 4};
	char choice{};

	do {
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
		cin >> choice;
		cout << endl;

		selected_choice(numbers, choice);
		
	} while (choice != 'Q' && choice != 'q');

	return 0;
}

void selected_choice(vector<int>& list, char selection) {
	switch (selection) {
	case 'P':
	case 'p':
		if (list.empty())
			cout << "[] - the list is empty" << endl;
		else {
			cout << "[";
			for (auto number : list)
				cout << number << " ";
			cout << "]" << endl;
		}
		break;
	case 'A':
	case 'a': {
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
	case 'm':
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
	case 's':
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
	case 'l':
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
	case 'f':
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
	case 'c':
		list.clear();
		cout << "The list is cleared" << endl;
		break;
	case 'R':
	case 'r': {
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
	case 'q':
		cout << "Goodbye" << endl;
		break;
	default:
		cout << "Unknown selection, please try again!" << endl;
		break;
	}
}