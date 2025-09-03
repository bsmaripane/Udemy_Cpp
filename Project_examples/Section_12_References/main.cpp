// Section 12 Referencing

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num{ 100 };
	int& ref{ num };

	cout << "num: " << num << endl;
	cout << "ref: " << ref << endl;

	num = 200;
	cout << "\n-----------------------------\n";
	cout << "num: " << num << endl;
	cout << "ref: " << ref << endl;

	ref = 300;
	cout << "\n-----------------------------\n";
	cout << "num: " << num << endl;
	cout << "ref: " << ref << endl;

	cout << "\n-----------------------------\n";
	vector<string> names{ "Belmy", "Semape", "Thapelo" };

	for (auto str : names)
		str = "Maswi";

	for (auto str : names)
		cout << str << endl;

	cout << "\n-----------------------------\n";
	
	for (auto& str : names)
		str = "Felicia";

	for (auto const& str : names)
		cout << str << endl;

	cin.get();
}