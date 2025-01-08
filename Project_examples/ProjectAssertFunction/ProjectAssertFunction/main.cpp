/*
* Function to calculate thee discount applicable on the price of an item.
* with a bool parameter to indicate whether the discount is a fixed amount or a percentage.
* The use of assert statement to ensure the input.
*/
#define NDEBUG
#include <iostream>
#include <cassert>

using namespace std;

double calcDiscount(double &price, double discount, bool fixed)
{
	if (fixed == false)
		discount = price * (discount / 100);

	price = price - discount;

	return discount;
}

int main()
{
	double itemPrice, discount;
	int temp;
	bool fixed;

	cout << "Enter the item price: ";
	cin >> itemPrice;
	cout << "Enter the item discount (as percentage or fixed amount): ";
	cin >> discount;
	do
	{
		cout << "Is the discount a percentage or fixed amount? (0 for percentage or 1 for fixed amount): ";
		cin >> temp;
		if (temp == 1) fixed = true;
		else if (temp == 0) fixed = false;
		else temp = -1;
	}while (temp == -1);
	
	assert(discount >= 0);
	
	discount = calcDiscount(itemPrice, discount, fixed);

	assert(itemPrice > 0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "The item discount amount is R" << discount << endl
		<< "The item price with disccount is R" << itemPrice << endl;
	
	return 0;
}