#include "Checking_Account.h"

std::ostream& operator<<(std::ostream& os, const Checking_Account& account)
{
    os << "[Checking_Account: " << account.name << " : R" << std::fixed << std::setprecision(2) << account.balance << "]";
    return os;
}

Checking_Account::Checking_Account(std::string name, double balance) : Account(name, balance) {}

bool Checking_Account::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}
