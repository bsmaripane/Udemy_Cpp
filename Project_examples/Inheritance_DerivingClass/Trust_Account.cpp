#include "Trust_Account.h"

std::ostream& operator<<(std::ostream& os, const Trust_Account& account)
{
	os << "[ Trust account name: " << " balance: R" << std::fixed << std::setprecision(2) << account.get_balance() << std::endl;
	return os;
}

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) : Savings_Account(name, balance, int_rate) {}

bool Trust_Account::deposit(double amount)
{
	if (allowed_withdrawals <= 3 && amount < (balance * 20 / 100))
		if (amount >= MIN_DEPOSIT_FOR_BONUS)
		{
			balance += BONUS;
			return Savings_Account::deposit(amount);
		}
		else
			return Savings_Account::deposit(amount);
	else
		return false;
}