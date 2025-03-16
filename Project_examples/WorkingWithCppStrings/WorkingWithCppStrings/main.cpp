// Working with C++ Strings

#include <iostream>
#include <string>

using namespace std;

int main() {
	string name0;
	string name1{ "Apple" };
	string name2{ "Banana" };
	string name3{ "Kiwi" };
	string name4{ "apple" };
	string name5{ name1 };
	string name6{ name1, 3, 5 };
	string name7( 15,'X' );

	cout << name0 << endl;		// No garbage
	cout << name0.length() << endl;		// empty string

	/************************************************************************************************************************/
	// initialization
	cout << endl << "Initialization" << endl << "-----------------------------------------------------------------" << endl;
	cout << "Nmae0 is initialised to: " << name0 << endl;
	cout << "Nmae1 is initialised to: " << name1 << endl;
	cout << "Nmae2 is initialised to: " << name2 << endl;
	cout << "Nmae3 is initialised to: " << name3 << endl;
	cout << "Nmae4 is initialised to: " << name4 << endl;
	cout << "Nmae5 is initialised to: " << name5 << endl;
	cout << "Nmae6 is initialised to: " << name6 << endl;
	cout << "Nmae7 is initialised to: " << name7 << endl;

	/************************************************************************************************************************/
	// Comparison
	cout << endl << "Comparison" << endl << "-----------------------------------------------------------------" << endl;
	cout << boolalpha;
	cout << name1 << " == " << name5 << ": " << (name1 == name5) << endl;
	cout << name1 << " == " << name2 << ": " << (name1 == name2) << endl;
	cout << name1 << " != " << name2 << ": " << (name1 != name2) << endl;
	cout << name1 << " < " << name2 << ": " << (name1 < name2) << endl;
	cout << name2 << " > " << name1 << ": " << (name2 > name1) << endl;
	cout << name4 << " < " << name5 << ": " << (name4 < name5) << endl;
	cout << name1 << " == " << "Apple" << ": " << (name1 == "Apple") << endl;
	
	/***********************************************************************************************************************/
	// Assignment
	cout << endl << "Assignment" << endl << "-----------------------------------------------------------------" << endl;
	name1 = "Watermelon";
	cout << "name1 is now: " << name1 << endl;

	name2 = name1;

	cout << "name2 is now: " << name2 << endl;

	name3 = "Maswi";
	cout << "name3 is now: " << name3 << endl;

	name3[2] = 'S';
	cout << "name3 third letter changed to '" << name3[2] << "': " << name3 << endl;

	name3.at(0) = 'B';
	cout << "name3 first letter changed to '" << name3.at(0) << "': " << name3 << endl;

	/***********************************************************************************************************************/
	// Concatenation
	cout << endl << "Concatenation" << endl << "-----------------------------------------------------------------" << endl;
	cout << name1 + " and " + name4 + " are fruits that are nice" << endl;

	name3 = name5 + " and " + name2 + " juice";
	
	cout << "name3 is now: " << name3 << endl;
	
	name3 = "nice " + name0 + " cold " + name5 + " juice";
	cout << "name3 is now: " << name3 << endl;

	/**********************************************************************************************************************/
	// Accessing the lettersing the sring - Looping
	cout << endl << "Looping"<< endl << "-----------------------------------------------------------------" << endl;
	for (char letter : name1)
		cout << letter<< endl;

	for (size_t i{}; i < name1.length(); ++i)
		cout << name1.at(i);
	cout << endl;

	// Range-based for loop
	for (char character : name1)
		cout << character;
	cout << endl;

	/**********************************************************************************************************************/
	// Reading string from keyboard using cin and getline
	cout << endl << "Reading from keyboard" << endl << "-----------------------------------------------------------------" << endl;
	string word;
	string sentance;

	cout << "Enter a word: ";
	cin >> word;

	cin.ignore();	// decared remaining data to avoid conflict between cin and getline
	cout << "Enter a sentance of words of the day: ";
	getline(cin, sentance);

	cout << endl << "The word is: " << word << endl
		<< "The word of the day is: " << sentance << endl;

	/*************************************************************************************************************************/
	// Substring
	cout << endl << "Substring" << endl << "-----------------------------------------------------------------" << endl;
	string radio{ "Thobela fm monate wa diya le moya" };

	cout << radio.substr(0, 5) << endl;
	cout << radio.substr(6, 3) << endl;
	cout << radio.substr(10, 6) << endl;

	/*************************************************************************************************************************/
	// Erase
	cout << endl << "Erasing" << endl << "-----------------------------------------------------------------" << endl;

	name0 = "This is a test";

	cout << name0 << endl;

	name0.insert(14, "Program");

	cout << name0 << endl;

	name0.erase(0, 5);

	cout << "name0 is now: " << name0 << endl;

	/*************************************************************************************************************************/
	// find method
	cout << endl << "Finding" << endl << "-----------------------------------------------------------------" << endl;

	name0 = "The secret word is Lesego";

	cout << "Enter a secret word: ";
	cin >> word;

	size_t position{ name0.find(word) };

	if (position != string::npos)
		cout << "Found " << word << " at position " << position << endl;
	else
		cout << "Sorry, " << word << " not found" << endl;

	cout << endl;

	return 0;
}