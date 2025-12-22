#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "Account.h"

// Saving Account is a type of Account adds and interest rate.
// Deposit: Amount supplied to deposit will be incremented by (amount *int_rate/100) and then the updated amount will be deposited
class Savings_Account : public Account
{
	friend std::ostream& operator<<(std::ostream& os, const Savings_Account& account);
private:
	static constexpr const char* def_name = "Default Saving Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
protected:
	double int_rate;
public:
	Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	bool deposit(double amount);
};
#endif // SAVINGS_ACCOUNT_H