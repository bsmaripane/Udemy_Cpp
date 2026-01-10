#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H

#include <vector>
#include "Account.h"
#include "Savings_Account.h"

// Utility helper functions
template<class Type>
void display(const std::vector<Type>& accounts)
{
	std::cout << "\n================ Account Details ================================================\n";
	for (const auto& acc : accounts)
		std::cout << acc << std::endl;
}

template<class Type>
void deposit(std::vector<Type>& accounts, double amount)
{
	std::cout << "\n================ Depositing to ==================================================\n";
	for (auto& acc : accounts)
		if (acc.deposit(amount))
			std::cout << "Deposited R" << std::fixed << std::setprecision(2) << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of R" << std::fixed << std::setprecision(2) << amount << " to " << acc << std::endl;
}

template<class Type>
void withdraw(std::vector<Type>& accounts, double amount) {
	std::cout << "\n================ Withdrawing from ===============================================\n";
	for (auto& acc : accounts)
		if (acc.withdraw(amount))
			std::cout << "Withdraw R" << std::fixed << std::setprecision(2) << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal of R" << std::fixed << std::setprecision(2) << amount << " from " << acc << std::endl;
}
#endif // ACCOUNT_UTIL_H