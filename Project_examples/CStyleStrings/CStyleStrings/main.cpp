// Working with C-Style String

#include <iostream>
#include <cstring>		// for c-style string functions
#include <cctype>		// for character-based functions

using namespace std;

int main() {
	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	//cout << first_name << endl;		// display garbage

	cout << "Please enter your first name: ";
	cin >> first_name;

	cout << "Please enter your last name: ";
	cin >> last_name;

	cout << "-------------------------------" << endl;
	cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
	cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

	strcpy_s(full_name, first_name);		// copy first_name to full_name
	strcat_s(full_name, " ");				// concatenate full_name and a space
	strcat_s(full_name, last_name);		// concatenate last_name to full_name

	cout << "Full naume: " << full_name << " has " << strlen(full_name) << " characters" << endl;

	cout << "-------------------------------" << endl;
	cout << "Enter your full name: ";
	cin >> full_name;

	cout << "Your full nume is " << full_name << " has " << strlen(full_name) << " characters" << endl;


	return 0;
}