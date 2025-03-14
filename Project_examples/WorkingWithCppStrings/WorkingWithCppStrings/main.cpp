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
	string name6{ name1, 0, 3 };
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


	return 0;
}