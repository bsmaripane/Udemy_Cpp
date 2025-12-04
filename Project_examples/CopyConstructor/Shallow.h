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

	void setDataValue(int d);
	int getDataValue() const;
	int* getDataAdddress() const;
};
#endif