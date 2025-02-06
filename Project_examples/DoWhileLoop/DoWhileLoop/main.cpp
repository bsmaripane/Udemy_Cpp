#include <iostream>
using namespace std;

int main()
{
	int num{ 0 };

	do
	{
		cout << "Enter a number between 1 and 10: ";
		cin >> num;
	} while (num <= 0 || num > 10);

	cout << "Entered number is " << num << endl;

	return 0;
}