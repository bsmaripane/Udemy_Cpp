#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
	friend std::ostream& operator<<(std::ostream& os, const Savings_Account& account);
private:
	static constexpr const char* def_name{ "Default Trust Account" };
	static constexpr double def_balance{ 0.0 };
	static constexpr double def_int_rate{ 0.0 };
	const double BONUS{ 50.00 };
	static int allowed_withdrawals{ 0 };
	const double MIN_DEPOSIT_FOR_BONUS{ 5000.00 };
public:
	Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	bool deposit(double amount);
};
#endif // TRUST_ACCOUNT_H