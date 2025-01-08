/*
* Program using a vector to read values and to compute their average
* 
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(5);
	char answer{ 'y' };
	float sum{ 0 };
	int count{ 0 };

	while (tolower(answer) == 'y')
	{
		cout << "Enter an  integer: ";
		cin >> vec[count];
		sum += vec[count];
		count++;

		cout << "Do you wish to enter a new number Y/N: ";
		cin >> answer;
	}

	if (count > 0)
		cout << "Average of " << count << " numbers is " << sum / count << endl;

	for (int value : vec)
		cout << value << endl;

	return 0;
}
