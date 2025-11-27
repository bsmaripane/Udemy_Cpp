// Section 13 Implementing member methods 

#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account Lesego_acc, Maswi_acc;

	Maswi_acc.setName("Maswi's Saving Account");
	Maswi_acc.setBalance(1500);
	Lesego_acc.setName("Lesego's Saving Account");
	Lesego_acc.setBalance(-139.57);

	if (Maswi_acc.deposit(250))
		cout << "Deposit successful!" << endl;
	else
		cout << "Deposit failed!" << endl;

	if (Maswi_acc.withdraw(750))
		cout << "Withdrawal successful!" << endl;
	else
		cout << "Withdrawal failed!" << endl;
	
	if (Maswi_acc.withdraw(1200))
		cout << "Withdrawal successful!" << endl;
	else
		cout << "Withdrawal failed!" << endl;
	
	if (Lesego_acc.withdraw(50))
		cout << "Withdrawal successful!" << endl;
	else
		cout << "Withdrawal failed!" << endl;

	cin.get();
	return 0;
}