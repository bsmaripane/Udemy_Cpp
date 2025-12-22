#include <iostream>
#include "Account.h"
#include "Saving_Account.h"

int main()
{
	// Use the Account class
	std::cout << "======================= Account ============================" << std::endl;
	Account acc{};
	acc.deposit(2000.00);
	acc.withdraw(500);

	std::cout << std::endl;

	// Use the Saving_Account
	std::cout << "======================= Saving_Account ============================" << std::endl;
	Saving_Account sav_acc{};
	sav_acc.deposit(1500.0);
	sav_acc.withdraw(250.0);

	std::cout << std::endl;

	std::cout << "\n======================================================================\n";
	std::cin.get();
	return 0;
}