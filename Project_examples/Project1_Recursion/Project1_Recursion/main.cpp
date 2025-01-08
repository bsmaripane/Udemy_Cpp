/*
* Recursion function
*/
#include <iostream>

using namespace std;

int cal_sum(int varNum)
{
	int sum;
	if (varNum == 1)
		sum = 1;
	else
		sum = cal_sum(varNum - 1) + varNum;

	return sum;
}

int main()
{
	int num;

	cout << "Enter integer number; ";
	cin >> num;

	cout << "The sum of " << num << " is " << cal_sum(num) << endl;

	return 0;
}