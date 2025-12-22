#include <iostream>
#include "Account.h"
#include "Saving_Account.h"

int main()
{
	// Use the Account class
	std::cout << "======================= Account ============================" << std::endl;
	Account acc(1000);
	std::cout << acc << std::endl;

	acc.deposit(500.00);
	std::cout << acc << std::endl;

	acc.withdraw(2500);
	std::cout << acc << std::endl;

	acc.withdraw(500);
	std::cout << acc << std::endl;

	std::cout << std::endl;

	// Use the Saving_Account
	std::cout << "======================= Saving_Account ============================" << std::endl;
	Saving_Account sav_acc(1500.00, 7);
	std::cout << sav_acc << std::endl;

	sav_acc.deposit(1500.0);
	std::cout << sav_acc << std::endl;

	sav_acc.withdraw(5250.0);
	std::cout << sav_acc << std::endl;

	sav_acc.withdraw(1200.00);
	std::cout << sav_acc << std::endl;

	std::cout << "\n======================================================================\n";
	std::cin.get();
	return 0;
}