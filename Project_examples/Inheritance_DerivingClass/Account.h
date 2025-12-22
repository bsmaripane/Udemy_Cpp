#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
public:
	std::string acc_name;
	double balance;
	void deposit(double amount);
	void withdraw(double amount);
	Account();
	~Account();
};
#endif // ACCOUNT_H