// For Loop

#include <iostream>
#include <vector>

using namespace std;

int main() {

	for (int i{ 1 }; i <= 10; ++i)		// increment by 1
		cout << i << endl;

	/****************************************************************/

	for (int i{ 1 }; i <= 10; i += 2)		// increment by 2
		cout << i << endl;

	/****************************************************************/

	for (int i{ 10 }; i > 0; --i)		// ddecrement by 1
		cout << i << endl;
	cout << "Blasroff" << endl;

	/***************************************************************/

	for (int i{ 10 }; i <= 100; i += 10) { 
		if (i % 15 == 0) cout << i << endl;
	}

	/***************************************************************/

	for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)
		cout << i << " + " << j << " = " << (i + j) << endl;

	/***************************************************************/

	for (int i{ 1 }; i <= 100; ++i) 
		cout << i << ((i % 10 == 0) ? "\n" : " ");

	/***************************************************************/

	vector<int> nums{ 10, 20, 30, 40, 50 };

	for (unsigned i{}; i < nums.size(); ++i)
		cout << nums[i] << endl;

	return 0;
}