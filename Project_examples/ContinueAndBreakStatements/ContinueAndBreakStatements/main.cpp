// continue and break statements

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> values{ 1, 2, -1, 3, -1, -99, 7, 8, 10 };

	for (auto value : values) {
		if (value == -99)
			break;
		else if (value == -1)
			continue;
		else
			cout << value << endl;
	}

	/*************************************************************************************/

	// Infinite loop loop

	for (;;) {
		int num{};

		num++;

		cout << "This will print forever" << endl;

		if (num <= 500)
			continue;
		else
			break;
	}

	return 0;
}