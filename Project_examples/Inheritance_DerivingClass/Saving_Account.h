#ifndef SAVING_ACCOUNT_H
#define SAVING_ACCOUNT_H

#include "Account.h"

// Deposit method increments amount to be deposited by amount * int_rate percentage
class Saving_Account : public Account
{
	friend std::ostream& operator<<(std::ostream& os, const Saving_Account& account);
protected:
	double int_rate;
public:
	Saving_Account();
	Saving_Account(double balance, double int_rate);
	void deposit(double amount);
};
#endif // SAVING_ACCOUNT_H