#include "Checking_Account.h"

std::ostream& operator<<(std::ostream& os, const Checking_Account& account)
{
	os << "[ Checking account name: " << account.balance << " balance: R" << std::fixed << std::setprecision(2) << account.balance << " and flat fee: R" << std::fixed << std::setprecision(2) << account.FLAT_FEE << " ]" << std::endl;
	return os;
}

Checking_Account::Checking_Account(std::string name, double balance) : Account::Account(name, balance) {}

bool Checking_Account::withdraw(double amount)
{
	if (amount - FLAT_FEE > 0)
	{
		amount -= FLAT_FEE;
		return Account::withdraw(amount);
	}
	else
		return false;
}