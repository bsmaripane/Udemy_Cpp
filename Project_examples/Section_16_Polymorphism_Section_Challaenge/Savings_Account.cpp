#include "Savings_Account.h"

std::ostream& operator<<(std::ostream& os, const Savings_Account& account)
{
    os << "[Savings_Account: " << account.name << " : R" << std::fixed << std::setprecision(2) << account.balance << ", " << std::fixed<<std::setprecision(3)<<account.int_rate << "]";
    return os;
}

Savings_Account::Savings_Account(std::string name, double balance, double int_rate) : Account(name, balance), int_rate(int_rate) {}

bool Savings_Account::deposit(double amount)
{
    amount += amount * (int_rate / 100);
    return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount)
{
    return Account::withdraw(amount);
}
