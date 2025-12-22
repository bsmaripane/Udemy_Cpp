#include "Saving_Account.h"

Saving_Account::Saving_Account() : int_rate(0.075) { acc_name = "Saving Account";  balance = 50.00; }

Saving_Account::~Saving_Account() {}

void Saving_Account::deposit(double amount)
{
	std::cout << "Saving_Account deposit called with " << amount << std::endl;
}

void Saving_Account::withdraw(double amount)
{
	std::cout << "Saving_Account withdraw called with " << amount << std::endl;
}