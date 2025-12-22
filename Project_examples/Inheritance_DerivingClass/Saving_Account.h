#ifndef SAVING_ACCOUNT_H
#define SAVING_ACCOUNT_H

#include "Account.h"

class Saving_Account : public Account
{
	Saving_Account();
	~Saving_Account();
	void deposit(double amount);
	void withdraw(double amount);
};
#endif // SAVING_ACCOUNT_H