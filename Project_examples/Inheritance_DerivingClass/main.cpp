#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Account_Util.h"

int main()
{
	// Use the Account class
	std::vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{"Belmy"});
	accounts.push_back(Account{"Maxine", 2000});
	accounts.push_back(Account{"Lesego", 5000});

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);
	std::cout << std::endl;

	// Use the Saving_Account
	std::vector<Savings_Account> sav_accounts;
	sav_accounts.push_back(Savings_Account{});
	sav_accounts.push_back(Savings_Account{"Maswi"});
	sav_accounts.push_back(Savings_Account{"Belicia", 2000});
	sav_accounts.push_back(Savings_Account{"Felicia", 5000, 5.0});

	display(sav_accounts);
	deposit(sav_accounts, 1000);
	withdraw(sav_accounts, 2000);

	std::cin.get();
	return 0;
}