// Range-based for loop

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	/***********************************************************/
	int scores[]{ 65, 69, 85, 92, 50, 68 };

	for (int score : scores)
		cout << score << " ";
	cout << endl;

	/***********************************************************/

	for (auto score : scores)
		cout << score << " ";
	cout << endl;

	/***********************************************************/

	vector<double> temperatures{ 87.2, 77.1, 80.0, 72.5 };

	double average_temp{};
	double running_sum{};

	for (auto temp : temperatures) running_sum += temp;

	if (temperatures.size() != 0) average_temp = running_sum / temperatures.size();

	cout << "Temperature average is " << average_temp << endl;

	/**********************************************************/

	for (auto b : "Belmy Maripane loves Felcia Van der Merwe") cout << b << endl;

	/*********************************************************/



	return 0;
}