#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

template <class Type>
class Calculator
{
public:
	Type add(Type x, Type y) const { return (x + y); }
	Type minus(Type x, Type y) const { return (x - y); }
	Type multiple(Type x, Type y) const { return (x * y); }
	Type divide(Type x, Type y) const
	{
		if (y == 0)
		{
			std::cerr << "Error: Division by zero is NOT allowed!" << std::endl;
		}
		else
			return (x / y);
	}

	Type module(Type x, Type y) const
	{
		if (y == 0)
		{
			std::cerr << "Error: Division by zero is NOT allowed!" << std::endl;
		}
		else
			return (x % y);
	}
};
#endif