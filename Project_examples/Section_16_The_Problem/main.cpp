// Section 16 The Problem

#include <iostream>

class Base
{
public:
	void say_hello() const
	{
		std::cout << "Hello - I'm a Base class object" << std::endl;
	}
};

class Derived : public Base
{
public:
	void say_hello() const
	{
		std::cout << "Hello - I'm a Derived class object" << std::endl;
	}
};

void greetings(const Base& obj)
{
	std::cout << "Greetings: ";
	obj.say_hello();
}

int main()
{
	// Static binding
	Base b;
	b.say_hello();

	Derived d;
	d.say_hello();

	greetings(b);
	greetings(d);


	std::cin.get();
	return 0;
}