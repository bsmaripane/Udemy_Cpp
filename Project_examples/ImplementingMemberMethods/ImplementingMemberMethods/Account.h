#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	string name;
	double balance;

public:
	void setBalance(double);
	double getBalance() const;
	void setName(string);
	string getName() const;
	bool deposit(double);
	bool withdraw(double);
};
#endif

