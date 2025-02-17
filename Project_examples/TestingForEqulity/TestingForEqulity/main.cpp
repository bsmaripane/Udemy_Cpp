// Testing for Equality
/*****************************************************************************
* The == and != operators
*	compares the values of 2 expressions
*	evaluates to a Boolean (true or false, 1 or 0)
*****************************************************************************/

#include <iostream>

using namespace std;

int main() {
	int num1{}, num2{};
	bool result{ false };

	result = (100 == 50 + 50);
	cout << "The result is : " << result << endl;

	result = (num1 != num2);
	cout << "The result is : " << result << endl;

	cout << (num1 == num2) << endl;		// 0 or 1
	cout << std::boolalpha;
	cout << (num1 == num2) << endl;		// true or false
	cout << std::noboolalpha;

	// Example of integers
	bool equal_result{ false };
	bool not_equal_result{ false };

	int number1{}, number2{};

	 cout << boolalpha;		// will display true/false instead of 1/0 for booleans

	cout << endl << "Enter two integer values separated by a space : ";
	cin >> number1 >> number2;

	equal_result = (number1 == number2);
	not_equal_result = (number1 != number2);

	cout << "Comparision result (equals) : " << equal_result << endl;
	cout << "Comparision result (not equals) : " << not_equal_result << endl;

	// Example of characters
	char char1{}, char2{};

	cout << endl << "Enter two characters separated by a space : ";
	cin >> char1 >> char2;

	equal_result = (char1 == char2);
	not_equal_result = (char1 != char2);

	cout << "Comparision result (equals) : " << equal_result << endl;
	cout << "Comparision result (not equals) : " << not_equal_result << endl;

	// Example of double
	double value1{}, value2{};

	cout << endl << "Enter two double values seperated by a space : ";
	cin >> value1 >> value2;

	equal_result = (value1 == value2);
	not_equal_result = (value1 != value2);

	cout << "Comparision result (equals) : " << equal_result << endl;
	cout << "Comparision result (not equals) : " << not_equal_result << endl;

	// Example of integer and a double
	double value{ };
	int number{};

	cout << endl << "Enter integer value and double value seperated by a space : ";
	cin >> number >> value;

	equal_result = (number == value);
	not_equal_result = (number != value);

	cout << "Comparision result (equals) : " << equal_result << endl;
	cout << "Comparision result (not equals) : " << not_equal_result << endl;

	return 0;
}