// Nested loops

#include <iostream>
#include <vector>

using namespace std;

int main() {

	/***********************************************************************/
	// Nested for loop

	for (int outer_val{ 1 }; outer_val <= 2; ++outer_val) {
		for (int inner_val{ 1 }; inner_val <= 3; ++inner_val)
			cout << outer_val << ", " << inner_val << endl;
	}

	/***********************************************************************/
	// Multiplication Table using nested for loop

	cout << endl << "Multiplication Table" << endl;
	for (int num1{ 1 }; num1 <= 10; ++num1) {
		for (int num2{ 1 }; num2 <= 10; ++num2)
			cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		cout << "_______________________________" << endl;
	}

	/***********************************************************************/
	// 2D Vector - display elements

	vector<vector<int>> vector_2d{
		{1, 2, 3},
		{10, 20, 30, 40},
		{100, 200, 300, 400, 500}
	};

	for (auto vec : vector_2d) {
		for (auto value : vec)
			cout << value << " ";
		cout << endl;
	}

	/**********************************************************************/
	//Read Histogram and displaying it

	int num_items{};

	cout << "How many data items do you have? ";
	cin >> num_items;

	vector<int> data{};

	for (int i{ 1 }; i <= num_items; ++i) {
		int data_item{};

		cout << "Enter data item " << i << ": ";
		cin >> data_item;

		data.push_back(data_item);
	}

	cout << endl << "Displaying Histogram" << endl;
	for (auto value : data) {
		for (int i{ 1 }; i <= value; ++i) {
			cout << ((i % 5 == 0) ? "*" : "-");
		}
		cout << endl;
	}
	
	/**********************************************************************/



	return 0;
}