// Section 15 Constructors and Destructors

#include <iostream>

class Base
{
public:
	Base() : value{ 0 } { std::cout << "Base no-args constructor" << std::endl; }
	Base(int x) : value{ x } { std::cout << "Base (int) overloaded constructor" << std::endl; }
	~Base() { std::cout << "Base destructor" << std::endl; }

private:
	int value;
};

class Derived : public Base
{
	using Base::Base;	// to use Base(int x) constructor
private:
	int doubled_value;
public:
	Derived() : Base{}, doubled_value { 0 } { std::cout << "Derived no-args constructor" << std::endl; }
	Derived(int x) : Base{ x }, doubled_value{ x * 2 } { std::cout << "Derived (int) overloaded constructor" << std::endl; }
	~Derived() { std::cout << "Derived destructor" << std::endl; }
};

int main() 
{
	/*Base base;
	Base b{ 200 };*/
	Derived derived;
	Derived d{ 1000 };

	std::cin.get();
	return 0;
}