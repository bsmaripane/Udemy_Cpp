// Mixed Tpye Expressions and Conversions
#include <iostream>

using namespace std;

int main() {
	// Explicit Type casting - static_cast<type>

	int total_amount{ 100 };
	int total_number{ 8 };
	double average{ 0.0 };

	average = total_amount / total_number;

	cout << "Average : " << average << endl;
	
	average = static_cast<double>(total_amount) / total_number;
	cout << "Explicit Type casting : Average : " << average << endl;

	/**************************************************************************
		Ask the user to enter 3 integers
		Calculate the sum of the integers then
		calculate the average of the 3 integerss.

		Display the 3 integers entered
		the sum of the 3 integers and 
		the average of the 3 integers.
	***************************************************************************/

	int number1{}, number2{}, number3{};	// initialised to zero
	int sum{ 0 }, total_numbers{ 3 };
	double average_numbers{ 0.0 };

	cout << "Enter 3 integers: " << endl;
	cin >> number1 >> number2 >> number3;
	 
	sum = number1 + number2 + number3;
	//average = (double)sum / total_numbers;	// Old-style of conversion
	average_numbers = static_cast<double>(sum) / total_numbers;

	cout << "The 3 integers entered:" << endl
		<< number1 << endl
		<< number2 << endl
		<< number3 << endl;
	cout << "The sum of the 3 integers is " << sum << endl;
	cout << "The average of the 3 integers is " << average_numbers << endl;

	return 0;
}