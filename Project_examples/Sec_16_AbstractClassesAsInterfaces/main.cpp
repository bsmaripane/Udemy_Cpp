// Section 16 Abstract Classess as Interfaces
// Interface - start

#include <iostream>
class I_Printable
{
	friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
	virtual void print(std::ostream& os) const = 0;
};

std::ostream& operator<<(std::ostream& os, const I_Printable& obj)
{
	obj.print(os);
	return os;
}

class Account : public I_Printable
{
public:
	virtual void withdraw(double amount) { std::cout << "In Account::withdraw" << std::endl; }
	virtual void print(std::ostream& os) const override { os << "Account display"; }
	virtual ~Account() {}
};

class Checking : public Account
{
public:
	virtual void withdraw(double amount) { std::cout << "In Checking::withdraw" << std::endl; }
	virtual void print(std::ostream& os) const override { os << "Checking display"; }
	virtual ~Checking() {}
};


class Savings : public Account
{
public:
	virtual void withdraw(double amount) { std::cout << "In Savings::withdraw" << std::endl; }
	virtual void print(std::ostream& os) const override { os << "Savings display"; }
	virtual ~Savings() {}
};

class Trust : public Account
{
public:
	virtual void withdraw(double amount) { std::cout << "In Trust::withdraw" << std::endl; }
	virtual void print(std::ostream& os) const override { os << "Trust display"; }
	virtual ~Trust() {}
};


int main()
{
	Account a;
	std::cout << a << std::endl;

	Checking c;
	std::cout << c << std::endl;

	Savings s;
	std::cout << s << std::endl;

	Trust t;
	std::cout << t << std::endl;

	std::cout << "\nUsing a pointer to refer the derived classes\n" << std::endl;

	Account* ptr1 = new Account();
	std::cout << *ptr1 << std::endl;

	Account* ptr2 = new Checking();
	std::cout << *ptr2 << std::endl;

	Account* ptr3 = new Savings();
	std::cout << *ptr3 << std::endl;

	Account* ptr4 = new Trust();
	std::cout << *ptr4 << std::endl;

	std::cin.get();
	return 0;
}