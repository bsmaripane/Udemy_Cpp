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
	string name7{ 30,'X' };

	cout << name0 << endl;		// No garbage
	cout << name0.length() << endl;		// empty string

	// initialization
	cout << endl << "Initialization" << endl << "-----------------------------------------------------------------" << endl;



	return 0;
}