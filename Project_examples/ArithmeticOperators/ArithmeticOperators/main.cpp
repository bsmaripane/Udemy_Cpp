// Arithmetic operators
/*
	+ addition
	- subtraction
	* multiplication
	/ division
	% modulo or remainder (works only with integers 

	P.E.M.D.A.S
	P - Parentheses
	E - Exponents
	M - Multiplication
	D - Division
	A - Addition
	S - Subtraction
*/
#include <iostream>
using namespace std;

int main()
{
	// Declaring variable and initialise to a value
	int num1{ 200 };
	int num2{ 100 };

	// num1 plus num2
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

	// Declare result and initialise to zero
	int result{ 0 };

	// Assign result to num1 plus num2
	result = num1 + num2;

	// output result
	cout << num1 << " + " << num2 << " = " << result << endl;

	// Assign result to num1 minus num2
	result = num1 - num2;

	// output result
	cout << num1 << " - " << num2 << " = " << result << endl;

	// Assign result to num1 multiple by num2
	result = num1 * num2;

	// output result
	cout << num1 << " * " << num2 << " = " << result << endl;

	// Assign result to num1 divided by num2
	result = num1 / num2;

	// output result
	cout << num1 << " / " << num2 << " = " << result << endl;

	// Assign result to remainder of num1 divided by num2
	result = num1 % num2;

	// output result
	cout << num1 << " % " << num2 << " = " << result << endl;

	// Assign result to num2 divided by num1
	result = num2 / num1;

	// output result
	cout << num2 << " / " << num1 << " = " << result << endl;

	// Assign result to remainder of num2 divided by num1
	result = num2 % num1;

	// output result
	cout << num2 << "  " << num1 << " = " << result << endl;

	// Assign result to 
	result = num1 * 10 + num2;

	// output result
	cout << num1 << " * 10 + " << num2 << " = " << result << endl;

	// Assign result to 
	result = num1 * (10 + num2);

	// output result
	cout << num1 << " * (10 + " << num2 << ") = " << result << endl;

	return 0;
}