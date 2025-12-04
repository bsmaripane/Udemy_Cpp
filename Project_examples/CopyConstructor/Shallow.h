#pragma once
#ifndef SHALLOW_H
#define SHALLOW_H

#include <iostream>

class Shallow
{
private:
	int* data;

public:
	Shallow(int d);
	Shallow(const Shallow& source);
	~Shallow();

	setDataValue(int d);
	getDataValue() const;
};
#endif