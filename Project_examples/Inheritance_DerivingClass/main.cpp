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

	Account* p_acc{ nullptr };
	p_acc = new Account();
	p_acc->deposit(1000.00);
	p_acc->withdraw(750.0);
	delete p_acc;

	std::cout << std::endl;

	// Use the Saving_Account
	std::cout << "======================= Saving_Account ============================" << std::endl;
	Saving_Account sav_acc{};
	sav_acc.deposit(1500.0);
	sav_acc.withdraw(250.0);

	std::cout << std::endl;

	Saving_Account* p_sav_acc{ nullptr };
	p_sav_acc = new Saving_Account();
	p_sav_acc->deposit(1000.0);
	p_sav_acc->withdraw(450.0);
	delete p_sav_acc;

	std::cout << "\n======================================================================\n";
	std::cin.get();
	return 0;
}