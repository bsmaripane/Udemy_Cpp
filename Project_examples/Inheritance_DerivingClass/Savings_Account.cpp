#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate) : Account::Account(name, balance), int_rate(int_rate) {}

bool Savings_Account::deposit(double amount)
{
	amount += (amount * int_rate / 100);
	return Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& account)
{
	os << "[ Saving account balance: " << std::fixed << std::setprecision(2) << account.balance << " interest rate: " << std::fixed << std::setprecision(3) << account.int_rate  << "% ]" << std::endl;
	return os;
}
