#pragma once

template <class Type>
class Calculator
{
public:
	Type add(Type x, Type y) const;
	Type minus(Type x, Type y) const;
	Type multiple(Type x, Type y) const;
	Type divide(Type x, Type y) const;
	Type module(Type x, Type y) const;
};

