// Section 8 Challenge
/*****************************************************************************************
Write a program that asks the user to enter the following:
An integer representing the number of cents

Assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user:
in the SA:
	Five Rand coin is 500 cents,
	Two Rand coin is 200 cents,
	One Rand coin is 100 cents,
	Fifty cent coin is 50 cents,
	Twenty cent coin is 20 cents and 
	Ten cent coin is 10 cents
	One cent coin is 1 cents 
******************************************************************************************/

#include <iostream>

using namespace std;

int main() {
	// const variable declaration
	const int FIVE_RAND_VALUE{ 500 }, TWO_RAND_VALUE{ 200 }, ONE_RAND_VALUE{ 100 };
	const int FIFTY_CENT_VALIUE{ 50 }, TWENTY_CENT_VALUE{ 20 }, TEN_CENT_VALUE{ 10 };
	
	// variable declaration
	int cents{}, balance{};
	int fiveRandCoin{}, twoRandCoin{}, oneRandCoin{};
	int fiftyCentCoin{}, twentyCentCoin{}, tenCentCoin{}, oneCentCoin{};
	
	/**************************************************************************************/
	int amount{ 100 };

	amount += amount * 2;
	cout << amount << endl;

	int x{ 5 }, y{ -2 }, z{ 2 };

	cout << (x + y * z <= x + z * z - x) << endl;
	/**************************************************************************************/

	// Prompt user for input
	cout << "Enter an amount in cents : ";
	cin >> cents;

	// Compute the coin value
	fiveRandCoin = cents / FIVE_RAND_VALUE;
	balance = cents % FIVE_RAND_VALUE;
	twoRandCoin = balance / TWO_RAND_VALUE;
	balance %= TWO_RAND_VALUE;
	oneRandCoin = balance / ONE_RAND_VALUE;
	balance %= ONE_RAND_VALUE;
	fiftyCentCoin = balance / FIFTY_CENT_VALIUE;
	balance %= FIFTY_CENT_VALIUE;
	twentyCentCoin = balance / TWENTY_CENT_VALUE;
	balance %= TWENTY_CENT_VALUE;
	tenCentCoin = balance / TEN_CENT_VALUE;
	balance %= TEN_CENT_VALUE;
	oneCentCoin = balance;

	// Display change to the user
	cout << endl << "You can provide this change as follows:" << endl
		<< "Five Rand coin : " << fiveRandCoin << endl
		<< "Two Rand coin : " << twoRandCoin << endl
		<< "One Rand coin : " << oneRandCoin << endl
		<< "Fifty Cent coin : " << fiftyCentCoin << endl
		<< "Twanty Cent coin : " << twentyCentCoin << endl
		<< "Ten Cent coin : " << tenCentCoin << endl
		<< "One Cent coin : " << oneCentCoin << endl;



	return 0;
}