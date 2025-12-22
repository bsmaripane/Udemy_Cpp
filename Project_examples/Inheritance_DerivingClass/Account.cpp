#include "Account.h"

void Account::deposit(double amount)
{
	balance += amount;
}

void Account::withdraw(double amount)
{
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Insufficient funds" << std::endl;
}

Account::Account() : balance(0.0) {}

Account::Account(double balalnce) : balance{balalnce} {}

std::ostream& operator<<(std::ostream& os, const Account& account)
{
	os << "Account balance: " << account.balance << std::endl;
	return os;
}
