// Section 15 Constructors and Destructors

#include <iostream>

class Base
{
public:
	Base() : value{ 0 } { std::cout << "Base no-args constructor" << std::endl; }
	Base(int x) : value{ x } { std::cout << "Base (int) overloaded constructor" << std::endl; }
	Base(const Base& other) : value{ other.value } {std::cout << "Base copy constructor" << std::endl; }
	Base& operator=(const Base& rhs)
	{
		std::cout << "Base operator=" << std::endl;
		if (this == &rhs)
			return *this;
		value = rhs.value;
		return *this;
	}
	~Base() { std::cout << "Base destructor" << std::endl; }

private:
	int value;
};

class Derived : public Base
{
private:
	int doubled_value;
public:
	Derived() : Base{}, doubled_value { 0 } { std::cout << "Derived no-args constructor" << std::endl; }
	Derived(int x) : Base{ x }, doubled_value{ x * 2 } { std::cout << "Derived (int) overloaded constructor" << std::endl; }
	Derived(const Derived& other) : Base(other), doubled_value{ other.doubled_value } { std::cout << "Derived copy constructor" << std::endl; }
	Derived& operator=(const Derived& rhs)
	{
		std::cout << "Derived operator=" << std::endl;
		if (this == &rhs)
			return *this;
		Base::operator=(rhs);
		doubled_value = rhs.doubled_value;
		return *this;
	}
	~Derived() { std::cout << "Derived destructor" << std::endl; }
};

int main() 
{
	Base base;
	Base b{ 100 };
	Base b1{ b };
	b = b1;
	std::cout << std::endl;
	Derived derived;
	Derived d{ 1000 };
	Derived d2{ d };
	d = d2;

	std::cin.get();
	return 0;
}