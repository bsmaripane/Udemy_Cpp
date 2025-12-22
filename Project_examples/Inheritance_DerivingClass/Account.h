#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
	friend std::ostream& operator<<(std::ostream& os, const Account& account);
protected:
	double balance;
public:
	void deposit(double amount);
	void withdraw(double amount);
	Account();
	Account(double balalnce);
};
#endif // ACCOUNT_H