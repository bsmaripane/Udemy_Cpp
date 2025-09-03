// Section 12 Referencing

#include <iostream>
#include <vector>

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


	cin.get();
}