#include "Account.h"

void Account::setBalance(double aBalance)
{
	balance = aBalance;
}

double Account::getBalance() const
{
	return balance;
}

void Account::setName(string aName)
{
	name = aName;
}

string Account::getName() const
{
	return name;
}

bool Account::deposit(double amount)
{
	balance += amount;
	return true;
}

bool Account::withdraw(double amount)
{
	if (balance > 0)
	{
		if (balance < amount)
		{
			cout << "Insufficient balance!";
			return false;
		}
		else
		{
			balance -= amount;
			return true;
		}
	}
	else
	{
		cout << "Account is verdrawn or zero balance!" << endl;
		return false;
	}
}