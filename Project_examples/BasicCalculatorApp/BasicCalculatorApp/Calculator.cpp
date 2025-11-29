#include "Calculator.h"

int Calculator::add(int x, int y) const { return (x + y); }
int Calculator::minus(int x, int y) const { return (x - y); }
int Calculator::multiple(int x, int y) const { return (x * y); }
int Calculator::divide(int x, int y) const
{
	if (y == 0)
	{
		throw std::runtime_error("Error: Division by zero is NOT allowed!");
	}
	else
		return (x / y);
}

int Calculator::module(int x, int y) const
{
	if (y == 0)
	{
		throw std::runtime_error("Error: Division by zero is NOT allowed!");
	}
	else
		return (x % y);
}