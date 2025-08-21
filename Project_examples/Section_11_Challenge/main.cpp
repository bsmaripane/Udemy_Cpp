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
#include <string>

using namespace std;

// Function Prototype
void displayMenu();
char readSelection();
void printNumbers(const vector<int>& vecList);
void addNumber(vector<int>& vecList);
bool isNumberFound(const vector<int>& vecList, int num);
double calcMean(vector<int>& vecList);
int minimumNumber(const vector<int>& vecList);
int maximumNumber(const vector<int>& vecList);
string findNumber(const vector<int>& vecList);
string replaceNumber(vector<int>& vecList);
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
		<< "S - Display the smallest number" << endl
		<< "L - Display the largest number" << endl
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
		addNumber(list);
		break;
	case 'M':
		cout << (list.empty()? "Unable to calculate the mean - no data" : "The average is [ " + to_string(calcMean(list))) + " ]" << endl;
		break;
	case 'S':
		cout << (list.empty()? "Unable to determine the smallest number - list is empty" : "The smallest is [ " + to_string(minimumNumber(list))) + " ]" << endl;
		break;
	case 'L':
		cout << (list.empty()? "Unable to determine the largest number - list is empty" : "The largest is [ " + to_string(maximumNumber(list))) + " ]" << endl;
		break;
	case 'F':
		cout << (list.empty() ? "Unable to find any number - list is empty" : findNumber(list)) << endl;
		break;
	case 'C':
		list.clear();
		cout << "The list is cleared" << endl;
		break;
	case 'R':
		cout << (list.empty() ? "Unable to replace any value - list is empty" : (replaceNumber(list))) << endl;
		break;
	case 'Q':
		cout << "Goodbye" << endl;
		break;
	default:
		cout << "Unknown selection, please try again!" << endl;
		break;
	}
}

void printNumbers(const vector<int>& vecList)
{
	if (vecList.empty())
		cout << "[] - the list is empty" << endl;
	else
	{
		cout << "[";
		for (const auto& number : vecList)
			cout << number << " ";
		cout << "]" << endl;
	}
}

void addNumber(vector<int>& vecList)
{
	int number{};

	cout << "Enter integer value to add to the list: ";
	cin >> number;
	
	if (isNumberFound(vecList, number))
		cout << number << " is already in the list" << endl;
	else {
		vecList.push_back(number);
		cout << "[ " << number << " ] is added" << endl;
	}
}

bool isNumberFound(const vector<int>& vecList, int num)
{
	for (const auto& number : vecList)
		if (number == num)
			return true;
	return false;
}

double calcMean(vector<int>& vecList)
{
	int sum{};

	for (const auto& number : vecList)
		sum += number;

	return (static_cast<double>(sum) / vecList.size());
}

int minimumNumber(const vector<int>& vecList)
{
	int minNum{ vecList.at(0) };

	for (const auto& number : vecList)
		if (number < minNum)
			minNum = number;
	return minNum;
}

int maximumNumber(const vector<int>& vecList)
{
	int maxNum{ vecList.at(0) };

	for (const auto& number : vecList)
		if (number > maxNum)
			maxNum = number;

	return maxNum;
}

string findNumber(const vector<int>& vecList)
{
	int number;

	cout << "Enter number to find: ";
	cin >> number;

	for (size_t i{}; i < vecList.size(); ++i)
		if (number == vecList.at(i))
			return "[ " + to_string(number) + " ] is at position [ " + to_string(i + 1) + " ] in the list ";
	
	return "[ " + to_string(number) + " ] is not found in the list.";
}

string replaceNumber(vector<int>& vecList)
{
	int number{};
	int new_number{};

	cout << "Enter integer value to replace: ";
	cin >> number;

	for (size_t i{}; i < vecList.size(); ++i) {
		if (vecList.at(i) == number) {
			cout << "Enter a new integer value: ";
			cin >> new_number;
			vecList.at(i) = new_number;

			return "[ " + to_string(number) + " ] is replaced by [ " + to_string(new_number) + " ]";
		}
	}

	return "[ " + to_string(number) + " ] is not found";
}