#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

class Calculator
{
public:
	int add(int x, int y) const;
	int minus(int x, int y) const;
	int multiple(int x, int y) const;
	int divide(int x, int y) const;
	int module(int x, int y) const;
};
#endif