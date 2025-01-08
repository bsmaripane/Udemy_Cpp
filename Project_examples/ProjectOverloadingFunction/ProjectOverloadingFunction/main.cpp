/*
* Students were required to write an overloaded function max
* that takes either two or three parameters of type double and returms the largest of them.
*/
#include <iostream>
using namespace std;

double max(double var1, double var2)
{
	if (var1 > var2)
		return var1;
	else
		return var2;
}

double max(double var1, double var2, double var3)
{
	if (var1 > var2 && var1 > var3)
		return var1;
	else if (var2 > var1 && var2 > var3)
		return var2;
	else if (var3 > var1 && var3 > var2)
		return var3;
	//else
	//	return var1;
}

int main()
{
	double num1{ 2.5 }, num2{ 2.5 }, num3{ 2.5 };

	cout << "The maximum number between " << num2 << " and " << num1 << " is " << max(num2, num1) << endl;
	cout << "The maximum number between " << num1 << ", " << num2 << " and " << num3 << " is " << max(num1, num2, num3) << endl;

	return 0;
}
