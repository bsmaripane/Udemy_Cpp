#include "Trust_Account.h"

std::ostream& operator<<(std::ostream& os, const Trust_Account& account)
{
    os << "[Trust Account: " << account.name << " : R" << std::fixed << std::setprecision(2) << account.balance << ", " << std::fixed << std::setprecision(3) << account.int_rate << "%, withdrawas: " << account.num_withdrawals << "]";
    return os;
}

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) : Savings_Account(name, balance, int_rate), num_withdrawals(0) {}

bool Trust_Account::deposit(double amount)
{
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else
    {
        +num_withdrawals;
        return Savings_Account::withdraw(amount);
    }
}
