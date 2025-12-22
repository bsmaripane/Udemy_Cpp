#include "Account_Util.h"

void display(const std::vector<Account>& accounts)
{
	std::cout << "\n================ Accounts ===============================================\n";
	for (const auto& acc : accounts)
		std::cout << acc << std::endl;
}

void deposit(std::vector<Account>& accounts, double amount)
{
	std::cout << "\n================ Depositing to Accounts =================================\n";
	for (auto& acc : accounts)
		if (acc.deposit(amount))
			std::cout << "Deposited R" << std::fixed << std::setprecision(2) << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of R" << std::fixed << std::setprecision(2) << amount << " to " << acc << std::endl;
}

void withdraw(std::vector<Account>& accounts, double amount)
{
	std::cout << "\n================ Withdrawing from Accounts ==============================\n";
	for (auto& acc : accounts)
		if (acc.withdraw(amount))
			std::cout << "Withdraw R" << std::fixed << std::setprecision(2) << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal of R" << std::fixed << std::setprecision(2) << amount << " from " << acc << std::endl;
}

void display(const std::vector<Savings_Account>& accounts)
{
	std::cout << "\n================ Savings Accounts ===============================================\n";
	for (const auto& acc : accounts)
		std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account>& accounts, double amount)
{
	std::cout << "\n================ Depositing to Savings Accounts =================================\n";
	for (auto& acc : accounts)
		if (acc.deposit(amount))
			std::cout << "Deposited R" << std::fixed << std::setprecision(2) << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of R" << std::fixed << std::setprecision(2) << amount << " to " << acc << std::endl;
}

void withdraw(std::vector<Savings_Account>& accounts, double amount)
{
	std::cout << "\n================ Withdrawing from Savings Accounts ==============================\n";
	for (auto& acc : accounts)
		if (acc.withdraw(amount))
			std::cout << "Withdraw R" << std::fixed << std::setprecision(2) << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal of R" << std::fixed << std::setprecision(2) << amount << " from " << acc << std::endl;
}
