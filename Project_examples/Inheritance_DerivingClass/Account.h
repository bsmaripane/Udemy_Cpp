#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
public:
	void deposit(double amount);
	void withdraw(double amount);
	Account();
	~Account();
};
#endif // ACCOUNT_H