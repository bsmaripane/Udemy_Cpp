// Section 16 Polymorphism Section Challenge

#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

int main()
{
	// Use the Account class
	std::vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{ "Belmy" });
	accounts.push_back(Account{ "Maxine", 2000 });
	accounts.push_back(Account{ "Lesego", 5000 });

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);
	std::cout << std::endl;

	// Use the Saving_Account
	std::vector<Savings_Account> sav_accounts;
	sav_accounts.push_back(Savings_Account{});
	sav_accounts.push_back(Savings_Account{ "Maswi" });
	sav_accounts.push_back(Savings_Account{ "Belicia", 2000 });
	sav_accounts.push_back(Savings_Account{ "Felicia", 5000, 5.0 });

	display(sav_accounts);
	deposit(sav_accounts, 1000);
	withdraw(sav_accounts, 2000);

	// Use the Checking_Account
	std::vector<Checking_Account> check_account;
	check_account.push_back(Checking_Account{});
	check_account.push_back(Checking_Account{ "Kganya" });
	check_account.push_back(Checking_Account{ "Thato", 1700 });

	display(check_account);
	deposit(check_account, 1000);
	withdraw(check_account, 2000);

	// Use the Trust_Account
	std::vector<Trust_Account> trust_account;
	trust_account.push_back(Trust_Account{});
	trust_account.push_back(Trust_Account{ "Bunny" });
	trust_account.push_back(Trust_Account{ "Thapelo", 20500, 5.0 });
	trust_account.push_back(Trust_Account{ "Shortie", 25000, 15.0 });
	trust_account.push_back(Trust_Account{ "Taily", 35000 });

	display(trust_account);
	deposit(trust_account, 1500);
	deposit(trust_account, 7500);
	withdraw(trust_account, 11250);
	deposit(trust_account, 5500);

	for (int i{ 1 }; i < 6; i++) {
		withdraw(trust_account, 4750);
		deposit(trust_account, 4750);
	}

	std::cin.get();
	return 0;
}