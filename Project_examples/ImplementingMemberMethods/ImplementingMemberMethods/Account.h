#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	string name;
	double name;

public:
	void setBalance(double aBalance);
	double getBalance() const;
	void setName(string aName);
	string getName() const;
	bool deposit(double amount);
	bool withdraw(double amount);
};
#endif

